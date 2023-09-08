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

#include "driver/mac/drv_mac.h"
#include "drv_eth_hwlib.h"
#include "drv_eth.h"
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

#define nTxDescriptors 3
#define BUFF_SIZE  27
#define ALIGNED_BUFF_SIZE CACHE_ALIGNED_SIZE_GET(BUFF_SIZE)

__attribute__((coherent)) __attribute__((aligned(CACHE_LINE_SIZE)))
DRV_ETHCON_HW_DCPT ethDcpt[nTxDescriptors] = { 0 };
__attribute__((aligned(CACHE_LINE_SIZE)))
uint8_t buff[ALIGNED_BUFF_SIZE] = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
                                   0x68, 0x27, 0x19, 0xd3, 0x50, 0x40,
                                   0x00, 0xD,
                                   0x48, 0x65, 0x6C, 0x6C, 0x6F, 0x20, 
                                   0x77, 0x6F, 0x72, 0x6C, 0x64, 0x21,
                                   0x00};

/* ************************************************************************** */
/* ************************************************************************** */
// Section: Local Functions                                                   */
/* ************************************************************************** */
/* ************************************************************************** */

/*  A brief description of a section can be given directly below the section
    banner.
 */

static void invalidateCacheLines(uintptr_t address, size_t size);
static void invalidateEthDcptArrayCache(DRV_ETHCON_HW_DCPT* ethDcptArray,
                                        size_t numElements);
void invalidateUint8ArrayCache(uint8_t* dataArray, size_t numElements);
static void TXDCPT_Initialite();

static void invalidateCacheLines(uintptr_t address, size_t size)
{
    // Calculate the aligned start and end addresses within cache lines
    uintptr_t alignedStartAddress = address & ~(CACHE_LINE_SIZE - 1);
    uintptr_t alignedEndAddress = (address + size - 1) & ~(CACHE_LINE_SIZE - 1);

    // Invalidate cache lines for the array
    for (uintptr_t addr = alignedStartAddress; addr <= alignedEndAddress;
        addr += CACHE_LINE_SIZE)
    {
        __asm__ __volatile__("cache 0x15, 0(%0)" ::"r"(addr));
    }

    // Synchronize memory operations
    __asm__ __volatile__("sync");
}

static void invalidateEthDcptArrayCache(DRV_ETHCON_HW_DCPT* ethDcptArray,
                                        size_t numElements)
{
    size_t size = sizeof(DRV_ETHCON_HW_DCPT);
    uintptr_t arrayAddress = (uintptr_t)ethDcptArray;
    size_t arraySize = size * numElements;

    // Calculate the aligned start and end addresses within cache lines
    uintptr_t alignedStartAddress = arrayAddress & ~(CACHE_LINE_SIZE - 1);
    uintptr_t alignedEndAddress = (arrayAddress + arraySize - 1) & 
            ~(CACHE_LINE_SIZE - 1);

    // Invalidate cache lines for the array
    for (uintptr_t address = alignedStartAddress; address <= 
            alignedEndAddress; address += CACHE_LINE_SIZE)
    {
        __asm__ __volatile__("cache 0x15, 0(%0)" ::"r"(address));
    }

    // Synchronize memory operations
    __asm__ __volatile__("sync");
}

void invalidateUint8ArrayCache(uint8_t* dataArray, size_t numElements)
{
    size_t size = sizeof(uint8_t);
    uintptr_t arrayAddress = (uintptr_t)dataArray;
    size_t arraySize = size * numElements;

    invalidateCacheLines(arrayAddress, arraySize);
}

static void TXDCPT_Initialite()
{
    invalidateEthDcptArrayCache(ethDcpt, nTxDescriptors);
    
    for(int i = 0; i < nTxDescriptors; i++) {
        ethDcpt[i].hdr.EOWN = 0;
        ethDcpt[i].hdr.NPV = 1;
        
        if(i < nTxDescriptors - 1)
            ethDcpt[i].next_ed = KVA_TO_PA(&ethDcpt[i + 1]);
        else
            ethDcpt[i].next_ed = KVA_TO_PA(&ethDcpt[0]);
    }
    
    for(int i = 0; i < 10; i++);
}

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

