#
# Generated Makefile - do not edit!
#
# Edit the Makefile in the project folder instead (../Makefile). Each target
# has a -pre and a -post target defined where you can add customized code.
#
# This makefile implements configuration specific macros and targets.


# Include project Makefile
ifeq "${IGNORE_LOCAL}" "TRUE"
# do not include local makefile. User is passing all local related variables already
else
include Makefile
# Include makefile containing local settings
ifeq "$(wildcard nbproject/Makefile-local-Zavrsni_v3_1.mk)" "nbproject/Makefile-local-Zavrsni_v3_1.mk"
include nbproject/Makefile-local-Zavrsni_v3_1.mk
endif
endif

# Environment
MKDIR=gnumkdir -p
RM=rm -f 
MV=mv 
CP=cp 

# Macros
CND_CONF=Zavrsni_v3_1
ifeq ($(TYPE_IMAGE), DEBUG_RUN)
IMAGE_TYPE=debug
OUTPUT_SUFFIX=elf
DEBUGGABLE_SUFFIX=elf
FINAL_IMAGE=dist/${CND_CONF}/${IMAGE_TYPE}/Zavrsni_v3_1.X.${IMAGE_TYPE}.${OUTPUT_SUFFIX}
else
IMAGE_TYPE=production
OUTPUT_SUFFIX=hex
DEBUGGABLE_SUFFIX=elf
FINAL_IMAGE=dist/${CND_CONF}/${IMAGE_TYPE}/Zavrsni_v3_1.X.${IMAGE_TYPE}.${OUTPUT_SUFFIX}
endif

ifeq ($(COMPARE_BUILD), true)
COMPARISON_BUILD=-mafrlcsj
else
COMPARISON_BUILD=
endif

ifdef SUB_IMAGE_ADDRESS

else
SUB_IMAGE_ADDRESS_COMMAND=
endif

# Object Directory
OBJECTDIR=build/${CND_CONF}/${IMAGE_TYPE}

# Distribution Directory
DISTDIR=dist/${CND_CONF}/${IMAGE_TYPE}

# Source Files Quoted if spaced
SOURCEFILES_QUOTED_IF_SPACED=../src/config/Zavrsni_v3_1/driver/eth/drv_eth.c ../src/config/Zavrsni_v3_1/driver/eth/drv_eth_hwlib.c ../src/config/Zavrsni_v3_1/driver/mac/drv_mac.c ../src/config/Zavrsni_v3_1/driver/mac/drv_mac_hwlib.c ../src/config/Zavrsni_v3_1/driver/phy/drv_phy.c ../src/config/Zavrsni_v3_1/driver/phy/drv_phy_hwlib.c ../src/config/Zavrsni_v3_1/peripheral/clk/plib_clk.c ../src/config/Zavrsni_v3_1/peripheral/evic/plib_evic.c ../src/config/Zavrsni_v3_1/peripheral/gpio/plib_gpio.c ../src/config/Zavrsni_v3_1/stdio/xc32_monitor.c ../src/config/Zavrsni_v3_1/initialization.c ../src/config/Zavrsni_v3_1/interrupts.c ../src/config/Zavrsni_v3_1/exceptions.c ../src/main.c

# Object Files Quoted if spaced
OBJECTFILES_QUOTED_IF_SPACED=${OBJECTDIR}/_ext/2022827829/drv_eth.o ${OBJECTDIR}/_ext/2022827829/drv_eth_hwlib.o ${OBJECTDIR}/_ext/2022820735/drv_mac.o ${OBJECTDIR}/_ext/2022820735/drv_mac_hwlib.o ${OBJECTDIR}/_ext/2022817613/drv_phy.o ${OBJECTDIR}/_ext/2022817613/drv_phy_hwlib.o ${OBJECTDIR}/_ext/625098968/plib_clk.o ${OBJECTDIR}/_ext/2096837701/plib_evic.o ${OBJECTDIR}/_ext/2096891529/plib_gpio.o ${OBJECTDIR}/_ext/811727536/xc32_monitor.o ${OBJECTDIR}/_ext/1419650538/initialization.o ${OBJECTDIR}/_ext/1419650538/interrupts.o ${OBJECTDIR}/_ext/1419650538/exceptions.o ${OBJECTDIR}/_ext/1360937237/main.o
POSSIBLE_DEPFILES=${OBJECTDIR}/_ext/2022827829/drv_eth.o.d ${OBJECTDIR}/_ext/2022827829/drv_eth_hwlib.o.d ${OBJECTDIR}/_ext/2022820735/drv_mac.o.d ${OBJECTDIR}/_ext/2022820735/drv_mac_hwlib.o.d ${OBJECTDIR}/_ext/2022817613/drv_phy.o.d ${OBJECTDIR}/_ext/2022817613/drv_phy_hwlib.o.d ${OBJECTDIR}/_ext/625098968/plib_clk.o.d ${OBJECTDIR}/_ext/2096837701/plib_evic.o.d ${OBJECTDIR}/_ext/2096891529/plib_gpio.o.d ${OBJECTDIR}/_ext/811727536/xc32_monitor.o.d ${OBJECTDIR}/_ext/1419650538/initialization.o.d ${OBJECTDIR}/_ext/1419650538/interrupts.o.d ${OBJECTDIR}/_ext/1419650538/exceptions.o.d ${OBJECTDIR}/_ext/1360937237/main.o.d

