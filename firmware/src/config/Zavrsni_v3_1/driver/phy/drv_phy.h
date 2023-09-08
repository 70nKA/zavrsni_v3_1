/* ************************************************************************** */
/** Descriptive File Name

  @Company
    Company Name

  @File Name
    filename.h

  @Summary
    Brief description of the file.

  @Description
    Describe the purpose of this file.
 */
/* ************************************************************************** */

#ifndef _DRV_PHY_H    /* Guard against multiple inclusion */
#define _DRV_PHY_H


/* ************************************************************************** */
/* ************************************************************************** */
/* Section: Included Files                                                    */
/* ************************************************************************** */
/* ************************************************************************** */

/* This section lists the other files that are included in this file.
 */

/* TODO:  Include other files here if needed. */

#include <stdint.h>

/* Provide C++ Compatibility */
#ifdef __cplusplus
extern "C" {
#endif


    /* ************************************************************************** */
    /* ************************************************************************** */
    /* Section: Constants                                                         */
    /* ************************************************************************** */
    /* ************************************************************************** */

    /*  A brief description of a section can be given directly below the section
        banner.
     */

#define		NPHYREG	22

/* PHY ADDRES:
 *     Hardware configured as 0
 */
#define PHY_ADDRESS 0

#define 	PDRN0		0		// BASIC CONTROL REGISTER
#define 	PDRN1		1		// BASIC STATUS REGISTER
#define 	PDRN2		2		// PHY IDENTIFIER 1 REGISTER
#define 	PDRN3		3		// PHY IDENTIFIER 2 REGISTER
#define 	PDRN4		4		// AUTO NEGOTIATION ADVERTISEMENT REGISTER
#define 	PDRN5		5		// AUTO NEGOTIATION LINK PARTNER ABILITY REGISTER
#define 	PDRN6		6		// AUTO NEGOTIATION EXPANSION REGISTER
#define 	PDRN7		7		// AUTO NEGOTIATION NEXT PAGE TX REGISTER
#define 	PDRN8		8		// AUTO NEGOTIATION NEXT PAGE RX REGISTER
#define 	PDRN13		9		// MMD ACCESS CONTROL REGISTER
#define 	PDRN14		10		// MMD ACCESS ADDRESS/DATA REGISTER
#define 	PDRN16		11		// EDPD NLP/CROSSOVER TIME/EEE CONFIGURATION REGISTER
#define 	PDRN17		12		// MODE CONTROL/STATUS REGISTER
#define 	PDRN18		13		// SPECIAL MODES REGISTER
#define 	PDRN24		14		// TDR PATTERNS/DELAY CONTROL REGISTER
#define 	PDRN25		15		// TDR CONTROL/STATUS REGISTER
#define 	PDRN26		16		// SYMBOL ERROR COUNTER REGISTER - RO
#define 	PDRN27		17		// SPECIAL CONTROL/STATUS INDICATIONS REGISTER
#define 	PDRN28		18		// CABLE LENGTH REGISTER
#define 	PDRN29		19		// INTERRUPT SOURCE FLAG REGISTER
#define 	PDRN30		20		// INTERRUPT MASK REGISTER
#define 	PDRN31		21		// PHY SPECIAL CONTROL/STATUS REGISTER

    /* ************************************************************************** */
    /** Descriptive Constant Name

      @Summary
        Brief one-line summary of the constant.
    
      @Description
        Full description, explaining the purpose and usage of the constant.
        <p>
        Additional description in consecutive paragraphs separated by HTML 
        paragraph breaks, as necessary.
        <p>
        Type "JavaDoc" in the "How Do I?" IDE toolbar for more information on tags.
    
      @Remarks
        Any additional remarks
     */


    // *****************************************************************************
    // *****************************************************************************
    // Section: Data Types
    // *****************************************************************************
    // *****************************************************************************

    /*  A brief description of a section can be given directly below the section
        banner.
     */

typedef volatile struct
{
    volatile uint16_t reg[NPHYREG];
}PHY_DEVICE;

    // *****************************************************************************

    /** Descriptive Data Type Name

      @Summary
        Brief one-line summary of the data type.
    
      @Description
        Full description, explaining the purpose and usage of the data type.
        <p>
        Additional description in consecutive paragraphs separated by HTML 
        paragraph breaks, as necessary.
        <p>
        Type "JavaDoc" in the "How Do I?" IDE toolbar for more information on tags.

      @Remarks
        Any additional remarks
        <p>
        Describe enumeration elements and structure and union members above each 
        element or member.
     */


    // *****************************************************************************
    // *****************************************************************************
    // Section: Interface Functions
    // *****************************************************************************
    // *****************************************************************************

    /*  A brief description of a section can be given directly below the section
        banner.
     */

    // *****************************************************************************
    /**
      @Function
        int ExampleFunctionName ( int param1, int param2 ) 

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

    void PHYMOD_Initialize( void );

    /* Provide C++ Compatibility */
#ifdef __cplusplus
}
#endif

#endif /* _DRV_PHY_H */

/* *****************************************************************************
 End of File
 */