/* ************************************************************************** */
/* 1. Ethernet Controller Initialization:                                     */
/* ************************************************************************** */

void ETHCON_Initialize( void )
{
/*
 * a) Disable Ethernet interrupts in the EVIC register by clearing the 
 *    Ethernet Controller IE bit, ETHIE (IEC1<28>). 
 */
    DRV_ETHCON_Disable_Interrupt();
/*
 *  b) Turn the Ethernet Controller off, and then clear the ON bit 
 *    (ETHCON1<15>), the RXEN bit (ETHCON1<8>), and the TXRTS bit 
 *    (ETHCON1<9>)
 */
    DRV_ETHCON_Disable ();
    DRV_ETHCON_Disable_TX();
    DRV_ETHCON_Disable_RX();

/*
 * c) Abort the Wait activity by polling the ETHBUSY bit (ETHSTAT<7>)
 */  
    DRV_ETHCON_While_Busy();

/*
 * d) Clear the Ethernet Interrupt Flag bit (ETHIF) in the Interrupts module 
 *    (IFS1<28>)
 */
    DRV_ETHCON_Clear_InterruptFlag();

/*
 * e) Disable any Ethernet Controller interrupt generation by clearing the 
 *    ETHIRQIE register
 */
    DRV_ETHCON_Set_InterruptRegister(0);

/*
 * f) Clear the TX and RX start addresses from the ETHTXST and ETHRXST 
 *    registers.
 */
    DRV_ETHCON_Clear_TX_StartAddress();
    DRV_ETHCON_Clear_RX_StartAddress();

/* ************************************************************************** */
/* 2. MAC Initialization:                                                     */
/* ************************************************************************** */
    MACCON_Initialize();

/* ************************************************************************** */
/* 5. Ethernet Controller Initialization:                                     */
/* ************************************************************************** */
 
/*
 * b) If you want to use automatic Flow Control, set the full and empty 
 *    watermarks: RXFWM<7:0> bits (ETHRXWM<23:16>) and the RXEWM<7:0> bits
 *    (ETHRXWM<7:0>).
 */
    DRV_ETHCON_Set_ReceiveWatermarksRegister(0x20000);
/*
 * c) If needed, enable the automatic Flow Control by setting the AUTOFC bit
 *    (ETHCON1<7>).
 */
    DRV_ETHCON_Enable_AutoFlowControl();

/*
 * f) Prepare a list/ring of TX descriptors for messages to be transmitted. 
 *    Update all of the fields in the TX descriptor (NPV, EOWN = 1, NEXT_ED) 
 *    (see Table 35-7). If using a list, end it with a software own descriptor 
 *    (EOWN = 0). The SOP, EOP, DATA_BUFFER_ADDRESS and BYTE_COUNT will be 
 *    updated when a specific message has to be transmitted. The 
 *    DATA_BUFFER_ADDRESS will contain the physical address of the message, 
 *    and the BYTE_COUNT contains the message size. SOP and EOP are set 
 *    depending on how many packets are needed to transmit the message.
 */
    TXDCPT_Initialite();
    
/*
 * i) Update the ETHTXST register with the physical address of the Head of 
 *    the TX descriptors list.
 */
    DRV_ETHCON_Set_TX_StartAddress(ethDcpt);
}

void ETHCON_SendBuffer()
{
    invalidateUint8ArrayCache(buff, ALIGNED_BUFF_SIZE);
    
    if(IS_KVA0(buff))
        ethDcpt[0].hdr.kv0 = 1;
    ethDcpt[0].pEDBuff = (uint8_t*)KVA_TO_PA(buff);
    ethDcpt[0].hdr.bCount = ALIGNED_BUFF_SIZE;
    ethDcpt[0].hdr.SOP = 1;
    ethDcpt[0].hdr.EOP = 1;
    ethDcpt[0].hdr.EOWN = 1;
    
    for(int i = 0; i < 100000000; i++);
    
    DRV_ETHCON_Enable_TX();
}

/* *****************************************************************************
 End of File
 */
