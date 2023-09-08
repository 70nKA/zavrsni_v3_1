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
#include "driver/drv_eth_definitions.h"
#include "drv_eth_hwlib.h"
#include "sys/kmem.h"


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

void DRV_ETHCON_Disable_Interrupt( void )
{
    IEC4 = IEC4&(~IEC4_ETHCON);
}

void DRV_ETHCON_Enable( void ) 
{
    ETHCON1 = ETHCON1|ETH_CON1_ON;
    __asm__ __volatile__("nop; nop; nop;");
}

void DRV_ETHCON_Disable( void ) 
{
    ETHCON1 = ETHCON1&(~ETH_CON1_ON);
}

void DRV_ETHCON_Disable_TX( void )
{
    ETHCON1 = ETHCON1&(~ETH_CON1_TXRTS);
}

void DRV_ETHCON_Disable_RX( void )
{
    ETHCON1 = ETHCON1&(~ETH_CON1_RXEN);
}

void DRV_ETHCON_While_Busy( void )
{
    while(ETHSTAT & ETHSTAT_ETHBUSY);
}

void DRV_ETHCON_Clear_InterruptFlag( void )
{
    IFS4 = IFS3&(~IFS4_ETHCON);
}

void DRV_ETHCON_Set_InterruptRegister( uint32_t val )
{
    ETHIRQ = val;
}

void DRV_ETHCON_Clear_TX_StartAddress( void )
{
    ETHTXST = 0x00000000;
}

void DRV_ETHCON_Clear_RX_StartAddress( void )
{
    ETHRXST = 0x00000000; 
}

void DRV_ETHCON_Set_ReceiveWatermarksRegister( uint32_t val )
{
    ETHRXWM = val;
}

void DRV_ETHCON_Enable_AutoFlowControl( void )
{
    ETHCON1 = ETHCON1|ETH_CON1_AUTOFC;
}

void DRV_ETHCON_Enable_TX( void )
{
    ETHCON1 = ETHCON1|ETH_CON1_TXRTS;
}

void DRV_ETHCON_Set_TX_StartAddress( void *txStartAddr )
{
    ETHTXST = ((uint32_t)KVA_TO_PA((unsigned long)txStartAddr));
}

/* *****************************************************************************
 End of File
 */