# Object Files
OBJECTFILES=${OBJECTDIR}/_ext/2022827829/drv_eth.o ${OBJECTDIR}/_ext/2022827829/drv_eth_hwlib.o ${OBJECTDIR}/_ext/2022820735/drv_mac.o ${OBJECTDIR}/_ext/2022820735/drv_mac_hwlib.o ${OBJECTDIR}/_ext/2022817613/drv_phy.o ${OBJECTDIR}/_ext/2022817613/drv_phy_hwlib.o ${OBJECTDIR}/_ext/625098968/plib_clk.o ${OBJECTDIR}/_ext/2096837701/plib_evic.o ${OBJECTDIR}/_ext/2096891529/plib_gpio.o ${OBJECTDIR}/_ext/811727536/xc32_monitor.o ${OBJECTDIR}/_ext/1419650538/initialization.o ${OBJECTDIR}/_ext/1419650538/interrupts.o ${OBJECTDIR}/_ext/1419650538/exceptions.o ${OBJECTDIR}/_ext/1360937237/main.o

# Source Files
SOURCEFILES=../src/config/Zavrsni_v3_1/driver/eth/drv_eth.c ../src/config/Zavrsni_v3_1/driver/eth/drv_eth_hwlib.c ../src/config/Zavrsni_v3_1/driver/mac/drv_mac.c ../src/config/Zavrsni_v3_1/driver/mac/drv_mac_hwlib.c ../src/config/Zavrsni_v3_1/driver/phy/drv_phy.c ../src/config/Zavrsni_v3_1/driver/phy/drv_phy_hwlib.c ../src/config/Zavrsni_v3_1/peripheral/clk/plib_clk.c ../src/config/Zavrsni_v3_1/peripheral/evic/plib_evic.c ../src/config/Zavrsni_v3_1/peripheral/gpio/plib_gpio.c ../src/config/Zavrsni_v3_1/stdio/xc32_monitor.c ../src/config/Zavrsni_v3_1/initialization.c ../src/config/Zavrsni_v3_1/interrupts.c ../src/config/Zavrsni_v3_1/exceptions.c ../src/main.c



CFLAGS=
ASFLAGS=
LDLIBSOPTIONS=

############# Tool locations ##########################################
# If you copy a project from one host to another, the path where the  #
# compiler is installed may be different.                             #
# If you open this project with MPLAB X in the new host, this         #
# makefile will be regenerated and the paths will be corrected.       #
#######################################################################
# fixDeps replaces a bunch of sed/cat/printf statements that slow down the build
FIXDEPS=fixDeps

.build-conf:  ${BUILD_SUBPROJECTS}
ifneq ($(INFORMATION_MESSAGE), )
	@echo $(INFORMATION_MESSAGE)
endif
	${MAKE}  -f nbproject/Makefile-Zavrsni_v3_1.mk dist/${CND_CONF}/${IMAGE_TYPE}/Zavrsni_v3_1.X.${IMAGE_TYPE}.${OUTPUT_SUFFIX}

MP_PROCESSOR_OPTION=32MZ2048EFM144
MP_LINKER_FILE_OPTION=,--script="..\src\config\Zavrsni_v3_1\p32MZ2048EFM144.ld"
# ------------------------------------------------------------------------------------
# Rules for buildStep: assemble
ifeq ($(TYPE_IMAGE), DEBUG_RUN)
else
endif

# ------------------------------------------------------------------------------------
# Rules for buildStep: assembleWithPreprocess
ifeq ($(TYPE_IMAGE), DEBUG_RUN)
else
endif

