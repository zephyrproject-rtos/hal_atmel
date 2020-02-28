/**
 * \file
 *
 * \brief Instance description for CRCCU
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

#ifndef _SAM4L_CRCCU_INSTANCE_
#define _SAM4L_CRCCU_INSTANCE_

/* ========== Register definition for CRCCU peripheral ========== */
#if (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
#define REG_CRCCU_DSCR             (0x400A4000) /**< \brief (CRCCU) Descriptor Base Register */
#define REG_CRCCU_DMAEN            (0x400A4008) /**< \brief (CRCCU) DMA Enable Register */
#define REG_CRCCU_DMADIS           (0x400A400C) /**< \brief (CRCCU) DMA Disable Register */
#define REG_CRCCU_DMASR            (0x400A4010) /**< \brief (CRCCU) DMA Status Register */
#define REG_CRCCU_DMAIER           (0x400A4014) /**< \brief (CRCCU) DMA Interrupt Enable Register */
#define REG_CRCCU_DMAIDR           (0x400A4018) /**< \brief (CRCCU) DMA Interrupt Disable Register */
#define REG_CRCCU_DMAIMR           (0x400A401C) /**< \brief (CRCCU) DMA Interrupt Mask Register */
#define REG_CRCCU_DMAISR           (0x400A4020) /**< \brief (CRCCU) DMA Interrupt Status Register */
#define REG_CRCCU_CR               (0x400A4034) /**< \brief (CRCCU) Control Register */
#define REG_CRCCU_MR               (0x400A4038) /**< \brief (CRCCU) Mode Register */
#define REG_CRCCU_SR               (0x400A403C) /**< \brief (CRCCU) Status Register */
#define REG_CRCCU_IER              (0x400A4040) /**< \brief (CRCCU) Interrupt Enable Register */
#define REG_CRCCU_IDR              (0x400A4044) /**< \brief (CRCCU) Interrupt Disable Register */
#define REG_CRCCU_IMR              (0x400A4048) /**< \brief (CRCCU) Interrupt Mask Register */
#define REG_CRCCU_ISR              (0x400A404C) /**< \brief (CRCCU) Interrupt Status Register */
#define REG_CRCCU_VERSION          (0x400A40FC) /**< \brief (CRCCU) Version Register */
#else
#define REG_CRCCU_DSCR             (*(RwReg  *)0x400A4000UL) /**< \brief (CRCCU) Descriptor Base Register */
#define REG_CRCCU_DMAEN            (*(WoReg  *)0x400A4008UL) /**< \brief (CRCCU) DMA Enable Register */
#define REG_CRCCU_DMADIS           (*(WoReg  *)0x400A400CUL) /**< \brief (CRCCU) DMA Disable Register */
#define REG_CRCCU_DMASR            (*(RoReg  *)0x400A4010UL) /**< \brief (CRCCU) DMA Status Register */
#define REG_CRCCU_DMAIER           (*(WoReg  *)0x400A4014UL) /**< \brief (CRCCU) DMA Interrupt Enable Register */
#define REG_CRCCU_DMAIDR           (*(WoReg  *)0x400A4018UL) /**< \brief (CRCCU) DMA Interrupt Disable Register */
#define REG_CRCCU_DMAIMR           (*(RoReg  *)0x400A401CUL) /**< \brief (CRCCU) DMA Interrupt Mask Register */
#define REG_CRCCU_DMAISR           (*(RoReg  *)0x400A4020UL) /**< \brief (CRCCU) DMA Interrupt Status Register */
#define REG_CRCCU_CR               (*(WoReg  *)0x400A4034UL) /**< \brief (CRCCU) Control Register */
#define REG_CRCCU_MR               (*(RwReg  *)0x400A4038UL) /**< \brief (CRCCU) Mode Register */
#define REG_CRCCU_SR               (*(RoReg  *)0x400A403CUL) /**< \brief (CRCCU) Status Register */
#define REG_CRCCU_IER              (*(WoReg  *)0x400A4040UL) /**< \brief (CRCCU) Interrupt Enable Register */
#define REG_CRCCU_IDR              (*(WoReg  *)0x400A4044UL) /**< \brief (CRCCU) Interrupt Disable Register */
#define REG_CRCCU_IMR              (*(RoReg  *)0x400A4048UL) /**< \brief (CRCCU) Interrupt Mask Register */
#define REG_CRCCU_ISR              (*(RoReg  *)0x400A404CUL) /**< \brief (CRCCU) Interrupt Status Register */
#define REG_CRCCU_VERSION          (*(RoReg  *)0x400A40FCUL) /**< \brief (CRCCU) Version Register */
#endif /* (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */


#endif /* _SAM4L_CRCCU_INSTANCE_ */
