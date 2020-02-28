/**
 * \file
 *
 * \brief Instance description for AST
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

#ifndef _SAM4L_AST_INSTANCE_
#define _SAM4L_AST_INSTANCE_

/* ========== Register definition for AST peripheral ========== */
#if (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
#define REG_AST_CR                 (0x400F0800) /**< \brief (AST) Control Register */
#define REG_AST_CV                 (0x400F0804) /**< \brief (AST) Counter Value */
#define REG_AST_SR                 (0x400F0808) /**< \brief (AST) Status Register */
#define REG_AST_SCR                (0x400F080C) /**< \brief (AST) Status Clear Register */
#define REG_AST_IER                (0x400F0810) /**< \brief (AST) Interrupt Enable Register */
#define REG_AST_IDR                (0x400F0814) /**< \brief (AST) Interrupt Disable Register */
#define REG_AST_IMR                (0x400F0818) /**< \brief (AST) Interrupt Mask Register */
#define REG_AST_WER                (0x400F081C) /**< \brief (AST) Wake Enable Register */
#define REG_AST_AR0                (0x400F0820) /**< \brief (AST) Alarm Register 0 */
#define REG_AST_AR1                (0x400F0824) /**< \brief (AST) Alarm Register 1 */
#define REG_AST_PIR0               (0x400F0830) /**< \brief (AST) Periodic Interval Register 0 */
#define REG_AST_PIR1               (0x400F0834) /**< \brief (AST) Periodic Interval Register 1 */
#define REG_AST_CLOCK              (0x400F0840) /**< \brief (AST) Clock Control Register */
#define REG_AST_DTR                (0x400F0844) /**< \brief (AST) Digital Tuner Register */
#define REG_AST_EVE                (0x400F0848) /**< \brief (AST) Event Enable Register */
#define REG_AST_EVD                (0x400F084C) /**< \brief (AST) Event Disable Register */
#define REG_AST_EVM                (0x400F0850) /**< \brief (AST) Event Mask Register */
#define REG_AST_CALV               (0x400F0854) /**< \brief (AST) Calendar Value */
#define REG_AST_PARAMETER          (0x400F08F0) /**< \brief (AST) Parameter Register */
#define REG_AST_VERSION            (0x400F08FC) /**< \brief (AST) Version Register */
#else
#define REG_AST_CR                 (*(RwReg  *)0x400F0800UL) /**< \brief (AST) Control Register */
#define REG_AST_CV                 (*(RwReg  *)0x400F0804UL) /**< \brief (AST) Counter Value */
#define REG_AST_SR                 (*(RoReg  *)0x400F0808UL) /**< \brief (AST) Status Register */
#define REG_AST_SCR                (*(WoReg  *)0x400F080CUL) /**< \brief (AST) Status Clear Register */
#define REG_AST_IER                (*(WoReg  *)0x400F0810UL) /**< \brief (AST) Interrupt Enable Register */
#define REG_AST_IDR                (*(WoReg  *)0x400F0814UL) /**< \brief (AST) Interrupt Disable Register */
#define REG_AST_IMR                (*(RoReg  *)0x400F0818UL) /**< \brief (AST) Interrupt Mask Register */
#define REG_AST_WER                (*(RwReg  *)0x400F081CUL) /**< \brief (AST) Wake Enable Register */
#define REG_AST_AR0                (*(RwReg  *)0x400F0820UL) /**< \brief (AST) Alarm Register 0 */
#define REG_AST_AR1                (*(RwReg  *)0x400F0824UL) /**< \brief (AST) Alarm Register 1 */
#define REG_AST_PIR0               (*(RwReg  *)0x400F0830UL) /**< \brief (AST) Periodic Interval Register 0 */
#define REG_AST_PIR1               (*(RwReg  *)0x400F0834UL) /**< \brief (AST) Periodic Interval Register 1 */
#define REG_AST_CLOCK              (*(RwReg  *)0x400F0840UL) /**< \brief (AST) Clock Control Register */
#define REG_AST_DTR                (*(RwReg  *)0x400F0844UL) /**< \brief (AST) Digital Tuner Register */
#define REG_AST_EVE                (*(WoReg  *)0x400F0848UL) /**< \brief (AST) Event Enable Register */
#define REG_AST_EVD                (*(WoReg  *)0x400F084CUL) /**< \brief (AST) Event Disable Register */
#define REG_AST_EVM                (*(RoReg  *)0x400F0850UL) /**< \brief (AST) Event Mask Register */
#define REG_AST_CALV               (*(RwReg  *)0x400F0854UL) /**< \brief (AST) Calendar Value */
#define REG_AST_PARAMETER          (*(RoReg  *)0x400F08F0UL) /**< \brief (AST) Parameter Register */
#define REG_AST_VERSION            (*(RoReg  *)0x400F08FCUL) /**< \brief (AST) Version Register */
#endif /* (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

/* ========== Instance parameters for AST peripheral ========== */
#define AST_CLK1K                   4       
#define AST_CLK32                   1       
#define AST_GCLK_NUM                2       
#define AST_GENCLK                  3       
#define AST_PB                      2       
#define AST_RCOSC                   0       

#endif /* _SAM4L_AST_INSTANCE_ */
