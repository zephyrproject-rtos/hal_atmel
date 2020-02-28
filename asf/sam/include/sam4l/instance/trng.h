/**
 * \file
 *
 * \brief Instance description for TRNG
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

#ifndef _SAM4L_TRNG_INSTANCE_
#define _SAM4L_TRNG_INSTANCE_

/* ========== Register definition for TRNG peripheral ========== */
#if (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
#define REG_TRNG_CR                (0x40068000) /**< \brief (TRNG) Control Register */
#define REG_TRNG_IER               (0x40068010) /**< \brief (TRNG) Interrupt Enable Register */
#define REG_TRNG_IDR               (0x40068014) /**< \brief (TRNG) Interrupt Disable Register */
#define REG_TRNG_IMR               (0x40068018) /**< \brief (TRNG) Interrupt Mask Register */
#define REG_TRNG_ISR               (0x4006801C) /**< \brief (TRNG) Interrupt Status Register */
#define REG_TRNG_ODATA             (0x40068050) /**< \brief (TRNG) Output Data Register */
#define REG_TRNG_VERSION           (0x400680FC) /**< \brief (TRNG) Version Register */
#else
#define REG_TRNG_CR                (*(WoReg  *)0x40068000UL) /**< \brief (TRNG) Control Register */
#define REG_TRNG_IER               (*(WoReg  *)0x40068010UL) /**< \brief (TRNG) Interrupt Enable Register */
#define REG_TRNG_IDR               (*(WoReg  *)0x40068014UL) /**< \brief (TRNG) Interrupt Disable Register */
#define REG_TRNG_IMR               (*(RoReg  *)0x40068018UL) /**< \brief (TRNG) Interrupt Mask Register */
#define REG_TRNG_ISR               (*(RoReg  *)0x4006801CUL) /**< \brief (TRNG) Interrupt Status Register */
#define REG_TRNG_ODATA             (*(RoReg  *)0x40068050UL) /**< \brief (TRNG) Output Data Register */
#define REG_TRNG_VERSION           (*(RoReg  *)0x400680FCUL) /**< \brief (TRNG) Version Register */
#endif /* (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */


#endif /* _SAM4L_TRNG_INSTANCE_ */
