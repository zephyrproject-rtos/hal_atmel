/**
 * \file
 *
 * \brief Instance description for DACC
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

#ifndef _SAM4L_DACC_INSTANCE_
#define _SAM4L_DACC_INSTANCE_

/* ========== Register definition for DACC peripheral ========== */
#if (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
#define REG_DACC_CR                (0x4003C000) /**< \brief (DACC) Control Register */
#define REG_DACC_MR                (0x4003C004) /**< \brief (DACC) Mode Register */
#define REG_DACC_CDR               (0x4003C008) /**< \brief (DACC) Conversion Data Register */
#define REG_DACC_IER               (0x4003C00C) /**< \brief (DACC) Interrupt Enable Register */
#define REG_DACC_IDR               (0x4003C010) /**< \brief (DACC) Interrupt Disable Register */
#define REG_DACC_IMR               (0x4003C014) /**< \brief (DACC) Interrupt Mask Register */
#define REG_DACC_ISR               (0x4003C018) /**< \brief (DACC) Interrupt Status Register */
#define REG_DACC_WPMR              (0x4003C0E4) /**< \brief (DACC) Write Protect Mode Register */
#define REG_DACC_WPSR              (0x4003C0E8) /**< \brief (DACC) Write Protect Status Register */
#define REG_DACC_VERSION           (0x4003C0FC) /**< \brief (DACC) Version Register */
#else
#define REG_DACC_CR                (*(WoReg  *)0x4003C000UL) /**< \brief (DACC) Control Register */
#define REG_DACC_MR                (*(RwReg  *)0x4003C004UL) /**< \brief (DACC) Mode Register */
#define REG_DACC_CDR               (*(WoReg  *)0x4003C008UL) /**< \brief (DACC) Conversion Data Register */
#define REG_DACC_IER               (*(WoReg  *)0x4003C00CUL) /**< \brief (DACC) Interrupt Enable Register */
#define REG_DACC_IDR               (*(WoReg  *)0x4003C010UL) /**< \brief (DACC) Interrupt Disable Register */
#define REG_DACC_IMR               (*(RoReg  *)0x4003C014UL) /**< \brief (DACC) Interrupt Mask Register */
#define REG_DACC_ISR               (*(RoReg  *)0x4003C018UL) /**< \brief (DACC) Interrupt Status Register */
#define REG_DACC_WPMR              (*(RwReg  *)0x4003C0E4UL) /**< \brief (DACC) Write Protect Mode Register */
#define REG_DACC_WPSR              (*(RoReg  *)0x4003C0E8UL) /**< \brief (DACC) Write Protect Status Register */
#define REG_DACC_VERSION           (*(RoReg  *)0x4003C0FCUL) /**< \brief (DACC) Version Register */
#endif /* (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

/* ========== Instance parameters for DACC peripheral ========== */
#define DACC_DACC_EXT_TRIG_MSB      0       
#define DACC_DAC_RES_MSB            9       
#define DACC_PDCA_ID_TX             35      

#endif /* _SAM4L_DACC_INSTANCE_ */
