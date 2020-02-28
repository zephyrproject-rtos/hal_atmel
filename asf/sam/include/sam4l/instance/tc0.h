/**
 * \file
 *
 * \brief Instance description for TC0
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

#ifndef _SAM4L_TC0_INSTANCE_
#define _SAM4L_TC0_INSTANCE_

/* ========== Register definition for TC0 peripheral ========== */
#if (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
#define REG_TC0_CCR0               (0x40010000) /**< \brief (TC0) Channel Control Register Channel 0 */
#define REG_TC0_CMR0               (0x40010004) /**< \brief (TC0) Channel Mode Register Channel 0 */
#define REG_TC0_SMMR0              (0x40010008) /**< \brief (TC0) Stepper Motor Mode Register 0 */
#define REG_TC0_CV0                (0x40010010) /**< \brief (TC0) Counter Value Channel 0 */
#define REG_TC0_RA0                (0x40010014) /**< \brief (TC0) Register A Channel 0 */
#define REG_TC0_RB0                (0x40010018) /**< \brief (TC0) Register B Channel 0 */
#define REG_TC0_RC0                (0x4001001C) /**< \brief (TC0) Register C Channel 0 */
#define REG_TC0_SR0                (0x40010020) /**< \brief (TC0) Status Register Channel 0 */
#define REG_TC0_IER0               (0x40010024) /**< \brief (TC0) Interrupt Enable Register Channel 0 */
#define REG_TC0_IDR0               (0x40010028) /**< \brief (TC0) Interrupt Disable Register Channel 0 */
#define REG_TC0_IMR0               (0x4001002C) /**< \brief (TC0) Interrupt Mask Register Channel 0 */
#define REG_TC0_CCR1               (0x40010040) /**< \brief (TC0) Channel Control Register Channel 1 */
#define REG_TC0_CMR1               (0x40010044) /**< \brief (TC0) Channel Mode Register Channel 1 */
#define REG_TC0_SMMR1              (0x40010048) /**< \brief (TC0) Stepper Motor Mode Register 1 */
#define REG_TC0_CV1                (0x40010050) /**< \brief (TC0) Counter Value Channel 1 */
#define REG_TC0_RA1                (0x40010054) /**< \brief (TC0) Register A Channel 1 */
#define REG_TC0_RB1                (0x40010058) /**< \brief (TC0) Register B Channel 1 */
#define REG_TC0_RC1                (0x4001005C) /**< \brief (TC0) Register C Channel 1 */
#define REG_TC0_SR1                (0x40010060) /**< \brief (TC0) Status Register Channel 1 */
#define REG_TC0_IER1               (0x40010064) /**< \brief (TC0) Interrupt Enable Register Channel 1 */
#define REG_TC0_IDR1               (0x40010068) /**< \brief (TC0) Interrupt Disable Register Channel 1 */
#define REG_TC0_IMR1               (0x4001006C) /**< \brief (TC0) Interrupt Mask Register Channel 1 */
#define REG_TC0_CCR2               (0x40010080) /**< \brief (TC0) Channel Control Register Channel 2 */
#define REG_TC0_CMR2               (0x40010084) /**< \brief (TC0) Channel Mode Register Channel 2 */
#define REG_TC0_SMMR2              (0x40010088) /**< \brief (TC0) Stepper Motor Mode Register 2 */
#define REG_TC0_CV2                (0x40010090) /**< \brief (TC0) Counter Value Channel 2 */
#define REG_TC0_RA2                (0x40010094) /**< \brief (TC0) Register A Channel 2 */
#define REG_TC0_RB2                (0x40010098) /**< \brief (TC0) Register B Channel 2 */
#define REG_TC0_RC2                (0x4001009C) /**< \brief (TC0) Register C Channel 2 */
#define REG_TC0_SR2                (0x400100A0) /**< \brief (TC0) Status Register Channel 2 */
#define REG_TC0_IER2               (0x400100A4) /**< \brief (TC0) Interrupt Enable Register Channel 2 */
#define REG_TC0_IDR2               (0x400100A8) /**< \brief (TC0) Interrupt Disable Register Channel 2 */
#define REG_TC0_IMR2               (0x400100AC) /**< \brief (TC0) Interrupt Mask Register Channel 2 */
#define REG_TC0_BCR                (0x400100C0) /**< \brief (TC0) TC Block Control Register */
#define REG_TC0_BMR                (0x400100C4) /**< \brief (TC0) TC Block Mode Register */
#define REG_TC0_WPMR               (0x400100E4) /**< \brief (TC0) Write Protect Mode Register */
#define REG_TC0_FEATURES           (0x400100F8) /**< \brief (TC0) Features Register */
#define REG_TC0_VERSION            (0x400100FC) /**< \brief (TC0) Version Register */
#else
#define REG_TC0_CCR0               (*(WoReg  *)0x40010000UL) /**< \brief (TC0) Channel Control Register Channel 0 */
#define REG_TC0_CMR0               (*(RwReg  *)0x40010004UL) /**< \brief (TC0) Channel Mode Register Channel 0 */
#define REG_TC0_SMMR0              (*(RwReg  *)0x40010008UL) /**< \brief (TC0) Stepper Motor Mode Register 0 */
#define REG_TC0_CV0                (*(RoReg  *)0x40010010UL) /**< \brief (TC0) Counter Value Channel 0 */
#define REG_TC0_RA0                (*(RwReg  *)0x40010014UL) /**< \brief (TC0) Register A Channel 0 */
#define REG_TC0_RB0                (*(RwReg  *)0x40010018UL) /**< \brief (TC0) Register B Channel 0 */
#define REG_TC0_RC0                (*(RwReg  *)0x4001001CUL) /**< \brief (TC0) Register C Channel 0 */
#define REG_TC0_SR0                (*(RoReg  *)0x40010020UL) /**< \brief (TC0) Status Register Channel 0 */
#define REG_TC0_IER0               (*(WoReg  *)0x40010024UL) /**< \brief (TC0) Interrupt Enable Register Channel 0 */
#define REG_TC0_IDR0               (*(WoReg  *)0x40010028UL) /**< \brief (TC0) Interrupt Disable Register Channel 0 */
#define REG_TC0_IMR0               (*(RoReg  *)0x4001002CUL) /**< \brief (TC0) Interrupt Mask Register Channel 0 */
#define REG_TC0_CCR1               (*(WoReg  *)0x40010040UL) /**< \brief (TC0) Channel Control Register Channel 1 */
#define REG_TC0_CMR1               (*(RwReg  *)0x40010044UL) /**< \brief (TC0) Channel Mode Register Channel 1 */
#define REG_TC0_SMMR1              (*(RwReg  *)0x40010048UL) /**< \brief (TC0) Stepper Motor Mode Register 1 */
#define REG_TC0_CV1                (*(RoReg  *)0x40010050UL) /**< \brief (TC0) Counter Value Channel 1 */
#define REG_TC0_RA1                (*(RwReg  *)0x40010054UL) /**< \brief (TC0) Register A Channel 1 */
#define REG_TC0_RB1                (*(RwReg  *)0x40010058UL) /**< \brief (TC0) Register B Channel 1 */
#define REG_TC0_RC1                (*(RwReg  *)0x4001005CUL) /**< \brief (TC0) Register C Channel 1 */
#define REG_TC0_SR1                (*(RoReg  *)0x40010060UL) /**< \brief (TC0) Status Register Channel 1 */
#define REG_TC0_IER1               (*(WoReg  *)0x40010064UL) /**< \brief (TC0) Interrupt Enable Register Channel 1 */
#define REG_TC0_IDR1               (*(WoReg  *)0x40010068UL) /**< \brief (TC0) Interrupt Disable Register Channel 1 */
#define REG_TC0_IMR1               (*(RoReg  *)0x4001006CUL) /**< \brief (TC0) Interrupt Mask Register Channel 1 */
#define REG_TC0_CCR2               (*(WoReg  *)0x40010080UL) /**< \brief (TC0) Channel Control Register Channel 2 */
#define REG_TC0_CMR2               (*(RwReg  *)0x40010084UL) /**< \brief (TC0) Channel Mode Register Channel 2 */
#define REG_TC0_SMMR2              (*(RwReg  *)0x40010088UL) /**< \brief (TC0) Stepper Motor Mode Register 2 */
#define REG_TC0_CV2                (*(RoReg  *)0x40010090UL) /**< \brief (TC0) Counter Value Channel 2 */
#define REG_TC0_RA2                (*(RwReg  *)0x40010094UL) /**< \brief (TC0) Register A Channel 2 */
#define REG_TC0_RB2                (*(RwReg  *)0x40010098UL) /**< \brief (TC0) Register B Channel 2 */
#define REG_TC0_RC2                (*(RwReg  *)0x4001009CUL) /**< \brief (TC0) Register C Channel 2 */
#define REG_TC0_SR2                (*(RoReg  *)0x400100A0UL) /**< \brief (TC0) Status Register Channel 2 */
#define REG_TC0_IER2               (*(WoReg  *)0x400100A4UL) /**< \brief (TC0) Interrupt Enable Register Channel 2 */
#define REG_TC0_IDR2               (*(WoReg  *)0x400100A8UL) /**< \brief (TC0) Interrupt Disable Register Channel 2 */
#define REG_TC0_IMR2               (*(RoReg  *)0x400100ACUL) /**< \brief (TC0) Interrupt Mask Register Channel 2 */
#define REG_TC0_BCR                (*(WoReg  *)0x400100C0UL) /**< \brief (TC0) TC Block Control Register */
#define REG_TC0_BMR                (*(RwReg  *)0x400100C4UL) /**< \brief (TC0) TC Block Mode Register */
#define REG_TC0_WPMR               (*(RwReg  *)0x400100E4UL) /**< \brief (TC0) Write Protect Mode Register */
#define REG_TC0_FEATURES           (*(RoReg  *)0x400100F8UL) /**< \brief (TC0) Features Register */
#define REG_TC0_VERSION            (*(RoReg  *)0x400100FCUL) /**< \brief (TC0) Version Register */
#endif /* (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

/* ========== Instance parameters for TC0 peripheral ========== */
#define TC0_CLK_DIV1                gen_clk_tc0
#define TC0_CLK_DIV2                2       
#define TC0_CLK_DIV3                8       
#define TC0_CLK_DIV4                32      
#define TC0_CLK_DIV5                128     
#define TC0_GCLK_NUM                5       

#endif /* _SAM4L_TC0_INSTANCE_ */
