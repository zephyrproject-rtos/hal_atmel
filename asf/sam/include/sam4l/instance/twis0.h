/**
 * \file
 *
 * \brief Instance description for TWIS0
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

#ifndef _SAM4L_TWIS0_INSTANCE_
#define _SAM4L_TWIS0_INSTANCE_

/* ========== Register definition for TWIS0 peripheral ========== */
#if (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
#define REG_TWIS0_CR               (0x40018400) /**< \brief (TWIS0) Control Register */
#define REG_TWIS0_NBYTES           (0x40018404) /**< \brief (TWIS0) NBYTES Register */
#define REG_TWIS0_TR               (0x40018408) /**< \brief (TWIS0) Timing Register */
#define REG_TWIS0_RHR              (0x4001840C) /**< \brief (TWIS0) Receive Holding Register */
#define REG_TWIS0_THR              (0x40018410) /**< \brief (TWIS0) Transmit Holding Register */
#define REG_TWIS0_PECR             (0x40018414) /**< \brief (TWIS0) Packet Error Check Register */
#define REG_TWIS0_SR               (0x40018418) /**< \brief (TWIS0) Status Register */
#define REG_TWIS0_IER              (0x4001841C) /**< \brief (TWIS0) Interrupt Enable Register */
#define REG_TWIS0_IDR              (0x40018420) /**< \brief (TWIS0) Interrupt Disable Register */
#define REG_TWIS0_IMR              (0x40018424) /**< \brief (TWIS0) Interrupt Mask Register */
#define REG_TWIS0_SCR              (0x40018428) /**< \brief (TWIS0) Status Clear Register */
#define REG_TWIS0_PR               (0x4001842C) /**< \brief (TWIS0) Parameter Register */
#define REG_TWIS0_VR               (0x40018430) /**< \brief (TWIS0) Version Register */
#define REG_TWIS0_HSTR             (0x40018434) /**< \brief (TWIS0) HS-mode Timing Register */
#define REG_TWIS0_SRR              (0x40018438) /**< \brief (TWIS0) Slew Rate Register */
#define REG_TWIS0_HSSRR            (0x4001843C) /**< \brief (TWIS0) HS-mode Slew Rate Register */
#else
#define REG_TWIS0_CR               (*(RwReg  *)0x40018400UL) /**< \brief (TWIS0) Control Register */
#define REG_TWIS0_NBYTES           (*(RwReg  *)0x40018404UL) /**< \brief (TWIS0) NBYTES Register */
#define REG_TWIS0_TR               (*(RwReg  *)0x40018408UL) /**< \brief (TWIS0) Timing Register */
#define REG_TWIS0_RHR              (*(RoReg  *)0x4001840CUL) /**< \brief (TWIS0) Receive Holding Register */
#define REG_TWIS0_THR              (*(WoReg  *)0x40018410UL) /**< \brief (TWIS0) Transmit Holding Register */
#define REG_TWIS0_PECR             (*(RoReg  *)0x40018414UL) /**< \brief (TWIS0) Packet Error Check Register */
#define REG_TWIS0_SR               (*(RoReg  *)0x40018418UL) /**< \brief (TWIS0) Status Register */
#define REG_TWIS0_IER              (*(WoReg  *)0x4001841CUL) /**< \brief (TWIS0) Interrupt Enable Register */
#define REG_TWIS0_IDR              (*(WoReg  *)0x40018420UL) /**< \brief (TWIS0) Interrupt Disable Register */
#define REG_TWIS0_IMR              (*(RoReg  *)0x40018424UL) /**< \brief (TWIS0) Interrupt Mask Register */
#define REG_TWIS0_SCR              (*(WoReg  *)0x40018428UL) /**< \brief (TWIS0) Status Clear Register */
#define REG_TWIS0_PR               (*(RoReg  *)0x4001842CUL) /**< \brief (TWIS0) Parameter Register */
#define REG_TWIS0_VR               (*(RoReg  *)0x40018430UL) /**< \brief (TWIS0) Version Register */
#define REG_TWIS0_HSTR             (*(RwReg  *)0x40018434UL) /**< \brief (TWIS0) HS-mode Timing Register */
#define REG_TWIS0_SRR              (*(RwReg  *)0x40018438UL) /**< \brief (TWIS0) Slew Rate Register */
#define REG_TWIS0_HSSRR            (*(RwReg  *)0x4001843CUL) /**< \brief (TWIS0) HS-mode Slew Rate Register */
#endif /* (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

/* ========== Instance parameters for TWIS0 peripheral ========== */
#define TWIS0_PDCA_ID_RX            9       
#define TWIS0_PDCA_ID_TX            27      

#endif /* _SAM4L_TWIS0_INSTANCE_ */
