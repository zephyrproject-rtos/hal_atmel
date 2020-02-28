/**
 * \file
 *
 * \brief Instance description for TC1
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

#ifndef _SAM4L_TC1_INSTANCE_
#define _SAM4L_TC1_INSTANCE_

/* ========== Register definition for TC1 peripheral ========== */
#if (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
#define REG_TC1_CCR0               (0x40014000) /**< \brief (TC1) Channel Control Register Channel 0 */
#define REG_TC1_CMR0               (0x40014004) /**< \brief (TC1) Channel Mode Register Channel 0 */
#define REG_TC1_SMMR0              (0x40014008) /**< \brief (TC1) Stepper Motor Mode Register 0 */
#define REG_TC1_CV0                (0x40014010) /**< \brief (TC1) Counter Value Channel 0 */
#define REG_TC1_RA0                (0x40014014) /**< \brief (TC1) Register A Channel 0 */
#define REG_TC1_RB0                (0x40014018) /**< \brief (TC1) Register B Channel 0 */
#define REG_TC1_RC0                (0x4001401C) /**< \brief (TC1) Register C Channel 0 */
#define REG_TC1_SR0                (0x40014020) /**< \brief (TC1) Status Register Channel 0 */
#define REG_TC1_IER0               (0x40014024) /**< \brief (TC1) Interrupt Enable Register Channel 0 */
#define REG_TC1_IDR0               (0x40014028) /**< \brief (TC1) Interrupt Disable Register Channel 0 */
#define REG_TC1_IMR0               (0x4001402C) /**< \brief (TC1) Interrupt Mask Register Channel 0 */
#define REG_TC1_CCR1               (0x40014040) /**< \brief (TC1) Channel Control Register Channel 1 */
#define REG_TC1_CMR1               (0x40014044) /**< \brief (TC1) Channel Mode Register Channel 1 */
#define REG_TC1_SMMR1              (0x40014048) /**< \brief (TC1) Stepper Motor Mode Register 1 */
#define REG_TC1_CV1                (0x40014050) /**< \brief (TC1) Counter Value Channel 1 */
#define REG_TC1_RA1                (0x40014054) /**< \brief (TC1) Register A Channel 1 */
#define REG_TC1_RB1                (0x40014058) /**< \brief (TC1) Register B Channel 1 */
#define REG_TC1_RC1                (0x4001405C) /**< \brief (TC1) Register C Channel 1 */
#define REG_TC1_SR1                (0x40014060) /**< \brief (TC1) Status Register Channel 1 */
#define REG_TC1_IER1               (0x40014064) /**< \brief (TC1) Interrupt Enable Register Channel 1 */
#define REG_TC1_IDR1               (0x40014068) /**< \brief (TC1) Interrupt Disable Register Channel 1 */
#define REG_TC1_IMR1               (0x4001406C) /**< \brief (TC1) Interrupt Mask Register Channel 1 */
#define REG_TC1_CCR2               (0x40014080) /**< \brief (TC1) Channel Control Register Channel 2 */
#define REG_TC1_CMR2               (0x40014084) /**< \brief (TC1) Channel Mode Register Channel 2 */
#define REG_TC1_SMMR2              (0x40014088) /**< \brief (TC1) Stepper Motor Mode Register 2 */
#define REG_TC1_CV2                (0x40014090) /**< \brief (TC1) Counter Value Channel 2 */
#define REG_TC1_RA2                (0x40014094) /**< \brief (TC1) Register A Channel 2 */
#define REG_TC1_RB2                (0x40014098) /**< \brief (TC1) Register B Channel 2 */
#define REG_TC1_RC2                (0x4001409C) /**< \brief (TC1) Register C Channel 2 */
#define REG_TC1_SR2                (0x400140A0) /**< \brief (TC1) Status Register Channel 2 */
#define REG_TC1_IER2               (0x400140A4) /**< \brief (TC1) Interrupt Enable Register Channel 2 */
#define REG_TC1_IDR2               (0x400140A8) /**< \brief (TC1) Interrupt Disable Register Channel 2 */
#define REG_TC1_IMR2               (0x400140AC) /**< \brief (TC1) Interrupt Mask Register Channel 2 */
#define REG_TC1_BCR                (0x400140C0) /**< \brief (TC1) TC Block Control Register */
#define REG_TC1_BMR                (0x400140C4) /**< \brief (TC1) TC Block Mode Register */
#define REG_TC1_WPMR               (0x400140E4) /**< \brief (TC1) Write Protect Mode Register */
#define REG_TC1_FEATURES           (0x400140F8) /**< \brief (TC1) Features Register */
#define REG_TC1_VERSION            (0x400140FC) /**< \brief (TC1) Version Register */
#else
#define REG_TC1_CCR0               (*(WoReg  *)0x40014000UL) /**< \brief (TC1) Channel Control Register Channel 0 */
#define REG_TC1_CMR0               (*(RwReg  *)0x40014004UL) /**< \brief (TC1) Channel Mode Register Channel 0 */
#define REG_TC1_SMMR0              (*(RwReg  *)0x40014008UL) /**< \brief (TC1) Stepper Motor Mode Register 0 */
#define REG_TC1_CV0                (*(RoReg  *)0x40014010UL) /**< \brief (TC1) Counter Value Channel 0 */
#define REG_TC1_RA0                (*(RwReg  *)0x40014014UL) /**< \brief (TC1) Register A Channel 0 */
#define REG_TC1_RB0                (*(RwReg  *)0x40014018UL) /**< \brief (TC1) Register B Channel 0 */
#define REG_TC1_RC0                (*(RwReg  *)0x4001401CUL) /**< \brief (TC1) Register C Channel 0 */
#define REG_TC1_SR0                (*(RoReg  *)0x40014020UL) /**< \brief (TC1) Status Register Channel 0 */
#define REG_TC1_IER0               (*(WoReg  *)0x40014024UL) /**< \brief (TC1) Interrupt Enable Register Channel 0 */
#define REG_TC1_IDR0               (*(WoReg  *)0x40014028UL) /**< \brief (TC1) Interrupt Disable Register Channel 0 */
#define REG_TC1_IMR0               (*(RoReg  *)0x4001402CUL) /**< \brief (TC1) Interrupt Mask Register Channel 0 */
#define REG_TC1_CCR1               (*(WoReg  *)0x40014040UL) /**< \brief (TC1) Channel Control Register Channel 1 */
#define REG_TC1_CMR1               (*(RwReg  *)0x40014044UL) /**< \brief (TC1) Channel Mode Register Channel 1 */
#define REG_TC1_SMMR1              (*(RwReg  *)0x40014048UL) /**< \brief (TC1) Stepper Motor Mode Register 1 */
#define REG_TC1_CV1                (*(RoReg  *)0x40014050UL) /**< \brief (TC1) Counter Value Channel 1 */
#define REG_TC1_RA1                (*(RwReg  *)0x40014054UL) /**< \brief (TC1) Register A Channel 1 */
#define REG_TC1_RB1                (*(RwReg  *)0x40014058UL) /**< \brief (TC1) Register B Channel 1 */
#define REG_TC1_RC1                (*(RwReg  *)0x4001405CUL) /**< \brief (TC1) Register C Channel 1 */
#define REG_TC1_SR1                (*(RoReg  *)0x40014060UL) /**< \brief (TC1) Status Register Channel 1 */
#define REG_TC1_IER1               (*(WoReg  *)0x40014064UL) /**< \brief (TC1) Interrupt Enable Register Channel 1 */
#define REG_TC1_IDR1               (*(WoReg  *)0x40014068UL) /**< \brief (TC1) Interrupt Disable Register Channel 1 */
#define REG_TC1_IMR1               (*(RoReg  *)0x4001406CUL) /**< \brief (TC1) Interrupt Mask Register Channel 1 */
#define REG_TC1_CCR2               (*(WoReg  *)0x40014080UL) /**< \brief (TC1) Channel Control Register Channel 2 */
#define REG_TC1_CMR2               (*(RwReg  *)0x40014084UL) /**< \brief (TC1) Channel Mode Register Channel 2 */
#define REG_TC1_SMMR2              (*(RwReg  *)0x40014088UL) /**< \brief (TC1) Stepper Motor Mode Register 2 */
#define REG_TC1_CV2                (*(RoReg  *)0x40014090UL) /**< \brief (TC1) Counter Value Channel 2 */
#define REG_TC1_RA2                (*(RwReg  *)0x40014094UL) /**< \brief (TC1) Register A Channel 2 */
#define REG_TC1_RB2                (*(RwReg  *)0x40014098UL) /**< \brief (TC1) Register B Channel 2 */
#define REG_TC1_RC2                (*(RwReg  *)0x4001409CUL) /**< \brief (TC1) Register C Channel 2 */
#define REG_TC1_SR2                (*(RoReg  *)0x400140A0UL) /**< \brief (TC1) Status Register Channel 2 */
#define REG_TC1_IER2               (*(WoReg  *)0x400140A4UL) /**< \brief (TC1) Interrupt Enable Register Channel 2 */
#define REG_TC1_IDR2               (*(WoReg  *)0x400140A8UL) /**< \brief (TC1) Interrupt Disable Register Channel 2 */
#define REG_TC1_IMR2               (*(RoReg  *)0x400140ACUL) /**< \brief (TC1) Interrupt Mask Register Channel 2 */
#define REG_TC1_BCR                (*(WoReg  *)0x400140C0UL) /**< \brief (TC1) TC Block Control Register */
#define REG_TC1_BMR                (*(RwReg  *)0x400140C4UL) /**< \brief (TC1) TC Block Mode Register */
#define REG_TC1_WPMR               (*(RwReg  *)0x400140E4UL) /**< \brief (TC1) Write Protect Mode Register */
#define REG_TC1_FEATURES           (*(RoReg  *)0x400140F8UL) /**< \brief (TC1) Features Register */
#define REG_TC1_VERSION            (*(RoReg  *)0x400140FCUL) /**< \brief (TC1) Version Register */
#endif /* (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

/* ========== Instance parameters for TC1 peripheral ========== */
#define TC1_CLK_DIV1                gen_clk_tc1
#define TC1_CLK_DIV2                2       
#define TC1_CLK_DIV3                8       
#define TC1_CLK_DIV4                32      
#define TC1_CLK_DIV5                128     
#define TC1_GCLK_NUM                8       

#endif /* _SAM4L_TC1_INSTANCE_ */
