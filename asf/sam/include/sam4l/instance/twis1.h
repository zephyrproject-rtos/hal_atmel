/**
 * \file
 *
 * \brief Instance description for TWIS1
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

#ifndef _SAM4L_TWIS1_INSTANCE_
#define _SAM4L_TWIS1_INSTANCE_

/* ========== Register definition for TWIS1 peripheral ========== */
#if (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
#define REG_TWIS1_CR               (0x4001C400) /**< \brief (TWIS1) Control Register */
#define REG_TWIS1_NBYTES           (0x4001C404) /**< \brief (TWIS1) NBYTES Register */
#define REG_TWIS1_TR               (0x4001C408) /**< \brief (TWIS1) Timing Register */
#define REG_TWIS1_RHR              (0x4001C40C) /**< \brief (TWIS1) Receive Holding Register */
#define REG_TWIS1_THR              (0x4001C410) /**< \brief (TWIS1) Transmit Holding Register */
#define REG_TWIS1_PECR             (0x4001C414) /**< \brief (TWIS1) Packet Error Check Register */
#define REG_TWIS1_SR               (0x4001C418) /**< \brief (TWIS1) Status Register */
#define REG_TWIS1_IER              (0x4001C41C) /**< \brief (TWIS1) Interrupt Enable Register */
#define REG_TWIS1_IDR              (0x4001C420) /**< \brief (TWIS1) Interrupt Disable Register */
#define REG_TWIS1_IMR              (0x4001C424) /**< \brief (TWIS1) Interrupt Mask Register */
#define REG_TWIS1_SCR              (0x4001C428) /**< \brief (TWIS1) Status Clear Register */
#define REG_TWIS1_PR               (0x4001C42C) /**< \brief (TWIS1) Parameter Register */
#define REG_TWIS1_VR               (0x4001C430) /**< \brief (TWIS1) Version Register */
#define REG_TWIS1_HSTR             (0x4001C434) /**< \brief (TWIS1) HS-mode Timing Register */
#define REG_TWIS1_SRR              (0x4001C438) /**< \brief (TWIS1) Slew Rate Register */
#define REG_TWIS1_HSSRR            (0x4001C43C) /**< \brief (TWIS1) HS-mode Slew Rate Register */
#else
#define REG_TWIS1_CR               (*(RwReg  *)0x4001C400UL) /**< \brief (TWIS1) Control Register */
#define REG_TWIS1_NBYTES           (*(RwReg  *)0x4001C404UL) /**< \brief (TWIS1) NBYTES Register */
#define REG_TWIS1_TR               (*(RwReg  *)0x4001C408UL) /**< \brief (TWIS1) Timing Register */
#define REG_TWIS1_RHR              (*(RoReg  *)0x4001C40CUL) /**< \brief (TWIS1) Receive Holding Register */
#define REG_TWIS1_THR              (*(WoReg  *)0x4001C410UL) /**< \brief (TWIS1) Transmit Holding Register */
#define REG_TWIS1_PECR             (*(RoReg  *)0x4001C414UL) /**< \brief (TWIS1) Packet Error Check Register */
#define REG_TWIS1_SR               (*(RoReg  *)0x4001C418UL) /**< \brief (TWIS1) Status Register */
#define REG_TWIS1_IER              (*(WoReg  *)0x4001C41CUL) /**< \brief (TWIS1) Interrupt Enable Register */
#define REG_TWIS1_IDR              (*(WoReg  *)0x4001C420UL) /**< \brief (TWIS1) Interrupt Disable Register */
#define REG_TWIS1_IMR              (*(RoReg  *)0x4001C424UL) /**< \brief (TWIS1) Interrupt Mask Register */
#define REG_TWIS1_SCR              (*(WoReg  *)0x4001C428UL) /**< \brief (TWIS1) Status Clear Register */
#define REG_TWIS1_PR               (*(RoReg  *)0x4001C42CUL) /**< \brief (TWIS1) Parameter Register */
#define REG_TWIS1_VR               (*(RoReg  *)0x4001C430UL) /**< \brief (TWIS1) Version Register */
#define REG_TWIS1_HSTR             (*(RwReg  *)0x4001C434UL) /**< \brief (TWIS1) HS-mode Timing Register */
#define REG_TWIS1_SRR              (*(RwReg  *)0x4001C438UL) /**< \brief (TWIS1) Slew Rate Register */
#define REG_TWIS1_HSSRR            (*(RwReg  *)0x4001C43CUL) /**< \brief (TWIS1) HS-mode Slew Rate Register */
#endif /* (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

/* ========== Instance parameters for TWIS1 peripheral ========== */
#define TWIS1_PDCA_ID_RX            10      
#define TWIS1_PDCA_ID_TX            28      

#endif /* _SAM4L_TWIS1_INSTANCE_ */
