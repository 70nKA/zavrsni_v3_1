/* ************************************************************************** */
/** Descriptive File Name

  @Company
    Company Name

  @File Name
    filename.c

  @Summary
    Brief description of the file.

  @Description
    Describe the purpose of this file.
 */
/* ************************************************************************** */

/* ************************************************************************** */
/* ************************************************************************** */
/* Section: Included Files                                                    */
/* ************************************************************************** */
/* ************************************************************************** */

/* This section lists the other files that are included in this file.
 */

/* TODO:  Include other files here if needed. */

#include "driver/eth/drv_eth_hwlib.h"
#include "drv_phy_hwlib.h"
#include "drv_phy.h"

/* ************************************************************************** */
/* ************************************************************************** */
/* Section: File Scope or Global Data                                         */
/* ************************************************************************** */
/* ************************************************************************** */

/*  A brief description of a section can be given directly below the section
    banner.
 */

/* ************************************************************************** */
/** Descriptive Data Item Name

  @Summary
    Brief one-line summary of the data item.
    
  @Description
    Full description, explaining the purpose and usage of data item.
    <p>
    Additional description in consecutive paragraphs separated by HTML 
    paragraph breaks, as necessary.
    <p>
    Type "JavaDoc" in the "How Do I?" IDE toolbar for more information on tags.
    
  @Remarks
    Any additional remarks
 */
volatile PHY_DEVICE phyDev;


/* ************************************************************************** */
/* ************************************************************************** */
// Section: Local Functions                                                   */
/* ************************************************************************** */
/* ************************************************************************** */

/*  A brief description of a section can be given directly below the section
    banner.
 */

/* ************************************************************************** */

/** 
  @Function
    int ExampleLocalFunctionName ( int param1, int param2 ) 

  @Summary
    Brief one-line description of the function.

  @Description
    Full description, explaining the purpose and usage of the function.
    <p>
    Additional description in consecutive paragraphs separated by HTML 
    paragraph breaks, as necessary.
    <p>
    Type "JavaDoc" in the "How Do I?" IDE toolbar for more information on tags.

  @Precondition
    List and describe any required preconditions. If there are no preconditions,
    enter "None."

  @Parameters
    @param param1 Describe the first parameter to the function.
    
    @param param2 Describe the second parameter to the function.

  @Returns
    List (if feasible) and describe the return values of the function.
    <ul>
      <li>1   Indicates an error occurred
      <li>0   Indicates an error did not occur
    </ul>

  @Remarks
    Describe any special behavior not described above.
    <p>
    Any additional remarks.

  @Example
    @code
    if(ExampleFunctionName(1, 2) == 0)
    {
        return 3;
    }
 */
static uint16_t getPhyId(uint16_t num);

static void PHYPREG_read(uint16_t phyaddr, uint16_t phyreg);
static void PHYPREG_write(uint16_t phyaddr, uint16_t phyreg, uint16_t msg);

static void DRV_PHYCON_wait_WhilePhyBusy( void );
static void DRV_PHYCON_AutoNegotiationReslove( void );

static void PHYPREG_Initialize( void );

static uint16_t getPhyId(uint16_t num)
{
    switch(num) {
        case PDRN0: return 0;
        case PDRN1: return 1;
        case PDRN2: return 2;
        case PDRN3: return 3;
        case PDRN4: return 4;
        case PDRN5: return 5;
        case PDRN6: return 6;
        case PDRN7: return 7;
        case PDRN8: return 8;
        case PDRN13: return 9;
        case PDRN14: return 10;
        case PDRN16: return 16;
        case PDRN17: return 17;
        case PDRN18: return 18;
        case PDRN24: return 24;
        case PDRN25: return 25;
        case PDRN26: return 26;
        case PDRN27: return 27;
        case PDRN28: return 28;
        case PDRN29: return 29;
        case PDRN30: return 30;
        case PDRN31: return 31;
        default:    return -1;
    }
}

static void PHYPREG_read(uint16_t phyaddr, uint16_t phyreg)
{
    /*
     * Wait in case of a previous operation
     */
    DRV_PHYCON_wait_WhileBusy();
    
    /*
     * Clear Management Address Register
     */
    DRV_PHYCON_clear_ManagementAddressRegister();
    
    /*
     * Set PHY device address we are writing to in Management Address 
     * Register
     */
    DRV_PHYCON_set_ManagementAddressRegister_PhyAddress( phyaddr );
    
    /*
     * Set PHY register address we are reading from in Management Address 
     * Register
     */
    DRV_PHYCON_set_ManagementAddressRegister_RegAddress( getPhyId( phyreg ) );
    
    /*
     * Activate Management Command Register read action
     */
    DRV_PHYCON_set_ManagementCommandRegister_Read ();

    /*
     * MIIMBUSY will be set after three SYSCLK periods
     */
    __asm__ __volatile__("nop; nop; nop;");

    /*
     * Wait for the transaction to finish by pulling MIIM_BUSY bit
     */
    DRV_PHYCON_wait_WhileBusy ();

    /*
     * Deactivate Management Command Register read action
     */
    DRV_PHYCON_clear_ManagementCommandRegister();
    
    for(int i = 0; i <10000; i++);
    phyDev.reg[phyreg] = DRV_PHYCON_read_ManagementWriteDataRegister_Message();
}