# ------------------------------------------------------------------------------------
# Rules for buildStep: compile
ifeq ($(TYPE_IMAGE), DEBUG_RUN)
${OBJECTDIR}/_ext/2022827829/drv_eth.o: ../src/config/Zavrsni_v3_1/driver/eth/drv_eth.c  .generated_files/flags/Zavrsni_v3_1/e7c1871bcda84fe78b8d095a24e30298e23e15df .generated_files/flags/Zavrsni_v3_1/fff71d1da6c0dd2ccd3387cc51b6c8c18586c5fd
	@${MKDIR} "${OBJECTDIR}/_ext/2022827829" 
	@${RM} ${OBJECTDIR}/_ext/2022827829/drv_eth.o.d 
	@${RM} ${OBJECTDIR}/_ext/2022827829/drv_eth.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"../src" -I"../src/config/Zavrsni_v3_1" -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/2022827829/drv_eth.o.d" -o ${OBJECTDIR}/_ext/2022827829/drv_eth.o ../src/config/Zavrsni_v3_1/driver/eth/drv_eth.c    -DXPRJ_Zavrsni_v3_1=$(CND_CONF)  -no-legacy-libc  $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/2022827829/drv_eth_hwlib.o: ../src/config/Zavrsni_v3_1/driver/eth/drv_eth_hwlib.c  .generated_files/flags/Zavrsni_v3_1/b13657bb397935ec3ba5c931fe6cf7da76f18596 .generated_files/flags/Zavrsni_v3_1/fff71d1da6c0dd2ccd3387cc51b6c8c18586c5fd
	@${MKDIR} "${OBJECTDIR}/_ext/2022827829" 
	@${RM} ${OBJECTDIR}/_ext/2022827829/drv_eth_hwlib.o.d 
	@${RM} ${OBJECTDIR}/_ext/2022827829/drv_eth_hwlib.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"../src" -I"../src/config/Zavrsni_v3_1" -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/2022827829/drv_eth_hwlib.o.d" -o ${OBJECTDIR}/_ext/2022827829/drv_eth_hwlib.o ../src/config/Zavrsni_v3_1/driver/eth/drv_eth_hwlib.c    -DXPRJ_Zavrsni_v3_1=$(CND_CONF)  -no-legacy-libc  $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/2022820735/drv_mac.o: ../src/config/Zavrsni_v3_1/driver/mac/drv_mac.c  .generated_files/flags/Zavrsni_v3_1/a2a673c73e3415ca3511f1df619e7dff9d13bd92 .generated_files/flags/Zavrsni_v3_1/fff71d1da6c0dd2ccd3387cc51b6c8c18586c5fd
	@${MKDIR} "${OBJECTDIR}/_ext/2022820735" 
	@${RM} ${OBJECTDIR}/_ext/2022820735/drv_mac.o.d 
	@${RM} ${OBJECTDIR}/_ext/2022820735/drv_mac.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"../src" -I"../src/config/Zavrsni_v3_1" -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/2022820735/drv_mac.o.d" -o ${OBJECTDIR}/_ext/2022820735/drv_mac.o ../src/config/Zavrsni_v3_1/driver/mac/drv_mac.c    -DXPRJ_Zavrsni_v3_1=$(CND_CONF)  -no-legacy-libc  $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/2022820735/drv_mac_hwlib.o: ../src/config/Zavrsni_v3_1/driver/mac/drv_mac_hwlib.c  .generated_files/flags/Zavrsni_v3_1/a790e99898fe1db2a92067483152a23ad9fc9fbb .generated_files/flags/Zavrsni_v3_1/fff71d1da6c0dd2ccd3387cc51b6c8c18586c5fd
	@${MKDIR} "${OBJECTDIR}/_ext/2022820735" 
	@${RM} ${OBJECTDIR}/_ext/2022820735/drv_mac_hwlib.o.d 
	@${RM} ${OBJECTDIR}/_ext/2022820735/drv_mac_hwlib.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"../src" -I"../src/config/Zavrsni_v3_1" -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/2022820735/drv_mac_hwlib.o.d" -o ${OBJECTDIR}/_ext/2022820735/drv_mac_hwlib.o ../src/config/Zavrsni_v3_1/driver/mac/drv_mac_hwlib.c    -DXPRJ_Zavrsni_v3_1=$(CND_CONF)  -no-legacy-libc  $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/2022817613/drv_phy.o: ../src/config/Zavrsni_v3_1/driver/phy/drv_phy.c  .generated_files/flags/Zavrsni_v3_1/2962ebe45eb2cc2edebd25a6c653b23ebd42d00d .generated_files/flags/Zavrsni_v3_1/fff71d1da6c0dd2ccd3387cc51b6c8c18586c5fd
	@${MKDIR} "${OBJECTDIR}/_ext/2022817613" 
	@${RM} ${OBJECTDIR}/_ext/2022817613/drv_phy.o.d 
	@${RM} ${OBJECTDIR}/_ext/2022817613/drv_phy.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"../src" -I"../src/config/Zavrsni_v3_1" -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/2022817613/drv_phy.o.d" -o ${OBJECTDIR}/_ext/2022817613/drv_phy.o ../src/config/Zavrsni_v3_1/driver/phy/drv_phy.c    -DXPRJ_Zavrsni_v3_1=$(CND_CONF)  -no-legacy-libc  $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/2022817613/drv_phy_hwlib.o: ../src/config/Zavrsni_v3_1/driver/phy/drv_phy_hwlib.c  .generated_files/flags/Zavrsni_v3_1/8e79726eb7a513e4a40aa56a53a36c32d88052c8 .generated_files/flags/Zavrsni_v3_1/fff71d1da6c0dd2ccd3387cc51b6c8c18586c5fd
	@${MKDIR} "${OBJECTDIR}/_ext/2022817613" 
	@${RM} ${OBJECTDIR}/_ext/2022817613/drv_phy_hwlib.o.d 
	@${RM} ${OBJECTDIR}/_ext/2022817613/drv_phy_hwlib.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"../src" -I"../src/config/Zavrsni_v3_1" -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/2022817613/drv_phy_hwlib.o.d" -o ${OBJECTDIR}/_ext/2022817613/drv_phy_hwlib.o ../src/config/Zavrsni_v3_1/driver/phy/drv_phy_hwlib.c    -DXPRJ_Zavrsni_v3_1=$(CND_CONF)  -no-legacy-libc  $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/625098968/plib_clk.o: ../src/config/Zavrsni_v3_1/peripheral/clk/plib_clk.c  .generated_files/flags/Zavrsni_v3_1/96b926139373b4e9be8c4136d448f2e2c5d5ecce .generated_files/flags/Zavrsni_v3_1/fff71d1da6c0dd2ccd3387cc51b6c8c18586c5fd
	@${MKDIR} "${OBJECTDIR}/_ext/625098968" 
	@${RM} ${OBJECTDIR}/_ext/625098968/plib_clk.o.d 
	@${RM} ${OBJECTDIR}/_ext/625098968/plib_clk.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"../src" -I"../src/config/Zavrsni_v3_1" -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/625098968/plib_clk.o.d" -o ${OBJECTDIR}/_ext/625098968/plib_clk.o ../src/config/Zavrsni_v3_1/peripheral/clk/plib_clk.c    -DXPRJ_Zavrsni_v3_1=$(CND_CONF)  -no-legacy-libc  $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/2096837701/plib_evic.o: ../src/config/Zavrsni_v3_1/peripheral/evic/plib_evic.c  .generated_files/flags/Zavrsni_v3_1/339667a397135047430643b6643c8caa0625b180 .generated_files/flags/Zavrsni_v3_1/fff71d1da6c0dd2ccd3387cc51b6c8c18586c5fd
	@${MKDIR} "${OBJECTDIR}/_ext/2096837701" 
	@${RM} ${OBJECTDIR}/_ext/2096837701/plib_evic.o.d 
	@${RM} ${OBJECTDIR}/_ext/2096837701/plib_evic.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"../src" -I"../src/config/Zavrsni_v3_1" -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/2096837701/plib_evic.o.d" -o ${OBJECTDIR}/_ext/2096837701/plib_evic.o ../src/config/Zavrsni_v3_1/peripheral/evic/plib_evic.c    -DXPRJ_Zavrsni_v3_1=$(CND_CONF)  -no-legacy-libc  $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/2096891529/plib_gpio.o: ../src/config/Zavrsni_v3_1/peripheral/gpio/plib_gpio.c  .generated_files/flags/Zavrsni_v3_1/3da62521eb01195cf8d61622ac1945f69e849cce .generated_files/flags/Zavrsni_v3_1/fff71d1da6c0dd2ccd3387cc51b6c8c18586c5fd
	@${MKDIR} "${OBJECTDIR}/_ext/2096891529" 
	@${RM} ${OBJECTDIR}/_ext/2096891529/plib_gpio.o.d 
	@${RM} ${OBJECTDIR}/_ext/2096891529/plib_gpio.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"../src" -I"../src/config/Zavrsni_v3_1" -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/2096891529/plib_gpio.o.d" -o ${OBJECTDIR}/_ext/2096891529/plib_gpio.o ../src/config/Zavrsni_v3_1/peripheral/gpio/plib_gpio.c    -DXPRJ_Zavrsni_v3_1=$(CND_CONF)  -no-legacy-libc  $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/811727536/xc32_monitor.o: ../src/config/Zavrsni_v3_1/stdio/xc32_monitor.c  .generated_files/flags/Zavrsni_v3_1/1feac4dac9a8de794a96bb23163c9f50933cc711 .generated_files/flags/Zavrsni_v3_1/fff71d1da6c0dd2ccd3387cc51b6c8c18586c5fd
	@${MKDIR} "${OBJECTDIR}/_ext/811727536" 
	@${RM} ${OBJECTDIR}/_ext/811727536/xc32_monitor.o.d 
	@${RM} ${OBJECTDIR}/_ext/811727536/xc32_monitor.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"../src" -I"../src/config/Zavrsni_v3_1" -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/811727536/xc32_monitor.o.d" -o ${OBJECTDIR}/_ext/811727536/xc32_monitor.o ../src/config/Zavrsni_v3_1/stdio/xc32_monitor.c    -DXPRJ_Zavrsni_v3_1=$(CND_CONF)  -no-legacy-libc  $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1419650538/initialization.o: ../src/config/Zavrsni_v3_1/initialization.c  .generated_files/flags/Zavrsni_v3_1/c219d9fff1749eece5d1fd3d43d74bf45e0f2760 .generated_files/flags/Zavrsni_v3_1/fff71d1da6c0dd2ccd3387cc51b6c8c18586c5fd
	@${MKDIR} "${OBJECTDIR}/_ext/1419650538" 
	@${RM} ${OBJECTDIR}/_ext/1419650538/initialization.o.d 
	@${RM} ${OBJECTDIR}/_ext/1419650538/initialization.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"../src" -I"../src/config/Zavrsni_v3_1" -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1419650538/initialization.o.d" -o ${OBJECTDIR}/_ext/1419650538/initialization.o ../src/config/Zavrsni_v3_1/initialization.c    -DXPRJ_Zavrsni_v3_1=$(CND_CONF)  -no-legacy-libc  $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1419650538/interrupts.o: ../src/config/Zavrsni_v3_1/interrupts.c  .generated_files/flags/Zavrsni_v3_1/f4ef13db7b51e5828ed6111965a85f3ec5f42b2c .generated_files/flags/Zavrsni_v3_1/fff71d1da6c0dd2ccd3387cc51b6c8c18586c5fd
	@${MKDIR} "${OBJECTDIR}/_ext/1419650538" 
	@${RM} ${OBJECTDIR}/_ext/1419650538/interrupts.o.d 
	@${RM} ${OBJECTDIR}/_ext/1419650538/interrupts.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"../src" -I"../src/config/Zavrsni_v3_1" -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1419650538/interrupts.o.d" -o ${OBJECTDIR}/_ext/1419650538/interrupts.o ../src/config/Zavrsni_v3_1/interrupts.c    -DXPRJ_Zavrsni_v3_1=$(CND_CONF)  -no-legacy-libc  $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1419650538/exceptions.o: ../src/config/Zavrsni_v3_1/exceptions.c  .generated_files/flags/Zavrsni_v3_1/fe15d51fe021d21f960407445b44cd7c5decce20 .generated_files/flags/Zavrsni_v3_1/fff71d1da6c0dd2ccd3387cc51b6c8c18586c5fd
	@${MKDIR} "${OBJECTDIR}/_ext/1419650538" 
	@${RM} ${OBJECTDIR}/_ext/1419650538/exceptions.o.d 
	@${RM} ${OBJECTDIR}/_ext/1419650538/exceptions.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"../src" -I"../src/config/Zavrsni_v3_1" -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1419650538/exceptions.o.d" -o ${OBJECTDIR}/_ext/1419650538/exceptions.o ../src/config/Zavrsni_v3_1/exceptions.c    -DXPRJ_Zavrsni_v3_1=$(CND_CONF)  -no-legacy-libc  $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1360937237/main.o: ../src/main.c  .generated_files/flags/Zavrsni_v3_1/813a60960c1e89182d70a54a441bcdbdc286e4a5 .generated_files/flags/Zavrsni_v3_1/fff71d1da6c0dd2ccd3387cc51b6c8c18586c5fd
	@${MKDIR} "${OBJECTDIR}/_ext/1360937237" 
	@${RM} ${OBJECTDIR}/_ext/1360937237/main.o.d 
	@${RM} ${OBJECTDIR}/_ext/1360937237/main.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"../src" -I"../src/config/Zavrsni_v3_1" -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1360937237/main.o.d" -o ${OBJECTDIR}/_ext/1360937237/main.o ../src/main.c    -DXPRJ_Zavrsni_v3_1=$(CND_CONF)  -no-legacy-libc  $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
