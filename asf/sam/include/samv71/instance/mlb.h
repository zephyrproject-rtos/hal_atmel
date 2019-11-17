/**
 * \file
 *
 * \brief Instance description for MLB
 *
 * Copyright (c) 2019 Microchip Technology Inc.
 *
 * \license_start
 *
 * \page License
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 * \license_stop
 *
 */

/* file generated from device description version 2017-01-08T14:00:00Z */
#ifndef _SAMV71_MLB_INSTANCE_H_
#define _SAMV71_MLB_INSTANCE_H_

/* ========== Register definition for MLB peripheral ========== */
#if (defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))

#define REG_MLB_MLBC0           (0x40068000) /**< (MLB) MediaLB Control 0 Register */
#define REG_MLB_MS0             (0x4006800C) /**< (MLB) MediaLB Channel Status 0 Register */
#define REG_MLB_MS1             (0x40068014) /**< (MLB) MediaLB Channel Status1 Register */
#define REG_MLB_MSS             (0x40068020) /**< (MLB) MediaLB System Status Register */
#define REG_MLB_MSD             (0x40068024) /**< (MLB) MediaLB System Data Register */
#define REG_MLB_MIEN            (0x4006802C) /**< (MLB) MediaLB Interrupt Enable Register */
#define REG_MLB_MLBC1           (0x4006803C) /**< (MLB) MediaLB Control 1 Register */
#define REG_MLB_HCTL            (0x40068080) /**< (MLB) HBI Control Register */
#define REG_MLB_HCMR            (0x40068088) /**< (MLB) HBI Channel Mask 0 Register 0 */
#define REG_MLB_HCMR0           (0x40068088) /**< (MLB) HBI Channel Mask 0 Register 0 */
#define REG_MLB_HCMR1           (0x4006808C) /**< (MLB) HBI Channel Mask 0 Register 1 */
#define REG_MLB_HCER            (0x40068090) /**< (MLB) HBI Channel Error 0 Register 0 */
#define REG_MLB_HCER0           (0x40068090) /**< (MLB) HBI Channel Error 0 Register 0 */
#define REG_MLB_HCER1           (0x40068094) /**< (MLB) HBI Channel Error 0 Register 1 */
#define REG_MLB_HCBR            (0x40068098) /**< (MLB) HBI Channel Busy 0 Register 0 */
#define REG_MLB_HCBR0           (0x40068098) /**< (MLB) HBI Channel Busy 0 Register 0 */
#define REG_MLB_HCBR1           (0x4006809C) /**< (MLB) HBI Channel Busy 0 Register 1 */
#define REG_MLB_MDAT            (0x400680C0) /**< (MLB) MIF Data 0 Register 0 */
#define REG_MLB_MDAT0           (0x400680C0) /**< (MLB) MIF Data 0 Register 0 */
#define REG_MLB_MDAT1           (0x400680C4) /**< (MLB) MIF Data 0 Register 1 */
#define REG_MLB_MDAT2           (0x400680C8) /**< (MLB) MIF Data 0 Register 2 */
#define REG_MLB_MDAT3           (0x400680CC) /**< (MLB) MIF Data 0 Register 3 */
#define REG_MLB_MDWE            (0x400680D0) /**< (MLB) MIF Data Write Enable 0 Register 0 */
#define REG_MLB_MDWE0           (0x400680D0) /**< (MLB) MIF Data Write Enable 0 Register 0 */
#define REG_MLB_MDWE1           (0x400680D4) /**< (MLB) MIF Data Write Enable 0 Register 1 */
#define REG_MLB_MDWE2           (0x400680D8) /**< (MLB) MIF Data Write Enable 0 Register 2 */
#define REG_MLB_MDWE3           (0x400680DC) /**< (MLB) MIF Data Write Enable 0 Register 3 */
#define REG_MLB_MCTL            (0x400680E0) /**< (MLB) MIF Control Register */
#define REG_MLB_MADR            (0x400680E4) /**< (MLB) MIF Address Register */
#define REG_MLB_ACTL            (0x400683C0) /**< (MLB) AHB Control Register */
#define REG_MLB_ACSR            (0x400683D0) /**< (MLB) AHB Channel Status 0 Register 0 */
#define REG_MLB_ACSR0           (0x400683D0) /**< (MLB) AHB Channel Status 0 Register 0 */
#define REG_MLB_ACSR1           (0x400683D4) /**< (MLB) AHB Channel Status 0 Register 1 */
#define REG_MLB_ACMR            (0x400683D8) /**< (MLB) AHB Channel Mask 0 Register 0 */
#define REG_MLB_ACMR0           (0x400683D8) /**< (MLB) AHB Channel Mask 0 Register 0 */
#define REG_MLB_ACMR1           (0x400683DC) /**< (MLB) AHB Channel Mask 0 Register 1 */

#else

