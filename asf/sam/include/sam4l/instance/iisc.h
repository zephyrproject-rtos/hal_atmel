/**
 * \file
 *
 * \brief Instance description for IISC
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

#ifndef _SAM4L_IISC_INSTANCE_
#define _SAM4L_IISC_INSTANCE_

/* ========== Register definition for IISC peripheral ========== */
#if (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
#define REG_IISC_CR                (0x40004000) /**< \brief (IISC) Control Register */
#define REG_IISC_MR                (0x40004004) /**< \brief (IISC) Mode Register */
#define REG_IISC_SR                (0x40004008) /**< \brief (IISC) Status Register */
#define REG_IISC_SCR               (0x4000400C) /**< \brief (IISC) Status Clear Register */
#define REG_IISC_SSR               (0x40004010) /**< \brief (IISC) Status Set Register */
#define REG_IISC_IER               (0x40004014) /**< \brief (IISC) Interrupt Enable Register */
#define REG_IISC_IDR               (0x40004018) /**< \brief (IISC) Interrupt Disable Register */
#define REG_IISC_IMR               (0x4000401C) /**< \brief (IISC) Interrupt Mask Register */
#define REG_IISC_RHR               (0x40004020) /**< \brief (IISC) Receive Holding Register */
#define REG_IISC_THR               (0x40004024) /**< \brief (IISC) Transmit Holding Register */
#define REG_IISC_VERSION           (0x40004028) /**< \brief (IISC) Version Register */
#define REG_IISC_PARAMETER         (0x4000402C) /**< \brief (IISC) Parameter Register */
#else
#define REG_IISC_CR                (*(WoReg  *)0x40004000UL) /**< \brief (IISC) Control Register */
#define REG_IISC_MR                (*(RwReg  *)0x40004004UL) /**< \brief (IISC) Mode Register */
#define REG_IISC_SR                (*(RoReg  *)0x40004008UL) /**< \brief (IISC) Status Register */
#define REG_IISC_SCR               (*(WoReg  *)0x4000400CUL) /**< \brief (IISC) Status Clear Register */
#define REG_IISC_SSR               (*(WoReg  *)0x40004010UL) /**< \brief (IISC) Status Set Register */
#define REG_IISC_IER               (*(WoReg  *)0x40004014UL) /**< \brief (IISC) Interrupt Enable Register */
#define REG_IISC_IDR               (*(WoReg  *)0x40004018UL) /**< \brief (IISC) Interrupt Disable Register */
#define REG_IISC_IMR               (*(RoReg  *)0x4000401CUL) /**< \brief (IISC) Interrupt Mask Register */
#define REG_IISC_RHR               (*(RoReg  *)0x40004020UL) /**< \brief (IISC) Receive Holding Register */
#define REG_IISC_THR               (*(WoReg  *)0x40004024UL) /**< \brief (IISC) Transmit Holding Register */
#define REG_IISC_VERSION           (*(RoReg  *)0x40004028UL) /**< \brief (IISC) Version Register */
#define REG_IISC_PARAMETER         (*(RoReg  *)0x4000402CUL) /**< \brief (IISC) Parameter Register */
#endif /* (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

/* ========== Instance parameters for IISC peripheral ========== */
#define IISC_GCLK_NUM               6       
#define IISC_PDCA_ID_RX             14      
#define IISC_PDCA_ID_RX_1           15      
#define IISC_PDCA_ID_TX             33      
#define IISC_PDCA_ID_TX_1           34      

#endif /* _SAM4L_IISC_INSTANCE_ */