static void PHYPREG_write(uint16_t phyaddr, uint16_t phyreg, uint16_t msg) {
    /*
     * Wait in case of a previous operation
     */
    DRV_PHYCON_wait_WhileBusy();
    
    /*
     * Clear Management Address Register
     */
    DRV_PHYCON_clear_ManagementAddressRegister();
    
    /*
     * Set PHY device address we are writing to in Management Address 
     * Register
     */
    DRV_PHYCON_set_ManagementAddressRegister_PhyAddress( phyaddr );
    
    /*
     * Set PHY register address we are writing to in Management Address 
     * Register
     */
    DRV_PHYCON_set_ManagementAddressRegister_RegAddress( getPhyId( phyreg ) );
    
    /*
     * Write message to be written into Management Write Data Register
     * NOTE: automatically starts the write transaction
     */
    DRV_PHYCON_set_ManagementWriteDataRegister( msg );                                    //Write the 16 bits of data to be written into the EMAC1MWTD register 
    
    /*
     * MIIMBUSY will be set after three SYSCLK periods
     */
    __asm__ __volatile__("nop; nop; nop;");
    
    /*
     * Wait for the transaction to finish by pulling MIIM_BUSY bit
     */
    DRV_PHYCON_wait_WhileBusy();
}

static void DRV_PHYCON_wait_WhilePhyBusy( void )
{
    while(phyDev.reg[PDRN0]&PHY_BCON_SOFT_RESET_MASK)
        PHYPREG_read(PHY_ADDRESS, (uint16_t)PDRN0);
}

static void DRV_PHYCON_AutoNegotiationReslove( void )
{
    PHYPREG_read(PHY_ADDRESS, (uint16_t)PDRN29);
    while(!(phyDev.reg[PDRN29]&(PHY_INT1_MASK|PHY_INT6_MASK)))
        PHYPREG_read(PHY_ADDRESS, (uint16_t)PDRN29);
    phyDev.reg[PDRN29] &=  ~(PHY_INT1_MASK|PHY_INT6_MASK);
}

static void PHYPREG_Initialize( void )
{
    for(uint32_t i = 0; i < NPHYREG; i++)
        phyDev.reg[i] = 0;
}

/* ************************************************************************** */
/* ************************************************************************** */
// Section: Interface Functions                                               */
/* ************************************************************************** */
/* ************************************************************************** */

/*  A brief description of a section can be given directly below the section
    banner.
 */

// *****************************************************************************

/** 
  @Function
    int ExampleInterfaceFunctionName ( int param1, int param2 ) 

  @Summary
    Brief one-line description of the function.

  @Remarks
    Refer to the example_file.h interface header for function usage details.
 */

void PHYMOD_Initialize( void )
{
    /*
     * Initialization of the PHY data structure
     */
    PHYPREG_Initialize();
    
    /*
     * Turn on Ethernet controller to enable RMII communication
     */
    DRV_ETHCON_Enable();
    
/*
 * a) Reset the PHY (use Control Register 0).
 */
    PHYPREG_write(PHY_ADDRESS, (uint16_t)PDRN0, (uint16_t)PHY_BCON_SOFT_RESET_MASK);
    PHYPREG_read(PHY_ADDRESS, (uint16_t)PDRN0);
    DRV_PHYCON_wait_WhilePhyBusy();
/*
 * b) Set the MII/RMII operation mode. This requires access to a 
 *    vendor-specific control register.
 * 
 *    This is hardware configured to be RMII
 */
    PHYPREG_read(PHY_ADDRESS, (uint16_t)PDRN18);
 
/*
 * c) Set the normal, swapped, or automatic (preferred) MDIX. This requires 
 *    access to a vendor-specific control register.
 * 
 *    Automatically set to automatic MDIX
 */
    PHYPREG_read(PHY_ADDRESS, (uint16_t)PDRN27);

/*
 * d) Check the PHY capabilities by investigating the Status Register 1.
 */
    PHYPREG_read(PHY_ADDRESS, (uint16_t)PDRN1);

/*
 * e) The automatic negotiation should be enabled (preferably), if the PHY supports 
 *    it. Advertise the supported capabilities using the PHY Register 4 
 *    ?Auto-negotiation Advertisement Register?. Start the negotiation (Control 
 *    Register 0) and wait for the negotiation to complete. Once the negotiation is 
 *    complete, get the link partner capabilities from the PHY Register 5 
 *    ?Auto-negotiation Link Partner Ability Register? and negotiation result from 
 *    the vendor-specific register. 
 */
    PHYPREG_read(PHY_ADDRESS, (uint16_t)PDRN4);
    PHYPREG_write(PHY_ADDRESS, (uint16_t)PDRN0, (uint16_t)PHY_BCON_AUTO_NEGOTIATION_ENABLE_MASK);
    PHYPREG_read(PHY_ADDRESS, (uint16_t)PDRN0);
    DRV_PHYCON_AutoNegotiationReslove();
    PHYPREG_read(PHY_ADDRESS, (uint16_t)PDRN5);
}

/* *****************************************************************************
 End of File
 */
