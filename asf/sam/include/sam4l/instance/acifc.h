/**
 * \file
 *
 * \brief Instance description for ACIFC
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

#ifndef _SAM4L_ACIFC_INSTANCE_
#define _SAM4L_ACIFC_INSTANCE_

/* ========== Register definition for ACIFC peripheral ========== */
#if (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
#define REG_ACIFC_CTRL             (0x40040000) /**< \brief (ACIFC) Control Register */
#define REG_ACIFC_SR               (0x40040004) /**< \brief (ACIFC) Status Register */
#define REG_ACIFC_IER              (0x40040010) /**< \brief (ACIFC) Interrupt Enable Register */
#define REG_ACIFC_IDR              (0x40040014) /**< \brief (ACIFC) Interrupt Disable Register */
#define REG_ACIFC_IMR              (0x40040018) /**< \brief (ACIFC) Interrupt Mask Register */
#define REG_ACIFC_ISR              (0x4004001C) /**< \brief (ACIFC) Interrupt Status Register */
#define REG_ACIFC_ICR              (0x40040020) /**< \brief (ACIFC) Interrupt Status Clear Register */
#define REG_ACIFC_TR               (0x40040024) /**< \brief (ACIFC) Test Register */
#define REG_ACIFC_PARAMETER        (0x40040030) /**< \brief (ACIFC) Parameter Register */
#define REG_ACIFC_VERSION          (0x40040034) /**< \brief (ACIFC) Version Register */
#define REG_ACIFC_CONFW0           (0x40040080) /**< \brief (ACIFC) Window configuration Register 0 */
#define REG_ACIFC_CONFW1           (0x40040084) /**< \brief (ACIFC) Window configuration Register 1 */
#define REG_ACIFC_CONFW2           (0x40040088) /**< \brief (ACIFC) Window configuration Register 2 */
#define REG_ACIFC_CONFW3           (0x4004008C) /**< \brief (ACIFC) Window configuration Register 3 */
#define REG_ACIFC_CONF0            (0x400400D0) /**< \brief (ACIFC) AC Configuration Register 0 */
#define REG_ACIFC_CONF1            (0x400400D4) /**< \brief (ACIFC) AC Configuration Register 1 */
#define REG_ACIFC_CONF2            (0x400400D8) /**< \brief (ACIFC) AC Configuration Register 2 */
#define REG_ACIFC_CONF3            (0x400400DC) /**< \brief (ACIFC) AC Configuration Register 3 */
#define REG_ACIFC_CONF4            (0x400400E0) /**< \brief (ACIFC) AC Configuration Register 4 */
#define REG_ACIFC_CONF5            (0x400400E4) /**< \brief (ACIFC) AC Configuration Register 5 */
#define REG_ACIFC_CONF6            (0x400400E8) /**< \brief (ACIFC) AC Configuration Register 6 */
#define REG_ACIFC_CONF7            (0x400400EC) /**< \brief (ACIFC) AC Configuration Register 7 */
#else
#define REG_ACIFC_CTRL             (*(RwReg  *)0x40040000UL) /**< \brief (ACIFC) Control Register */
#define REG_ACIFC_SR               (*(RoReg  *)0x40040004UL) /**< \brief (ACIFC) Status Register */
#define REG_ACIFC_IER              (*(WoReg  *)0x40040010UL) /**< \brief (ACIFC) Interrupt Enable Register */
#define REG_ACIFC_IDR              (*(WoReg  *)0x40040014UL) /**< \brief (ACIFC) Interrupt Disable Register */
#define REG_ACIFC_IMR              (*(RoReg  *)0x40040018UL) /**< \brief (ACIFC) Interrupt Mask Register */
#define REG_ACIFC_ISR              (*(RoReg  *)0x4004001CUL) /**< \brief (ACIFC) Interrupt Status Register */
#define REG_ACIFC_ICR              (*(WoReg  *)0x40040020UL) /**< \brief (ACIFC) Interrupt Status Clear Register */
#define REG_ACIFC_TR               (*(RwReg  *)0x40040024UL) /**< \brief (ACIFC) Test Register */
#define REG_ACIFC_PARAMETER        (*(RoReg  *)0x40040030UL) /**< \brief (ACIFC) Parameter Register */
#define REG_ACIFC_VERSION          (*(RoReg  *)0x40040034UL) /**< \brief (ACIFC) Version Register */
#define REG_ACIFC_CONFW0           (*(RwReg  *)0x40040080UL) /**< \brief (ACIFC) Window configuration Register 0 */
#define REG_ACIFC_CONFW1           (*(RwReg  *)0x40040084UL) /**< \brief (ACIFC) Window configuration Register 1 */
#define REG_ACIFC_CONFW2           (*(RwReg  *)0x40040088UL) /**< \brief (ACIFC) Window configuration Register 2 */
#define REG_ACIFC_CONFW3           (*(RwReg  *)0x4004008CUL) /**< \brief (ACIFC) Window configuration Register 3 */
#define REG_ACIFC_CONF0            (*(RwReg  *)0x400400D0UL) /**< \brief (ACIFC) AC Configuration Register 0 */
#define REG_ACIFC_CONF1            (*(RwReg  *)0x400400D4UL) /**< \brief (ACIFC) AC Configuration Register 1 */
#define REG_ACIFC_CONF2            (*(RwReg  *)0x400400D8UL) /**< \brief (ACIFC) AC Configuration Register 2 */
#define REG_ACIFC_CONF3            (*(RwReg  *)0x400400DCUL) /**< \brief (ACIFC) AC Configuration Register 3 */
#define REG_ACIFC_CONF4            (*(RwReg  *)0x400400E0UL) /**< \brief (ACIFC) AC Configuration Register 4 */
#define REG_ACIFC_CONF5            (*(RwReg  *)0x400400E4UL) /**< \brief (ACIFC) AC Configuration Register 5 */
#define REG_ACIFC_CONF6            (*(RwReg  *)0x400400E8UL) /**< \brief (ACIFC) AC Configuration Register 6 */
#define REG_ACIFC_CONF7            (*(RwReg  *)0x400400ECUL) /**< \brief (ACIFC) AC Configuration Register 7 */
#endif /* (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */


#endif /* _SAM4L_ACIFC_INSTANCE_ */
