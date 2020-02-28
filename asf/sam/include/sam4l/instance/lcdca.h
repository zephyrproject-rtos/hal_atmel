/**
 * \file
 *
 * \brief Instance description for LCDCA
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

#ifndef _SAM4L_LCDCA_INSTANCE_
#define _SAM4L_LCDCA_INSTANCE_

/* ========== Register definition for LCDCA peripheral ========== */
#if (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
#define REG_LCDCA_CR               (0x40080000) /**< \brief (LCDCA) Control Register */
#define REG_LCDCA_CFG              (0x40080004) /**< \brief (LCDCA) Configuration Register */
#define REG_LCDCA_TIM              (0x40080008) /**< \brief (LCDCA) Timing Register */
#define REG_LCDCA_SR               (0x4008000C) /**< \brief (LCDCA) Status Register */
#define REG_LCDCA_SCR              (0x40080010) /**< \brief (LCDCA) Status Clear Register */
#define REG_LCDCA_DRL0             (0x40080014) /**< \brief (LCDCA) Data Register Low 0 */
#define REG_LCDCA_DRH0             (0x40080018) /**< \brief (LCDCA) Data Register High 0 */
#define REG_LCDCA_DRL1             (0x4008001C) /**< \brief (LCDCA) Data Register Low 1 */
#define REG_LCDCA_DRH1             (0x40080020) /**< \brief (LCDCA) Data Register High 1 */
#define REG_LCDCA_DRL2             (0x40080024) /**< \brief (LCDCA) Data Register Low 2 */
#define REG_LCDCA_DRH2             (0x40080028) /**< \brief (LCDCA) Data Register High 2 */
#define REG_LCDCA_DRL3             (0x4008002C) /**< \brief (LCDCA) Data Register Low 3 */
#define REG_LCDCA_DRH3             (0x40080030) /**< \brief (LCDCA) Data Register High 3 */
#define REG_LCDCA_IADR             (0x40080034) /**< \brief (LCDCA) Indirect Access Data Register */
#define REG_LCDCA_BCFG             (0x40080038) /**< \brief (LCDCA) Blink Configuration Register */
#define REG_LCDCA_CSRCFG           (0x4008003C) /**< \brief (LCDCA) Circular Shift Register Configuration */
#define REG_LCDCA_CMCFG            (0x40080040) /**< \brief (LCDCA) Character Mapping Configuration Register */
#define REG_LCDCA_CMDR             (0x40080044) /**< \brief (LCDCA) Character Mapping Data Register */
#define REG_LCDCA_ACMCFG           (0x40080048) /**< \brief (LCDCA) Automated Character Mapping Configuration Register */
#define REG_LCDCA_ACMDR            (0x4008004C) /**< \brief (LCDCA) Automated Character Mapping Data Register */
#define REG_LCDCA_ABMCFG           (0x40080050) /**< \brief (LCDCA) Automated Bit Mapping Configuration Register */
#define REG_LCDCA_ABMDR            (0x40080054) /**< \brief (LCDCA) Automated Bit Mapping Data Register */
#define REG_LCDCA_IER              (0x40080058) /**< \brief (LCDCA) Interrupt Enable Register */
#define REG_LCDCA_IDR              (0x4008005C) /**< \brief (LCDCA) Interrupt Disable Register */
#define REG_LCDCA_IMR              (0x40080060) /**< \brief (LCDCA) Interrupt Mask Register */
#define REG_LCDCA_VERSION          (0x40080064) /**< \brief (LCDCA) Version Register */
#else
#define REG_LCDCA_CR               (*(WoReg  *)0x40080000UL) /**< \brief (LCDCA) Control Register */
#define REG_LCDCA_CFG              (*(RwReg  *)0x40080004UL) /**< \brief (LCDCA) Configuration Register */
#define REG_LCDCA_TIM              (*(RwReg  *)0x40080008UL) /**< \brief (LCDCA) Timing Register */
#define REG_LCDCA_SR               (*(RoReg  *)0x4008000CUL) /**< \brief (LCDCA) Status Register */
#define REG_LCDCA_SCR              (*(WoReg  *)0x40080010UL) /**< \brief (LCDCA) Status Clear Register */
#define REG_LCDCA_DRL0             (*(RwReg  *)0x40080014UL) /**< \brief (LCDCA) Data Register Low 0 */
#define REG_LCDCA_DRH0             (*(RwReg  *)0x40080018UL) /**< \brief (LCDCA) Data Register High 0 */
#define REG_LCDCA_DRL1             (*(RwReg  *)0x4008001CUL) /**< \brief (LCDCA) Data Register Low 1 */
#define REG_LCDCA_DRH1             (*(RwReg  *)0x40080020UL) /**< \brief (LCDCA) Data Register High 1 */
#define REG_LCDCA_DRL2             (*(RwReg  *)0x40080024UL) /**< \brief (LCDCA) Data Register Low 2 */
#define REG_LCDCA_DRH2             (*(RwReg  *)0x40080028UL) /**< \brief (LCDCA) Data Register High 2 */
#define REG_LCDCA_DRL3             (*(RwReg  *)0x4008002CUL) /**< \brief (LCDCA) Data Register Low 3 */
#define REG_LCDCA_DRH3             (*(RwReg  *)0x40080030UL) /**< \brief (LCDCA) Data Register High 3 */
#define REG_LCDCA_IADR             (*(WoReg  *)0x40080034UL) /**< \brief (LCDCA) Indirect Access Data Register */
#define REG_LCDCA_BCFG             (*(RwReg  *)0x40080038UL) /**< \brief (LCDCA) Blink Configuration Register */
#define REG_LCDCA_CSRCFG           (*(RwReg  *)0x4008003CUL) /**< \brief (LCDCA) Circular Shift Register Configuration */
#define REG_LCDCA_CMCFG            (*(RwReg  *)0x40080040UL) /**< \brief (LCDCA) Character Mapping Configuration Register */
#define REG_LCDCA_CMDR             (*(WoReg  *)0x40080044UL) /**< \brief (LCDCA) Character Mapping Data Register */
#define REG_LCDCA_ACMCFG           (*(RwReg  *)0x40080048UL) /**< \brief (LCDCA) Automated Character Mapping Configuration Register */
#define REG_LCDCA_ACMDR            (*(WoReg  *)0x4008004CUL) /**< \brief (LCDCA) Automated Character Mapping Data Register */
#define REG_LCDCA_ABMCFG           (*(RwReg  *)0x40080050UL) /**< \brief (LCDCA) Automated Bit Mapping Configuration Register */
#define REG_LCDCA_ABMDR            (*(WoReg  *)0x40080054UL) /**< \brief (LCDCA) Automated Bit Mapping Data Register */
#define REG_LCDCA_IER              (*(WoReg  *)0x40080058UL) /**< \brief (LCDCA) Interrupt Enable Register */
#define REG_LCDCA_IDR              (*(WoReg  *)0x4008005CUL) /**< \brief (LCDCA) Interrupt Disable Register */
#define REG_LCDCA_IMR              (*(RoReg  *)0x40080060UL) /**< \brief (LCDCA) Interrupt Mask Register */
#define REG_LCDCA_VERSION          (*(RoReg  *)0x40080064UL) /**< \brief (LCDCA) Version Register */
#endif /* (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

/* ========== Instance parameters for LCDCA peripheral ========== */
#define LCDCA_PDCA_ID_TX_ABM        38      
#define LCDCA_PDCA_ID_TX_ACM        37      

#endif /* _SAM4L_LCDCA_INSTANCE_ */
