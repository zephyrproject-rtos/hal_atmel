/**
 * \file
 *
 * \brief Peripheral I/O description for SAM4LS8A
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

#ifndef _SAM4LS8A_PIO_
#define _SAM4LS8A_PIO_

#define PIN_PA00                           0  /**< \brief Pin Number for PA00 */
#define GPIO_PA00                _UL_(1 <<  0) /**< \brief GPIO Mask  for PA00 */
#define PIN_PA01                           1  /**< \brief Pin Number for PA01 */
#define GPIO_PA01                _UL_(1 <<  1) /**< \brief GPIO Mask  for PA01 */
#define PIN_PA02                           2  /**< \brief Pin Number for PA02 */
#define GPIO_PA02                _UL_(1 <<  2) /**< \brief GPIO Mask  for PA02 */
#define PIN_PA03                           3  /**< \brief Pin Number for PA03 */
#define GPIO_PA03                _UL_(1 <<  3) /**< \brief GPIO Mask  for PA03 */
#define PIN_PA04                           4  /**< \brief Pin Number for PA04 */
#define GPIO_PA04                _UL_(1 <<  4) /**< \brief GPIO Mask  for PA04 */
#define PIN_PA05                           5  /**< \brief Pin Number for PA05 */
#define GPIO_PA05                _UL_(1 <<  5) /**< \brief GPIO Mask  for PA05 */
#define PIN_PA06                           6  /**< \brief Pin Number for PA06 */
#define GPIO_PA06                _UL_(1 <<  6) /**< \brief GPIO Mask  for PA06 */
#define PIN_PA07                           7  /**< \brief Pin Number for PA07 */
#define GPIO_PA07                _UL_(1 <<  7) /**< \brief GPIO Mask  for PA07 */
#define PIN_PA08                           8  /**< \brief Pin Number for PA08 */
#define GPIO_PA08                _UL_(1 <<  8) /**< \brief GPIO Mask  for PA08 */
#define PIN_PA09                           9  /**< \brief Pin Number for PA09 */
#define GPIO_PA09                _UL_(1 <<  9) /**< \brief GPIO Mask  for PA09 */
#define PIN_PA10                          10  /**< \brief Pin Number for PA10 */
#define GPIO_PA10                _UL_(1 << 10) /**< \brief GPIO Mask  for PA10 */
#define PIN_PA11                          11  /**< \brief Pin Number for PA11 */
#define GPIO_PA11                _UL_(1 << 11) /**< \brief GPIO Mask  for PA11 */
#define PIN_PA12                          12  /**< \brief Pin Number for PA12 */
#define GPIO_PA12                _UL_(1 << 12) /**< \brief GPIO Mask  for PA12 */
#define PIN_PA13                          13  /**< \brief Pin Number for PA13 */
#define GPIO_PA13                _UL_(1 << 13) /**< \brief GPIO Mask  for PA13 */
#define PIN_PA14                          14  /**< \brief Pin Number for PA14 */
#define GPIO_PA14                _UL_(1 << 14) /**< \brief GPIO Mask  for PA14 */
#define PIN_PA15                          15  /**< \brief Pin Number for PA15 */
#define GPIO_PA15                _UL_(1 << 15) /**< \brief GPIO Mask  for PA15 */
#define PIN_PA16                          16  /**< \brief Pin Number for PA16 */
#define GPIO_PA16                _UL_(1 << 16) /**< \brief GPIO Mask  for PA16 */
#define PIN_PA17                          17  /**< \brief Pin Number for PA17 */
#define GPIO_PA17                _UL_(1 << 17) /**< \brief GPIO Mask  for PA17 */
#define PIN_PA18                          18  /**< \brief Pin Number for PA18 */
#define GPIO_PA18                _UL_(1 << 18) /**< \brief GPIO Mask  for PA18 */
#define PIN_PA19                          19  /**< \brief Pin Number for PA19 */
#define GPIO_PA19                _UL_(1 << 19) /**< \brief GPIO Mask  for PA19 */
#define PIN_PA20                          20  /**< \brief Pin Number for PA20 */
#define GPIO_PA20                _UL_(1 << 20) /**< \brief GPIO Mask  for PA20 */
#define PIN_PA21                          21  /**< \brief Pin Number for PA21 */
#define GPIO_PA21                _UL_(1 << 21) /**< \brief GPIO Mask  for PA21 */
#define PIN_PA22                          22  /**< \brief Pin Number for PA22 */
#define GPIO_PA22                _UL_(1 << 22) /**< \brief GPIO Mask  for PA22 */
#define PIN_PA23                          23  /**< \brief Pin Number for PA23 */
#define GPIO_PA23                _UL_(1 << 23) /**< \brief GPIO Mask  for PA23 */
#define PIN_PA24                          24  /**< \brief Pin Number for PA24 */
#define GPIO_PA24                _UL_(1 << 24) /**< \brief GPIO Mask  for PA24 */
#define PIN_PA25                          25  /**< \brief Pin Number for PA25 */
#define GPIO_PA25                _UL_(1 << 25) /**< \brief GPIO Mask  for PA25 */
#define PIN_PA26                          26  /**< \brief Pin Number for PA26 */
#define GPIO_PA26                _UL_(1 << 26) /**< \brief GPIO Mask  for PA26 */
#define PIN_PA27                          27  /**< \brief Pin Number for PA27 */
#define GPIO_PA27                _UL_(1 << 27) /**< \brief GPIO Mask  for PA27 */
#define PIN_PA28                          28  /**< \brief Pin Number for PA28 */
#define GPIO_PA28                _UL_(1 << 28) /**< \brief GPIO Mask  for PA28 */
#define PIN_PA29                          29  /**< \brief Pin Number for PA29 */
#define GPIO_PA29                _UL_(1 << 29) /**< \brief GPIO Mask  for PA29 */
#define PIN_PA30                          30  /**< \brief Pin Number for PA30 */
#define GPIO_PA30                _UL_(1 << 30) /**< \brief GPIO Mask  for PA30 */
#define PIN_PA31                          31  /**< \brief Pin Number for PA31 */
#define GPIO_PA31                _UL_(1 << 31) /**< \brief GPIO Mask  for PA31 */
/* ========== GPIO definition for TWIMS0 peripheral ========== */
#define PIN_PA24B_TWIMS0_TWCK          _L_(24) /**< \brief TWIMS0 signal: TWCK on PA24 mux B */
#define MUX_PA24B_TWIMS0_TWCK           _L_(1)
#define PINMUX_PA24B_TWIMS0_TWCK   ((PIN_PA24B_TWIMS0_TWCK << 16) | MUX_PA24B_TWIMS0_TWCK)
#define GPIO_PA24B_TWIMS0_TWCK   _UL_(1 << 24)
#define PIN_PA23B_TWIMS0_TWD           _L_(23) /**< \brief TWIMS0 signal: TWD on PA23 mux B */
#define MUX_PA23B_TWIMS0_TWD            _L_(1)
#define PINMUX_PA23B_TWIMS0_TWD    ((PIN_PA23B_TWIMS0_TWD << 16) | MUX_PA23B_TWIMS0_TWD)
#define GPIO_PA23B_TWIMS0_TWD    _UL_(1 << 23)
/* ========== GPIO definition for TWIMS2 peripheral ========== */
#define PIN_PA22E_TWIMS2_TWCK          _L_(22) /**< \brief TWIMS2 signal: TWCK on PA22 mux E */
#define MUX_PA22E_TWIMS2_TWCK           _L_(4)
#define PINMUX_PA22E_TWIMS2_TWCK   ((PIN_PA22E_TWIMS2_TWCK << 16) | MUX_PA22E_TWIMS2_TWCK)
#define GPIO_PA22E_TWIMS2_TWCK   _UL_(1 << 22)
#define PIN_PA21E_TWIMS2_TWD           _L_(21) /**< \brief TWIMS2 signal: TWD on PA21 mux E */
#define MUX_PA21E_TWIMS2_TWD            _L_(4)
#define PINMUX_PA21E_TWIMS2_TWD    ((PIN_PA21E_TWIMS2_TWD << 16) | MUX_PA21E_TWIMS2_TWD)
#define GPIO_PA21E_TWIMS2_TWD    _UL_(1 << 21)
/* ========== GPIO definition for IISC peripheral ========== */
#define PIN_PA31B_IISC_IMCK            _L_(31) /**< \brief IISC signal: IMCK on PA31 mux B */
#define MUX_PA31B_IISC_IMCK             _L_(1)
#define PINMUX_PA31B_IISC_IMCK     ((PIN_PA31B_IISC_IMCK << 16) | MUX_PA31B_IISC_IMCK)
#define GPIO_PA31B_IISC_IMCK     _UL_(1 << 31)
#define PIN_PA27B_IISC_ISCK            _L_(27) /**< \brief IISC signal: ISCK on PA27 mux B */
#define MUX_PA27B_IISC_ISCK             _L_(1)
#define PINMUX_PA27B_IISC_ISCK     ((PIN_PA27B_IISC_ISCK << 16) | MUX_PA27B_IISC_ISCK)
#define GPIO_PA27B_IISC_ISCK     _UL_(1 << 27)
#define PIN_PA28B_IISC_ISDI            _L_(28) /**< \brief IISC signal: ISDI on PA28 mux B */
#define MUX_PA28B_IISC_ISDI             _L_(1)
#define PINMUX_PA28B_IISC_ISDI     ((PIN_PA28B_IISC_ISDI << 16) | MUX_PA28B_IISC_ISDI)
#define GPIO_PA28B_IISC_ISDI     _UL_(1 << 28)
#define PIN_PA30B_IISC_ISDO            _L_(30) /**< \brief IISC signal: ISDO on PA30 mux B */
#define MUX_PA30B_IISC_ISDO             _L_(1)
#define PINMUX_PA30B_IISC_ISDO     ((PIN_PA30B_IISC_ISDO << 16) | MUX_PA30B_IISC_ISDO)
#define GPIO_PA30B_IISC_ISDO     _UL_(1 << 30)
#define PIN_PA29B_IISC_IWS             _L_(29) /**< \brief IISC signal: IWS on PA29 mux B */
#define MUX_PA29B_IISC_IWS              _L_(1)
#define PINMUX_PA29B_IISC_IWS      ((PIN_PA29B_IISC_IWS << 16) | MUX_PA29B_IISC_IWS)
#define GPIO_PA29B_IISC_IWS      _UL_(1 << 29)
/* ========== GPIO definition for SPI peripheral ========== */
#define PIN_PA03B_SPI_MISO              _L_(3) /**< \brief SPI signal: MISO on PA03 mux B */
#define MUX_PA03B_SPI_MISO              _L_(1)
#define PINMUX_PA03B_SPI_MISO      ((PIN_PA03B_SPI_MISO << 16) | MUX_PA03B_SPI_MISO)
#define GPIO_PA03B_SPI_MISO      _UL_(1 <<  3)
#define PIN_PA21A_SPI_MISO             _L_(21) /**< \brief SPI signal: MISO on PA21 mux A */
#define MUX_PA21A_SPI_MISO              _L_(0)
#define PINMUX_PA21A_SPI_MISO      ((PIN_PA21A_SPI_MISO << 16) | MUX_PA21A_SPI_MISO)
#define GPIO_PA21A_SPI_MISO      _UL_(1 << 21)
#define PIN_PA27A_SPI_MISO             _L_(27) /**< \brief SPI signal: MISO on PA27 mux A */
#define MUX_PA27A_SPI_MISO              _L_(0)
#define PINMUX_PA27A_SPI_MISO      ((PIN_PA27A_SPI_MISO << 16) | MUX_PA27A_SPI_MISO)
#define GPIO_PA27A_SPI_MISO      _UL_(1 << 27)
#define PIN_PA22A_SPI_MOSI             _L_(22) /**< \brief SPI signal: MOSI on PA22 mux A */
#define MUX_PA22A_SPI_MOSI              _L_(0)
#define PINMUX_PA22A_SPI_MOSI      ((PIN_PA22A_SPI_MOSI << 16) | MUX_PA22A_SPI_MOSI)
#define GPIO_PA22A_SPI_MOSI      _UL_(1 << 22)
#define PIN_PA28A_SPI_MOSI             _L_(28) /**< \brief SPI signal: MOSI on PA28 mux A */
#define MUX_PA28A_SPI_MOSI              _L_(0)
#define PINMUX_PA28A_SPI_MOSI      ((PIN_PA28A_SPI_MOSI << 16) | MUX_PA28A_SPI_MOSI)
#define GPIO_PA28A_SPI_MOSI      _UL_(1 << 28)
#define PIN_PA02B_SPI_NPCS0             _L_(2) /**< \brief SPI signal: NPCS0 on PA02 mux B */
#define MUX_PA02B_SPI_NPCS0             _L_(1)
#define PINMUX_PA02B_SPI_NPCS0     ((PIN_PA02B_SPI_NPCS0 << 16) | MUX_PA02B_SPI_NPCS0)
#define GPIO_PA02B_SPI_NPCS0     _UL_(1 <<  2)
#define PIN_PA24A_SPI_NPCS0            _L_(24) /**< \brief SPI signal: NPCS0 on PA24 mux A */
#define MUX_PA24A_SPI_NPCS0             _L_(0)
#define PINMUX_PA24A_SPI_NPCS0     ((PIN_PA24A_SPI_NPCS0 << 16) | MUX_PA24A_SPI_NPCS0)
#define GPIO_PA24A_SPI_NPCS0     _UL_(1 << 24)
#define PIN_PA30A_SPI_NPCS0            _L_(30) /**< \brief SPI signal: NPCS0 on PA30 mux A */
#define MUX_PA30A_SPI_NPCS0             _L_(0)
#define PINMUX_PA30A_SPI_NPCS0     ((PIN_PA30A_SPI_NPCS0 << 16) | MUX_PA30A_SPI_NPCS0)
#define GPIO_PA30A_SPI_NPCS0     _UL_(1 << 30)
#define PIN_PA13C_SPI_NPCS1            _L_(13) /**< \brief SPI signal: NPCS1 on PA13 mux C */
#define MUX_PA13C_SPI_NPCS1             _L_(2)
#define PINMUX_PA13C_SPI_NPCS1     ((PIN_PA13C_SPI_NPCS1 << 16) | MUX_PA13C_SPI_NPCS1)
#define GPIO_PA13C_SPI_NPCS1     _UL_(1 << 13)
#define PIN_PA31A_SPI_NPCS1            _L_(31) /**< \brief SPI signal: NPCS1 on PA31 mux A */
#define MUX_PA31A_SPI_NPCS1             _L_(0)
#define PINMUX_PA31A_SPI_NPCS1     ((PIN_PA31A_SPI_NPCS1 << 16) | MUX_PA31A_SPI_NPCS1)
#define GPIO_PA31A_SPI_NPCS1     _UL_(1 << 31)
#define PIN_PA14C_SPI_NPCS2            _L_(14) /**< \brief SPI signal: NPCS2 on PA14 mux C */
#define MUX_PA14C_SPI_NPCS2             _L_(2)
#define PINMUX_PA14C_SPI_NPCS2     ((PIN_PA14C_SPI_NPCS2 << 16) | MUX_PA14C_SPI_NPCS2)
#define GPIO_PA14C_SPI_NPCS2     _UL_(1 << 14)
#define PIN_PA15C_SPI_NPCS3            _L_(15) /**< \brief SPI signal: NPCS3 on PA15 mux C */
#define MUX_PA15C_SPI_NPCS3             _L_(2)
#define PINMUX_PA15C_SPI_NPCS3     ((PIN_PA15C_SPI_NPCS3 << 16) | MUX_PA15C_SPI_NPCS3)
#define GPIO_PA15C_SPI_NPCS3     _UL_(1 << 15)
#define PIN_PA23A_SPI_SCK              _L_(23) /**< \brief SPI signal: SCK on PA23 mux A */
#define MUX_PA23A_SPI_SCK               _L_(0)
#define PINMUX_PA23A_SPI_SCK       ((PIN_PA23A_SPI_SCK << 16) | MUX_PA23A_SPI_SCK)
#define GPIO_PA23A_SPI_SCK       _UL_(1 << 23)
#define PIN_PA29A_SPI_SCK              _L_(29) /**< \brief SPI signal: SCK on PA29 mux A */
#define MUX_PA29A_SPI_SCK               _L_(0)
#define PINMUX_PA29A_SPI_SCK       ((PIN_PA29A_SPI_SCK << 16) | MUX_PA29A_SPI_SCK)
#define GPIO_PA29A_SPI_SCK       _UL_(1 << 29)
/* ========== GPIO definition for TC0 peripheral ========== */
#define PIN_PA08B_TC0_A0                _L_(8) /**< \brief TC0 signal: A0 on PA08 mux B */
#define MUX_PA08B_TC0_A0                _L_(1)
#define PINMUX_PA08B_TC0_A0        ((PIN_PA08B_TC0_A0 << 16) | MUX_PA08B_TC0_A0)
#define GPIO_PA08B_TC0_A0        _UL_(1 <<  8)
#define PIN_PA10B_TC0_A1               _L_(10) /**< \brief TC0 signal: A1 on PA10 mux B */
#define MUX_PA10B_TC0_A1                _L_(1)
#define PINMUX_PA10B_TC0_A1        ((PIN_PA10B_TC0_A1 << 16) | MUX_PA10B_TC0_A1)
#define GPIO_PA10B_TC0_A1        _UL_(1 << 10)
#define PIN_PA12B_TC0_A2               _L_(12) /**< \brief TC0 signal: A2 on PA12 mux B */
#define MUX_PA12B_TC0_A2                _L_(1)
#define PINMUX_PA12B_TC0_A2        ((PIN_PA12B_TC0_A2 << 16) | MUX_PA12B_TC0_A2)
#define GPIO_PA12B_TC0_A2        _UL_(1 << 12)
#define PIN_PA09B_TC0_B0                _L_(9) /**< \brief TC0 signal: B0 on PA09 mux B */
#define MUX_PA09B_TC0_B0                _L_(1)
#define PINMUX_PA09B_TC0_B0        ((PIN_PA09B_TC0_B0 << 16) | MUX_PA09B_TC0_B0)
#define GPIO_PA09B_TC0_B0        _UL_(1 <<  9)
#define PIN_PA11B_TC0_B1               _L_(11) /**< \brief TC0 signal: B1 on PA11 mux B */
#define MUX_PA11B_TC0_B1                _L_(1)
#define PINMUX_PA11B_TC0_B1        ((PIN_PA11B_TC0_B1 << 16) | MUX_PA11B_TC0_B1)
#define GPIO_PA11B_TC0_B1        _UL_(1 << 11)
#define PIN_PA13B_TC0_B2               _L_(13) /**< \brief TC0 signal: B2 on PA13 mux B */
#define MUX_PA13B_TC0_B2                _L_(1)
#define PINMUX_PA13B_TC0_B2        ((PIN_PA13B_TC0_B2 << 16) | MUX_PA13B_TC0_B2)
#define GPIO_PA13B_TC0_B2        _UL_(1 << 13)
#define PIN_PA14B_TC0_CLK0             _L_(14) /**< \brief TC0 signal: CLK0 on PA14 mux B */
#define MUX_PA14B_TC0_CLK0              _L_(1)
#define PINMUX_PA14B_TC0_CLK0      ((PIN_PA14B_TC0_CLK0 << 16) | MUX_PA14B_TC0_CLK0)
#define GPIO_PA14B_TC0_CLK0      _UL_(1 << 14)
#define PIN_PA15B_TC0_CLK1             _L_(15) /**< \brief TC0 signal: CLK1 on PA15 mux B */
#define MUX_PA15B_TC0_CLK1              _L_(1)
#define PINMUX_PA15B_TC0_CLK1      ((PIN_PA15B_TC0_CLK1 << 16) | MUX_PA15B_TC0_CLK1)
#define GPIO_PA15B_TC0_CLK1      _UL_(1 << 15)
#define PIN_PA16B_TC0_CLK2             _L_(16) /**< \brief TC0 signal: CLK2 on PA16 mux B */
#define MUX_PA16B_TC0_CLK2              _L_(1)
#define PINMUX_PA16B_TC0_CLK2      ((PIN_PA16B_TC0_CLK2 << 16) | MUX_PA16B_TC0_CLK2)
#define GPIO_PA16B_TC0_CLK2      _UL_(1 << 16)
/* ========== GPIO definition for USART0 peripheral ========== */
#define PIN_PA04B_USART0_CLK            _L_(4) /**< \brief USART0 signal: CLK on PA04 mux B */
#define MUX_PA04B_USART0_CLK            _L_(1)
#define PINMUX_PA04B_USART0_CLK    ((PIN_PA04B_USART0_CLK << 16) | MUX_PA04B_USART0_CLK)
#define GPIO_PA04B_USART0_CLK    _UL_(1 <<  4)
#define PIN_PA10A_USART0_CLK           _L_(10) /**< \brief USART0 signal: CLK on PA10 mux A */
#define MUX_PA10A_USART0_CLK            _L_(0)
#define PINMUX_PA10A_USART0_CLK    ((PIN_PA10A_USART0_CLK << 16) | MUX_PA10A_USART0_CLK)
#define GPIO_PA10A_USART0_CLK    _UL_(1 << 10)
#define PIN_PA09A_USART0_CTS            _L_(9) /**< \brief USART0 signal: CTS on PA09 mux A */
#define MUX_PA09A_USART0_CTS            _L_(0)
#define PINMUX_PA09A_USART0_CTS    ((PIN_PA09A_USART0_CTS << 16) | MUX_PA09A_USART0_CTS)
#define GPIO_PA09A_USART0_CTS    _UL_(1 <<  9)
#define PIN_PA06B_USART0_RTS            _L_(6) /**< \brief USART0 signal: RTS on PA06 mux B */
#define MUX_PA06B_USART0_RTS            _L_(1)
#define PINMUX_PA06B_USART0_RTS    ((PIN_PA06B_USART0_RTS << 16) | MUX_PA06B_USART0_RTS)
#define GPIO_PA06B_USART0_RTS    _UL_(1 <<  6)
#define PIN_PA08A_USART0_RTS            _L_(8) /**< \brief USART0 signal: RTS on PA08 mux A */
#define MUX_PA08A_USART0_RTS            _L_(0)
#define PINMUX_PA08A_USART0_RTS    ((PIN_PA08A_USART0_RTS << 16) | MUX_PA08A_USART0_RTS)
#define GPIO_PA08A_USART0_RTS    _UL_(1 <<  8)
#define PIN_PA05B_USART0_RXD            _L_(5) /**< \brief USART0 signal: RXD on PA05 mux B */
#define MUX_PA05B_USART0_RXD            _L_(1)
#define PINMUX_PA05B_USART0_RXD    ((PIN_PA05B_USART0_RXD << 16) | MUX_PA05B_USART0_RXD)
#define GPIO_PA05B_USART0_RXD    _UL_(1 <<  5)
#define PIN_PA11A_USART0_RXD           _L_(11) /**< \brief USART0 signal: RXD on PA11 mux A */
#define MUX_PA11A_USART0_RXD            _L_(0)
#define PINMUX_PA11A_USART0_RXD    ((PIN_PA11A_USART0_RXD << 16) | MUX_PA11A_USART0_RXD)
#define GPIO_PA11A_USART0_RXD    _UL_(1 << 11)
#define PIN_PA07B_USART0_TXD            _L_(7) /**< \brief USART0 signal: TXD on PA07 mux B */
#define MUX_PA07B_USART0_TXD            _L_(1)
#define PINMUX_PA07B_USART0_TXD    ((PIN_PA07B_USART0_TXD << 16) | MUX_PA07B_USART0_TXD)
#define GPIO_PA07B_USART0_TXD    _UL_(1 <<  7)
#define PIN_PA12A_USART0_TXD           _L_(12) /**< \brief USART0 signal: TXD on PA12 mux A */
#define MUX_PA12A_USART0_TXD            _L_(0)
#define PINMUX_PA12A_USART0_TXD    ((PIN_PA12A_USART0_TXD << 16) | MUX_PA12A_USART0_TXD)
#define GPIO_PA12A_USART0_TXD    _UL_(1 << 12)
/* ========== GPIO definition for USART1 peripheral ========== */
#define PIN_PA14A_USART1_CLK           _L_(14) /**< \brief USART1 signal: CLK on PA14 mux A */
#define MUX_PA14A_USART1_CLK            _L_(0)
#define PINMUX_PA14A_USART1_CLK    ((PIN_PA14A_USART1_CLK << 16) | MUX_PA14A_USART1_CLK)
#define GPIO_PA14A_USART1_CLK    _UL_(1 << 14)
#define PIN_PA21B_USART1_CTS           _L_(21) /**< \brief USART1 signal: CTS on PA21 mux B */
#define MUX_PA21B_USART1_CTS            _L_(1)
#define PINMUX_PA21B_USART1_CTS    ((PIN_PA21B_USART1_CTS << 16) | MUX_PA21B_USART1_CTS)
#define GPIO_PA21B_USART1_CTS    _UL_(1 << 21)
#define PIN_PA13A_USART1_RTS           _L_(13) /**< \brief USART1 signal: RTS on PA13 mux A */
#define MUX_PA13A_USART1_RTS            _L_(0)
#define PINMUX_PA13A_USART1_RTS    ((PIN_PA13A_USART1_RTS << 16) | MUX_PA13A_USART1_RTS)
#define GPIO_PA13A_USART1_RTS    _UL_(1 << 13)
#define PIN_PA15A_USART1_RXD           _L_(15) /**< \brief USART1 signal: RXD on PA15 mux A */
#define MUX_PA15A_USART1_RXD            _L_(0)
#define PINMUX_PA15A_USART1_RXD    ((PIN_PA15A_USART1_RXD << 16) | MUX_PA15A_USART1_RXD)
#define GPIO_PA15A_USART1_RXD    _UL_(1 << 15)
#define PIN_PA16A_USART1_TXD           _L_(16) /**< \brief USART1 signal: TXD on PA16 mux A */
#define MUX_PA16A_USART1_TXD            _L_(0)
#define PINMUX_PA16A_USART1_TXD    ((PIN_PA16A_USART1_TXD << 16) | MUX_PA16A_USART1_TXD)
#define GPIO_PA16A_USART1_TXD    _UL_(1 << 16)
/* ========== GPIO definition for USART2 peripheral ========== */
#define PIN_PA18A_USART2_CLK           _L_(18) /**< \brief USART2 signal: CLK on PA18 mux A */
#define MUX_PA18A_USART2_CLK            _L_(0)
#define PINMUX_PA18A_USART2_CLK    ((PIN_PA18A_USART2_CLK << 16) | MUX_PA18A_USART2_CLK)
#define GPIO_PA18A_USART2_CLK    _UL_(1 << 18)
#define PIN_PA22B_USART2_CTS           _L_(22) /**< \brief USART2 signal: CTS on PA22 mux B */
#define MUX_PA22B_USART2_CTS            _L_(1)
#define PINMUX_PA22B_USART2_CTS    ((PIN_PA22B_USART2_CTS << 16) | MUX_PA22B_USART2_CTS)
#define GPIO_PA22B_USART2_CTS    _UL_(1 << 22)
#define PIN_PA17A_USART2_RTS           _L_(17) /**< \brief USART2 signal: RTS on PA17 mux A */
#define MUX_PA17A_USART2_RTS            _L_(0)
#define PINMUX_PA17A_USART2_RTS    ((PIN_PA17A_USART2_RTS << 16) | MUX_PA17A_USART2_RTS)
#define GPIO_PA17A_USART2_RTS    _UL_(1 << 17)
#define PIN_PA25B_USART2_RXD           _L_(25) /**< \brief USART2 signal: RXD on PA25 mux B */
#define MUX_PA25B_USART2_RXD            _L_(1)
#define PINMUX_PA25B_USART2_RXD    ((PIN_PA25B_USART2_RXD << 16) | MUX_PA25B_USART2_RXD)
#define GPIO_PA25B_USART2_RXD    _UL_(1 << 25)
#define PIN_PA19A_USART2_RXD           _L_(19) /**< \brief USART2 signal: RXD on PA19 mux A */
#define MUX_PA19A_USART2_RXD            _L_(0)
#define PINMUX_PA19A_USART2_RXD    ((PIN_PA19A_USART2_RXD << 16) | MUX_PA19A_USART2_RXD)
#define GPIO_PA19A_USART2_RXD    _UL_(1 << 19)
#define PIN_PA26B_USART2_TXD           _L_(26) /**< \brief USART2 signal: TXD on PA26 mux B */
#define MUX_PA26B_USART2_TXD            _L_(1)
#define PINMUX_PA26B_USART2_TXD    ((PIN_PA26B_USART2_TXD << 16) | MUX_PA26B_USART2_TXD)
#define GPIO_PA26B_USART2_TXD    _UL_(1 << 26)
#define PIN_PA20A_USART2_TXD           _L_(20) /**< \brief USART2 signal: TXD on PA20 mux A */
#define MUX_PA20A_USART2_TXD            _L_(0)
#define PINMUX_PA20A_USART2_TXD    ((PIN_PA20A_USART2_TXD << 16) | MUX_PA20A_USART2_TXD)
#define GPIO_PA20A_USART2_TXD    _UL_(1 << 20)
/* ========== GPIO definition for USART3 peripheral ========== */
#define PIN_PA29E_USART3_CLK           _L_(29) /**< \brief USART3 signal: CLK on PA29 mux E */
#define MUX_PA29E_USART3_CLK            _L_(4)
#define PINMUX_PA29E_USART3_CLK    ((PIN_PA29E_USART3_CLK << 16) | MUX_PA29E_USART3_CLK)
#define GPIO_PA29E_USART3_CLK    _UL_(1 << 29)
#define PIN_PA28E_USART3_CTS           _L_(28) /**< \brief USART3 signal: CTS on PA28 mux E */
#define MUX_PA28E_USART3_CTS            _L_(4)
#define PINMUX_PA28E_USART3_CTS    ((PIN_PA28E_USART3_CTS << 16) | MUX_PA28E_USART3_CTS)
#define GPIO_PA28E_USART3_CTS    _UL_(1 << 28)
#define PIN_PA27E_USART3_RTS           _L_(27) /**< \brief USART3 signal: RTS on PA27 mux E */
#define MUX_PA27E_USART3_RTS            _L_(4)
#define PINMUX_PA27E_USART3_RTS    ((PIN_PA27E_USART3_RTS << 16) | MUX_PA27E_USART3_RTS)
#define GPIO_PA27E_USART3_RTS    _UL_(1 << 27)
#define PIN_PA30E_USART3_RXD           _L_(30) /**< \brief USART3 signal: RXD on PA30 mux E */
#define MUX_PA30E_USART3_RXD            _L_(4)
#define PINMUX_PA30E_USART3_RXD    ((PIN_PA30E_USART3_RXD << 16) | MUX_PA30E_USART3_RXD)
#define GPIO_PA30E_USART3_RXD    _UL_(1 << 30)
#define PIN_PA31E_USART3_TXD           _L_(31) /**< \brief USART3 signal: TXD on PA31 mux E */
#define MUX_PA31E_USART3_TXD            _L_(4)
#define PINMUX_PA31E_USART3_TXD    ((PIN_PA31E_USART3_TXD << 16) | MUX_PA31E_USART3_TXD)
#define GPIO_PA31E_USART3_TXD    _UL_(1 << 31)
/* ========== GPIO definition for ADCIFE peripheral ========== */
#define PIN_PA04A_ADCIFE_AD0            _L_(4) /**< \brief ADCIFE signal: AD0 on PA04 mux A */
#define MUX_PA04A_ADCIFE_AD0            _L_(0)
#define PINMUX_PA04A_ADCIFE_AD0    ((PIN_PA04A_ADCIFE_AD0 << 16) | MUX_PA04A_ADCIFE_AD0)
#define GPIO_PA04A_ADCIFE_AD0    _UL_(1 <<  4)
#define PIN_PA05A_ADCIFE_AD1            _L_(5) /**< \brief ADCIFE signal: AD1 on PA05 mux A */
#define MUX_PA05A_ADCIFE_AD1            _L_(0)
#define PINMUX_PA05A_ADCIFE_AD1    ((PIN_PA05A_ADCIFE_AD1 << 16) | MUX_PA05A_ADCIFE_AD1)
#define GPIO_PA05A_ADCIFE_AD1    _UL_(1 <<  5)
#define PIN_PA07A_ADCIFE_AD2            _L_(7) /**< \brief ADCIFE signal: AD2 on PA07 mux A */
#define MUX_PA07A_ADCIFE_AD2            _L_(0)
#define PINMUX_PA07A_ADCIFE_AD2    ((PIN_PA07A_ADCIFE_AD2 << 16) | MUX_PA07A_ADCIFE_AD2)
#define GPIO_PA07A_ADCIFE_AD2    _UL_(1 <<  7)
#define PIN_PA05E_ADCIFE_TRIGGER        _L_(5) /**< \brief ADCIFE signal: TRIGGER on PA05 mux E */
#define MUX_PA05E_ADCIFE_TRIGGER        _L_(4)
#define PINMUX_PA05E_ADCIFE_TRIGGER  ((PIN_PA05E_ADCIFE_TRIGGER << 16) | MUX_PA05E_ADCIFE_TRIGGER)
#define GPIO_PA05E_ADCIFE_TRIGGER  _UL_(1 <<  5)
/* ========== GPIO definition for DACC peripheral ========== */
#define PIN_PA06A_DACC_VOUT             _L_(6) /**< \brief DACC signal: VOUT on PA06 mux A */
#define MUX_PA06A_DACC_VOUT             _L_(0)
#define PINMUX_PA06A_DACC_VOUT     ((PIN_PA06A_DACC_VOUT << 16) | MUX_PA06A_DACC_VOUT)
#define GPIO_PA06A_DACC_VOUT     _UL_(1 <<  6)
/* ========== GPIO definition for ACIFC peripheral ========== */
#define PIN_PA06E_ACIFC_ACAN0           _L_(6) /**< \brief ACIFC signal: ACAN0 on PA06 mux E */
#define MUX_PA06E_ACIFC_ACAN0           _L_(4)
#define PINMUX_PA06E_ACIFC_ACAN0   ((PIN_PA06E_ACIFC_ACAN0 << 16) | MUX_PA06E_ACIFC_ACAN0)
#define GPIO_PA06E_ACIFC_ACAN0   _UL_(1 <<  6)
#define PIN_PA07E_ACIFC_ACAP0           _L_(7) /**< \brief ACIFC signal: ACAP0 on PA07 mux E */
#define MUX_PA07E_ACIFC_ACAP0           _L_(4)
#define PINMUX_PA07E_ACIFC_ACAP0   ((PIN_PA07E_ACIFC_ACAP0 << 16) | MUX_PA07E_ACIFC_ACAP0)
#define GPIO_PA07E_ACIFC_ACAP0   _UL_(1 <<  7)
/* ========== GPIO definition for GLOC peripheral ========== */
#define PIN_PA06D_GLOC_IN0              _L_(6) /**< \brief GLOC signal: IN0 on PA06 mux D */
#define MUX_PA06D_GLOC_IN0              _L_(3)
#define PINMUX_PA06D_GLOC_IN0      ((PIN_PA06D_GLOC_IN0 << 16) | MUX_PA06D_GLOC_IN0)
#define GPIO_PA06D_GLOC_IN0      _UL_(1 <<  6)
#define PIN_PA20D_GLOC_IN0             _L_(20) /**< \brief GLOC signal: IN0 on PA20 mux D */
#define MUX_PA20D_GLOC_IN0              _L_(3)
#define PINMUX_PA20D_GLOC_IN0      ((PIN_PA20D_GLOC_IN0 << 16) | MUX_PA20D_GLOC_IN0)
#define GPIO_PA20D_GLOC_IN0      _UL_(1 << 20)
#define PIN_PA04D_GLOC_IN1              _L_(4) /**< \brief GLOC signal: IN1 on PA04 mux D */
#define MUX_PA04D_GLOC_IN1              _L_(3)
#define PINMUX_PA04D_GLOC_IN1      ((PIN_PA04D_GLOC_IN1 << 16) | MUX_PA04D_GLOC_IN1)
#define GPIO_PA04D_GLOC_IN1      _UL_(1 <<  4)
#define PIN_PA21D_GLOC_IN1             _L_(21) /**< \brief GLOC signal: IN1 on PA21 mux D */
#define MUX_PA21D_GLOC_IN1              _L_(3)
#define PINMUX_PA21D_GLOC_IN1      ((PIN_PA21D_GLOC_IN1 << 16) | MUX_PA21D_GLOC_IN1)
#define GPIO_PA21D_GLOC_IN1      _UL_(1 << 21)
#define PIN_PA05D_GLOC_IN2              _L_(5) /**< \brief GLOC signal: IN2 on PA05 mux D */
#define MUX_PA05D_GLOC_IN2              _L_(3)
#define PINMUX_PA05D_GLOC_IN2      ((PIN_PA05D_GLOC_IN2 << 16) | MUX_PA05D_GLOC_IN2)
#define GPIO_PA05D_GLOC_IN2      _UL_(1 <<  5)
#define PIN_PA22D_GLOC_IN2             _L_(22) /**< \brief GLOC signal: IN2 on PA22 mux D */
#define MUX_PA22D_GLOC_IN2              _L_(3)
#define PINMUX_PA22D_GLOC_IN2      ((PIN_PA22D_GLOC_IN2 << 16) | MUX_PA22D_GLOC_IN2)
#define GPIO_PA22D_GLOC_IN2      _UL_(1 << 22)
#define PIN_PA07D_GLOC_IN3              _L_(7) /**< \brief GLOC signal: IN3 on PA07 mux D */
#define MUX_PA07D_GLOC_IN3              _L_(3)
#define PINMUX_PA07D_GLOC_IN3      ((PIN_PA07D_GLOC_IN3 << 16) | MUX_PA07D_GLOC_IN3)
#define GPIO_PA07D_GLOC_IN3      _UL_(1 <<  7)
#define PIN_PA23D_GLOC_IN3             _L_(23) /**< \brief GLOC signal: IN3 on PA23 mux D */
#define MUX_PA23D_GLOC_IN3              _L_(3)
#define PINMUX_PA23D_GLOC_IN3      ((PIN_PA23D_GLOC_IN3 << 16) | MUX_PA23D_GLOC_IN3)
#define GPIO_PA23D_GLOC_IN3      _UL_(1 << 23)
#define PIN_PA27D_GLOC_IN4             _L_(27) /**< \brief GLOC signal: IN4 on PA27 mux D */
#define MUX_PA27D_GLOC_IN4              _L_(3)
#define PINMUX_PA27D_GLOC_IN4      ((PIN_PA27D_GLOC_IN4 << 16) | MUX_PA27D_GLOC_IN4)
#define GPIO_PA27D_GLOC_IN4      _UL_(1 << 27)
#define PIN_PA28D_GLOC_IN5             _L_(28) /**< \brief GLOC signal: IN5 on PA28 mux D */
#define MUX_PA28D_GLOC_IN5              _L_(3)
#define PINMUX_PA28D_GLOC_IN5      ((PIN_PA28D_GLOC_IN5 << 16) | MUX_PA28D_GLOC_IN5)
#define GPIO_PA28D_GLOC_IN5      _UL_(1 << 28)
#define PIN_PA29D_GLOC_IN6             _L_(29) /**< \brief GLOC signal: IN6 on PA29 mux D */
#define MUX_PA29D_GLOC_IN6              _L_(3)
#define PINMUX_PA29D_GLOC_IN6      ((PIN_PA29D_GLOC_IN6 << 16) | MUX_PA29D_GLOC_IN6)
#define GPIO_PA29D_GLOC_IN6      _UL_(1 << 29)
#define PIN_PA30D_GLOC_IN7             _L_(30) /**< \brief GLOC signal: IN7 on PA30 mux D */
#define MUX_PA30D_GLOC_IN7              _L_(3)
#define PINMUX_PA30D_GLOC_IN7      ((PIN_PA30D_GLOC_IN7 << 16) | MUX_PA30D_GLOC_IN7)
#define GPIO_PA30D_GLOC_IN7      _UL_(1 << 30)
#define PIN_PA08D_GLOC_OUT0             _L_(8) /**< \brief GLOC signal: OUT0 on PA08 mux D */
#define MUX_PA08D_GLOC_OUT0             _L_(3)
#define PINMUX_PA08D_GLOC_OUT0     ((PIN_PA08D_GLOC_OUT0 << 16) | MUX_PA08D_GLOC_OUT0)
#define GPIO_PA08D_GLOC_OUT0     _UL_(1 <<  8)
#define PIN_PA24D_GLOC_OUT0            _L_(24) /**< \brief GLOC signal: OUT0 on PA24 mux D */
#define MUX_PA24D_GLOC_OUT0             _L_(3)
#define PINMUX_PA24D_GLOC_OUT0     ((PIN_PA24D_GLOC_OUT0 << 16) | MUX_PA24D_GLOC_OUT0)
#define GPIO_PA24D_GLOC_OUT0     _UL_(1 << 24)
#define PIN_PA31D_GLOC_OUT1            _L_(31) /**< \brief GLOC signal: OUT1 on PA31 mux D */
#define MUX_PA31D_GLOC_OUT1             _L_(3)
#define PINMUX_PA31D_GLOC_OUT1     ((PIN_PA31D_GLOC_OUT1 << 16) | MUX_PA31D_GLOC_OUT1)
#define GPIO_PA31D_GLOC_OUT1     _UL_(1 << 31)
/* ========== GPIO definition for ABDACB peripheral ========== */
#define PIN_PA31C_ABDACB_CLK           _L_(31) /**< \brief ABDACB signal: CLK on PA31 mux C */
#define MUX_PA31C_ABDACB_CLK            _L_(2)
#define PINMUX_PA31C_ABDACB_CLK    ((PIN_PA31C_ABDACB_CLK << 16) | MUX_PA31C_ABDACB_CLK)
#define GPIO_PA31C_ABDACB_CLK    _UL_(1 << 31)
#define PIN_PA27C_ABDACB_DAC0          _L_(27) /**< \brief ABDACB signal: DAC0 on PA27 mux C */
#define MUX_PA27C_ABDACB_DAC0           _L_(2)
#define PINMUX_PA27C_ABDACB_DAC0   ((PIN_PA27C_ABDACB_DAC0 << 16) | MUX_PA27C_ABDACB_DAC0)
#define GPIO_PA27C_ABDACB_DAC0   _UL_(1 << 27)
#define PIN_PA17B_ABDACB_DAC0          _L_(17) /**< \brief ABDACB signal: DAC0 on PA17 mux B */
#define MUX_PA17B_ABDACB_DAC0           _L_(1)
#define PINMUX_PA17B_ABDACB_DAC0   ((PIN_PA17B_ABDACB_DAC0 << 16) | MUX_PA17B_ABDACB_DAC0)
#define GPIO_PA17B_ABDACB_DAC0   _UL_(1 << 17)
#define PIN_PA29C_ABDACB_DAC1          _L_(29) /**< \brief ABDACB signal: DAC1 on PA29 mux C */
#define MUX_PA29C_ABDACB_DAC1           _L_(2)
#define PINMUX_PA29C_ABDACB_DAC1   ((PIN_PA29C_ABDACB_DAC1 << 16) | MUX_PA29C_ABDACB_DAC1)
#define GPIO_PA29C_ABDACB_DAC1   _UL_(1 << 29)
#define PIN_PA19B_ABDACB_DAC1          _L_(19) /**< \brief ABDACB signal: DAC1 on PA19 mux B */
#define MUX_PA19B_ABDACB_DAC1           _L_(1)
#define PINMUX_PA19B_ABDACB_DAC1   ((PIN_PA19B_ABDACB_DAC1 << 16) | MUX_PA19B_ABDACB_DAC1)
#define GPIO_PA19B_ABDACB_DAC1   _UL_(1 << 19)
#define PIN_PA28C_ABDACB_DACN0         _L_(28) /**< \brief ABDACB signal: DACN0 on PA28 mux C */
#define MUX_PA28C_ABDACB_DACN0          _L_(2)
#define PINMUX_PA28C_ABDACB_DACN0  ((PIN_PA28C_ABDACB_DACN0 << 16) | MUX_PA28C_ABDACB_DACN0)
#define GPIO_PA28C_ABDACB_DACN0  _UL_(1 << 28)
#define PIN_PA18B_ABDACB_DACN0         _L_(18) /**< \brief ABDACB signal: DACN0 on PA18 mux B */
#define MUX_PA18B_ABDACB_DACN0          _L_(1)
#define PINMUX_PA18B_ABDACB_DACN0  ((PIN_PA18B_ABDACB_DACN0 << 16) | MUX_PA18B_ABDACB_DACN0)
#define GPIO_PA18B_ABDACB_DACN0  _UL_(1 << 18)
#define PIN_PA30C_ABDACB_DACN1         _L_(30) /**< \brief ABDACB signal: DACN1 on PA30 mux C */
#define MUX_PA30C_ABDACB_DACN1          _L_(2)
#define PINMUX_PA30C_ABDACB_DACN1  ((PIN_PA30C_ABDACB_DACN1 << 16) | MUX_PA30C_ABDACB_DACN1)
#define GPIO_PA30C_ABDACB_DACN1  _UL_(1 << 30)
#define PIN_PA20B_ABDACB_DACN1         _L_(20) /**< \brief ABDACB signal: DACN1 on PA20 mux B */
#define MUX_PA20B_ABDACB_DACN1          _L_(1)
#define PINMUX_PA20B_ABDACB_DACN1  ((PIN_PA20B_ABDACB_DACN1 << 16) | MUX_PA20B_ABDACB_DACN1)
#define GPIO_PA20B_ABDACB_DACN1  _UL_(1 << 20)
/* ========== GPIO definition for PARC peripheral ========== */
#define PIN_PA17D_PARC_PCCK            _L_(17) /**< \brief PARC signal: PCCK on PA17 mux D */
#define MUX_PA17D_PARC_PCCK             _L_(3)
#define PINMUX_PA17D_PARC_PCCK     ((PIN_PA17D_PARC_PCCK << 16) | MUX_PA17D_PARC_PCCK)
#define GPIO_PA17D_PARC_PCCK     _UL_(1 << 17)
#define PIN_PA09D_PARC_PCDATA0          _L_(9) /**< \brief PARC signal: PCDATA0 on PA09 mux D */
#define MUX_PA09D_PARC_PCDATA0          _L_(3)
#define PINMUX_PA09D_PARC_PCDATA0  ((PIN_PA09D_PARC_PCDATA0 << 16) | MUX_PA09D_PARC_PCDATA0)
#define GPIO_PA09D_PARC_PCDATA0  _UL_(1 <<  9)
#define PIN_PA10D_PARC_PCDATA1         _L_(10) /**< \brief PARC signal: PCDATA1 on PA10 mux D */
#define MUX_PA10D_PARC_PCDATA1          _L_(3)
#define PINMUX_PA10D_PARC_PCDATA1  ((PIN_PA10D_PARC_PCDATA1 << 16) | MUX_PA10D_PARC_PCDATA1)
#define GPIO_PA10D_PARC_PCDATA1  _UL_(1 << 10)
#define PIN_PA11D_PARC_PCDATA2         _L_(11) /**< \brief PARC signal: PCDATA2 on PA11 mux D */
#define MUX_PA11D_PARC_PCDATA2          _L_(3)
#define PINMUX_PA11D_PARC_PCDATA2  ((PIN_PA11D_PARC_PCDATA2 << 16) | MUX_PA11D_PARC_PCDATA2)
#define GPIO_PA11D_PARC_PCDATA2  _UL_(1 << 11)
#define PIN_PA12D_PARC_PCDATA3         _L_(12) /**< \brief PARC signal: PCDATA3 on PA12 mux D */
#define MUX_PA12D_PARC_PCDATA3          _L_(3)
#define PINMUX_PA12D_PARC_PCDATA3  ((PIN_PA12D_PARC_PCDATA3 << 16) | MUX_PA12D_PARC_PCDATA3)
#define GPIO_PA12D_PARC_PCDATA3  _UL_(1 << 12)
#define PIN_PA13D_PARC_PCDATA4         _L_(13) /**< \brief PARC signal: PCDATA4 on PA13 mux D */
#define MUX_PA13D_PARC_PCDATA4          _L_(3)
#define PINMUX_PA13D_PARC_PCDATA4  ((PIN_PA13D_PARC_PCDATA4 << 16) | MUX_PA13D_PARC_PCDATA4)
#define GPIO_PA13D_PARC_PCDATA4  _UL_(1 << 13)
#define PIN_PA14D_PARC_PCDATA5         _L_(14) /**< \brief PARC signal: PCDATA5 on PA14 mux D */
#define MUX_PA14D_PARC_PCDATA5          _L_(3)
#define PINMUX_PA14D_PARC_PCDATA5  ((PIN_PA14D_PARC_PCDATA5 << 16) | MUX_PA14D_PARC_PCDATA5)
#define GPIO_PA14D_PARC_PCDATA5  _UL_(1 << 14)
#define PIN_PA15D_PARC_PCDATA6         _L_(15) /**< \brief PARC signal: PCDATA6 on PA15 mux D */
#define MUX_PA15D_PARC_PCDATA6          _L_(3)
#define PINMUX_PA15D_PARC_PCDATA6  ((PIN_PA15D_PARC_PCDATA6 << 16) | MUX_PA15D_PARC_PCDATA6)
#define GPIO_PA15D_PARC_PCDATA6  _UL_(1 << 15)
#define PIN_PA16D_PARC_PCDATA7         _L_(16) /**< \brief PARC signal: PCDATA7 on PA16 mux D */
#define MUX_PA16D_PARC_PCDATA7          _L_(3)
#define PINMUX_PA16D_PARC_PCDATA7  ((PIN_PA16D_PARC_PCDATA7 << 16) | MUX_PA16D_PARC_PCDATA7)
#define GPIO_PA16D_PARC_PCDATA7  _UL_(1 << 16)
#define PIN_PA18D_PARC_PCEN1           _L_(18) /**< \brief PARC signal: PCEN1 on PA18 mux D */
#define MUX_PA18D_PARC_PCEN1            _L_(3)
#define PINMUX_PA18D_PARC_PCEN1    ((PIN_PA18D_PARC_PCEN1 << 16) | MUX_PA18D_PARC_PCEN1)
#define GPIO_PA18D_PARC_PCEN1    _UL_(1 << 18)
#define PIN_PA19D_PARC_PCEN2           _L_(19) /**< \brief PARC signal: PCEN2 on PA19 mux D */
#define MUX_PA19D_PARC_PCEN2            _L_(3)
#define PINMUX_PA19D_PARC_PCEN2    ((PIN_PA19D_PARC_PCEN2 << 16) | MUX_PA19D_PARC_PCEN2)
#define GPIO_PA19D_PARC_PCEN2    _UL_(1 << 19)
/* ========== GPIO definition for CATB peripheral ========== */
#define PIN_PA02G_CATB_DIS              _L_(2) /**< \brief CATB signal: DIS on PA02 mux G */
#define MUX_PA02G_CATB_DIS              _L_(6)
#define PINMUX_PA02G_CATB_DIS      ((PIN_PA02G_CATB_DIS << 16) | MUX_PA02G_CATB_DIS)
#define GPIO_PA02G_CATB_DIS      _UL_(1 <<  2)
#define PIN_PA12G_CATB_DIS             _L_(12) /**< \brief CATB signal: DIS on PA12 mux G */
#define MUX_PA12G_CATB_DIS              _L_(6)
#define PINMUX_PA12G_CATB_DIS      ((PIN_PA12G_CATB_DIS << 16) | MUX_PA12G_CATB_DIS)
#define GPIO_PA12G_CATB_DIS      _UL_(1 << 12)
#define PIN_PA23G_CATB_DIS             _L_(23) /**< \brief CATB signal: DIS on PA23 mux G */
#define MUX_PA23G_CATB_DIS              _L_(6)
#define PINMUX_PA23G_CATB_DIS      ((PIN_PA23G_CATB_DIS << 16) | MUX_PA23G_CATB_DIS)
#define GPIO_PA23G_CATB_DIS      _UL_(1 << 23)
#define PIN_PA31G_CATB_DIS             _L_(31) /**< \brief CATB signal: DIS on PA31 mux G */
#define MUX_PA31G_CATB_DIS              _L_(6)
#define PINMUX_PA31G_CATB_DIS      ((PIN_PA31G_CATB_DIS << 16) | MUX_PA31G_CATB_DIS)
#define GPIO_PA31G_CATB_DIS      _UL_(1 << 31)
#define PIN_PA04G_CATB_SENSE0           _L_(4) /**< \brief CATB signal: SENSE0 on PA04 mux G */
#define MUX_PA04G_CATB_SENSE0           _L_(6)
#define PINMUX_PA04G_CATB_SENSE0   ((PIN_PA04G_CATB_SENSE0 << 16) | MUX_PA04G_CATB_SENSE0)
#define GPIO_PA04G_CATB_SENSE0   _UL_(1 <<  4)
#define PIN_PA27G_CATB_SENSE0          _L_(27) /**< \brief CATB signal: SENSE0 on PA27 mux G */
#define MUX_PA27G_CATB_SENSE0           _L_(6)
#define PINMUX_PA27G_CATB_SENSE0   ((PIN_PA27G_CATB_SENSE0 << 16) | MUX_PA27G_CATB_SENSE0)
#define GPIO_PA27G_CATB_SENSE0   _UL_(1 << 27)
#define PIN_PA05G_CATB_SENSE1           _L_(5) /**< \brief CATB signal: SENSE1 on PA05 mux G */
#define MUX_PA05G_CATB_SENSE1           _L_(6)
#define PINMUX_PA05G_CATB_SENSE1   ((PIN_PA05G_CATB_SENSE1 << 16) | MUX_PA05G_CATB_SENSE1)
#define GPIO_PA05G_CATB_SENSE1   _UL_(1 <<  5)
#define PIN_PA28G_CATB_SENSE1          _L_(28) /**< \brief CATB signal: SENSE1 on PA28 mux G */
#define MUX_PA28G_CATB_SENSE1           _L_(6)
#define PINMUX_PA28G_CATB_SENSE1   ((PIN_PA28G_CATB_SENSE1 << 16) | MUX_PA28G_CATB_SENSE1)
#define GPIO_PA28G_CATB_SENSE1   _UL_(1 << 28)
#define PIN_PA06G_CATB_SENSE2           _L_(6) /**< \brief CATB signal: SENSE2 on PA06 mux G */
#define MUX_PA06G_CATB_SENSE2           _L_(6)
#define PINMUX_PA06G_CATB_SENSE2   ((PIN_PA06G_CATB_SENSE2 << 16) | MUX_PA06G_CATB_SENSE2)
#define GPIO_PA06G_CATB_SENSE2   _UL_(1 <<  6)
#define PIN_PA29G_CATB_SENSE2          _L_(29) /**< \brief CATB signal: SENSE2 on PA29 mux G */
#define MUX_PA29G_CATB_SENSE2           _L_(6)
#define PINMUX_PA29G_CATB_SENSE2   ((PIN_PA29G_CATB_SENSE2 << 16) | MUX_PA29G_CATB_SENSE2)
#define GPIO_PA29G_CATB_SENSE2   _UL_(1 << 29)
#define PIN_PA07G_CATB_SENSE3           _L_(7) /**< \brief CATB signal: SENSE3 on PA07 mux G */
#define MUX_PA07G_CATB_SENSE3           _L_(6)
#define PINMUX_PA07G_CATB_SENSE3   ((PIN_PA07G_CATB_SENSE3 << 16) | MUX_PA07G_CATB_SENSE3)
#define GPIO_PA07G_CATB_SENSE3   _UL_(1 <<  7)
#define PIN_PA30G_CATB_SENSE3          _L_(30) /**< \brief CATB signal: SENSE3 on PA30 mux G */
#define MUX_PA30G_CATB_SENSE3           _L_(6)
#define PINMUX_PA30G_CATB_SENSE3   ((PIN_PA30G_CATB_SENSE3 << 16) | MUX_PA30G_CATB_SENSE3)
#define GPIO_PA30G_CATB_SENSE3   _UL_(1 << 30)
#define PIN_PA08G_CATB_SENSE4           _L_(8) /**< \brief CATB signal: SENSE4 on PA08 mux G */
#define MUX_PA08G_CATB_SENSE4           _L_(6)
#define PINMUX_PA08G_CATB_SENSE4   ((PIN_PA08G_CATB_SENSE4 << 16) | MUX_PA08G_CATB_SENSE4)
#define GPIO_PA08G_CATB_SENSE4   _UL_(1 <<  8)
#define PIN_PA09G_CATB_SENSE5           _L_(9) /**< \brief CATB signal: SENSE5 on PA09 mux G */
#define MUX_PA09G_CATB_SENSE5           _L_(6)
#define PINMUX_PA09G_CATB_SENSE5   ((PIN_PA09G_CATB_SENSE5 << 16) | MUX_PA09G_CATB_SENSE5)
#define GPIO_PA09G_CATB_SENSE5   _UL_(1 <<  9)
#define PIN_PA10G_CATB_SENSE6          _L_(10) /**< \brief CATB signal: SENSE6 on PA10 mux G */
#define MUX_PA10G_CATB_SENSE6           _L_(6)
#define PINMUX_PA10G_CATB_SENSE6   ((PIN_PA10G_CATB_SENSE6 << 16) | MUX_PA10G_CATB_SENSE6)
#define GPIO_PA10G_CATB_SENSE6   _UL_(1 << 10)
#define PIN_PA11G_CATB_SENSE7          _L_(11) /**< \brief CATB signal: SENSE7 on PA11 mux G */
#define MUX_PA11G_CATB_SENSE7           _L_(6)
#define PINMUX_PA11G_CATB_SENSE7   ((PIN_PA11G_CATB_SENSE7 << 16) | MUX_PA11G_CATB_SENSE7)
#define GPIO_PA11G_CATB_SENSE7   _UL_(1 << 11)
#define PIN_PA13G_CATB_SENSE8          _L_(13) /**< \brief CATB signal: SENSE8 on PA13 mux G */
#define MUX_PA13G_CATB_SENSE8           _L_(6)
#define PINMUX_PA13G_CATB_SENSE8   ((PIN_PA13G_CATB_SENSE8 << 16) | MUX_PA13G_CATB_SENSE8)
#define GPIO_PA13G_CATB_SENSE8   _UL_(1 << 13)
#define PIN_PA14G_CATB_SENSE9          _L_(14) /**< \brief CATB signal: SENSE9 on PA14 mux G */
#define MUX_PA14G_CATB_SENSE9           _L_(6)
#define PINMUX_PA14G_CATB_SENSE9   ((PIN_PA14G_CATB_SENSE9 << 16) | MUX_PA14G_CATB_SENSE9)
#define GPIO_PA14G_CATB_SENSE9   _UL_(1 << 14)
#define PIN_PA15G_CATB_SENSE10         _L_(15) /**< \brief CATB signal: SENSE10 on PA15 mux G */
#define MUX_PA15G_CATB_SENSE10          _L_(6)
#define PINMUX_PA15G_CATB_SENSE10  ((PIN_PA15G_CATB_SENSE10 << 16) | MUX_PA15G_CATB_SENSE10)
#define GPIO_PA15G_CATB_SENSE10  _UL_(1 << 15)
#define PIN_PA16G_CATB_SENSE11         _L_(16) /**< \brief CATB signal: SENSE11 on PA16 mux G */
#define MUX_PA16G_CATB_SENSE11          _L_(6)
#define PINMUX_PA16G_CATB_SENSE11  ((PIN_PA16G_CATB_SENSE11 << 16) | MUX_PA16G_CATB_SENSE11)
#define GPIO_PA16G_CATB_SENSE11  _UL_(1 << 16)
#define PIN_PA17G_CATB_SENSE12         _L_(17) /**< \brief CATB signal: SENSE12 on PA17 mux G */
#define MUX_PA17G_CATB_SENSE12          _L_(6)
#define PINMUX_PA17G_CATB_SENSE12  ((PIN_PA17G_CATB_SENSE12 << 16) | MUX_PA17G_CATB_SENSE12)
#define GPIO_PA17G_CATB_SENSE12  _UL_(1 << 17)
#define PIN_PA18G_CATB_SENSE13         _L_(18) /**< \brief CATB signal: SENSE13 on PA18 mux G */
#define MUX_PA18G_CATB_SENSE13          _L_(6)
#define PINMUX_PA18G_CATB_SENSE13  ((PIN_PA18G_CATB_SENSE13 << 16) | MUX_PA18G_CATB_SENSE13)
#define GPIO_PA18G_CATB_SENSE13  _UL_(1 << 18)
#define PIN_PA19G_CATB_SENSE14         _L_(19) /**< \brief CATB signal: SENSE14 on PA19 mux G */
#define MUX_PA19G_CATB_SENSE14          _L_(6)
#define PINMUX_PA19G_CATB_SENSE14  ((PIN_PA19G_CATB_SENSE14 << 16) | MUX_PA19G_CATB_SENSE14)
#define GPIO_PA19G_CATB_SENSE14  _UL_(1 << 19)
#define PIN_PA20G_CATB_SENSE15         _L_(20) /**< \brief CATB signal: SENSE15 on PA20 mux G */
#define MUX_PA20G_CATB_SENSE15          _L_(6)
#define PINMUX_PA20G_CATB_SENSE15  ((PIN_PA20G_CATB_SENSE15 << 16) | MUX_PA20G_CATB_SENSE15)
#define GPIO_PA20G_CATB_SENSE15  _UL_(1 << 20)
#define PIN_PA21G_CATB_SENSE16         _L_(21) /**< \brief CATB signal: SENSE16 on PA21 mux G */
#define MUX_PA21G_CATB_SENSE16          _L_(6)
#define PINMUX_PA21G_CATB_SENSE16  ((PIN_PA21G_CATB_SENSE16 << 16) | MUX_PA21G_CATB_SENSE16)
#define GPIO_PA21G_CATB_SENSE16  _UL_(1 << 21)
#define PIN_PA22G_CATB_SENSE17         _L_(22) /**< \brief CATB signal: SENSE17 on PA22 mux G */
#define MUX_PA22G_CATB_SENSE17          _L_(6)
#define PINMUX_PA22G_CATB_SENSE17  ((PIN_PA22G_CATB_SENSE17 << 16) | MUX_PA22G_CATB_SENSE17)
#define GPIO_PA22G_CATB_SENSE17  _UL_(1 << 22)
#define PIN_PA24G_CATB_SENSE18         _L_(24) /**< \brief CATB signal: SENSE18 on PA24 mux G */
#define MUX_PA24G_CATB_SENSE18          _L_(6)
#define PINMUX_PA24G_CATB_SENSE18  ((PIN_PA24G_CATB_SENSE18 << 16) | MUX_PA24G_CATB_SENSE18)
#define GPIO_PA24G_CATB_SENSE18  _UL_(1 << 24)
#define PIN_PA25G_CATB_SENSE19         _L_(25) /**< \brief CATB signal: SENSE19 on PA25 mux G */
#define MUX_PA25G_CATB_SENSE19          _L_(6)
#define PINMUX_PA25G_CATB_SENSE19  ((PIN_PA25G_CATB_SENSE19 << 16) | MUX_PA25G_CATB_SENSE19)
#define GPIO_PA25G_CATB_SENSE19  _UL_(1 << 25)
#define PIN_PA26G_CATB_SENSE20         _L_(26) /**< \brief CATB signal: SENSE20 on PA26 mux G */
#define MUX_PA26G_CATB_SENSE20          _L_(6)
#define PINMUX_PA26G_CATB_SENSE20  ((PIN_PA26G_CATB_SENSE20 << 16) | MUX_PA26G_CATB_SENSE20)
#define GPIO_PA26G_CATB_SENSE20  _UL_(1 << 26)
/* ========== GPIO definition for USBC peripheral ========== */
#define PIN_PA25A_USBC_DM              _L_(25) /**< \brief USBC signal: DM on PA25 mux A */
#define MUX_PA25A_USBC_DM               _L_(0)
#define PINMUX_PA25A_USBC_DM       ((PIN_PA25A_USBC_DM << 16) | MUX_PA25A_USBC_DM)
#define GPIO_PA25A_USBC_DM       _UL_(1 << 25)
#define PIN_PA26A_USBC_DP              _L_(26) /**< \brief USBC signal: DP on PA26 mux A */
#define MUX_PA26A_USBC_DP               _L_(0)
#define PINMUX_PA26A_USBC_DP       ((PIN_PA26A_USBC_DP << 16) | MUX_PA26A_USBC_DP)
#define GPIO_PA26A_USBC_DP       _UL_(1 << 26)
/* ========== GPIO definition for PEVC peripheral ========== */
#define PIN_PA08C_PEVC_PAD_EVT0         _L_(8) /**< \brief PEVC signal: PAD_EVT0 on PA08 mux C */
#define MUX_PA08C_PEVC_PAD_EVT0         _L_(2)
#define PINMUX_PA08C_PEVC_PAD_EVT0  ((PIN_PA08C_PEVC_PAD_EVT0 << 16) | MUX_PA08C_PEVC_PAD_EVT0)
#define GPIO_PA08C_PEVC_PAD_EVT0  _UL_(1 <<  8)
#define PIN_PA09C_PEVC_PAD_EVT1         _L_(9) /**< \brief PEVC signal: PAD_EVT1 on PA09 mux C */
#define MUX_PA09C_PEVC_PAD_EVT1         _L_(2)
#define PINMUX_PA09C_PEVC_PAD_EVT1  ((PIN_PA09C_PEVC_PAD_EVT1 << 16) | MUX_PA09C_PEVC_PAD_EVT1)
#define GPIO_PA09C_PEVC_PAD_EVT1  _UL_(1 <<  9)
#define PIN_PA10C_PEVC_PAD_EVT2        _L_(10) /**< \brief PEVC signal: PAD_EVT2 on PA10 mux C */
#define MUX_PA10C_PEVC_PAD_EVT2         _L_(2)
#define PINMUX_PA10C_PEVC_PAD_EVT2  ((PIN_PA10C_PEVC_PAD_EVT2 << 16) | MUX_PA10C_PEVC_PAD_EVT2)
#define GPIO_PA10C_PEVC_PAD_EVT2  _UL_(1 << 10)
#define PIN_PA11C_PEVC_PAD_EVT3        _L_(11) /**< \brief PEVC signal: PAD_EVT3 on PA11 mux C */
#define MUX_PA11C_PEVC_PAD_EVT3         _L_(2)
#define PINMUX_PA11C_PEVC_PAD_EVT3  ((PIN_PA11C_PEVC_PAD_EVT3 << 16) | MUX_PA11C_PEVC_PAD_EVT3)
#define GPIO_PA11C_PEVC_PAD_EVT3  _UL_(1 << 11)
/* ========== GPIO definition for SCIF peripheral ========== */
#define PIN_PA19E_SCIF_GCLK0           _L_(19) /**< \brief SCIF signal: GCLK0 on PA19 mux E */
#define MUX_PA19E_SCIF_GCLK0            _L_(4)
#define PINMUX_PA19E_SCIF_GCLK0    ((PIN_PA19E_SCIF_GCLK0 << 16) | MUX_PA19E_SCIF_GCLK0)
#define GPIO_PA19E_SCIF_GCLK0    _UL_(1 << 19)
#define PIN_PA02A_SCIF_GCLK0            _L_(2) /**< \brief SCIF signal: GCLK0 on PA02 mux A */
#define MUX_PA02A_SCIF_GCLK0            _L_(0)
#define PINMUX_PA02A_SCIF_GCLK0    ((PIN_PA02A_SCIF_GCLK0 << 16) | MUX_PA02A_SCIF_GCLK0)
#define GPIO_PA02A_SCIF_GCLK0    _UL_(1 <<  2)
#define PIN_PA20E_SCIF_GCLK1           _L_(20) /**< \brief SCIF signal: GCLK1 on PA20 mux E */
#define MUX_PA20E_SCIF_GCLK1            _L_(4)
#define PINMUX_PA20E_SCIF_GCLK1    ((PIN_PA20E_SCIF_GCLK1 << 16) | MUX_PA20E_SCIF_GCLK1)
#define GPIO_PA20E_SCIF_GCLK1    _UL_(1 << 20)
#define PIN_PA23E_SCIF_GCLK_IN0        _L_(23) /**< \brief SCIF signal: GCLK_IN0 on PA23 mux E */
#define MUX_PA23E_SCIF_GCLK_IN0         _L_(4)
#define PINMUX_PA23E_SCIF_GCLK_IN0  ((PIN_PA23E_SCIF_GCLK_IN0 << 16) | MUX_PA23E_SCIF_GCLK_IN0)
#define GPIO_PA23E_SCIF_GCLK_IN0  _UL_(1 << 23)
#define PIN_PA24E_SCIF_GCLK_IN1        _L_(24) /**< \brief SCIF signal: GCLK_IN1 on PA24 mux E */
#define MUX_PA24E_SCIF_GCLK_IN1         _L_(4)
#define PINMUX_PA24E_SCIF_GCLK_IN1  ((PIN_PA24E_SCIF_GCLK_IN1 << 16) | MUX_PA24E_SCIF_GCLK_IN1)
#define GPIO_PA24E_SCIF_GCLK_IN1  _UL_(1 << 24)
/* ========== GPIO definition for EIC peripheral ========== */
#define PIN_PA06C_EIC_EXTINT1           _L_(6) /**< \brief EIC signal: EXTINT1 on PA06 mux C */
#define MUX_PA06C_EIC_EXTINT1           _L_(2)
#define PINMUX_PA06C_EIC_EXTINT1   ((PIN_PA06C_EIC_EXTINT1 << 16) | MUX_PA06C_EIC_EXTINT1)
#define GPIO_PA06C_EIC_EXTINT1   _UL_(1 <<  6)
#define PIN_PA06C_EIC_EXTINT_NUM        _L_(1) /**< \brief EIC signal: PIN_PA06 External Interrupt Line */
#define PIN_PA16C_EIC_EXTINT1          _L_(16) /**< \brief EIC signal: EXTINT1 on PA16 mux C */
#define MUX_PA16C_EIC_EXTINT1           _L_(2)
#define PINMUX_PA16C_EIC_EXTINT1   ((PIN_PA16C_EIC_EXTINT1 << 16) | MUX_PA16C_EIC_EXTINT1)
#define GPIO_PA16C_EIC_EXTINT1   _UL_(1 << 16)
#define PIN_PA16C_EIC_EXTINT_NUM        _L_(1) /**< \brief EIC signal: PIN_PA16 External Interrupt Line */
#define PIN_PA04C_EIC_EXTINT2           _L_(4) /**< \brief EIC signal: EXTINT2 on PA04 mux C */
#define MUX_PA04C_EIC_EXTINT2           _L_(2)
#define PINMUX_PA04C_EIC_EXTINT2   ((PIN_PA04C_EIC_EXTINT2 << 16) | MUX_PA04C_EIC_EXTINT2)
#define GPIO_PA04C_EIC_EXTINT2   _UL_(1 <<  4)
#define PIN_PA04C_EIC_EXTINT_NUM        _L_(2) /**< \brief EIC signal: PIN_PA04 External Interrupt Line */
#define PIN_PA17C_EIC_EXTINT2          _L_(17) /**< \brief EIC signal: EXTINT2 on PA17 mux C */
#define MUX_PA17C_EIC_EXTINT2           _L_(2)
#define PINMUX_PA17C_EIC_EXTINT2   ((PIN_PA17C_EIC_EXTINT2 << 16) | MUX_PA17C_EIC_EXTINT2)
#define GPIO_PA17C_EIC_EXTINT2   _UL_(1 << 17)
#define PIN_PA17C_EIC_EXTINT_NUM        _L_(2) /**< \brief EIC signal: PIN_PA17 External Interrupt Line */
#define PIN_PA05C_EIC_EXTINT3           _L_(5) /**< \brief EIC signal: EXTINT3 on PA05 mux C */
#define MUX_PA05C_EIC_EXTINT3           _L_(2)
#define PINMUX_PA05C_EIC_EXTINT3   ((PIN_PA05C_EIC_EXTINT3 << 16) | MUX_PA05C_EIC_EXTINT3)
#define GPIO_PA05C_EIC_EXTINT3   _UL_(1 <<  5)
#define PIN_PA05C_EIC_EXTINT_NUM        _L_(3) /**< \brief EIC signal: PIN_PA05 External Interrupt Line */
#define PIN_PA18C_EIC_EXTINT3          _L_(18) /**< \brief EIC signal: EXTINT3 on PA18 mux C */
#define MUX_PA18C_EIC_EXTINT3           _L_(2)
#define PINMUX_PA18C_EIC_EXTINT3   ((PIN_PA18C_EIC_EXTINT3 << 16) | MUX_PA18C_EIC_EXTINT3)
#define GPIO_PA18C_EIC_EXTINT3   _UL_(1 << 18)
#define PIN_PA18C_EIC_EXTINT_NUM        _L_(3) /**< \brief EIC signal: PIN_PA18 External Interrupt Line */
#define PIN_PA07C_EIC_EXTINT4           _L_(7) /**< \brief EIC signal: EXTINT4 on PA07 mux C */
#define MUX_PA07C_EIC_EXTINT4           _L_(2)
#define PINMUX_PA07C_EIC_EXTINT4   ((PIN_PA07C_EIC_EXTINT4 << 16) | MUX_PA07C_EIC_EXTINT4)
#define GPIO_PA07C_EIC_EXTINT4   _UL_(1 <<  7)
#define PIN_PA07C_EIC_EXTINT_NUM        _L_(4) /**< \brief EIC signal: PIN_PA07 External Interrupt Line */
#define PIN_PA19C_EIC_EXTINT4          _L_(19) /**< \brief EIC signal: EXTINT4 on PA19 mux C */
#define MUX_PA19C_EIC_EXTINT4           _L_(2)
#define PINMUX_PA19C_EIC_EXTINT4   ((PIN_PA19C_EIC_EXTINT4 << 16) | MUX_PA19C_EIC_EXTINT4)
#define GPIO_PA19C_EIC_EXTINT4   _UL_(1 << 19)
#define PIN_PA19C_EIC_EXTINT_NUM        _L_(4) /**< \brief EIC signal: PIN_PA19 External Interrupt Line */
#define PIN_PA20C_EIC_EXTINT5          _L_(20) /**< \brief EIC signal: EXTINT5 on PA20 mux C */
#define MUX_PA20C_EIC_EXTINT5           _L_(2)
#define PINMUX_PA20C_EIC_EXTINT5   ((PIN_PA20C_EIC_EXTINT5 << 16) | MUX_PA20C_EIC_EXTINT5)
#define GPIO_PA20C_EIC_EXTINT5   _UL_(1 << 20)
#define PIN_PA20C_EIC_EXTINT_NUM        _L_(5) /**< \brief EIC signal: PIN_PA20 External Interrupt Line */
#define PIN_PA21C_EIC_EXTINT6          _L_(21) /**< \brief EIC signal: EXTINT6 on PA21 mux C */
#define MUX_PA21C_EIC_EXTINT6           _L_(2)
#define PINMUX_PA21C_EIC_EXTINT6   ((PIN_PA21C_EIC_EXTINT6 << 16) | MUX_PA21C_EIC_EXTINT6)
#define GPIO_PA21C_EIC_EXTINT6   _UL_(1 << 21)
#define PIN_PA21C_EIC_EXTINT_NUM        _L_(6) /**< \brief EIC signal: PIN_PA21 External Interrupt Line */
#define PIN_PA22C_EIC_EXTINT7          _L_(22) /**< \brief EIC signal: EXTINT7 on PA22 mux C */
#define MUX_PA22C_EIC_EXTINT7           _L_(2)
#define PINMUX_PA22C_EIC_EXTINT7   ((PIN_PA22C_EIC_EXTINT7 << 16) | MUX_PA22C_EIC_EXTINT7)
#define GPIO_PA22C_EIC_EXTINT7   _UL_(1 << 22)
#define PIN_PA22C_EIC_EXTINT_NUM        _L_(7) /**< \brief EIC signal: PIN_PA22 External Interrupt Line */
#define PIN_PA23C_EIC_EXTINT8          _L_(23) /**< \brief EIC signal: EXTINT8 on PA23 mux C */
#define MUX_PA23C_EIC_EXTINT8           _L_(2)
#define PINMUX_PA23C_EIC_EXTINT8   ((PIN_PA23C_EIC_EXTINT8 << 16) | MUX_PA23C_EIC_EXTINT8)
#define GPIO_PA23C_EIC_EXTINT8   _UL_(1 << 23)
#define PIN_PA23C_EIC_EXTINT_NUM        _L_(8) /**< \brief EIC signal: PIN_PA23 External Interrupt Line */

#endif /* _SAM4LS8A_PIO_ */
