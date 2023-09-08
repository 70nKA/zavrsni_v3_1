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

#include "proc/p32mz2048efm144.h"
#include "driver/eth/drv_eth_hwlib.h"
#include "driver/drv_eth_definitions.h"
#include "drv_phy_hwlib.h"

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

void DRV_PHYCON_wait_WhileBusy( void )
{
    while (EMAC1MIND & EMAC1MIND_MIIMBUSY);
}

void DRV_PHYCON_clear_ManagementAddressRegister( void )
{
    EMAC1MADRCLR = 0xFFFF;
}

void DRV_PHYCON_set_ManagementAddressRegister_PhyAddress( uint16_t val )
{
    EMAC1MADRSET = val << 8;
}

void DRV_PHYCON_set_ManagementAddressRegister_RegAddress( uint16_t val )
{
    EMAC1MADRSET = val;
}

void DRV_PHYCON_set_ManagementWriteDataRegister( uint16_t val )
{
    EMAC1MWTDCLR = 0xFFFF;
    EMAC1MWTDSET = val;
}

void DRV_PHYCON_set_ManagementCommandRegister_Read( void )
{
    EMAC1MCMD = 0x1;
}

void DRV_PHYCON_clear_ManagementCommandRegister( void )
{
    EMAC1MCMDCLR = 0xF;
}

volatile uint16_t DRV_PHYCON_read_ManagementWriteDataRegister_Message( void )
{
    volatile uint16_t msg = (uint16_t)EMAC1MRDD;
    
    return msg;
}

/* *****************************************************************************
 End of File
 */