else
${OBJECTDIR}/_ext/2022827829/drv_eth.o: ../src/config/Zavrsni_v3_1/driver/eth/drv_eth.c  .generated_files/flags/Zavrsni_v3_1/96e19687a5c244959d2df0a6d6cc8cbe80d267b7 .generated_files/flags/Zavrsni_v3_1/fff71d1da6c0dd2ccd3387cc51b6c8c18586c5fd
	@${MKDIR} "${OBJECTDIR}/_ext/2022827829" 
	@${RM} ${OBJECTDIR}/_ext/2022827829/drv_eth.o.d 
	@${RM} ${OBJECTDIR}/_ext/2022827829/drv_eth.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"../src" -I"../src/config/Zavrsni_v3_1" -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/2022827829/drv_eth.o.d" -o ${OBJECTDIR}/_ext/2022827829/drv_eth.o ../src/config/Zavrsni_v3_1/driver/eth/drv_eth.c    -DXPRJ_Zavrsni_v3_1=$(CND_CONF)  -no-legacy-libc  $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/2022827829/drv_eth_hwlib.o: ../src/config/Zavrsni_v3_1/driver/eth/drv_eth_hwlib.c  .generated_files/flags/Zavrsni_v3_1/801a889bc31e1b1e731952fd3ce048d93ba2f63d .generated_files/flags/Zavrsni_v3_1/fff71d1da6c0dd2ccd3387cc51b6c8c18586c5fd
	@${MKDIR} "${OBJECTDIR}/_ext/2022827829" 
	@${RM} ${OBJECTDIR}/_ext/2022827829/drv_eth_hwlib.o.d 
	@${RM} ${OBJECTDIR}/_ext/2022827829/drv_eth_hwlib.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"../src" -I"../src/config/Zavrsni_v3_1" -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/2022827829/drv_eth_hwlib.o.d" -o ${OBJECTDIR}/_ext/2022827829/drv_eth_hwlib.o ../src/config/Zavrsni_v3_1/driver/eth/drv_eth_hwlib.c    -DXPRJ_Zavrsni_v3_1=$(CND_CONF)  -no-legacy-libc  $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/2022820735/drv_mac.o: ../src/config/Zavrsni_v3_1/driver/mac/drv_mac.c  .generated_files/flags/Zavrsni_v3_1/9a20e6e64aa5546b60b4c612f8c89825e366dbfe .generated_files/flags/Zavrsni_v3_1/fff71d1da6c0dd2ccd3387cc51b6c8c18586c5fd
	@${MKDIR} "${OBJECTDIR}/_ext/2022820735" 
	@${RM} ${OBJECTDIR}/_ext/2022820735/drv_mac.o.d 
	@${RM} ${OBJECTDIR}/_ext/2022820735/drv_mac.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"../src" -I"../src/config/Zavrsni_v3_1" -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/2022820735/drv_mac.o.d" -o ${OBJECTDIR}/_ext/2022820735/drv_mac.o ../src/config/Zavrsni_v3_1/driver/mac/drv_mac.c    -DXPRJ_Zavrsni_v3_1=$(CND_CONF)  -no-legacy-libc  $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/2022820735/drv_mac_hwlib.o: ../src/config/Zavrsni_v3_1/driver/mac/drv_mac_hwlib.c  .generated_files/flags/Zavrsni_v3_1/932083cd4c50dc584656f3397f6d3006c146147b .generated_files/flags/Zavrsni_v3_1/fff71d1da6c0dd2ccd3387cc51b6c8c18586c5fd
	@${MKDIR} "${OBJECTDIR}/_ext/2022820735" 
	@${RM} ${OBJECTDIR}/_ext/2022820735/drv_mac_hwlib.o.d 
	@${RM} ${OBJECTDIR}/_ext/2022820735/drv_mac_hwlib.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"../src" -I"../src/config/Zavrsni_v3_1" -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/2022820735/drv_mac_hwlib.o.d" -o ${OBJECTDIR}/_ext/2022820735/drv_mac_hwlib.o ../src/config/Zavrsni_v3_1/driver/mac/drv_mac_hwlib.c    -DXPRJ_Zavrsni_v3_1=$(CND_CONF)  -no-legacy-libc  $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/2022817613/drv_phy.o: ../src/config/Zavrsni_v3_1/driver/phy/drv_phy.c  .generated_files/flags/Zavrsni_v3_1/e24525c272ad94bae5a3c6c82ca0c4d1e28bdc77 .generated_files/flags/Zavrsni_v3_1/fff71d1da6c0dd2ccd3387cc51b6c8c18586c5fd
	@${MKDIR} "${OBJECTDIR}/_ext/2022817613" 
	@${RM} ${OBJECTDIR}/_ext/2022817613/drv_phy.o.d 
	@${RM} ${OBJECTDIR}/_ext/2022817613/drv_phy.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"../src" -I"../src/config/Zavrsni_v3_1" -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/2022817613/drv_phy.o.d" -o ${OBJECTDIR}/_ext/2022817613/drv_phy.o ../src/config/Zavrsni_v3_1/driver/phy/drv_phy.c    -DXPRJ_Zavrsni_v3_1=$(CND_CONF)  -no-legacy-libc  $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/2022817613/drv_phy_hwlib.o: ../src/config/Zavrsni_v3_1/driver/phy/drv_phy_hwlib.c  .generated_files/flags/Zavrsni_v3_1/8f92e042ef3153d97ddaca9ac8ff11e045d03fe .generated_files/flags/Zavrsni_v3_1/fff71d1da6c0dd2ccd3387cc51b6c8c18586c5fd
	@${MKDIR} "${OBJECTDIR}/_ext/2022817613" 
	@${RM} ${OBJECTDIR}/_ext/2022817613/drv_phy_hwlib.o.d 
	@${RM} ${OBJECTDIR}/_ext/2022817613/drv_phy_hwlib.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"../src" -I"../src/config/Zavrsni_v3_1" -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/2022817613/drv_phy_hwlib.o.d" -o ${OBJECTDIR}/_ext/2022817613/drv_phy_hwlib.o ../src/config/Zavrsni_v3_1/driver/phy/drv_phy_hwlib.c    -DXPRJ_Zavrsni_v3_1=$(CND_CONF)  -no-legacy-libc  $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/625098968/plib_clk.o: ../src/config/Zavrsni_v3_1/peripheral/clk/plib_clk.c  .generated_files/flags/Zavrsni_v3_1/ebd09ef7544ca5f381a8895ea3cee1cddbc0161a .generated_files/flags/Zavrsni_v3_1/fff71d1da6c0dd2ccd3387cc51b6c8c18586c5fd
	@${MKDIR} "${OBJECTDIR}/_ext/625098968" 
	@${RM} ${OBJECTDIR}/_ext/625098968/plib_clk.o.d 
	@${RM} ${OBJECTDIR}/_ext/625098968/plib_clk.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"../src" -I"../src/config/Zavrsni_v3_1" -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/625098968/plib_clk.o.d" -o ${OBJECTDIR}/_ext/625098968/plib_clk.o ../src/config/Zavrsni_v3_1/peripheral/clk/plib_clk.c    -DXPRJ_Zavrsni_v3_1=$(CND_CONF)  -no-legacy-libc  $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/2096837701/plib_evic.o: ../src/config/Zavrsni_v3_1/peripheral/evic/plib_evic.c  .generated_files/flags/Zavrsni_v3_1/88c43753197a4f29e237ae01c33e72bc915c315d .generated_files/flags/Zavrsni_v3_1/fff71d1da6c0dd2ccd3387cc51b6c8c18586c5fd
	@${MKDIR} "${OBJECTDIR}/_ext/2096837701" 
	@${RM} ${OBJECTDIR}/_ext/2096837701/plib_evic.o.d 
	@${RM} ${OBJECTDIR}/_ext/2096837701/plib_evic.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"../src" -I"../src/config/Zavrsni_v3_1" -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/2096837701/plib_evic.o.d" -o ${OBJECTDIR}/_ext/2096837701/plib_evic.o ../src/config/Zavrsni_v3_1/peripheral/evic/plib_evic.c    -DXPRJ_Zavrsni_v3_1=$(CND_CONF)  -no-legacy-libc  $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/2096891529/plib_gpio.o: ../src/config/Zavrsni_v3_1/peripheral/gpio/plib_gpio.c  .generated_files/flags/Zavrsni_v3_1/7ac39f1dcbe3a53346236f12cea5011d22b29a5b .generated_files/flags/Zavrsni_v3_1/fff71d1da6c0dd2ccd3387cc51b6c8c18586c5fd
	@${MKDIR} "${OBJECTDIR}/_ext/2096891529" 
	@${RM} ${OBJECTDIR}/_ext/2096891529/plib_gpio.o.d 
	@${RM} ${OBJECTDIR}/_ext/2096891529/plib_gpio.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"../src" -I"../src/config/Zavrsni_v3_1" -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/2096891529/plib_gpio.o.d" -o ${OBJECTDIR}/_ext/2096891529/plib_gpio.o ../src/config/Zavrsni_v3_1/peripheral/gpio/plib_gpio.c    -DXPRJ_Zavrsni_v3_1=$(CND_CONF)  -no-legacy-libc  $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/811727536/xc32_monitor.o: ../src/config/Zavrsni_v3_1/stdio/xc32_monitor.c  .generated_files/flags/Zavrsni_v3_1/23aeb60bb7c3d5a62a3bec2bc2db9027d43109f8 .generated_files/flags/Zavrsni_v3_1/fff71d1da6c0dd2ccd3387cc51b6c8c18586c5fd
	@${MKDIR} "${OBJECTDIR}/_ext/811727536" 
	@${RM} ${OBJECTDIR}/_ext/811727536/xc32_monitor.o.d 
	@${RM} ${OBJECTDIR}/_ext/811727536/xc32_monitor.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"../src" -I"../src/config/Zavrsni_v3_1" -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/811727536/xc32_monitor.o.d" -o ${OBJECTDIR}/_ext/811727536/xc32_monitor.o ../src/config/Zavrsni_v3_1/stdio/xc32_monitor.c    -DXPRJ_Zavrsni_v3_1=$(CND_CONF)  -no-legacy-libc  $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1419650538/initialization.o: ../src/config/Zavrsni_v3_1/initialization.c  .generated_files/flags/Zavrsni_v3_1/45655e17a73524a88e0042f8b62662ea7a95d16e .generated_files/flags/Zavrsni_v3_1/fff71d1da6c0dd2ccd3387cc51b6c8c18586c5fd
	@${MKDIR} "${OBJECTDIR}/_ext/1419650538" 
	@${RM} ${OBJECTDIR}/_ext/1419650538/initialization.o.d 
	@${RM} ${OBJECTDIR}/_ext/1419650538/initialization.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"../src" -I"../src/config/Zavrsni_v3_1" -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1419650538/initialization.o.d" -o ${OBJECTDIR}/_ext/1419650538/initialization.o ../src/config/Zavrsni_v3_1/initialization.c    -DXPRJ_Zavrsni_v3_1=$(CND_CONF)  -no-legacy-libc  $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1419650538/interrupts.o: ../src/config/Zavrsni_v3_1/interrupts.c  .generated_files/flags/Zavrsni_v3_1/6d9687570594602b8735756c67949d855aa6d863 .generated_files/flags/Zavrsni_v3_1/fff71d1da6c0dd2ccd3387cc51b6c8c18586c5fd
	@${MKDIR} "${OBJECTDIR}/_ext/1419650538" 
	@${RM} ${OBJECTDIR}/_ext/1419650538/interrupts.o.d 
	@${RM} ${OBJECTDIR}/_ext/1419650538/interrupts.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"../src" -I"../src/config/Zavrsni_v3_1" -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1419650538/interrupts.o.d" -o ${OBJECTDIR}/_ext/1419650538/interrupts.o ../src/config/Zavrsni_v3_1/interrupts.c    -DXPRJ_Zavrsni_v3_1=$(CND_CONF)  -no-legacy-libc  $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1419650538/exceptions.o: ../src/config/Zavrsni_v3_1/exceptions.c  .generated_files/flags/Zavrsni_v3_1/234620dd925f970a70a176f1cdb5de65399af259 .generated_files/flags/Zavrsni_v3_1/fff71d1da6c0dd2ccd3387cc51b6c8c18586c5fd
	@${MKDIR} "${OBJECTDIR}/_ext/1419650538" 
	@${RM} ${OBJECTDIR}/_ext/1419650538/exceptions.o.d 
	@${RM} ${OBJECTDIR}/_ext/1419650538/exceptions.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"../src" -I"../src/config/Zavrsni_v3_1" -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1419650538/exceptions.o.d" -o ${OBJECTDIR}/_ext/1419650538/exceptions.o ../src/config/Zavrsni_v3_1/exceptions.c    -DXPRJ_Zavrsni_v3_1=$(CND_CONF)  -no-legacy-libc  $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/_ext/1360937237/main.o: ../src/main.c  .generated_files/flags/Zavrsni_v3_1/d96c2b93f4343c1ea7b3db29559c07b42f79b4ea .generated_files/flags/Zavrsni_v3_1/fff71d1da6c0dd2ccd3387cc51b6c8c18586c5fd
	@${MKDIR} "${OBJECTDIR}/_ext/1360937237" 
	@${RM} ${OBJECTDIR}/_ext/1360937237/main.o.d 
	@${RM} ${OBJECTDIR}/_ext/1360937237/main.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"../src" -I"../src/config/Zavrsni_v3_1" -Wall -MP -MMD -MF "${OBJECTDIR}/_ext/1360937237/main.o.d" -o ${OBJECTDIR}/_ext/1360937237/main.o ../src/main.c    -DXPRJ_Zavrsni_v3_1=$(CND_CONF)  -no-legacy-libc  $(COMPARISON_BUILD)  -mdfp="${DFP_DIR}"  
	
