/**
 * \file
 *
 * \brief Instance description for PM
 *
 * Copyright (c) 2016 Atmel Corporation,
 *                    a wholly owned subsidiary of Microchip Technology Inc.
 *
 * \asf_license_start
 *
 * \page License
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the Licence at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 * \asf_license_stop
 *
 */

#ifndef _SAM4L_PM_INSTANCE_
#define _SAM4L_PM_INSTANCE_

/* ========== Register definition for PM peripheral ========== */
#if (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
#define REG_PM_MCCTRL              (0x400E0000) /**< \brief (PM) Main Clock Control */
#define REG_PM_CPUSEL              (0x400E0004) /**< \brief (PM) CPU Clock Select */
#define REG_PM_PBASEL              (0x400E000C) /**< \brief (PM) PBA Clock Select */
#define REG_PM_PBBSEL              (0x400E0010) /**< \brief (PM) PBB Clock Select */
#define REG_PM_PBCSEL              (0x400E0014) /**< \brief (PM) PBC Clock Select */
#define REG_PM_PBDSEL              (0x400E0018) /**< \brief (PM) PBD Clock Select */
#define REG_PM_CPUMASK             (0x400E0020) /**< \brief (PM) CPU Mask */
#define REG_PM_HSBMASK             (0x400E0024) /**< \brief (PM) HSB Mask */
#define REG_PM_PBAMASK             (0x400E0028) /**< \brief (PM) PBA Mask */
#define REG_PM_PBBMASK             (0x400E002C) /**< \brief (PM) PBB Mask */
#define REG_PM_PBCMASK             (0x400E0030) /**< \brief (PM) PBC Mask */
#define REG_PM_PBDMASK             (0x400E0034) /**< \brief (PM) PBD Mask */
#define REG_PM_PBADIVMASK          (0x400E0040) /**< \brief (PM) PBA Divided Clock Mask */
#define REG_PM_CFDCTRL             (0x400E0054) /**< \brief (PM) Clock Failure Detector Control */
#define REG_PM_UNLOCK              (0x400E0058) /**< \brief (PM) Unlock Register */
#define REG_PM_IER                 (0x400E00C0) /**< \brief (PM) Interrupt Enable Register */
#define REG_PM_IDR                 (0x400E00C4) /**< \brief (PM) Interrupt Disable Register */
#define REG_PM_IMR                 (0x400E00C8) /**< \brief (PM) Interrupt Mask Register */
#define REG_PM_ISR                 (0x400E00CC) /**< \brief (PM) Interrupt Status Register */
#define REG_PM_ICR                 (0x400E00D0) /**< \brief (PM) Interrupt Clear Register */
#define REG_PM_SR                  (0x400E00D4) /**< \brief (PM) Status Register */
#define REG_PM_PPCR                (0x400E0160) /**< \brief (PM) Peripheral Power Control Register */
#define REG_PM_RCAUSE              (0x400E0180) /**< \brief (PM) Reset Cause Register */
#define REG_PM_WCAUSE              (0x400E0184) /**< \brief (PM) Wake Cause Register */
#define REG_PM_AWEN                (0x400E0188) /**< \brief (PM) Asynchronous Wake Enable */
#define REG_PM_OBS                 (0x400E0190) /**< \brief (PM) Obsvervability */
#define REG_PM_FASTSLEEP           (0x400E0194) /**< \brief (PM) Fast Sleep Register */
#define REG_PM_CONFIG              (0x400E03F8) /**< \brief (PM) Configuration Register */
#define REG_PM_VERSION             (0x400E03FC) /**< \brief (PM) Version Register */
#else
#define REG_PM_MCCTRL              (*(RwReg  *)0x400E0000UL) /**< \brief (PM) Main Clock Control */
#define REG_PM_CPUSEL              (*(RwReg  *)0x400E0004UL) /**< \brief (PM) CPU Clock Select */
#define REG_PM_PBASEL              (*(RwReg  *)0x400E000CUL) /**< \brief (PM) PBA Clock Select */
#define REG_PM_PBBSEL              (*(RwReg  *)0x400E0010UL) /**< \brief (PM) PBB Clock Select */
#define REG_PM_PBCSEL              (*(RwReg  *)0x400E0014UL) /**< \brief (PM) PBC Clock Select */
#define REG_PM_PBDSEL              (*(RwReg  *)0x400E0018UL) /**< \brief (PM) PBD Clock Select */
#define REG_PM_CPUMASK             (*(RwReg  *)0x400E0020UL) /**< \brief (PM) CPU Mask */
#define REG_PM_HSBMASK             (*(RwReg  *)0x400E0024UL) /**< \brief (PM) HSB Mask */
#define REG_PM_PBAMASK             (*(RwReg  *)0x400E0028UL) /**< \brief (PM) PBA Mask */
#define REG_PM_PBBMASK             (*(RwReg  *)0x400E002CUL) /**< \brief (PM) PBB Mask */
#define REG_PM_PBCMASK             (*(RwReg  *)0x400E0030UL) /**< \brief (PM) PBC Mask */
#define REG_PM_PBDMASK             (*(RwReg  *)0x400E0034UL) /**< \brief (PM) PBD Mask */
#define REG_PM_PBADIVMASK          (*(RwReg  *)0x400E0040UL) /**< \brief (PM) PBA Divided Clock Mask */
#define REG_PM_CFDCTRL             (*(RwReg  *)0x400E0054UL) /**< \brief (PM) Clock Failure Detector Control */
#define REG_PM_UNLOCK              (*(WoReg  *)0x400E0058UL) /**< \brief (PM) Unlock Register */
#define REG_PM_IER                 (*(WoReg  *)0x400E00C0UL) /**< \brief (PM) Interrupt Enable Register */
#define REG_PM_IDR                 (*(WoReg  *)0x400E00C4UL) /**< \brief (PM) Interrupt Disable Register */
#define REG_PM_IMR                 (*(RoReg  *)0x400E00C8UL) /**< \brief (PM) Interrupt Mask Register */
#define REG_PM_ISR                 (*(RoReg  *)0x400E00CCUL) /**< \brief (PM) Interrupt Status Register */
#define REG_PM_ICR                 (*(WoReg  *)0x400E00D0UL) /**< \brief (PM) Interrupt Clear Register */
#define REG_PM_SR                  (*(RoReg  *)0x400E00D4UL) /**< \brief (PM) Status Register */
#define REG_PM_PPCR                (*(RwReg  *)0x400E0160UL) /**< \brief (PM) Peripheral Power Control Register */
#define REG_PM_RCAUSE              (*(RoReg  *)0x400E0180UL) /**< \brief (PM) Reset Cause Register */
#define REG_PM_WCAUSE              (*(RoReg  *)0x400E0184UL) /**< \brief (PM) Wake Cause Register */
#define REG_PM_AWEN                (*(RwReg  *)0x400E0188UL) /**< \brief (PM) Asynchronous Wake Enable */
#define REG_PM_OBS                 (*(RwReg  *)0x400E0190UL) /**< \brief (PM) Obsvervability */
#define REG_PM_FASTSLEEP           (*(RwReg  *)0x400E0194UL) /**< \brief (PM) Fast Sleep Register */
#define REG_PM_CONFIG              (*(RoReg  *)0x400E03F8UL) /**< \brief (PM) Configuration Register */
#define REG_PM_VERSION             (*(RoReg  *)0x400E03FCUL) /**< \brief (PM) Version Register */
#endif /* (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

