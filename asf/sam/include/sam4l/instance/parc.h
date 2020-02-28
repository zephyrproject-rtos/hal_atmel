/**
 * \file
 *
 * \brief Instance description for PARC
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

#ifndef _SAM4L_PARC_INSTANCE_
#define _SAM4L_PARC_INSTANCE_

/* ========== Register definition for PARC peripheral ========== */
#if (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
#define REG_PARC_CFG               (0x4006C000) /**< \brief (PARC) Configuration Register */
#define REG_PARC_CR                (0x4006C004) /**< \brief (PARC) Control Register */
#define REG_PARC_IER               (0x4006C008) /**< \brief (PARC) Interrupt Enable Register */
#define REG_PARC_IDR               (0x4006C00C) /**< \brief (PARC) Interrupt Disable Register */
#define REG_PARC_IMR               (0x4006C010) /**< \brief (PARC) Interrupt Mask Register */
#define REG_PARC_SR                (0x4006C014) /**< \brief (PARC) Status Register */
#define REG_PARC_ICR               (0x4006C018) /**< \brief (PARC) Interrupt Status Clear Register */
#define REG_PARC_RHR               (0x4006C01C) /**< \brief (PARC) Receive Holding Register */
#define REG_PARC_VERSION           (0x4006C020) /**< \brief (PARC) Version Register */
#else
#define REG_PARC_CFG               (*(RwReg  *)0x4006C000UL) /**< \brief (PARC) Configuration Register */
#define REG_PARC_CR                (*(RwReg  *)0x4006C004UL) /**< \brief (PARC) Control Register */
#define REG_PARC_IER               (*(WoReg  *)0x4006C008UL) /**< \brief (PARC) Interrupt Enable Register */
#define REG_PARC_IDR               (*(WoReg  *)0x4006C00CUL) /**< \brief (PARC) Interrupt Disable Register */
#define REG_PARC_IMR               (*(RoReg  *)0x4006C010UL) /**< \brief (PARC) Interrupt Mask Register */
#define REG_PARC_SR                (*(RoReg  *)0x4006C014UL) /**< \brief (PARC) Status Register */
#define REG_PARC_ICR               (*(WoReg  *)0x4006C018UL) /**< \brief (PARC) Interrupt Status Clear Register */
#define REG_PARC_RHR               (*(RoReg  *)0x4006C01CUL) /**< \brief (PARC) Receive Holding Register */
#define REG_PARC_VERSION           (*(RoReg  *)0x4006C020UL) /**< \brief (PARC) Version Register */
#endif /* (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

/* ========== Instance parameters for PARC peripheral ========== */
#define PARC_PDCA_ID_RX             16      

#endif /* _SAM4L_PARC_INSTANCE_ */