endif

# ------------------------------------------------------------------------------------
# Rules for buildStep: compileCPP
ifeq ($(TYPE_IMAGE), DEBUG_RUN)
else
endif

# ------------------------------------------------------------------------------------
# Rules for buildStep: link
ifeq ($(TYPE_IMAGE), DEBUG_RUN)
dist/${CND_CONF}/${IMAGE_TYPE}/Zavrsni_v3_1.X.${IMAGE_TYPE}.${OUTPUT_SUFFIX}: ${OBJECTFILES}  nbproject/Makefile-${CND_CONF}.mk    ../src/config/Zavrsni_v3_1/p32MZ2048EFM144.ld
	@${MKDIR} dist/${CND_CONF}/${IMAGE_TYPE} 
	${MP_CC} $(MP_EXTRA_LD_PRE) -g -mdebugger -D__MPLAB_DEBUGGER_PK3=1 -mprocessor=$(MP_PROCESSOR_OPTION)  -o dist/${CND_CONF}/${IMAGE_TYPE}/Zavrsni_v3_1.X.${IMAGE_TYPE}.${OUTPUT_SUFFIX} ${OBJECTFILES_QUOTED_IF_SPACED}          -DXPRJ_Zavrsni_v3_1=$(CND_CONF)  -no-legacy-libc  $(COMPARISON_BUILD)   -mreserve=data@0x0:0x37F   -Wl,--defsym=__MPLAB_BUILD=1$(MP_EXTRA_LD_POST)$(MP_LINKER_FILE_OPTION),--defsym=__MPLAB_DEBUG=1,--defsym=__DEBUG=1,-D=__DEBUG_D,--defsym=__MPLAB_DEBUGGER_PK3=1,--defsym=_min_heap_size=512,--gc-sections,--no-code-in-dinit,--no-dinit-in-serial-mem,-Map="${DISTDIR}/${PROJECTNAME}.${IMAGE_TYPE}.map",--memorysummary,dist/${CND_CONF}/${IMAGE_TYPE}/memoryfile.xml -mdfp="${DFP_DIR}"
	
