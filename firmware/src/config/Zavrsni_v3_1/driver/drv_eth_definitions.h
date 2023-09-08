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

#ifndef _DRV_ETH_DEFINITIONS_H    /* Guard against multiple inclusion */
#define _DRV_ETH_DEFINITIONS_H


/* ************************************************************************** */
/* ************************************************************************** */
/* Section: Included Files                                                    */
/* ************************************************************************** */
/* ************************************************************************** */

/* This section lists the other files that are included in this file.
 */

/* TODO:  Include other files here if needed. */

#include "drv_eth_definitions.h"

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

#define		IEC4_ETHCON		0x2000000
#define		IFS4_ETHCON		0x2000000
    
//<editor-fold defaultstate="collapsed" desc="Ethernet register masks">
//ETHERNET CONTROLER SPECIAL FUNCTION REGISTERS MASKS

//<editor-fold defaultstate="collapsed" desc="ETHCON1: Ethernet Controller Control 1 Register">

#define 	ETH_CON1_PTV		0xFF000000
#define 	ETH_CON1_ON         0x8000
#define 	ETH_CON1_SIDL		0x2000
#define 	ETH_CON1_TXRTS		0x200
#define 	ETH_CON1_RXEN		0x100
#define 	ETH_CON1_AUTOFC		0x80
#define 	ETH_CON1_MANFC		0x10
#define 	ETH_CON1_BUDCDEC	0x1

//</editor-fold>

//<editor-fold defaultstate="collapsed" desc="ETHCON2: Ethernet Controller Control 2 Register">

#define 	ETH_CON2_RXBUFSZ	0x7F0

//</editor-fold>

//<editor-fold defaultstate="collapsed" desc="ETHTXST/ETHRXST: Ethernet Controller TX Packet Descriptor Start Address Register/Ethernet Controller RX Packet Descriptor Start Address Register">

#define		ETHxXST_STADDR	0xFFFFFFFC

//</editor-fold>

//<editor-fold defaultstate="collapsed" desc="ETHRXFC: Ethernet Controller Receive Filter Configuration Register">

#define		ETHRXFC_HTEM		0x8000	
#define		ETHRXFC_HPEM		0x4000
#define		ETHRXFC_NOTPM		0x1000
#define		ETHRXFC_PMMODE		0xF00
#define		ETHRXFC_CRCERREN	0x80	
#define		ETHRXFC_CRCOKEN		0x40
#define		ETHRXFC_RUNTERREN	0x20
#define		ETHRXFC_RUNTEN		0x10
#define		ETHRXFC_UCEN		0x8
#define		ETHRXFC_NOTMEEN		0x4
#define		ETHRXFC_MCEN		0x2
#define		ETHRXFC_BCEN		0x1

//</editor-fold>

//<editor-fold defaultstate="collapsed" desc="ETHRXWM: Ethernet Controller Receive Watermarks Register">

#define		ETHRXWM_RXEWM		0xFF00FF

//</editor-fold>

//<editor-fold defaultstate="collapsed" desc="ETHIEN: Ethernet Controller Interrupt Enable Register">

#define		ETHIEN_TXBUSEIE		0x4000
#define		ETHIEN_RXBUSEIE		0x2000
#define		ETHIEN_EWMARKIE		0x200
#define		ETHIEN_FWMARKIE		0x100
#define		ETHIEN_RXDONEIE		0x80
#define		ETHIEN_PKTPENDIE	0x40
#define		ETHIEN_RXACTIE		0x20
#define		ETHIEN_TXDONEIE		0x8
#define		ETHIEN_TXABORTIE	0x4
#define		ETHIEN_RXBUFNAIE	0x2
#define		ETHIEN_RXOVFLWIE	0x1

//</editor-fold>

//<editor-fold defaultstate="collapsed" desc="ETHIRQ: Ethernet Controller Interrupt Request Register">

#define		ETHIRQ_TXBUSE		0x4000
#define		ETHIRQ_RXBUSE		0x2000
#define		ETHIRQ_EWMARK		0x200
#define		ETHIRQ_FWMARK		0x100
#define		ETHIRQ_RXDONE		0x80
#define		ETHIRQ_PKTPEND		0x40
#define		ETHIRQ_RXACT		0x20
#define		ETHIRQ_TXDONE		0x8
#define		ETHIRQ_TXABORT		0x4
#define		ETHIRQ_RXBUFNA		0x2
#define		ETHIRQ_RXOVFLW		0x1

//</editor-fold>

//<editor-fold defaultstate="collapsed" desc="ETHSTAT: Ethernet Controller Status Register">

#define		ETHSTAT_BUFCNT		0xFF0000
#define		ETHSTAT_ETHBUSY		0x80
#define		ETHSTAT_TXBUSY		0x40
#define		ETHSTAT_RXBUSY		0x20

