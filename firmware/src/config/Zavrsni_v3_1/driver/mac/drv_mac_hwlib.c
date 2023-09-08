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
#include "drv_mac_hwlib.h"
#include "driver/drv_eth_definitions.h"

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

void DRV_MACCON_reset_MAC( void )
{
    EMAC1CFG1CLR = EMAC1CFG1_SOFTRESET;
}

void DRV_MACCON_reset_RMII_module( void )
{
    EMAC1SUPPSET = EMAC1SUPP_RESETRMII;
    __asm__ __volatile__("nop;nop;nop");
    EMAC1SUPPCLR = EMAC1SUPP_RESETRMII;
}

void DRV_MACCON_set_RMII_speed( RMII_SPEED_SEL val )
{
    EMAC1SUPP = EMAC1SUPP|(EMAC1SUPP_SPEEDRMII&val);
}

void DRV_MACCON_Disable_Rx ( void ) 
{
    EMAC1CFG1 = EMAC1CFG1&(~EMAC1CFG1_RXENABLE);
}

void DRV_MACCON_Enable_TxPauseFrame( void )
{
    EMAC1CFG1 = EMAC1CFG1|EMAC1CFG1_TXPAUSE;
}

void DRV_MACCON_Set_ConfigurationRegister2( uint32_t val )
{
    EMAC1CFG2 = val;
}

void DRV_MACCON_Set_BackToBackInterPacketGap( void )
{
    EMAC1IPGT = 0x15;
}

void DRV_MACCON_Set_NonBackToBackInterPacketGap( void )
{
    EMAC1IPGR = 0xC12;
}

void DRV_MACCON_Set_CollisionWindow_and_MaxNumberOfRetransmissions( void )
{
    EMAC1CLRT = 0x370F;
}

void DRV_MACCON_Set_MaxFrameLength( void )
{
    EMAC1MAXF = 0x05EE;
}
/* *****************************************************************************
 End of File
 */