else
dist/${CND_CONF}/${IMAGE_TYPE}/Zavrsni_v3_1.X.${IMAGE_TYPE}.${OUTPUT_SUFFIX}: ${OBJECTFILES}  nbproject/Makefile-${CND_CONF}.mk   ../src/config/Zavrsni_v3_1/p32MZ2048EFM144.ld
	@${MKDIR} dist/${CND_CONF}/${IMAGE_TYPE} 
	${MP_CC} $(MP_EXTRA_LD_PRE)  -mprocessor=$(MP_PROCESSOR_OPTION)  -o dist/${CND_CONF}/${IMAGE_TYPE}/Zavrsni_v3_1.X.${IMAGE_TYPE}.${DEBUGGABLE_SUFFIX} ${OBJECTFILES_QUOTED_IF_SPACED}          -DXPRJ_Zavrsni_v3_1=$(CND_CONF)  -no-legacy-libc  $(COMPARISON_BUILD)  -Wl,--defsym=__MPLAB_BUILD=1$(MP_EXTRA_LD_POST)$(MP_LINKER_FILE_OPTION),--defsym=_min_heap_size=512,--gc-sections,--no-code-in-dinit,--no-dinit-in-serial-mem,-Map="${DISTDIR}/${PROJECTNAME}.${IMAGE_TYPE}.map",--memorysummary,dist/${CND_CONF}/${IMAGE_TYPE}/memoryfile.xml -mdfp="${DFP_DIR}"
	${MP_CC_DIR}\\xc32-bin2hex dist/${CND_CONF}/${IMAGE_TYPE}/Zavrsni_v3_1.X.${IMAGE_TYPE}.${DEBUGGABLE_SUFFIX} 
endif


# Subprojects
.build-subprojects:


# Subprojects
.clean-subprojects:

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS}
	${RM} -r build/Zavrsni_v3_1
	${RM} -r dist/Zavrsni_v3_1

# Enable dependency checking
.dep.inc: .depcheck-impl

DEPFILES=$(shell mplabwildcard ${POSSIBLE_DEPFILES})
ifneq (${DEPFILES},)
include ${DEPFILES}
endif