//</editor-fold>

//</editor-fold>
    
//<editor-fold defaultstate="collapsed" desc="MAC register masks">

//<editor-fold defaultstate="collapsed" desc="EMAC1CFG1: Ethernet Controller MAC Configuration 1 Register">

#define		EMAC1CFG1_SOFTRESET	0x8000
#define		EMAC1CFG1_SIMRESET	0x4000
#define		EMAC1CFG1_RESETRMCS	0x800
#define		EMAC1CFG1_RESETRFUN	0x400
#define		EMAC1CFG1_RESETTMCS	0x200
#define		EMAC1CFG1_RESETTFUN	0x100
#define		EMAC1CFG1_LOOPBACK	0x10
#define		EMAC1CFG1_TXPAUSE	0x8
#define		EMAC1CFG1_RXPAUSE	0x4
#define		EMAC1CFG1_PASSALL	0x2
#define		EMAC1CFG1_RXENABLE	0x1

//</editor-fold>

//<editor-fold defaultstate="collapsed" desc="EMAC1CFG2: Ethernet Controller MAC Configuration 2 Register">

#define		EMAC1CFG2_EXCESSDFR	0x4000
#define		EMAC1CFG2_BPNOBKOFF	0x2000
#define		EMAC1CFG2_NOBKOFF	0x1000
#define		EMAC1CFG2_LONGPRE	0x200
#define		EMAC1CFG2_PUREPRE	0x100
#define		EMAC1CFG2_AUTOPAD	0x80
#define		EMAC1CFG2_VLANPAD	0x40
#define		EMAC1CFG2_PADENABLE	0x20
#define		EMAC1CFG2_CRCENABLE	0x10
#define		EMAC1CFG2_DELAYCRC	0x8
#define		EMAC1CFG2_HUGEFRM	0x4
#define		EMAC1CFG2_LENGTHCK	0x2
#define		EMAC1CFG2_FULLDPLX	0x1

//</editor-fold>

//<editor-fold defaultstate="collapsed" desc="EMAC1IPGT: Ethernet Controller MAC Back-to-Back Interpacket Gap Register">

#define		EMAC1IPGT_NB2BIPKTGP1	0x7F00
#define		EMAC1IPGT_NB2BIPKTGP2	0x7F

//</editor-fold>

//<editor-fold defaultstate="collapsed" desc="EMAC1CLRT: Ethernet Controller MAC Collision Window/Retry Limit Register">

#define		EMAC1CLRT_CWINDOW	0x3F00
#define		EMAC1CLRT_RETX		0xF

//</editor-fold>

//<editor-fold defaultstate="collapsed" desc="EMAC1SUPP: Ethernet Controller MAC PHY Support Register">

#define		EMAC1SUPP_RESETRMII	0x800
#define		EMAC1SUPP_SPEEDRMII	0x100

//</editor-fold>

//<editor-fold defaultstate="collapsed" desc="EMAC1TEST: Ethernet Controller MAC Test Register">

#define		EMAC1TEST_TESTBP	0x4
#define		EMAC1TEST_TESTPAUSE	0x2
#define		EMAC1TEST_SHRTQNTA	0x1

//</editor-fold>

//<editor-fold defaultstate="collapsed" desc="EMAC1MCFG: Ethernet Controller MAC MII Management Configuration Register">

#define		EMAC1MCFG_RESETMGMT	0x8000
#define		EMAC1MCFG_CLKSEL	0x3C
#define		EMAC1MCFG_NOPRE		0x2
#define		EMAC1MCFG_SCANINC	0x1

//</editor-fold>

//<editor-fold defaultstate="collapsed" desc="EMAC1MCMD: Ethernet Controller MAC MII Management Command Register">

#define		EMAC1MCMD_SCAN		0x2
#define		EMAC1MCMD_READ		0x1

//</editor-fold>

//<editor-fold defaultstate="collapsed" desc="EMAC1MADR: Ethernet Controller MAC MII Management Address Register">

#define		EMAC1MADR_PHYADDR	0x1F00
#define		EMAC1MADR_REGADDR	0x1F

//</editor-fold>

//<editor-fold defaultstate="collapsed" desc="EMAC1MIND: Ethernet Controller MAC MII Management Indicators Register">

#define		EMAC1MIND_LINKFAIL	0x8
#define		EMAC1MIND_NOTVALID	0x4
#define		EMAC1MIND_SCAN		0x2
#define		EMAC1MIND_MIIMBUSY	0x1

//</editor-fold>
//</editor-fold>

    /* Provide C++ Compatibility */
#ifdef __cplusplus
}
#endif

#endif /* _DRV_ETH_DEFINITIONS_H */

/* *****************************************************************************
 End of File
 */
