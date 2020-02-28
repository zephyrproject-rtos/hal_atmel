/**
 * \file
 *
 * \brief Instance description for TWIM1
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

#ifndef _SAM4L_TWIM1_INSTANCE_
#define _SAM4L_TWIM1_INSTANCE_

/* ========== Register definition for TWIM1 peripheral ========== */
#if (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
#define REG_TWIM1_CR               (0x4001C000) /**< \brief (TWIM1) Control Register */
#define REG_TWIM1_CWGR             (0x4001C004) /**< \brief (TWIM1) Clock Waveform Generator Register */
#define REG_TWIM1_SMBTR            (0x4001C008) /**< \brief (TWIM1) SMBus Timing Register */
#define REG_TWIM1_CMDR             (0x4001C00C) /**< \brief (TWIM1) Command Register */
#define REG_TWIM1_NCMDR            (0x4001C010) /**< \brief (TWIM1) Next Command Register */
#define REG_TWIM1_RHR              (0x4001C014) /**< \brief (TWIM1) Receive Holding Register */
#define REG_TWIM1_THR              (0x4001C018) /**< \brief (TWIM1) Transmit Holding Register */
#define REG_TWIM1_SR               (0x4001C01C) /**< \brief (TWIM1) Status Register */
#define REG_TWIM1_IER              (0x4001C020) /**< \brief (TWIM1) Interrupt Enable Register */
#define REG_TWIM1_IDR              (0x4001C024) /**< \brief (TWIM1) Interrupt Disable Register */
#define REG_TWIM1_IMR              (0x4001C028) /**< \brief (TWIM1) Interrupt Mask Register */
#define REG_TWIM1_SCR              (0x4001C02C) /**< \brief (TWIM1) Status Clear Register */
#define REG_TWIM1_PR               (0x4001C030) /**< \brief (TWIM1) Parameter Register */
#define REG_TWIM1_VR               (0x4001C034) /**< \brief (TWIM1) Version Register */
#define REG_TWIM1_HSCWGR           (0x4001C038) /**< \brief (TWIM1) HS-mode Clock Waveform Generator */
#define REG_TWIM1_SRR              (0x4001C03C) /**< \brief (TWIM1) Slew Rate Register */
#define REG_TWIM1_HSSRR            (0x4001C040) /**< \brief (TWIM1) HS-mode Slew Rate Register */
#else
#define REG_TWIM1_CR               (*(WoReg  *)0x4001C000UL) /**< \brief (TWIM1) Control Register */
#define REG_TWIM1_CWGR             (*(RwReg  *)0x4001C004UL) /**< \brief (TWIM1) Clock Waveform Generator Register */
#define REG_TWIM1_SMBTR            (*(RwReg  *)0x4001C008UL) /**< \brief (TWIM1) SMBus Timing Register */
#define REG_TWIM1_CMDR             (*(RwReg  *)0x4001C00CUL) /**< \brief (TWIM1) Command Register */
#define REG_TWIM1_NCMDR            (*(RwReg  *)0x4001C010UL) /**< \brief (TWIM1) Next Command Register */
#define REG_TWIM1_RHR              (*(RoReg  *)0x4001C014UL) /**< \brief (TWIM1) Receive Holding Register */
#define REG_TWIM1_THR              (*(WoReg  *)0x4001C018UL) /**< \brief (TWIM1) Transmit Holding Register */
#define REG_TWIM1_SR               (*(RoReg  *)0x4001C01CUL) /**< \brief (TWIM1) Status Register */
#define REG_TWIM1_IER              (*(WoReg  *)0x4001C020UL) /**< \brief (TWIM1) Interrupt Enable Register */
#define REG_TWIM1_IDR              (*(WoReg  *)0x4001C024UL) /**< \brief (TWIM1) Interrupt Disable Register */
#define REG_TWIM1_IMR              (*(RoReg  *)0x4001C028UL) /**< \brief (TWIM1) Interrupt Mask Register */
#define REG_TWIM1_SCR              (*(WoReg  *)0x4001C02CUL) /**< \brief (TWIM1) Status Clear Register */
#define REG_TWIM1_PR               (*(RoReg  *)0x4001C030UL) /**< \brief (TWIM1) Parameter Register */
#define REG_TWIM1_VR               (*(RoReg  *)0x4001C034UL) /**< \brief (TWIM1) Version Register */
#define REG_TWIM1_HSCWGR           (*(RwReg  *)0x4001C038UL) /**< \brief (TWIM1) HS-mode Clock Waveform Generator */
#define REG_TWIM1_SRR              (*(RwReg  *)0x4001C03CUL) /**< \brief (TWIM1) Slew Rate Register */
#define REG_TWIM1_HSSRR            (*(RwReg  *)0x4001C040UL) /**< \brief (TWIM1) HS-mode Slew Rate Register */
#endif /* (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

/* ========== Instance parameters for TWIM1 peripheral ========== */
#define TWIM1_PDCA_ID_RX            6       
#define TWIM1_PDCA_ID_TX            24      

#endif /* _SAM4L_TWIM1_INSTANCE_ */
