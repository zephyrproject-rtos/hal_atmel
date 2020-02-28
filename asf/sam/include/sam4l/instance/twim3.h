/**
 * \file
 *
 * \brief Instance description for TWIM3
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

#ifndef _SAM4L_TWIM3_INSTANCE_
#define _SAM4L_TWIM3_INSTANCE_

/* ========== Register definition for TWIM3 peripheral ========== */
#if (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
#define REG_TWIM3_CR               (0x4007C000) /**< \brief (TWIM3) Control Register */
#define REG_TWIM3_CWGR             (0x4007C004) /**< \brief (TWIM3) Clock Waveform Generator Register */
#define REG_TWIM3_SMBTR            (0x4007C008) /**< \brief (TWIM3) SMBus Timing Register */
#define REG_TWIM3_CMDR             (0x4007C00C) /**< \brief (TWIM3) Command Register */
#define REG_TWIM3_NCMDR            (0x4007C010) /**< \brief (TWIM3) Next Command Register */
#define REG_TWIM3_RHR              (0x4007C014) /**< \brief (TWIM3) Receive Holding Register */
#define REG_TWIM3_THR              (0x4007C018) /**< \brief (TWIM3) Transmit Holding Register */
#define REG_TWIM3_SR               (0x4007C01C) /**< \brief (TWIM3) Status Register */
#define REG_TWIM3_IER              (0x4007C020) /**< \brief (TWIM3) Interrupt Enable Register */
#define REG_TWIM3_IDR              (0x4007C024) /**< \brief (TWIM3) Interrupt Disable Register */
#define REG_TWIM3_IMR              (0x4007C028) /**< \brief (TWIM3) Interrupt Mask Register */
#define REG_TWIM3_SCR              (0x4007C02C) /**< \brief (TWIM3) Status Clear Register */
#define REG_TWIM3_PR               (0x4007C030) /**< \brief (TWIM3) Parameter Register */
#define REG_TWIM3_VR               (0x4007C034) /**< \brief (TWIM3) Version Register */
#define REG_TWIM3_HSCWGR           (0x4007C038) /**< \brief (TWIM3) HS-mode Clock Waveform Generator */
#define REG_TWIM3_SRR              (0x4007C03C) /**< \brief (TWIM3) Slew Rate Register */
#define REG_TWIM3_HSSRR            (0x4007C040) /**< \brief (TWIM3) HS-mode Slew Rate Register */
#else
#define REG_TWIM3_CR               (*(WoReg  *)0x4007C000UL) /**< \brief (TWIM3) Control Register */
#define REG_TWIM3_CWGR             (*(RwReg  *)0x4007C004UL) /**< \brief (TWIM3) Clock Waveform Generator Register */
#define REG_TWIM3_SMBTR            (*(RwReg  *)0x4007C008UL) /**< \brief (TWIM3) SMBus Timing Register */
#define REG_TWIM3_CMDR             (*(RwReg  *)0x4007C00CUL) /**< \brief (TWIM3) Command Register */
#define REG_TWIM3_NCMDR            (*(RwReg  *)0x4007C010UL) /**< \brief (TWIM3) Next Command Register */
#define REG_TWIM3_RHR              (*(RoReg  *)0x4007C014UL) /**< \brief (TWIM3) Receive Holding Register */
#define REG_TWIM3_THR              (*(WoReg  *)0x4007C018UL) /**< \brief (TWIM3) Transmit Holding Register */
#define REG_TWIM3_SR               (*(RoReg  *)0x4007C01CUL) /**< \brief (TWIM3) Status Register */
#define REG_TWIM3_IER              (*(WoReg  *)0x4007C020UL) /**< \brief (TWIM3) Interrupt Enable Register */
#define REG_TWIM3_IDR              (*(WoReg  *)0x4007C024UL) /**< \brief (TWIM3) Interrupt Disable Register */
#define REG_TWIM3_IMR              (*(RoReg  *)0x4007C028UL) /**< \brief (TWIM3) Interrupt Mask Register */
#define REG_TWIM3_SCR              (*(WoReg  *)0x4007C02CUL) /**< \brief (TWIM3) Status Clear Register */
#define REG_TWIM3_PR               (*(RoReg  *)0x4007C030UL) /**< \brief (TWIM3) Parameter Register */
#define REG_TWIM3_VR               (*(RoReg  *)0x4007C034UL) /**< \brief (TWIM3) Version Register */
#define REG_TWIM3_HSCWGR           (*(RwReg  *)0x4007C038UL) /**< \brief (TWIM3) HS-mode Clock Waveform Generator */
#define REG_TWIM3_SRR              (*(RwReg  *)0x4007C03CUL) /**< \brief (TWIM3) Slew Rate Register */
#define REG_TWIM3_HSSRR            (*(RwReg  *)0x4007C040UL) /**< \brief (TWIM3) HS-mode Slew Rate Register */
#endif /* (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

/* ========== Instance parameters for TWIM3 peripheral ========== */
#define TWIM3_PDCA_ID_RX            8       
#define TWIM3_PDCA_ID_TX            26      

#endif /* _SAM4L_TWIM3_INSTANCE_ */
