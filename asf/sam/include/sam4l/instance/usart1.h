/**
 * \file
 *
 * \brief Instance description for USART1
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

#ifndef _SAM4L_USART1_INSTANCE_
#define _SAM4L_USART1_INSTANCE_

/* ========== Register definition for USART1 peripheral ========== */
#if (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
#define REG_USART1_CR              (0x40028000) /**< \brief (USART1) Control Register */
#define REG_USART1_MR              (0x40028004) /**< \brief (USART1) Mode Register */
#define REG_USART1_IER             (0x40028008) /**< \brief (USART1) Interrupt Enable Register */
#define REG_USART1_IDR             (0x4002800C) /**< \brief (USART1) Interrupt Disable Register */
#define REG_USART1_IMR             (0x40028010) /**< \brief (USART1) Interrupt Mask Register */
#define REG_USART1_CSR             (0x40028014) /**< \brief (USART1) Channel Status Register */
#define REG_USART1_RHR             (0x40028018) /**< \brief (USART1) Receiver Holding Register */
#define REG_USART1_THR             (0x4002801C) /**< \brief (USART1) Transmitter Holding Register */
#define REG_USART1_BRGR            (0x40028020) /**< \brief (USART1) Baud Rate Generator Register */
#define REG_USART1_RTOR            (0x40028024) /**< \brief (USART1) Receiver Time-out Register */
#define REG_USART1_TTGR            (0x40028028) /**< \brief (USART1) Transmitter Timeguard Register */
#define REG_USART1_FIDI            (0x40028040) /**< \brief (USART1) FI DI Ratio Register */
#define REG_USART1_NER             (0x40028044) /**< \brief (USART1) Number of Errors Register */
#define REG_USART1_IFR             (0x4002804C) /**< \brief (USART1) IrDA Filter Register */
#define REG_USART1_MAN             (0x40028050) /**< \brief (USART1) Manchester Configuration Register */
#define REG_USART1_LINMR           (0x40028054) /**< \brief (USART1) LIN Mode Register */
#define REG_USART1_LINIR           (0x40028058) /**< \brief (USART1) LIN Identifier Register */
#define REG_USART1_LINBRR          (0x4002805C) /**< \brief (USART1) LIN Baud Rate Register */
#define REG_USART1_WPMR            (0x400280E4) /**< \brief (USART1) Write Protect Mode Register */
#define REG_USART1_WPSR            (0x400280E8) /**< \brief (USART1) Write Protect Status Register */
#define REG_USART1_VERSION         (0x400280FC) /**< \brief (USART1) Version Register */
#else
#define REG_USART1_CR              (*(WoReg  *)0x40028000UL) /**< \brief (USART1) Control Register */
#define REG_USART1_MR              (*(RwReg  *)0x40028004UL) /**< \brief (USART1) Mode Register */
#define REG_USART1_IER             (*(WoReg  *)0x40028008UL) /**< \brief (USART1) Interrupt Enable Register */
#define REG_USART1_IDR             (*(WoReg  *)0x4002800CUL) /**< \brief (USART1) Interrupt Disable Register */
#define REG_USART1_IMR             (*(RoReg  *)0x40028010UL) /**< \brief (USART1) Interrupt Mask Register */
#define REG_USART1_CSR             (*(RoReg  *)0x40028014UL) /**< \brief (USART1) Channel Status Register */
#define REG_USART1_RHR             (*(RoReg  *)0x40028018UL) /**< \brief (USART1) Receiver Holding Register */
#define REG_USART1_THR             (*(WoReg  *)0x4002801CUL) /**< \brief (USART1) Transmitter Holding Register */
#define REG_USART1_BRGR            (*(RwReg  *)0x40028020UL) /**< \brief (USART1) Baud Rate Generator Register */
#define REG_USART1_RTOR            (*(RwReg  *)0x40028024UL) /**< \brief (USART1) Receiver Time-out Register */
#define REG_USART1_TTGR            (*(RwReg  *)0x40028028UL) /**< \brief (USART1) Transmitter Timeguard Register */
#define REG_USART1_FIDI            (*(RwReg  *)0x40028040UL) /**< \brief (USART1) FI DI Ratio Register */
#define REG_USART1_NER             (*(RoReg  *)0x40028044UL) /**< \brief (USART1) Number of Errors Register */
#define REG_USART1_IFR             (*(RwReg  *)0x4002804CUL) /**< \brief (USART1) IrDA Filter Register */
#define REG_USART1_MAN             (*(RwReg  *)0x40028050UL) /**< \brief (USART1) Manchester Configuration Register */
#define REG_USART1_LINMR           (*(RwReg  *)0x40028054UL) /**< \brief (USART1) LIN Mode Register */
#define REG_USART1_LINIR           (*(RwReg  *)0x40028058UL) /**< \brief (USART1) LIN Identifier Register */
#define REG_USART1_LINBRR          (*(RoReg  *)0x4002805CUL) /**< \brief (USART1) LIN Baud Rate Register */
#define REG_USART1_WPMR            (*(RwReg  *)0x400280E4UL) /**< \brief (USART1) Write Protect Mode Register */
#define REG_USART1_WPSR            (*(RoReg  *)0x400280E8UL) /**< \brief (USART1) Write Protect Status Register */
#define REG_USART1_VERSION         (*(RoReg  *)0x400280FCUL) /**< \brief (USART1) Version Register */
#endif /* (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

/* ========== Instance parameters for USART1 peripheral ========== */
#define USART1_CLK_DIV              8       
#define USART1_PDCA_ID_RX           1       
#define USART1_PDCA_ID_TX           19      

#endif /* _SAM4L_USART1_INSTANCE_ */