#define REG_MLB_MLBC0           (*(__IO uint32_t*)0x40068000U) /**< (MLB) MediaLB Control 0 Register */
#define REG_MLB_MS0             (*(__IO uint32_t*)0x4006800CU) /**< (MLB) MediaLB Channel Status 0 Register */
#define REG_MLB_MS1             (*(__IO uint32_t*)0x40068014U) /**< (MLB) MediaLB Channel Status1 Register */
#define REG_MLB_MSS             (*(__IO uint32_t*)0x40068020U) /**< (MLB) MediaLB System Status Register */
#define REG_MLB_MSD             (*(__I  uint32_t*)0x40068024U) /**< (MLB) MediaLB System Data Register */
#define REG_MLB_MIEN            (*(__IO uint32_t*)0x4006802CU) /**< (MLB) MediaLB Interrupt Enable Register */
#define REG_MLB_MLBC1           (*(__IO uint32_t*)0x4006803CU) /**< (MLB) MediaLB Control 1 Register */
#define REG_MLB_HCTL            (*(__IO uint32_t*)0x40068080U) /**< (MLB) HBI Control Register */
#define REG_MLB_HCMR            (*(__IO uint32_t*)0x40068088U) /**< (MLB) HBI Channel Mask 0 Register 0 */
#define REG_MLB_HCMR0           (*(__IO uint32_t*)0x40068088U) /**< (MLB) HBI Channel Mask 0 Register 0 */
#define REG_MLB_HCMR1           (*(__IO uint32_t*)0x4006808CU) /**< (MLB) HBI Channel Mask 0 Register 1 */
#define REG_MLB_HCER            (*(__I  uint32_t*)0x40068090U) /**< (MLB) HBI Channel Error 0 Register 0 */
#define REG_MLB_HCER0           (*(__I  uint32_t*)0x40068090U) /**< (MLB) HBI Channel Error 0 Register 0 */
#define REG_MLB_HCER1           (*(__I  uint32_t*)0x40068094U) /**< (MLB) HBI Channel Error 0 Register 1 */
#define REG_MLB_HCBR            (*(__I  uint32_t*)0x40068098U) /**< (MLB) HBI Channel Busy 0 Register 0 */
#define REG_MLB_HCBR0           (*(__I  uint32_t*)0x40068098U) /**< (MLB) HBI Channel Busy 0 Register 0 */
#define REG_MLB_HCBR1           (*(__I  uint32_t*)0x4006809CU) /**< (MLB) HBI Channel Busy 0 Register 1 */
#define REG_MLB_MDAT            (*(__IO uint32_t*)0x400680C0U) /**< (MLB) MIF Data 0 Register 0 */
#define REG_MLB_MDAT0           (*(__IO uint32_t*)0x400680C0U) /**< (MLB) MIF Data 0 Register 0 */
#define REG_MLB_MDAT1           (*(__IO uint32_t*)0x400680C4U) /**< (MLB) MIF Data 0 Register 1 */
#define REG_MLB_MDAT2           (*(__IO uint32_t*)0x400680C8U) /**< (MLB) MIF Data 0 Register 2 */
#define REG_MLB_MDAT3           (*(__IO uint32_t*)0x400680CCU) /**< (MLB) MIF Data 0 Register 3 */
#define REG_MLB_MDWE            (*(__IO uint32_t*)0x400680D0U) /**< (MLB) MIF Data Write Enable 0 Register 0 */
#define REG_MLB_MDWE0           (*(__IO uint32_t*)0x400680D0U) /**< (MLB) MIF Data Write Enable 0 Register 0 */
#define REG_MLB_MDWE1           (*(__IO uint32_t*)0x400680D4U) /**< (MLB) MIF Data Write Enable 0 Register 1 */
#define REG_MLB_MDWE2           (*(__IO uint32_t*)0x400680D8U) /**< (MLB) MIF Data Write Enable 0 Register 2 */
#define REG_MLB_MDWE3           (*(__IO uint32_t*)0x400680DCU) /**< (MLB) MIF Data Write Enable 0 Register 3 */
#define REG_MLB_MCTL            (*(__IO uint32_t*)0x400680E0U) /**< (MLB) MIF Control Register */
#define REG_MLB_MADR            (*(__IO uint32_t*)0x400680E4U) /**< (MLB) MIF Address Register */
#define REG_MLB_ACTL            (*(__IO uint32_t*)0x400683C0U) /**< (MLB) AHB Control Register */
#define REG_MLB_ACSR            (*(__IO uint32_t*)0x400683D0U) /**< (MLB) AHB Channel Status 0 Register 0 */
#define REG_MLB_ACSR0           (*(__IO uint32_t*)0x400683D0U) /**< (MLB) AHB Channel Status 0 Register 0 */
#define REG_MLB_ACSR1           (*(__IO uint32_t*)0x400683D4U) /**< (MLB) AHB Channel Status 0 Register 1 */
#define REG_MLB_ACMR            (*(__IO uint32_t*)0x400683D8U) /**< (MLB) AHB Channel Mask 0 Register 0 */
#define REG_MLB_ACMR0           (*(__IO uint32_t*)0x400683D8U) /**< (MLB) AHB Channel Mask 0 Register 0 */
#define REG_MLB_ACMR1           (*(__IO uint32_t*)0x400683DCU) /**< (MLB) AHB Channel Mask 0 Register 1 */

#endif /* (defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

/* ========== Instance Parameter definitions for MLB peripheral ========== */
#define MLB_INSTANCE_ID                          53         

#endif /* _SAMV71_MLB_INSTANCE_ */
