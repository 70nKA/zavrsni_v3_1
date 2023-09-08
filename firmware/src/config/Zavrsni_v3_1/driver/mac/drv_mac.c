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

#include "driver/drv_eth_definitions.h"
#include "drv_mac_hwlib.h"
#include "drv_mac.h"
#include "driver/phy/drv_phy.h"

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

void MACCON_Initialize( void )
{
/*
 * a) Reset the MAC using the SOFTRESET bit (EMAC1CFG1<15>), or 
 *    individually reset the modules by setting the Reset MCS/RX bit, 
 *    RESETRMCS (EMAC1CFG1<11), the Reset RX Function bit, RESETRFUN 
 *    (EMAC1CFG1<10>), the Reset MCS/TX bit, RESETTMCS (EMAC1CFG1<9>), 
 *    and the Reset TX Function bit, RESETTFUN (EMAC1CFG1<8>).
 */
    DRV_MACCON_reset_MAC();

/*
 * b) Use the Configuration bit setting, FETHIO (DEVCFG3<25>), to detect the 
 *    alternate or default I/O configuration. Refer to Section 32. 
 *    ?Configuration? (DS60001124) for more information.
 * 
 *    PIC32MZ2048EFM144 does not have alternate MII/RMII I/O configuration
 */

/*
 * c) Use the Configuration bit setting, FMIIEN (DEVCFG3<24>), to detect 
 *    MII/RMII operation mode.
 * 
 *    The bit is set to OFF => RMII operation mode
 */

/*
 * d) Initialize as digital, all of the pins used by the MAC PHY interface 
 *    (generally, only those pins that have shared analog functionality need 
 *    to be configured).
 * 
 *    Automatically digitalized during pin configuration
 */
 
/*
 * e) Initialize the MIIM interface:
 */
    
    /*
     * If the RMII operation is selected, Reset the RMII module by using the
       RESETRMII bit (EMAC1SUPP<11>) and set proper speed in the SPEEDRMII bit
       (EMAC1SUPP<8>).
     */  
    DRV_MACCON_reset_RMII_module();
    DRV_MACCON_set_RMII_speed(RMII_SPEED_10);
    
/* ************************************************************************** */
/* 3. PHY Initialization:                                                     */
/* ************************************************************************** */
    PHYMOD_Initialize();

/*
 *  a) Select the MAC TX Flow Control bit, TXPAUSE (EMAC1CFG1<3>)
 */
    DRV_MACCON_Disable_Rx();
    DRV_MACCON_Enable_TxPauseFrame();

/*
 * b) Select the desired automatic padding and CRC capabilities, enabling of 
 *    the Huge frames, and the Duplex type in the EMAC1CFG2 register
 */
    DRV_MACCON_Set_ConfigurationRegister2 (EMAC1CFG2_BPNOBKOFF | 
        EMAC1CFG2_PUREPRE | EMAC1CFG2_AUTOPAD | EMAC1CFG2_PADENABLE | 
        EMAC1CFG2_CRCENABLE | EMAC1CFG2_FULLDPLX);

/*
 * c) Program the EMAC1IPGT register with the back-to-back inter-packet gap.
 * 
 *    NOTE: Set to recommended value
 */
    DRV_MACCON_Set_BackToBackInterPacketGap();

/*
 * d) Use the Ethernet Controller EMAC1IPGR register, for setting the 
 *    non-back-to-back inter-packet gap.
 * 
 *    NOTE: Set to recommended value
 */
    DRV_MACCON_Set_NonBackToBackInterPacketGap();

/*
 * e) Set the collision window and the maximum number of retransmissions in 
 *    the EMAC1CLRT register.
 * 
 *    NOTE: Set to recommended value
 */
    DRV_MACCON_Set_CollisionWindow_and_MaxNumberOfRetransmissions();

/*
 * f) Set the maximum frame length in the EMAC1MAXF register
 * 
 *    NOTE: Set to maximum possible value defined by Ethernet standard
 */
    DRV_MACCON_Set_MaxFrameLength();
}

/* *****************************************************************************
 End of File
 */
