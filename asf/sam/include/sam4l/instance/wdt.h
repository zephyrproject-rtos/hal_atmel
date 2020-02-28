/**
 * \file
 *
 * \brief Instance description for WDT
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

#ifndef _SAM4L_WDT_INSTANCE_
#define _SAM4L_WDT_INSTANCE_

/* ========== Register definition for WDT peripheral ========== */
#if (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
#define REG_WDT_CTRL               (0x400F0C00) /**< \brief (WDT) Control Register */
#define REG_WDT_CLR                (0x400F0C04) /**< \brief (WDT) Clear Register */
#define REG_WDT_SR                 (0x400F0C08) /**< \brief (WDT) Status Register */
#define REG_WDT_IER                (0x400F0C0C) /**< \brief (WDT) Interrupt Enable Register */
#define REG_WDT_IDR                (0x400F0C10) /**< \brief (WDT) Interrupt Disable Register */
#define REG_WDT_IMR                (0x400F0C14) /**< \brief (WDT) Interrupt Mask Register */
#define REG_WDT_ISR                (0x400F0C18) /**< \brief (WDT) Interrupt Status Register */
#define REG_WDT_ICR                (0x400F0C1C) /**< \brief (WDT) Interrupt Clear Register */
#define REG_WDT_VERSION            (0x400F0FFC) /**< \brief (WDT) Version Register */
#else
#define REG_WDT_CTRL               (*(RwReg  *)0x400F0C00UL) /**< \brief (WDT) Control Register */
#define REG_WDT_CLR                (*(WoReg  *)0x400F0C04UL) /**< \brief (WDT) Clear Register */
#define REG_WDT_SR                 (*(RoReg  *)0x400F0C08UL) /**< \brief (WDT) Status Register */
#define REG_WDT_IER                (*(WoReg  *)0x400F0C0CUL) /**< \brief (WDT) Interrupt Enable Register */
#define REG_WDT_IDR                (*(WoReg  *)0x400F0C10UL) /**< \brief (WDT) Interrupt Disable Register */
#define REG_WDT_IMR                (*(RoReg  *)0x400F0C14UL) /**< \brief (WDT) Interrupt Mask Register */
#define REG_WDT_ISR                (*(RoReg  *)0x400F0C18UL) /**< \brief (WDT) Interrupt Status Register */
#define REG_WDT_ICR                (*(WoReg  *)0x400F0C1CUL) /**< \brief (WDT) Interrupt Clear Register */
#define REG_WDT_VERSION            (*(RoReg  *)0x400F0FFCUL) /**< \brief (WDT) Version Register */
#endif /* (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

/* ========== Instance parameters for WDT peripheral ========== */
#define WDT_WDT_KEY_CONST           85      

#endif /* _SAM4L_WDT_INSTANCE_ */