/* ========== Instance parameters for PM peripheral ========== */
#define PM_AWEN_LCDCA               7       
#define PM_AWEN_PICOUART            6       
#define PM_AWEN_TWIS0               0       
#define PM_AWEN_TWIS1               1       
#define PM_AWEN_USBC                2       
#define PM_MCCTRL_MCSEL_DFLL0       3       
#define PM_MCCTRL_MCSEL_FLO         7       
#define PM_MCCTRL_MCSEL_OSC0        1       
#define PM_MCCTRL_MCSEL_PLL0        2       
#define PM_MCCTRL_MCSEL_RCFAST      5       
#define PM_MCCTRL_MCSEL_RC1M        6       
#define PM_MCCTRL_MCSEL_RC80M       4       
#define PM_MCCTRL_MCSEL_SLOW        0       
#define PM_PM_CLK_APB_NUM           4       
#define PM_PPCR_FLASH_WAIT_BGREF_MASK 512     
#define PM_PPCR_FLASH_WAIT_BOD18_MASK 1024    
#define PM_SYSTEM_CLOCK             115000   // System clock frequency at reset
#define PM_PM_SMODE_DEEPSTOP        4       
#define PM_PM_SMODE_FROZEN          1       
#define PM_PM_SMODE_IDLE            0       
#define PM_PM_SMODE_SHUTDOWN        6       
#define PM_PM_SMODE_STANDBY         2       
#define PM_PM_SMODE_STATIC          5       
#define PM_PM_SMODE_STOP            3       

#endif /* _SAM4L_PM_INSTANCE_ */
