/**
 * \file
 *
 * \brief Component description for USART
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

#ifndef _SAM4L_USART_COMPONENT_
#define _SAM4L_USART_COMPONENT_

/* ========================================================================== */
/**  SOFTWARE API DEFINITION FOR USART */
/* ========================================================================== */
/** \addtogroup SAM4L_USART Universal Synchronous Asynchronous Receiver Transmitter */
/*@{*/

#define USART_I7601
#define REV_USART                   0x6021

/* -------- US_CR : (USART Offset: 0x00) ( /W 32) Control Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct { // LIN mode
    uint32_t :2;               /*!< bit:  0.. 1  Reserved                           */
    uint32_t RSTRX:1;          /*!< bit:      2  Reset Receiver                     */
    uint32_t RSTTX:1;          /*!< bit:      3  Reset Transmitter                  */
    uint32_t RXEN:1;           /*!< bit:      4  Receiver Enable                    */
    uint32_t RXDIS:1;          /*!< bit:      5  Receiver Disable                   */
    uint32_t TXEN:1;           /*!< bit:      6  Transmitter Enable                 */
    uint32_t TXDIS:1;          /*!< bit:      7  Transmitter Disable                */
    uint32_t RSTSTA:1;         /*!< bit:      8  Reset Status Bits                  */
    uint32_t STTBRK:1;         /*!< bit:      9  Start Break                        */
    uint32_t STPBRK:1;         /*!< bit:     10  Stop Break                         */
    uint32_t STTTO:1;          /*!< bit:     11  Start Time-out                     */
    uint32_t SENDA:1;          /*!< bit:     12  Send Address                       */
    uint32_t RSTIT:1;          /*!< bit:     13  Reset Iterations                   */
    uint32_t RSTNACK:1;        /*!< bit:     14  Reset Non Acknowledge              */
    uint32_t RETTO:1;          /*!< bit:     15  Rearm Time-out                     */
    uint32_t DTREN:1;          /*!< bit:     16  Data Terminal Ready Enable         */
    uint32_t DTRDIS:1;         /*!< bit:     17  Data Terminal Ready Disable        */
    uint32_t RTSEN:1;          /*!< bit:     18  Request to Send Enable             */
    uint32_t RTSDIS:1;         /*!< bit:     19  Request to Send Disable            */
    uint32_t LINABT:1;         /*!< bit:     20  Abort the current LIN transmission */
    uint32_t LINWKUP:1;        /*!< bit:     21  Sends a wakeup signal on the LIN bus */
    uint32_t :10;              /*!< bit: 22..31  Reserved                           */
  } LIN;                       /*!< Structure used for LIN                          */
  struct { // SPI_MASTER mode
    uint32_t :2;               /*!< bit:  0.. 1  Reserved                           */
    uint32_t RSTRX:1;          /*!< bit:      2  Reset Receiver                     */
    uint32_t RSTTX:1;          /*!< bit:      3  Reset Transmitter                  */
    uint32_t RXEN:1;           /*!< bit:      4  Receiver Enable                    */
    uint32_t RXDIS:1;          /*!< bit:      5  Receiver Disable                   */
    uint32_t TXEN:1;           /*!< bit:      6  Transmitter Enable                 */
    uint32_t TXDIS:1;          /*!< bit:      7  Transmitter Disable                */
    uint32_t RSTSTA:1;         /*!< bit:      8  Reset Status Bits                  */
    uint32_t STTBRK:1;         /*!< bit:      9  Start Break                        */
    uint32_t STPBRK:1;         /*!< bit:     10  Stop Break                         */
    uint32_t STTTO:1;          /*!< bit:     11  Start Time-out                     */
    uint32_t SENDA:1;          /*!< bit:     12  Send Address                       */
    uint32_t RSTIT:1;          /*!< bit:     13  Reset Iterations                   */
    uint32_t RSTNACK:1;        /*!< bit:     14  Reset Non Acknowledge              */
    uint32_t RETTO:1;          /*!< bit:     15  Rearm Time-out                     */
    uint32_t DTREN:1;          /*!< bit:     16  Data Terminal Ready Enable         */
    uint32_t DTRDIS:1;         /*!< bit:     17  Data Terminal Ready Disable        */
    uint32_t FCS:1;            /*!< bit:     18  Force SPI Chip Select              */
    uint32_t RCS:1;            /*!< bit:     19  Release SPI Chip Select            */
    uint32_t :12;              /*!< bit: 20..31  Reserved                           */
  } SPI_MASTER;                /*!< Structure used for SPI_MASTER                   */
  struct { // USART mode
    uint32_t :2;               /*!< bit:  0.. 1  Reserved                           */
    uint32_t RSTRX:1;          /*!< bit:      2  Reset Receiver                     */
    uint32_t RSTTX:1;          /*!< bit:      3  Reset Transmitter                  */
    uint32_t RXEN:1;           /*!< bit:      4  Receiver Enable                    */
    uint32_t RXDIS:1;          /*!< bit:      5  Receiver Disable                   */
    uint32_t TXEN:1;           /*!< bit:      6  Transmitter Enable                 */
    uint32_t TXDIS:1;          /*!< bit:      7  Transmitter Disable                */
    uint32_t RSTSTA:1;         /*!< bit:      8  Reset Status Bits                  */
    uint32_t STTBRK:1;         /*!< bit:      9  Start Break                        */
    uint32_t STPBRK:1;         /*!< bit:     10  Stop Break                         */
    uint32_t STTTO:1;          /*!< bit:     11  Start Time-out                     */
    uint32_t SENDA:1;          /*!< bit:     12  Send Address                       */
    uint32_t RSTIT:1;          /*!< bit:     13  Reset Iterations                   */
    uint32_t RSTNACK:1;        /*!< bit:     14  Reset Non Acknowledge              */
    uint32_t RETTO:1;          /*!< bit:     15  Rearm Time-out                     */
    uint32_t DTREN:1;          /*!< bit:     16  Data Terminal Ready Enable         */
    uint32_t DTRDIS:1;         /*!< bit:     17  Data Terminal Ready Disable        */
    uint32_t RTSEN:1;          /*!< bit:     18  Request to Send Enable             */
    uint32_t RTSDIS:1;         /*!< bit:     19  Request to Send Disable            */
    uint32_t :12;              /*!< bit: 20..31  Reserved                           */
  } USART;                     /*!< Structure used for USART                        */
  uint32_t reg;                /*!< Type      used for register access              */
} US_CR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define US_CR_OFFSET                0x00         /**< \brief (US_CR offset) Control Register */

// LIN mode
#define US_CR_LIN_RSTRX_Pos         2            /**< \brief (US_CR_LIN) Reset Receiver */
#define US_CR_LIN_RSTRX             (_U_(0x1) << US_CR_LIN_RSTRX_Pos)
#define   US_CR_LIN_RSTRX_0_Val           _U_(0x0)   /**< \brief (US_CR_LIN) No effect */
#define   US_CR_LIN_RSTRX_1_Val           _U_(0x1)   /**< \brief (US_CR_LIN) Resets the receiver */
#define US_CR_LIN_RSTRX_0           (US_CR_LIN_RSTRX_0_Val         << US_CR_LIN_RSTRX_Pos)
#define US_CR_LIN_RSTRX_1           (US_CR_LIN_RSTRX_1_Val         << US_CR_LIN_RSTRX_Pos)
#define US_CR_LIN_RSTTX_Pos         3            /**< \brief (US_CR_LIN) Reset Transmitter */
#define US_CR_LIN_RSTTX             (_U_(0x1) << US_CR_LIN_RSTTX_Pos)
#define   US_CR_LIN_RSTTX_0_Val           _U_(0x0)   /**< \brief (US_CR_LIN) No effect */
#define   US_CR_LIN_RSTTX_1_Val           _U_(0x1)   /**< \brief (US_CR_LIN) Resets the transmitter */
#define US_CR_LIN_RSTTX_0           (US_CR_LIN_RSTTX_0_Val         << US_CR_LIN_RSTTX_Pos)
#define US_CR_LIN_RSTTX_1           (US_CR_LIN_RSTTX_1_Val         << US_CR_LIN_RSTTX_Pos)
#define US_CR_LIN_RXEN_Pos          4            /**< \brief (US_CR_LIN) Receiver Enable */
#define US_CR_LIN_RXEN              (_U_(0x1) << US_CR_LIN_RXEN_Pos)
#define   US_CR_LIN_RXEN_0_Val            _U_(0x0)   /**< \brief (US_CR_LIN) No effect */
#define   US_CR_LIN_RXEN_1_Val            _U_(0x1)   /**< \brief (US_CR_LIN) Enables the receiver, if RXDIS is 0 */
#define US_CR_LIN_RXEN_0            (US_CR_LIN_RXEN_0_Val          << US_CR_LIN_RXEN_Pos)
#define US_CR_LIN_RXEN_1            (US_CR_LIN_RXEN_1_Val          << US_CR_LIN_RXEN_Pos)
#define US_CR_LIN_RXDIS_Pos         5            /**< \brief (US_CR_LIN) Receiver Disable */
#define US_CR_LIN_RXDIS             (_U_(0x1) << US_CR_LIN_RXDIS_Pos)
#define   US_CR_LIN_RXDIS_0_Val           _U_(0x0)   /**< \brief (US_CR_LIN) No effect */
#define   US_CR_LIN_RXDIS_1_Val           _U_(0x1)   /**< \brief (US_CR_LIN) Disables the receiver */
#define US_CR_LIN_RXDIS_0           (US_CR_LIN_RXDIS_0_Val         << US_CR_LIN_RXDIS_Pos)
#define US_CR_LIN_RXDIS_1           (US_CR_LIN_RXDIS_1_Val         << US_CR_LIN_RXDIS_Pos)
#define US_CR_LIN_TXEN_Pos          6            /**< \brief (US_CR_LIN) Transmitter Enable */
#define US_CR_LIN_TXEN              (_U_(0x1) << US_CR_LIN_TXEN_Pos)
#define   US_CR_LIN_TXEN_0_Val            _U_(0x0)   /**< \brief (US_CR_LIN) No effect */
#define   US_CR_LIN_TXEN_1_Val            _U_(0x1)   /**< \brief (US_CR_LIN) Enables the transmitter if TXDIS is 0 */
#define US_CR_LIN_TXEN_0            (US_CR_LIN_TXEN_0_Val          << US_CR_LIN_TXEN_Pos)
#define US_CR_LIN_TXEN_1            (US_CR_LIN_TXEN_1_Val          << US_CR_LIN_TXEN_Pos)
#define US_CR_LIN_TXDIS_Pos         7            /**< \brief (US_CR_LIN) Transmitter Disable */
#define US_CR_LIN_TXDIS             (_U_(0x1) << US_CR_LIN_TXDIS_Pos)
#define   US_CR_LIN_TXDIS_0_Val           _U_(0x0)   /**< \brief (US_CR_LIN) No effect */
#define   US_CR_LIN_TXDIS_1_Val           _U_(0x1)   /**< \brief (US_CR_LIN) Disables the transmitter */
#define US_CR_LIN_TXDIS_0           (US_CR_LIN_TXDIS_0_Val         << US_CR_LIN_TXDIS_Pos)
#define US_CR_LIN_TXDIS_1           (US_CR_LIN_TXDIS_1_Val         << US_CR_LIN_TXDIS_Pos)
#define US_CR_LIN_RSTSTA_Pos        8            /**< \brief (US_CR_LIN) Reset Status Bits */
#define US_CR_LIN_RSTSTA            (_U_(0x1) << US_CR_LIN_RSTSTA_Pos)
#define   US_CR_LIN_RSTSTA_0_Val          _U_(0x0)   /**< \brief (US_CR_LIN) No effect */
#define   US_CR_LIN_RSTSTA_1_Val          _U_(0x1)   /**< \brief (US_CR_LIN) Resets the status bits PARE, FRAME, OVRE and RXBRK in the CSR */
#define US_CR_LIN_RSTSTA_0          (US_CR_LIN_RSTSTA_0_Val        << US_CR_LIN_RSTSTA_Pos)
#define US_CR_LIN_RSTSTA_1          (US_CR_LIN_RSTSTA_1_Val        << US_CR_LIN_RSTSTA_Pos)
#define US_CR_LIN_STTBRK_Pos        9            /**< \brief (US_CR_LIN) Start Break */
#define US_CR_LIN_STTBRK            (_U_(0x1) << US_CR_LIN_STTBRK_Pos)
#define   US_CR_LIN_STTBRK_0_Val          _U_(0x0)   /**< \brief (US_CR_LIN) No effect */
#define   US_CR_LIN_STTBRK_1_Val          _U_(0x1)   /**< \brief (US_CR_LIN) Starts transmission of a break after the characters present in THR and the Transmit Shift Register have been transmitted. No effect if a break is already being transmitted */
#define US_CR_LIN_STTBRK_0          (US_CR_LIN_STTBRK_0_Val        << US_CR_LIN_STTBRK_Pos)
#define US_CR_LIN_STTBRK_1          (US_CR_LIN_STTBRK_1_Val        << US_CR_LIN_STTBRK_Pos)
#define US_CR_LIN_STPBRK_Pos        10           /**< \brief (US_CR_LIN) Stop Break */
#define US_CR_LIN_STPBRK            (_U_(0x1) << US_CR_LIN_STPBRK_Pos)
#define   US_CR_LIN_STPBRK_0_Val          _U_(0x0)   /**< \brief (US_CR_LIN) No effect */
#define   US_CR_LIN_STPBRK_1_Val          _U_(0x1)   /**< \brief (US_CR_LIN) Stops transmission of the break after a minimum of one character length and transmits a high level during 12-bit periods.No effect if no break is being transmitted */
#define US_CR_LIN_STPBRK_0          (US_CR_LIN_STPBRK_0_Val        << US_CR_LIN_STPBRK_Pos)
#define US_CR_LIN_STPBRK_1          (US_CR_LIN_STPBRK_1_Val        << US_CR_LIN_STPBRK_Pos)
#define US_CR_LIN_STTTO_Pos         11           /**< \brief (US_CR_LIN) Start Time-out */
#define US_CR_LIN_STTTO             (_U_(0x1) << US_CR_LIN_STTTO_Pos)
#define   US_CR_LIN_STTTO_0_Val           _U_(0x0)   /**< \brief (US_CR_LIN) No effect */
#define   US_CR_LIN_STTTO_1_Val           _U_(0x1)   /**< \brief (US_CR_LIN) Starts waiting for a character before clocking the time-out counter */
#define US_CR_LIN_STTTO_0           (US_CR_LIN_STTTO_0_Val         << US_CR_LIN_STTTO_Pos)
#define US_CR_LIN_STTTO_1           (US_CR_LIN_STTTO_1_Val         << US_CR_LIN_STTTO_Pos)
#define US_CR_LIN_SENDA_Pos         12           /**< \brief (US_CR_LIN) Send Address */
#define US_CR_LIN_SENDA             (_U_(0x1) << US_CR_LIN_SENDA_Pos)
#define   US_CR_LIN_SENDA_0_Val           _U_(0x0)   /**< \brief (US_CR_LIN) No effect */
#define   US_CR_LIN_SENDA_1_Val           _U_(0x1)   /**< \brief (US_CR_LIN) In Multi-drop Mode only, the next character written to the THR is sent with the address bit set */
#define US_CR_LIN_SENDA_0           (US_CR_LIN_SENDA_0_Val         << US_CR_LIN_SENDA_Pos)
#define US_CR_LIN_SENDA_1           (US_CR_LIN_SENDA_1_Val         << US_CR_LIN_SENDA_Pos)
#define US_CR_LIN_RSTIT_Pos         13           /**< \brief (US_CR_LIN) Reset Iterations */
#define US_CR_LIN_RSTIT             (_U_(0x1) << US_CR_LIN_RSTIT_Pos)
#define   US_CR_LIN_RSTIT_0_Val           _U_(0x0)   /**< \brief (US_CR_LIN) No effect */
#define   US_CR_LIN_RSTIT_1_Val           _U_(0x1)   /**< \brief (US_CR_LIN) Resets ITERATION in CSR. No effect if the ISO7816 is not enabled */
#define US_CR_LIN_RSTIT_0           (US_CR_LIN_RSTIT_0_Val         << US_CR_LIN_RSTIT_Pos)
#define US_CR_LIN_RSTIT_1           (US_CR_LIN_RSTIT_1_Val         << US_CR_LIN_RSTIT_Pos)
#define US_CR_LIN_RSTNACK_Pos       14           /**< \brief (US_CR_LIN) Reset Non Acknowledge */
#define US_CR_LIN_RSTNACK           (_U_(0x1) << US_CR_LIN_RSTNACK_Pos)
#define   US_CR_LIN_RSTNACK_0_Val         _U_(0x0)   /**< \brief (US_CR_LIN) No effect */
#define   US_CR_LIN_RSTNACK_1_Val         _U_(0x1)   /**< \brief (US_CR_LIN) Resets NACK in CSR */
#define US_CR_LIN_RSTNACK_0         (US_CR_LIN_RSTNACK_0_Val       << US_CR_LIN_RSTNACK_Pos)
#define US_CR_LIN_RSTNACK_1         (US_CR_LIN_RSTNACK_1_Val       << US_CR_LIN_RSTNACK_Pos)
#define US_CR_LIN_RETTO_Pos         15           /**< \brief (US_CR_LIN) Rearm Time-out */
#define US_CR_LIN_RETTO             (_U_(0x1) << US_CR_LIN_RETTO_Pos)
#define   US_CR_LIN_RETTO_0_Val           _U_(0x0)   /**< \brief (US_CR_LIN) No effect */
#define   US_CR_LIN_RETTO_1_Val           _U_(0x1)   /**< \brief (US_CR_LIN) Restart Time-out */
#define US_CR_LIN_RETTO_0           (US_CR_LIN_RETTO_0_Val         << US_CR_LIN_RETTO_Pos)
#define US_CR_LIN_RETTO_1           (US_CR_LIN_RETTO_1_Val         << US_CR_LIN_RETTO_Pos)
#define US_CR_LIN_DTREN_Pos         16           /**< \brief (US_CR_LIN) Data Terminal Ready Enable */
#define US_CR_LIN_DTREN             (_U_(0x1) << US_CR_LIN_DTREN_Pos)
#define   US_CR_LIN_DTREN_0_Val           _U_(0x0)   /**< \brief (US_CR_LIN) No effect */
#define   US_CR_LIN_DTREN_1_Val           _U_(0x1)   /**< \brief (US_CR_LIN) Drives the pin DTR at 0 */
#define US_CR_LIN_DTREN_0           (US_CR_LIN_DTREN_0_Val         << US_CR_LIN_DTREN_Pos)
#define US_CR_LIN_DTREN_1           (US_CR_LIN_DTREN_1_Val         << US_CR_LIN_DTREN_Pos)
#define US_CR_LIN_DTRDIS_Pos        17           /**< \brief (US_CR_LIN) Data Terminal Ready Disable */
#define US_CR_LIN_DTRDIS            (_U_(0x1) << US_CR_LIN_DTRDIS_Pos)
#define   US_CR_LIN_DTRDIS_0_Val          _U_(0x0)   /**< \brief (US_CR_LIN) No effect */
#define   US_CR_LIN_DTRDIS_1_Val          _U_(0x1)   /**< \brief (US_CR_LIN) Drives the pin DTR to 1 */
#define US_CR_LIN_DTRDIS_0          (US_CR_LIN_DTRDIS_0_Val        << US_CR_LIN_DTRDIS_Pos)
#define US_CR_LIN_DTRDIS_1          (US_CR_LIN_DTRDIS_1_Val        << US_CR_LIN_DTRDIS_Pos)
#define US_CR_LIN_RTSEN_Pos         18           /**< \brief (US_CR_LIN) Request to Send Enable */
#define US_CR_LIN_RTSEN             (_U_(0x1) << US_CR_LIN_RTSEN_Pos)
#define   US_CR_LIN_RTSEN_0_Val           _U_(0x0)   /**< \brief (US_CR_LIN) No effect */
#define   US_CR_LIN_RTSEN_1_Val           _U_(0x1)   /**< \brief (US_CR_LIN) Drives the pin RTS to 0 */
#define US_CR_LIN_RTSEN_0           (US_CR_LIN_RTSEN_0_Val         << US_CR_LIN_RTSEN_Pos)
#define US_CR_LIN_RTSEN_1           (US_CR_LIN_RTSEN_1_Val         << US_CR_LIN_RTSEN_Pos)
#define US_CR_LIN_RTSDIS_Pos        19           /**< \brief (US_CR_LIN) Request to Send Disable */
#define US_CR_LIN_RTSDIS            (_U_(0x1) << US_CR_LIN_RTSDIS_Pos)
#define   US_CR_LIN_RTSDIS_0_Val          _U_(0x0)   /**< \brief (US_CR_LIN) No effect */
#define   US_CR_LIN_RTSDIS_1_Val          _U_(0x1)   /**< \brief (US_CR_LIN) Drives the pin RTS to 1 */
#define US_CR_LIN_RTSDIS_0          (US_CR_LIN_RTSDIS_0_Val        << US_CR_LIN_RTSDIS_Pos)
#define US_CR_LIN_RTSDIS_1          (US_CR_LIN_RTSDIS_1_Val        << US_CR_LIN_RTSDIS_Pos)
#define US_CR_LIN_LINABT_Pos        20           /**< \brief (US_CR_LIN) Abort the current LIN transmission */
#define US_CR_LIN_LINABT            (_U_(0x1) << US_CR_LIN_LINABT_Pos)
#define US_CR_LIN_LINWKUP_Pos       21           /**< \brief (US_CR_LIN) Sends a wakeup signal on the LIN bus */
#define US_CR_LIN_LINWKUP           (_U_(0x1) << US_CR_LIN_LINWKUP_Pos)
#define US_CR_LIN_MASK              _U_(0x003FFFFC) /**< \brief (US_CR_LIN) MASK Register */

// SPI_MASTER mode
#define US_CR_SPI_MASTER_RSTRX_Pos  2            /**< \brief (US_CR_SPI_MASTER) Reset Receiver */
#define US_CR_SPI_MASTER_RSTRX      (_U_(0x1) << US_CR_SPI_MASTER_RSTRX_Pos)
#define   US_CR_SPI_MASTER_RSTRX_0_Val    _U_(0x0)   /**< \brief (US_CR_SPI_MASTER) No effect */
#define   US_CR_SPI_MASTER_RSTRX_1_Val    _U_(0x1)   /**< \brief (US_CR_SPI_MASTER) Resets the receiver */
#define US_CR_SPI_MASTER_RSTRX_0    (US_CR_SPI_MASTER_RSTRX_0_Val  << US_CR_SPI_MASTER_RSTRX_Pos)
#define US_CR_SPI_MASTER_RSTRX_1    (US_CR_SPI_MASTER_RSTRX_1_Val  << US_CR_SPI_MASTER_RSTRX_Pos)
#define US_CR_SPI_MASTER_RSTTX_Pos  3            /**< \brief (US_CR_SPI_MASTER) Reset Transmitter */
#define US_CR_SPI_MASTER_RSTTX      (_U_(0x1) << US_CR_SPI_MASTER_RSTTX_Pos)
#define   US_CR_SPI_MASTER_RSTTX_0_Val    _U_(0x0)   /**< \brief (US_CR_SPI_MASTER) No effect */
#define   US_CR_SPI_MASTER_RSTTX_1_Val    _U_(0x1)   /**< \brief (US_CR_SPI_MASTER) Resets the transmitter */
#define US_CR_SPI_MASTER_RSTTX_0    (US_CR_SPI_MASTER_RSTTX_0_Val  << US_CR_SPI_MASTER_RSTTX_Pos)
#define US_CR_SPI_MASTER_RSTTX_1    (US_CR_SPI_MASTER_RSTTX_1_Val  << US_CR_SPI_MASTER_RSTTX_Pos)
#define US_CR_SPI_MASTER_RXEN_Pos   4            /**< \brief (US_CR_SPI_MASTER) Receiver Enable */
#define US_CR_SPI_MASTER_RXEN       (_U_(0x1) << US_CR_SPI_MASTER_RXEN_Pos)
#define   US_CR_SPI_MASTER_RXEN_0_Val     _U_(0x0)   /**< \brief (US_CR_SPI_MASTER) No effect */
#define   US_CR_SPI_MASTER_RXEN_1_Val     _U_(0x1)   /**< \brief (US_CR_SPI_MASTER) Enables the receiver, if RXDIS is 0 */
#define US_CR_SPI_MASTER_RXEN_0     (US_CR_SPI_MASTER_RXEN_0_Val   << US_CR_SPI_MASTER_RXEN_Pos)
#define US_CR_SPI_MASTER_RXEN_1     (US_CR_SPI_MASTER_RXEN_1_Val   << US_CR_SPI_MASTER_RXEN_Pos)
#define US_CR_SPI_MASTER_RXDIS_Pos  5            /**< \brief (US_CR_SPI_MASTER) Receiver Disable */
#define US_CR_SPI_MASTER_RXDIS      (_U_(0x1) << US_CR_SPI_MASTER_RXDIS_Pos)
#define   US_CR_SPI_MASTER_RXDIS_0_Val    _U_(0x0)   /**< \brief (US_CR_SPI_MASTER) No effect */
#define   US_CR_SPI_MASTER_RXDIS_1_Val    _U_(0x1)   /**< \brief (US_CR_SPI_MASTER) Disables the receiver */
#define US_CR_SPI_MASTER_RXDIS_0    (US_CR_SPI_MASTER_RXDIS_0_Val  << US_CR_SPI_MASTER_RXDIS_Pos)
#define US_CR_SPI_MASTER_RXDIS_1    (US_CR_SPI_MASTER_RXDIS_1_Val  << US_CR_SPI_MASTER_RXDIS_Pos)
#define US_CR_SPI_MASTER_TXEN_Pos   6            /**< \brief (US_CR_SPI_MASTER) Transmitter Enable */
#define US_CR_SPI_MASTER_TXEN       (_U_(0x1) << US_CR_SPI_MASTER_TXEN_Pos)
#define   US_CR_SPI_MASTER_TXEN_0_Val     _U_(0x0)   /**< \brief (US_CR_SPI_MASTER) No effect */
#define   US_CR_SPI_MASTER_TXEN_1_Val     _U_(0x1)   /**< \brief (US_CR_SPI_MASTER) Enables the transmitter if TXDIS is 0 */
#define US_CR_SPI_MASTER_TXEN_0     (US_CR_SPI_MASTER_TXEN_0_Val   << US_CR_SPI_MASTER_TXEN_Pos)
#define US_CR_SPI_MASTER_TXEN_1     (US_CR_SPI_MASTER_TXEN_1_Val   << US_CR_SPI_MASTER_TXEN_Pos)
#define US_CR_SPI_MASTER_TXDIS_Pos  7            /**< \brief (US_CR_SPI_MASTER) Transmitter Disable */
#define US_CR_SPI_MASTER_TXDIS      (_U_(0x1) << US_CR_SPI_MASTER_TXDIS_Pos)
#define   US_CR_SPI_MASTER_TXDIS_0_Val    _U_(0x0)   /**< \brief (US_CR_SPI_MASTER) No effect */
#define   US_CR_SPI_MASTER_TXDIS_1_Val    _U_(0x1)   /**< \brief (US_CR_SPI_MASTER) Disables the transmitter */
#define US_CR_SPI_MASTER_TXDIS_0    (US_CR_SPI_MASTER_TXDIS_0_Val  << US_CR_SPI_MASTER_TXDIS_Pos)
#define US_CR_SPI_MASTER_TXDIS_1    (US_CR_SPI_MASTER_TXDIS_1_Val  << US_CR_SPI_MASTER_TXDIS_Pos)
#define US_CR_SPI_MASTER_RSTSTA_Pos 8            /**< \brief (US_CR_SPI_MASTER) Reset Status Bits */
#define US_CR_SPI_MASTER_RSTSTA     (_U_(0x1) << US_CR_SPI_MASTER_RSTSTA_Pos)
#define   US_CR_SPI_MASTER_RSTSTA_0_Val   _U_(0x0)   /**< \brief (US_CR_SPI_MASTER) No effect */
#define   US_CR_SPI_MASTER_RSTSTA_1_Val   _U_(0x1)   /**< \brief (US_CR_SPI_MASTER) Resets the status bits PARE, FRAME, OVRE and RXBRK in the CSR */
#define US_CR_SPI_MASTER_RSTSTA_0   (US_CR_SPI_MASTER_RSTSTA_0_Val << US_CR_SPI_MASTER_RSTSTA_Pos)
#define US_CR_SPI_MASTER_RSTSTA_1   (US_CR_SPI_MASTER_RSTSTA_1_Val << US_CR_SPI_MASTER_RSTSTA_Pos)
#define US_CR_SPI_MASTER_STTBRK_Pos 9            /**< \brief (US_CR_SPI_MASTER) Start Break */
#define US_CR_SPI_MASTER_STTBRK     (_U_(0x1) << US_CR_SPI_MASTER_STTBRK_Pos)
#define   US_CR_SPI_MASTER_STTBRK_0_Val   _U_(0x0)   /**< \brief (US_CR_SPI_MASTER) No effect */
#define   US_CR_SPI_MASTER_STTBRK_1_Val   _U_(0x1)   /**< \brief (US_CR_SPI_MASTER) Starts transmission of a break after the characters present in THR and the Transmit Shift Register have been transmitted. No effect if a break is already being transmitted */
#define US_CR_SPI_MASTER_STTBRK_0   (US_CR_SPI_MASTER_STTBRK_0_Val << US_CR_SPI_MASTER_STTBRK_Pos)
#define US_CR_SPI_MASTER_STTBRK_1   (US_CR_SPI_MASTER_STTBRK_1_Val << US_CR_SPI_MASTER_STTBRK_Pos)
#define US_CR_SPI_MASTER_STPBRK_Pos 10           /**< \brief (US_CR_SPI_MASTER) Stop Break */
#define US_CR_SPI_MASTER_STPBRK     (_U_(0x1) << US_CR_SPI_MASTER_STPBRK_Pos)
#define   US_CR_SPI_MASTER_STPBRK_0_Val   _U_(0x0)   /**< \brief (US_CR_SPI_MASTER) No effect */
#define   US_CR_SPI_MASTER_STPBRK_1_Val   _U_(0x1)   /**< \brief (US_CR_SPI_MASTER) Stops transmission of the break after a minimum of one character length and transmits a high level during 12-bit periods.No effect if no break is being transmitted */
#define US_CR_SPI_MASTER_STPBRK_0   (US_CR_SPI_MASTER_STPBRK_0_Val << US_CR_SPI_MASTER_STPBRK_Pos)
#define US_CR_SPI_MASTER_STPBRK_1   (US_CR_SPI_MASTER_STPBRK_1_Val << US_CR_SPI_MASTER_STPBRK_Pos)
#define US_CR_SPI_MASTER_STTTO_Pos  11           /**< \brief (US_CR_SPI_MASTER) Start Time-out */
#define US_CR_SPI_MASTER_STTTO      (_U_(0x1) << US_CR_SPI_MASTER_STTTO_Pos)
#define   US_CR_SPI_MASTER_STTTO_0_Val    _U_(0x0)   /**< \brief (US_CR_SPI_MASTER) No effect */
#define   US_CR_SPI_MASTER_STTTO_1_Val    _U_(0x1)   /**< \brief (US_CR_SPI_MASTER) Starts waiting for a character before clocking the time-out counter */
#define US_CR_SPI_MASTER_STTTO_0    (US_CR_SPI_MASTER_STTTO_0_Val  << US_CR_SPI_MASTER_STTTO_Pos)
#define US_CR_SPI_MASTER_STTTO_1    (US_CR_SPI_MASTER_STTTO_1_Val  << US_CR_SPI_MASTER_STTTO_Pos)
#define US_CR_SPI_MASTER_SENDA_Pos  12           /**< \brief (US_CR_SPI_MASTER) Send Address */
#define US_CR_SPI_MASTER_SENDA      (_U_(0x1) << US_CR_SPI_MASTER_SENDA_Pos)
#define   US_CR_SPI_MASTER_SENDA_0_Val    _U_(0x0)   /**< \brief (US_CR_SPI_MASTER) No effect */
#define   US_CR_SPI_MASTER_SENDA_1_Val    _U_(0x1)   /**< \brief (US_CR_SPI_MASTER) In Multi-drop Mode only, the next character written to the THR is sent with the address bit set */
#define US_CR_SPI_MASTER_SENDA_0    (US_CR_SPI_MASTER_SENDA_0_Val  << US_CR_SPI_MASTER_SENDA_Pos)
#define US_CR_SPI_MASTER_SENDA_1    (US_CR_SPI_MASTER_SENDA_1_Val  << US_CR_SPI_MASTER_SENDA_Pos)
#define US_CR_SPI_MASTER_RSTIT_Pos  13           /**< \brief (US_CR_SPI_MASTER) Reset Iterations */
#define US_CR_SPI_MASTER_RSTIT      (_U_(0x1) << US_CR_SPI_MASTER_RSTIT_Pos)
#define   US_CR_SPI_MASTER_RSTIT_0_Val    _U_(0x0)   /**< \brief (US_CR_SPI_MASTER) No effect */
#define   US_CR_SPI_MASTER_RSTIT_1_Val    _U_(0x1)   /**< \brief (US_CR_SPI_MASTER) Resets ITERATION in CSR. No effect if the ISO7816 is not enabled */
#define US_CR_SPI_MASTER_RSTIT_0    (US_CR_SPI_MASTER_RSTIT_0_Val  << US_CR_SPI_MASTER_RSTIT_Pos)
#define US_CR_SPI_MASTER_RSTIT_1    (US_CR_SPI_MASTER_RSTIT_1_Val  << US_CR_SPI_MASTER_RSTIT_Pos)
#define US_CR_SPI_MASTER_RSTNACK_Pos 14           /**< \brief (US_CR_SPI_MASTER) Reset Non Acknowledge */
#define US_CR_SPI_MASTER_RSTNACK    (_U_(0x1) << US_CR_SPI_MASTER_RSTNACK_Pos)
#define   US_CR_SPI_MASTER_RSTNACK_0_Val  _U_(0x0)   /**< \brief (US_CR_SPI_MASTER) No effect */
#define   US_CR_SPI_MASTER_RSTNACK_1_Val  _U_(0x1)   /**< \brief (US_CR_SPI_MASTER) Resets NACK in CSR */
#define US_CR_SPI_MASTER_RSTNACK_0  (US_CR_SPI_MASTER_RSTNACK_0_Val << US_CR_SPI_MASTER_RSTNACK_Pos)
#define US_CR_SPI_MASTER_RSTNACK_1  (US_CR_SPI_MASTER_RSTNACK_1_Val << US_CR_SPI_MASTER_RSTNACK_Pos)
#define US_CR_SPI_MASTER_RETTO_Pos  15           /**< \brief (US_CR_SPI_MASTER) Rearm Time-out */
#define US_CR_SPI_MASTER_RETTO      (_U_(0x1) << US_CR_SPI_MASTER_RETTO_Pos)
#define   US_CR_SPI_MASTER_RETTO_0_Val    _U_(0x0)   /**< \brief (US_CR_SPI_MASTER) No effect */
#define   US_CR_SPI_MASTER_RETTO_1_Val    _U_(0x1)   /**< \brief (US_CR_SPI_MASTER) Restart Time-out */
#define US_CR_SPI_MASTER_RETTO_0    (US_CR_SPI_MASTER_RETTO_0_Val  << US_CR_SPI_MASTER_RETTO_Pos)
#define US_CR_SPI_MASTER_RETTO_1    (US_CR_SPI_MASTER_RETTO_1_Val  << US_CR_SPI_MASTER_RETTO_Pos)
#define US_CR_SPI_MASTER_DTREN_Pos  16           /**< \brief (US_CR_SPI_MASTER) Data Terminal Ready Enable */
#define US_CR_SPI_MASTER_DTREN      (_U_(0x1) << US_CR_SPI_MASTER_DTREN_Pos)
#define   US_CR_SPI_MASTER_DTREN_0_Val    _U_(0x0)   /**< \brief (US_CR_SPI_MASTER) No effect */
#define   US_CR_SPI_MASTER_DTREN_1_Val    _U_(0x1)   /**< \brief (US_CR_SPI_MASTER) Drives the pin DTR at 0 */
#define US_CR_SPI_MASTER_DTREN_0    (US_CR_SPI_MASTER_DTREN_0_Val  << US_CR_SPI_MASTER_DTREN_Pos)
#define US_CR_SPI_MASTER_DTREN_1    (US_CR_SPI_MASTER_DTREN_1_Val  << US_CR_SPI_MASTER_DTREN_Pos)
#define US_CR_SPI_MASTER_DTRDIS_Pos 17           /**< \brief (US_CR_SPI_MASTER) Data Terminal Ready Disable */
#define US_CR_SPI_MASTER_DTRDIS     (_U_(0x1) << US_CR_SPI_MASTER_DTRDIS_Pos)
#define   US_CR_SPI_MASTER_DTRDIS_0_Val   _U_(0x0)   /**< \brief (US_CR_SPI_MASTER) No effect */
#define   US_CR_SPI_MASTER_DTRDIS_1_Val   _U_(0x1)   /**< \brief (US_CR_SPI_MASTER) Drives the pin DTR to 1 */
#define US_CR_SPI_MASTER_DTRDIS_0   (US_CR_SPI_MASTER_DTRDIS_0_Val << US_CR_SPI_MASTER_DTRDIS_Pos)
#define US_CR_SPI_MASTER_DTRDIS_1   (US_CR_SPI_MASTER_DTRDIS_1_Val << US_CR_SPI_MASTER_DTRDIS_Pos)
#define US_CR_SPI_MASTER_FCS_Pos    18           /**< \brief (US_CR_SPI_MASTER) Force SPI Chip Select */
#define US_CR_SPI_MASTER_FCS        (_U_(0x1) << US_CR_SPI_MASTER_FCS_Pos)
#define   US_CR_SPI_MASTER_FCS_0_Val      _U_(0x0)   /**< \brief (US_CR_SPI_MASTER) No effect */
#define   US_CR_SPI_MASTER_FCS_1_Val      _U_(0x1)   /**< \brief (US_CR_SPI_MASTER) Forces the Slave Select Line NSS (RTS pin) to 0, even if USART is no transmitting, in order to address SPI slave devices supporting the CSAAT Mode (Chip Select Active After Transfer) */
#define US_CR_SPI_MASTER_FCS_0      (US_CR_SPI_MASTER_FCS_0_Val    << US_CR_SPI_MASTER_FCS_Pos)
#define US_CR_SPI_MASTER_FCS_1      (US_CR_SPI_MASTER_FCS_1_Val    << US_CR_SPI_MASTER_FCS_Pos)
#define US_CR_SPI_MASTER_RCS_Pos    19           /**< \brief (US_CR_SPI_MASTER) Release SPI Chip Select */
#define US_CR_SPI_MASTER_RCS        (_U_(0x1) << US_CR_SPI_MASTER_RCS_Pos)
#define   US_CR_SPI_MASTER_RCS_0_Val      _U_(0x0)   /**< \brief (US_CR_SPI_MASTER) No effect */
#define   US_CR_SPI_MASTER_RCS_1_Val      _U_(0x1)   /**< \brief (US_CR_SPI_MASTER) Releases the Slave Select Line NSS (RTS pin) */
#define US_CR_SPI_MASTER_RCS_0      (US_CR_SPI_MASTER_RCS_0_Val    << US_CR_SPI_MASTER_RCS_Pos)
#define US_CR_SPI_MASTER_RCS_1      (US_CR_SPI_MASTER_RCS_1_Val    << US_CR_SPI_MASTER_RCS_Pos)
#define US_CR_SPI_MASTER_MASK       _U_(0x000FFFFC) /**< \brief (US_CR_SPI_MASTER) MASK Register */

// USART mode
#define US_CR_USART_RSTRX_Pos       2            /**< \brief (US_CR_USART) Reset Receiver */
#define US_CR_USART_RSTRX           (_U_(0x1) << US_CR_USART_RSTRX_Pos)
#define   US_CR_USART_RSTRX_0_Val         _U_(0x0)   /**< \brief (US_CR_USART) No effect */
#define   US_CR_USART_RSTRX_1_Val         _U_(0x1)   /**< \brief (US_CR_USART) Resets the receiver */
#define US_CR_USART_RSTRX_0         (US_CR_USART_RSTRX_0_Val       << US_CR_USART_RSTRX_Pos)
#define US_CR_USART_RSTRX_1         (US_CR_USART_RSTRX_1_Val       << US_CR_USART_RSTRX_Pos)
#define US_CR_USART_RSTTX_Pos       3            /**< \brief (US_CR_USART) Reset Transmitter */
#define US_CR_USART_RSTTX           (_U_(0x1) << US_CR_USART_RSTTX_Pos)
#define   US_CR_USART_RSTTX_0_Val         _U_(0x0)   /**< \brief (US_CR_USART) No effect */
#define   US_CR_USART_RSTTX_1_Val         _U_(0x1)   /**< \brief (US_CR_USART) Resets the transmitter */
#define US_CR_USART_RSTTX_0         (US_CR_USART_RSTTX_0_Val       << US_CR_USART_RSTTX_Pos)
#define US_CR_USART_RSTTX_1         (US_CR_USART_RSTTX_1_Val       << US_CR_USART_RSTTX_Pos)
#define US_CR_USART_RXEN_Pos        4            /**< \brief (US_CR_USART) Receiver Enable */
#define US_CR_USART_RXEN            (_U_(0x1) << US_CR_USART_RXEN_Pos)
#define   US_CR_USART_RXEN_0_Val          _U_(0x0)   /**< \brief (US_CR_USART) No effect */
#define   US_CR_USART_RXEN_1_Val          _U_(0x1)   /**< \brief (US_CR_USART) Enables the receiver, if RXDIS is 0 */
#define US_CR_USART_RXEN_0          (US_CR_USART_RXEN_0_Val        << US_CR_USART_RXEN_Pos)
#define US_CR_USART_RXEN_1          (US_CR_USART_RXEN_1_Val        << US_CR_USART_RXEN_Pos)
#define US_CR_USART_RXDIS_Pos       5            /**< \brief (US_CR_USART) Receiver Disable */
#define US_CR_USART_RXDIS           (_U_(0x1) << US_CR_USART_RXDIS_Pos)
#define   US_CR_USART_RXDIS_0_Val         _U_(0x0)   /**< \brief (US_CR_USART) No effect */
#define   US_CR_USART_RXDIS_1_Val         _U_(0x1)   /**< \brief (US_CR_USART) Disables the receiver */
#define US_CR_USART_RXDIS_0         (US_CR_USART_RXDIS_0_Val       << US_CR_USART_RXDIS_Pos)
#define US_CR_USART_RXDIS_1         (US_CR_USART_RXDIS_1_Val       << US_CR_USART_RXDIS_Pos)
#define US_CR_USART_TXEN_Pos        6            /**< \brief (US_CR_USART) Transmitter Enable */
#define US_CR_USART_TXEN            (_U_(0x1) << US_CR_USART_TXEN_Pos)
#define   US_CR_USART_TXEN_0_Val          _U_(0x0)   /**< \brief (US_CR_USART) No effect */
#define   US_CR_USART_TXEN_1_Val          _U_(0x1)   /**< \brief (US_CR_USART) Enables the transmitter if TXDIS is 0 */
#define US_CR_USART_TXEN_0          (US_CR_USART_TXEN_0_Val        << US_CR_USART_TXEN_Pos)
#define US_CR_USART_TXEN_1          (US_CR_USART_TXEN_1_Val        << US_CR_USART_TXEN_Pos)
#define US_CR_USART_TXDIS_Pos       7            /**< \brief (US_CR_USART) Transmitter Disable */
#define US_CR_USART_TXDIS           (_U_(0x1) << US_CR_USART_TXDIS_Pos)
#define   US_CR_USART_TXDIS_0_Val         _U_(0x0)   /**< \brief (US_CR_USART) No effect */
#define   US_CR_USART_TXDIS_1_Val         _U_(0x1)   /**< \brief (US_CR_USART) Disables the transmitter */
#define US_CR_USART_TXDIS_0         (US_CR_USART_TXDIS_0_Val       << US_CR_USART_TXDIS_Pos)
#define US_CR_USART_TXDIS_1         (US_CR_USART_TXDIS_1_Val       << US_CR_USART_TXDIS_Pos)
#define US_CR_USART_RSTSTA_Pos      8            /**< \brief (US_CR_USART) Reset Status Bits */
#define US_CR_USART_RSTSTA          (_U_(0x1) << US_CR_USART_RSTSTA_Pos)
#define   US_CR_USART_RSTSTA_0_Val        _U_(0x0)   /**< \brief (US_CR_USART) No effect */
#define   US_CR_USART_RSTSTA_1_Val        _U_(0x1)   /**< \brief (US_CR_USART) Resets the status bits PARE, FRAME, OVRE and RXBRK in the CSR */
#define US_CR_USART_RSTSTA_0        (US_CR_USART_RSTSTA_0_Val      << US_CR_USART_RSTSTA_Pos)
#define US_CR_USART_RSTSTA_1        (US_CR_USART_RSTSTA_1_Val      << US_CR_USART_RSTSTA_Pos)
#define US_CR_USART_STTBRK_Pos      9            /**< \brief (US_CR_USART) Start Break */
#define US_CR_USART_STTBRK          (_U_(0x1) << US_CR_USART_STTBRK_Pos)
#define   US_CR_USART_STTBRK_0_Val        _U_(0x0)   /**< \brief (US_CR_USART) No effect */
#define   US_CR_USART_STTBRK_1_Val        _U_(0x1)   /**< \brief (US_CR_USART) Starts transmission of a break after the characters present in THR and the Transmit Shift Register have been transmitted. No effect if a break is already being transmitted */
#define US_CR_USART_STTBRK_0        (US_CR_USART_STTBRK_0_Val      << US_CR_USART_STTBRK_Pos)
#define US_CR_USART_STTBRK_1        (US_CR_USART_STTBRK_1_Val      << US_CR_USART_STTBRK_Pos)
#define US_CR_USART_STPBRK_Pos      10           /**< \brief (US_CR_USART) Stop Break */
#define US_CR_USART_STPBRK          (_U_(0x1) << US_CR_USART_STPBRK_Pos)
#define   US_CR_USART_STPBRK_0_Val        _U_(0x0)   /**< \brief (US_CR_USART) No effect */
#define   US_CR_USART_STPBRK_1_Val        _U_(0x1)   /**< \brief (US_CR_USART) Stops transmission of the break after a minimum of one character length and transmits a high level during 12-bit periods.No effect if no break is being transmitted */
#define US_CR_USART_STPBRK_0        (US_CR_USART_STPBRK_0_Val      << US_CR_USART_STPBRK_Pos)
#define US_CR_USART_STPBRK_1        (US_CR_USART_STPBRK_1_Val      << US_CR_USART_STPBRK_Pos)
#define US_CR_USART_STTTO_Pos       11           /**< \brief (US_CR_USART) Start Time-out */
#define US_CR_USART_STTTO           (_U_(0x1) << US_CR_USART_STTTO_Pos)
#define   US_CR_USART_STTTO_0_Val         _U_(0x0)   /**< \brief (US_CR_USART) No effect */
#define   US_CR_USART_STTTO_1_Val         _U_(0x1)   /**< \brief (US_CR_USART) Starts waiting for a character before clocking the time-out counter */
#define US_CR_USART_STTTO_0         (US_CR_USART_STTTO_0_Val       << US_CR_USART_STTTO_Pos)
#define US_CR_USART_STTTO_1         (US_CR_USART_STTTO_1_Val       << US_CR_USART_STTTO_Pos)
#define US_CR_USART_SENDA_Pos       12           /**< \brief (US_CR_USART) Send Address */
#define US_CR_USART_SENDA           (_U_(0x1) << US_CR_USART_SENDA_Pos)
#define   US_CR_USART_SENDA_0_Val         _U_(0x0)   /**< \brief (US_CR_USART) No effect */
#define   US_CR_USART_SENDA_1_Val         _U_(0x1)   /**< \brief (US_CR_USART) In Multi-drop Mode only, the next character written to the THR is sent with the address bit set */
#define US_CR_USART_SENDA_0         (US_CR_USART_SENDA_0_Val       << US_CR_USART_SENDA_Pos)
#define US_CR_USART_SENDA_1         (US_CR_USART_SENDA_1_Val       << US_CR_USART_SENDA_Pos)
#define US_CR_USART_RSTIT_Pos       13           /**< \brief (US_CR_USART) Reset Iterations */
#define US_CR_USART_RSTIT           (_U_(0x1) << US_CR_USART_RSTIT_Pos)
#define   US_CR_USART_RSTIT_0_Val         _U_(0x0)   /**< \brief (US_CR_USART) No effect */
#define   US_CR_USART_RSTIT_1_Val         _U_(0x1)   /**< \brief (US_CR_USART) Resets ITERATION in CSR. No effect if the ISO7816 is not enabled */
#define US_CR_USART_RSTIT_0         (US_CR_USART_RSTIT_0_Val       << US_CR_USART_RSTIT_Pos)
#define US_CR_USART_RSTIT_1         (US_CR_USART_RSTIT_1_Val       << US_CR_USART_RSTIT_Pos)
#define US_CR_USART_RSTNACK_Pos     14           /**< \brief (US_CR_USART) Reset Non Acknowledge */
#define US_CR_USART_RSTNACK         (_U_(0x1) << US_CR_USART_RSTNACK_Pos)
#define   US_CR_USART_RSTNACK_0_Val       _U_(0x0)   /**< \brief (US_CR_USART) No effect */
#define   US_CR_USART_RSTNACK_1_Val       _U_(0x1)   /**< \brief (US_CR_USART) Resets NACK in CSR */
#define US_CR_USART_RSTNACK_0       (US_CR_USART_RSTNACK_0_Val     << US_CR_USART_RSTNACK_Pos)
#define US_CR_USART_RSTNACK_1       (US_CR_USART_RSTNACK_1_Val     << US_CR_USART_RSTNACK_Pos)
#define US_CR_USART_RETTO_Pos       15           /**< \brief (US_CR_USART) Rearm Time-out */
#define US_CR_USART_RETTO           (_U_(0x1) << US_CR_USART_RETTO_Pos)
#define   US_CR_USART_RETTO_0_Val         _U_(0x0)   /**< \brief (US_CR_USART) No effect */
#define   US_CR_USART_RETTO_1_Val         _U_(0x1)   /**< \brief (US_CR_USART) Restart Time-out */
#define US_CR_USART_RETTO_0         (US_CR_USART_RETTO_0_Val       << US_CR_USART_RETTO_Pos)
#define US_CR_USART_RETTO_1         (US_CR_USART_RETTO_1_Val       << US_CR_USART_RETTO_Pos)
#define US_CR_USART_DTREN_Pos       16           /**< \brief (US_CR_USART) Data Terminal Ready Enable */
#define US_CR_USART_DTREN           (_U_(0x1) << US_CR_USART_DTREN_Pos)
#define   US_CR_USART_DTREN_0_Val         _U_(0x0)   /**< \brief (US_CR_USART) No effect */
#define   US_CR_USART_DTREN_1_Val         _U_(0x1)   /**< \brief (US_CR_USART) Drives the pin DTR at 0 */
#define US_CR_USART_DTREN_0         (US_CR_USART_DTREN_0_Val       << US_CR_USART_DTREN_Pos)
#define US_CR_USART_DTREN_1         (US_CR_USART_DTREN_1_Val       << US_CR_USART_DTREN_Pos)
#define US_CR_USART_DTRDIS_Pos      17           /**< \brief (US_CR_USART) Data Terminal Ready Disable */
#define US_CR_USART_DTRDIS          (_U_(0x1) << US_CR_USART_DTRDIS_Pos)
#define   US_CR_USART_DTRDIS_0_Val        _U_(0x0)   /**< \brief (US_CR_USART) No effect */
#define   US_CR_USART_DTRDIS_1_Val        _U_(0x1)   /**< \brief (US_CR_USART) Drives the pin DTR to 1 */
#define US_CR_USART_DTRDIS_0        (US_CR_USART_DTRDIS_0_Val      << US_CR_USART_DTRDIS_Pos)
#define US_CR_USART_DTRDIS_1        (US_CR_USART_DTRDIS_1_Val      << US_CR_USART_DTRDIS_Pos)
#define US_CR_USART_RTSEN_Pos       18           /**< \brief (US_CR_USART) Request to Send Enable */
#define US_CR_USART_RTSEN           (_U_(0x1) << US_CR_USART_RTSEN_Pos)
#define   US_CR_USART_RTSEN_0_Val         _U_(0x0)   /**< \brief (US_CR_USART) No effect */
#define   US_CR_USART_RTSEN_1_Val         _U_(0x1)   /**< \brief (US_CR_USART) Drives the pin RTS to 0 */
#define US_CR_USART_RTSEN_0         (US_CR_USART_RTSEN_0_Val       << US_CR_USART_RTSEN_Pos)
#define US_CR_USART_RTSEN_1         (US_CR_USART_RTSEN_1_Val       << US_CR_USART_RTSEN_Pos)
#define US_CR_USART_RTSDIS_Pos      19           /**< \brief (US_CR_USART) Request to Send Disable */
#define US_CR_USART_RTSDIS          (_U_(0x1) << US_CR_USART_RTSDIS_Pos)
#define   US_CR_USART_RTSDIS_0_Val        _U_(0x0)   /**< \brief (US_CR_USART) No effect */
#define   US_CR_USART_RTSDIS_1_Val        _U_(0x1)   /**< \brief (US_CR_USART) Drives the pin RTS to 1 */
#define US_CR_USART_RTSDIS_0        (US_CR_USART_RTSDIS_0_Val      << US_CR_USART_RTSDIS_Pos)
#define US_CR_USART_RTSDIS_1        (US_CR_USART_RTSDIS_1_Val      << US_CR_USART_RTSDIS_Pos)
#define US_CR_USART_MASK            _U_(0x000FFFFC) /**< \brief (US_CR_USART) MASK Register */

// Any mode
#define US_CR_RSTRX_Pos             2            /**< \brief (US_CR) Reset Receiver */
#define US_CR_RSTRX                 (_U_(0x1) << US_CR_RSTRX_Pos)
#define   US_CR_RSTRX_0_Val               _U_(0x0)   /**< \brief (US_CR) No effect */
#define   US_CR_RSTRX_1_Val               _U_(0x1)   /**< \brief (US_CR) Resets the receiver */
#define US_CR_RSTRX_0               (US_CR_RSTRX_0_Val             << US_CR_RSTRX_Pos)
#define US_CR_RSTRX_1               (US_CR_RSTRX_1_Val             << US_CR_RSTRX_Pos)
#define US_CR_RSTTX_Pos             3            /**< \brief (US_CR) Reset Transmitter */
#define US_CR_RSTTX                 (_U_(0x1) << US_CR_RSTTX_Pos)
#define   US_CR_RSTTX_0_Val               _U_(0x0)   /**< \brief (US_CR) No effect */
#define   US_CR_RSTTX_1_Val               _U_(0x1)   /**< \brief (US_CR) Resets the transmitter */
#define US_CR_RSTTX_0               (US_CR_RSTTX_0_Val             << US_CR_RSTTX_Pos)
#define US_CR_RSTTX_1               (US_CR_RSTTX_1_Val             << US_CR_RSTTX_Pos)
#define US_CR_RXEN_Pos              4            /**< \brief (US_CR) Receiver Enable */
#define US_CR_RXEN                  (_U_(0x1) << US_CR_RXEN_Pos)
#define   US_CR_RXEN_0_Val                _U_(0x0)   /**< \brief (US_CR) No effect */
#define   US_CR_RXEN_1_Val                _U_(0x1)   /**< \brief (US_CR) Enables the receiver, if RXDIS is 0 */
#define US_CR_RXEN_0                (US_CR_RXEN_0_Val              << US_CR_RXEN_Pos)
#define US_CR_RXEN_1                (US_CR_RXEN_1_Val              << US_CR_RXEN_Pos)
#define US_CR_RXDIS_Pos             5            /**< \brief (US_CR) Receiver Disable */
#define US_CR_RXDIS                 (_U_(0x1) << US_CR_RXDIS_Pos)
#define   US_CR_RXDIS_0_Val               _U_(0x0)   /**< \brief (US_CR) No effect */
#define   US_CR_RXDIS_1_Val               _U_(0x1)   /**< \brief (US_CR) Disables the receiver */
#define US_CR_RXDIS_0               (US_CR_RXDIS_0_Val             << US_CR_RXDIS_Pos)
#define US_CR_RXDIS_1               (US_CR_RXDIS_1_Val             << US_CR_RXDIS_Pos)
#define US_CR_TXEN_Pos              6            /**< \brief (US_CR) Transmitter Enable */
#define US_CR_TXEN                  (_U_(0x1) << US_CR_TXEN_Pos)
#define   US_CR_TXEN_0_Val                _U_(0x0)   /**< \brief (US_CR) No effect */
#define   US_CR_TXEN_1_Val                _U_(0x1)   /**< \brief (US_CR) Enables the transmitter if TXDIS is 0 */
#define US_CR_TXEN_0                (US_CR_TXEN_0_Val              << US_CR_TXEN_Pos)
#define US_CR_TXEN_1                (US_CR_TXEN_1_Val              << US_CR_TXEN_Pos)
#define US_CR_TXDIS_Pos             7            /**< \brief (US_CR) Transmitter Disable */
#define US_CR_TXDIS                 (_U_(0x1) << US_CR_TXDIS_Pos)
#define   US_CR_TXDIS_0_Val               _U_(0x0)   /**< \brief (US_CR) No effect */
#define   US_CR_TXDIS_1_Val               _U_(0x1)   /**< \brief (US_CR) Disables the transmitter */
#define US_CR_TXDIS_0               (US_CR_TXDIS_0_Val             << US_CR_TXDIS_Pos)
#define US_CR_TXDIS_1               (US_CR_TXDIS_1_Val             << US_CR_TXDIS_Pos)
#define US_CR_RSTSTA_Pos            8            /**< \brief (US_CR) Reset Status Bits */
#define US_CR_RSTSTA                (_U_(0x1) << US_CR_RSTSTA_Pos)
#define   US_CR_RSTSTA_0_Val              _U_(0x0)   /**< \brief (US_CR) No effect */
#define   US_CR_RSTSTA_1_Val              _U_(0x1)   /**< \brief (US_CR) Resets the status bits PARE, FRAME, OVRE and RXBRK in the CSR */
#define US_CR_RSTSTA_0              (US_CR_RSTSTA_0_Val            << US_CR_RSTSTA_Pos)
#define US_CR_RSTSTA_1              (US_CR_RSTSTA_1_Val            << US_CR_RSTSTA_Pos)
#define US_CR_STTBRK_Pos            9            /**< \brief (US_CR) Start Break */
#define US_CR_STTBRK                (_U_(0x1) << US_CR_STTBRK_Pos)
#define   US_CR_STTBRK_0_Val              _U_(0x0)   /**< \brief (US_CR) No effect */
#define   US_CR_STTBRK_1_Val              _U_(0x1)   /**< \brief (US_CR) Starts transmission of a break after the characters present in THR and the Transmit Shift Register have been transmitted. No effect if a break is already being transmitted */
#define US_CR_STTBRK_0              (US_CR_STTBRK_0_Val            << US_CR_STTBRK_Pos)
#define US_CR_STTBRK_1              (US_CR_STTBRK_1_Val            << US_CR_STTBRK_Pos)
#define US_CR_STPBRK_Pos            10           /**< \brief (US_CR) Stop Break */
#define US_CR_STPBRK                (_U_(0x1) << US_CR_STPBRK_Pos)
#define   US_CR_STPBRK_0_Val              _U_(0x0)   /**< \brief (US_CR) No effect */
#define   US_CR_STPBRK_1_Val              _U_(0x1)   /**< \brief (US_CR) Stops transmission of the break after a minimum of one character length and transmits a high level during 12-bit periods.No effect if no break is being transmitted */
#define US_CR_STPBRK_0              (US_CR_STPBRK_0_Val            << US_CR_STPBRK_Pos)
#define US_CR_STPBRK_1              (US_CR_STPBRK_1_Val            << US_CR_STPBRK_Pos)
#define US_CR_STTTO_Pos             11           /**< \brief (US_CR) Start Time-out */
#define US_CR_STTTO                 (_U_(0x1) << US_CR_STTTO_Pos)
#define   US_CR_STTTO_0_Val               _U_(0x0)   /**< \brief (US_CR) No effect */
#define   US_CR_STTTO_1_Val               _U_(0x1)   /**< \brief (US_CR) Starts waiting for a character before clocking the time-out counter */
#define US_CR_STTTO_0               (US_CR_STTTO_0_Val             << US_CR_STTTO_Pos)
#define US_CR_STTTO_1               (US_CR_STTTO_1_Val             << US_CR_STTTO_Pos)
#define US_CR_SENDA_Pos             12           /**< \brief (US_CR) Send Address */
#define US_CR_SENDA                 (_U_(0x1) << US_CR_SENDA_Pos)
#define   US_CR_SENDA_0_Val               _U_(0x0)   /**< \brief (US_CR) No effect */
#define   US_CR_SENDA_1_Val               _U_(0x1)   /**< \brief (US_CR) In Multi-drop Mode only, the next character written to the THR is sent with the address bit set */
#define US_CR_SENDA_0               (US_CR_SENDA_0_Val             << US_CR_SENDA_Pos)
#define US_CR_SENDA_1               (US_CR_SENDA_1_Val             << US_CR_SENDA_Pos)
#define US_CR_RSTIT_Pos             13           /**< \brief (US_CR) Reset Iterations */
#define US_CR_RSTIT                 (_U_(0x1) << US_CR_RSTIT_Pos)
#define   US_CR_RSTIT_0_Val               _U_(0x0)   /**< \brief (US_CR) No effect */
#define   US_CR_RSTIT_1_Val               _U_(0x1)   /**< \brief (US_CR) Resets ITERATION in CSR. No effect if the ISO7816 is not enabled */
#define US_CR_RSTIT_0               (US_CR_RSTIT_0_Val             << US_CR_RSTIT_Pos)
#define US_CR_RSTIT_1               (US_CR_RSTIT_1_Val             << US_CR_RSTIT_Pos)
#define US_CR_RSTNACK_Pos           14           /**< \brief (US_CR) Reset Non Acknowledge */
#define US_CR_RSTNACK               (_U_(0x1) << US_CR_RSTNACK_Pos)
#define   US_CR_RSTNACK_0_Val             _U_(0x0)   /**< \brief (US_CR) No effect */
#define   US_CR_RSTNACK_1_Val             _U_(0x1)   /**< \brief (US_CR) Resets NACK in CSR */
#define US_CR_RSTNACK_0             (US_CR_RSTNACK_0_Val           << US_CR_RSTNACK_Pos)
#define US_CR_RSTNACK_1             (US_CR_RSTNACK_1_Val           << US_CR_RSTNACK_Pos)
#define US_CR_RETTO_Pos             15           /**< \brief (US_CR) Rearm Time-out */
#define US_CR_RETTO                 (_U_(0x1) << US_CR_RETTO_Pos)
#define   US_CR_RETTO_0_Val               _U_(0x0)   /**< \brief (US_CR) No effect */
#define   US_CR_RETTO_1_Val               _U_(0x1)   /**< \brief (US_CR) Restart Time-out */
#define US_CR_RETTO_0               (US_CR_RETTO_0_Val             << US_CR_RETTO_Pos)
#define US_CR_RETTO_1               (US_CR_RETTO_1_Val             << US_CR_RETTO_Pos)
#define US_CR_DTREN_Pos             16           /**< \brief (US_CR) Data Terminal Ready Enable */
#define US_CR_DTREN                 (_U_(0x1) << US_CR_DTREN_Pos)
#define   US_CR_DTREN_0_Val               _U_(0x0)   /**< \brief (US_CR) No effect */
#define   US_CR_DTREN_1_Val               _U_(0x1)   /**< \brief (US_CR) Drives the pin DTR at 0 */
#define US_CR_DTREN_0               (US_CR_DTREN_0_Val             << US_CR_DTREN_Pos)
#define US_CR_DTREN_1               (US_CR_DTREN_1_Val             << US_CR_DTREN_Pos)
#define US_CR_DTRDIS_Pos            17           /**< \brief (US_CR) Data Terminal Ready Disable */
#define US_CR_DTRDIS                (_U_(0x1) << US_CR_DTRDIS_Pos)
#define   US_CR_DTRDIS_0_Val              _U_(0x0)   /**< \brief (US_CR) No effect */
#define   US_CR_DTRDIS_1_Val              _U_(0x1)   /**< \brief (US_CR) Drives the pin DTR to 1 */
#define US_CR_DTRDIS_0              (US_CR_DTRDIS_0_Val            << US_CR_DTRDIS_Pos)
#define US_CR_DTRDIS_1              (US_CR_DTRDIS_1_Val            << US_CR_DTRDIS_Pos)
#define US_CR_RTSEN_Pos             18           /**< \brief (US_CR) Request to Send Enable */
#define US_CR_RTSEN                 (_U_(0x1) << US_CR_RTSEN_Pos)
#define   US_CR_RTSEN_0_Val               _U_(0x0)   /**< \brief (US_CR) No effect */
#define   US_CR_RTSEN_1_Val               _U_(0x1)   /**< \brief (US_CR) Drives the pin RTS to 0 */
#define US_CR_RTSEN_0               (US_CR_RTSEN_0_Val             << US_CR_RTSEN_Pos)
#define US_CR_RTSEN_1               (US_CR_RTSEN_1_Val             << US_CR_RTSEN_Pos)
#define US_CR_FCS_Pos               18           /**< \brief (US_CR) Force SPI Chip Select */
#define US_CR_FCS                   (_U_(0x1) << US_CR_FCS_Pos)
#define   US_CR_FCS_0_Val                 _U_(0x0)   /**< \brief (US_CR) No effect */
#define   US_CR_FCS_1_Val                 _U_(0x1)   /**< \brief (US_CR) Forces the Slave Select Line NSS (RTS pin) to 0, even if USART is no transmitting, in order to address SPI slave devices supporting the CSAAT Mode (Chip Select Active After Transfer) */
#define US_CR_FCS_0                 (US_CR_FCS_0_Val               << US_CR_FCS_Pos)
#define US_CR_FCS_1                 (US_CR_FCS_1_Val               << US_CR_FCS_Pos)
#define US_CR_RTSEN_Pos             18           /**< \brief (US_CR) Request to Send Enable */
#define US_CR_RTSEN                 (_U_(0x1) << US_CR_RTSEN_Pos)
#define   US_CR_RTSEN_0_Val               _U_(0x0)   /**< \brief (US_CR) No effect */
#define   US_CR_RTSEN_1_Val               _U_(0x1)   /**< \brief (US_CR) Drives the pin RTS to 0 */
#define US_CR_RTSEN_0               (US_CR_RTSEN_0_Val             << US_CR_RTSEN_Pos)
#define US_CR_RTSEN_1               (US_CR_RTSEN_1_Val             << US_CR_RTSEN_Pos)
#define US_CR_RTSDIS_Pos            19           /**< \brief (US_CR) Request to Send Disable */
#define US_CR_RTSDIS                (_U_(0x1) << US_CR_RTSDIS_Pos)
#define   US_CR_RTSDIS_0_Val              _U_(0x0)   /**< \brief (US_CR) No effect */
#define   US_CR_RTSDIS_1_Val              _U_(0x1)   /**< \brief (US_CR) Drives the pin RTS to 1 */
#define US_CR_RTSDIS_0              (US_CR_RTSDIS_0_Val            << US_CR_RTSDIS_Pos)
#define US_CR_RTSDIS_1              (US_CR_RTSDIS_1_Val            << US_CR_RTSDIS_Pos)
#define US_CR_RCS_Pos               19           /**< \brief (US_CR) Release SPI Chip Select */
#define US_CR_RCS                   (_U_(0x1) << US_CR_RCS_Pos)
#define   US_CR_RCS_0_Val                 _U_(0x0)   /**< \brief (US_CR) No effect */
#define   US_CR_RCS_1_Val                 _U_(0x1)   /**< \brief (US_CR) Releases the Slave Select Line NSS (RTS pin) */
#define US_CR_RCS_0                 (US_CR_RCS_0_Val               << US_CR_RCS_Pos)
#define US_CR_RCS_1                 (US_CR_RCS_1_Val               << US_CR_RCS_Pos)
#define US_CR_RTSDIS_Pos            19           /**< \brief (US_CR) Request to Send Disable */
#define US_CR_RTSDIS                (_U_(0x1) << US_CR_RTSDIS_Pos)
#define   US_CR_RTSDIS_0_Val              _U_(0x0)   /**< \brief (US_CR) No effect */
#define   US_CR_RTSDIS_1_Val              _U_(0x1)   /**< \brief (US_CR) Drives the pin RTS to 1 */
#define US_CR_RTSDIS_0              (US_CR_RTSDIS_0_Val            << US_CR_RTSDIS_Pos)
#define US_CR_RTSDIS_1              (US_CR_RTSDIS_1_Val            << US_CR_RTSDIS_Pos)
#define US_CR_LINABT_Pos            20           /**< \brief (US_CR) Abort the current LIN transmission */
#define US_CR_LINABT                (_U_(0x1) << US_CR_LINABT_Pos)
#define US_CR_LINWKUP_Pos           21           /**< \brief (US_CR) Sends a wakeup signal on the LIN bus */
#define US_CR_LINWKUP               (_U_(0x1) << US_CR_LINWKUP_Pos)
#define US_CR_MASK                  _U_(0x003FFFFC) /**< \brief (US_CR) MASK Register */

/* -------- US_MR : (USART Offset: 0x04) (R/W 32) Mode Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct { // SPI mode
    uint32_t MODE:4;           /*!< bit:  0.. 3  Usart Mode                         */
    uint32_t USCLKS:2;         /*!< bit:  4.. 5  Clock Selection                    */
    uint32_t CHRL:2;           /*!< bit:  6.. 7  Character Length.                  */
    uint32_t CPHA:1;           /*!< bit:      8  SPI CLock Phase                    */
    uint32_t PAR:3;            /*!< bit:  9..11  Parity Type                        */
    uint32_t NBSTOP:2;         /*!< bit: 12..13  Number of Stop Bits                */
    uint32_t CHMODE:2;         /*!< bit: 14..15  Channel Mode                       */
    uint32_t CPOL:1;           /*!< bit:     16  SPI Clock Polarity                 */
    uint32_t MODE9:1;          /*!< bit:     17  9-bit Character Length             */
    uint32_t CLKO:1;           /*!< bit:     18  Clock Output Select                */
    uint32_t OVER:1;           /*!< bit:     19  Oversampling Mode                  */
    uint32_t INACK:1;          /*!< bit:     20  Inhibit Non Acknowledge            */
    uint32_t DSNACK:1;         /*!< bit:     21  Disable Successive NACK            */
    uint32_t :1;               /*!< bit:     22  Reserved                           */
    uint32_t INVDATA:1;        /*!< bit:     23  Inverted data                      */
    uint32_t MAX_ITERATION:3;  /*!< bit: 24..26  Max interation                     */
    uint32_t :1;               /*!< bit:     27  Reserved                           */
    uint32_t FILTER:1;         /*!< bit:     28  Infrared Receive Line Filter       */
    uint32_t :3;               /*!< bit: 29..31  Reserved                           */
  } SPI;                       /*!< Structure used for SPI                          */
  struct { // USART mode
    uint32_t MODE:4;           /*!< bit:  0.. 3  Usart Mode                         */
    uint32_t USCLKS:2;         /*!< bit:  4.. 5  Clock Selection                    */
    uint32_t CHRL:2;           /*!< bit:  6.. 7  Character Length.                  */
    uint32_t SYNC:1;           /*!< bit:      8  Synchronous Mode Select            */
    uint32_t PAR:3;            /*!< bit:  9..11  Parity Type                        */
    uint32_t NBSTOP:2;         /*!< bit: 12..13  Number of Stop Bits                */
    uint32_t CHMODE:2;         /*!< bit: 14..15  Channel Mode                       */
    uint32_t MSBF:1;           /*!< bit:     16  Bit Order                          */
    uint32_t MODE9:1;          /*!< bit:     17  9-bit Character Length             */
    uint32_t CLKO:1;           /*!< bit:     18  Clock Output Select                */
    uint32_t OVER:1;           /*!< bit:     19  Oversampling Mode                  */
    uint32_t INACK:1;          /*!< bit:     20  Inhibit Non Acknowledge            */
    uint32_t DSNACK:1;         /*!< bit:     21  Disable Successive NACK            */
    uint32_t VAR_SYNC:1;       /*!< bit:     22  Variable synchronization of command/data sync Start Frame Delimiter */
    uint32_t INVDATA:1;        /*!< bit:     23  Inverted data                      */
    uint32_t MAX_ITERATION:3;  /*!< bit: 24..26  Max interation                     */
    uint32_t :1;               /*!< bit:     27  Reserved                           */
    uint32_t FILTER:1;         /*!< bit:     28  Infrared Receive Line Filter       */
    uint32_t MAN:1;            /*!< bit:     29  Manchester Encoder/Decoder Enable  */
    uint32_t MODSYNC:1;        /*!< bit:     30  Manchester Synchronization Mode    */
    uint32_t ONEBIT:1;         /*!< bit:     31  Start Frame Delimiter selector     */
  } USART;                     /*!< Structure used for USART                        */
  uint32_t reg;                /*!< Type      used for register access              */
} US_MR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define US_MR_OFFSET                0x04         /**< \brief (US_MR offset) Mode Register */
#define US_MR_RESETVALUE            _U_(0x00000000); /**< \brief (US_MR reset_value) Mode Register */

// SPI mode
#define US_MR_SPI_MODE_Pos          0            /**< \brief (US_MR_SPI) Usart Mode */
#define US_MR_SPI_MODE_Msk          (_U_(0xF) << US_MR_SPI_MODE_Pos)
#define US_MR_SPI_MODE(value)       (US_MR_SPI_MODE_Msk & ((value) << US_MR_SPI_MODE_Pos))
#define   US_MR_SPI_MODE_NORMAL_Val       _U_(0x0)   /**< \brief (US_MR_SPI) Normal */
#define   US_MR_SPI_MODE_RS485_Val        _U_(0x1)   /**< \brief (US_MR_SPI) RS485 */
#define   US_MR_SPI_MODE_HARDWARE_Val     _U_(0x2)   /**< \brief (US_MR_SPI) Hardware Handshaking */
#define   US_MR_SPI_MODE_MODEM_Val        _U_(0x3)   /**< \brief (US_MR_SPI) Modem */
#define   US_MR_SPI_MODE_ISO7816_T0_Val   _U_(0x4)   /**< \brief (US_MR_SPI) IS07816 Protocol: T = 0 */
#define   US_MR_SPI_MODE_ISO7816_T1_Val   _U_(0x6)   /**< \brief (US_MR_SPI) IS07816 Protocol: T = 1 */
#define   US_MR_SPI_MODE_IRDA_Val         _U_(0x8)   /**< \brief (US_MR_SPI) IrDA */
#define   US_MR_SPI_MODE_LIN_MASTER_Val   _U_(0xA)   /**< \brief (US_MR_SPI) LIN Master */
#define   US_MR_SPI_MODE_LIN_SLAVE_Val    _U_(0xB)   /**< \brief (US_MR_SPI) LIN Slave */
#define   US_MR_SPI_MODE_SPI_MASTER_Val   _U_(0xE)   /**< \brief (US_MR_SPI) SPI Master */
#define   US_MR_SPI_MODE_SPI_SLAVE_Val    _U_(0xF)   /**< \brief (US_MR_SPI) SPI Slave */
#define US_MR_SPI_MODE_NORMAL       (US_MR_SPI_MODE_NORMAL_Val     << US_MR_SPI_MODE_Pos)
#define US_MR_SPI_MODE_RS485        (US_MR_SPI_MODE_RS485_Val      << US_MR_SPI_MODE_Pos)
#define US_MR_SPI_MODE_HARDWARE     (US_MR_SPI_MODE_HARDWARE_Val   << US_MR_SPI_MODE_Pos)
#define US_MR_SPI_MODE_MODEM        (US_MR_SPI_MODE_MODEM_Val      << US_MR_SPI_MODE_Pos)
#define US_MR_SPI_MODE_ISO7816_T0   (US_MR_SPI_MODE_ISO7816_T0_Val << US_MR_SPI_MODE_Pos)
#define US_MR_SPI_MODE_ISO7816_T1   (US_MR_SPI_MODE_ISO7816_T1_Val << US_MR_SPI_MODE_Pos)
#define US_MR_SPI_MODE_IRDA         (US_MR_SPI_MODE_IRDA_Val       << US_MR_SPI_MODE_Pos)
#define US_MR_SPI_MODE_LIN_MASTER   (US_MR_SPI_MODE_LIN_MASTER_Val << US_MR_SPI_MODE_Pos)
#define US_MR_SPI_MODE_LIN_SLAVE    (US_MR_SPI_MODE_LIN_SLAVE_Val  << US_MR_SPI_MODE_Pos)
#define US_MR_SPI_MODE_SPI_MASTER   (US_MR_SPI_MODE_SPI_MASTER_Val << US_MR_SPI_MODE_Pos)
#define US_MR_SPI_MODE_SPI_SLAVE    (US_MR_SPI_MODE_SPI_SLAVE_Val  << US_MR_SPI_MODE_Pos)
#define US_MR_SPI_USCLKS_Pos        4            /**< \brief (US_MR_SPI) Clock Selection */
#define US_MR_SPI_USCLKS_Msk        (_U_(0x3) << US_MR_SPI_USCLKS_Pos)
#define US_MR_SPI_USCLKS(value)     (US_MR_SPI_USCLKS_Msk & ((value) << US_MR_SPI_USCLKS_Pos))
#define   US_MR_SPI_USCLKS_MCK_Val        _U_(0x0)   /**< \brief (US_MR_SPI) MCK */
#define   US_MR_SPI_USCLKS_MCK_DIV_Val    _U_(0x1)   /**< \brief (US_MR_SPI) MCK / DIV */
#define   US_MR_SPI_USCLKS_2_Val          _U_(0x2)   /**< \brief (US_MR_SPI) Reserved */
#define   US_MR_SPI_USCLKS_SCK_Val        _U_(0x3)   /**< \brief (US_MR_SPI) SCK */
#define US_MR_SPI_USCLKS_MCK        (US_MR_SPI_USCLKS_MCK_Val      << US_MR_SPI_USCLKS_Pos)
#define US_MR_SPI_USCLKS_MCK_DIV    (US_MR_SPI_USCLKS_MCK_DIV_Val  << US_MR_SPI_USCLKS_Pos)
#define US_MR_SPI_USCLKS_2          (US_MR_SPI_USCLKS_2_Val        << US_MR_SPI_USCLKS_Pos)
#define US_MR_SPI_USCLKS_SCK        (US_MR_SPI_USCLKS_SCK_Val      << US_MR_SPI_USCLKS_Pos)
#define US_MR_SPI_CHRL_Pos          6            /**< \brief (US_MR_SPI) Character Length. */
#define US_MR_SPI_CHRL_Msk          (_U_(0x3) << US_MR_SPI_CHRL_Pos)
#define US_MR_SPI_CHRL(value)       (US_MR_SPI_CHRL_Msk & ((value) << US_MR_SPI_CHRL_Pos))
#define   US_MR_SPI_CHRL_5_Val            _U_(0x0)   /**< \brief (US_MR_SPI) 5 bits */
#define   US_MR_SPI_CHRL_6_Val            _U_(0x1)   /**< \brief (US_MR_SPI) 6 bits */
#define   US_MR_SPI_CHRL_7_Val            _U_(0x2)   /**< \brief (US_MR_SPI) 7 bits */
#define   US_MR_SPI_CHRL_8_Val            _U_(0x3)   /**< \brief (US_MR_SPI) 8 bits */
#define US_MR_SPI_CHRL_5            (US_MR_SPI_CHRL_5_Val          << US_MR_SPI_CHRL_Pos)
#define US_MR_SPI_CHRL_6            (US_MR_SPI_CHRL_6_Val          << US_MR_SPI_CHRL_Pos)
#define US_MR_SPI_CHRL_7            (US_MR_SPI_CHRL_7_Val          << US_MR_SPI_CHRL_Pos)
#define US_MR_SPI_CHRL_8            (US_MR_SPI_CHRL_8_Val          << US_MR_SPI_CHRL_Pos)
#define US_MR_SPI_CPHA_Pos          8            /**< \brief (US_MR_SPI) SPI CLock Phase */
#define US_MR_SPI_CPHA              (_U_(0x1) << US_MR_SPI_CPHA_Pos)
#define   US_MR_SPI_CPHA_0_Val            _U_(0x0)   /**< \brief (US_MR_SPI) Data is changed on the leading edge of SPCK and captured on the following edge of SPCK */
#define   US_MR_SPI_CPHA_1_Val            _U_(0x1)   /**< \brief (US_MR_SPI) Data is captured on the leading edge of SPCK and changed on the following edge of SPCK */
#define US_MR_SPI_CPHA_0            (US_MR_SPI_CPHA_0_Val          << US_MR_SPI_CPHA_Pos)
#define US_MR_SPI_CPHA_1            (US_MR_SPI_CPHA_1_Val          << US_MR_SPI_CPHA_Pos)
#define US_MR_SPI_PAR_Pos           9            /**< \brief (US_MR_SPI) Parity Type */
#define US_MR_SPI_PAR_Msk           (_U_(0x7) << US_MR_SPI_PAR_Pos)
#define US_MR_SPI_PAR(value)        (US_MR_SPI_PAR_Msk & ((value) << US_MR_SPI_PAR_Pos))
#define   US_MR_SPI_PAR_EVEN_Val          _U_(0x0)   /**< \brief (US_MR_SPI) Even parity */
#define   US_MR_SPI_PAR_ODD_Val           _U_(0x1)   /**< \brief (US_MR_SPI) Odd parity */
#define   US_MR_SPI_PAR_SPACE_Val         _U_(0x2)   /**< \brief (US_MR_SPI) Parity forced to 0 (Space) */
#define   US_MR_SPI_PAR_MARK_Val          _U_(0x3)   /**< \brief (US_MR_SPI) Parity forced to 1 (Mark) */
#define   US_MR_SPI_PAR_NONE_Val          _U_(0x4)   /**< \brief (US_MR_SPI) No Parity */
#define   US_MR_SPI_PAR_5_Val             _U_(0x5)   /**< \brief (US_MR_SPI) No Parity */
#define   US_MR_SPI_PAR_MULTI_Val         _U_(0x6)   /**< \brief (US_MR_SPI) Multi-drop mode */
#define   US_MR_SPI_PAR_7_Val             _U_(0x7)   /**< \brief (US_MR_SPI) Multi-drop mode */
#define US_MR_SPI_PAR_EVEN          (US_MR_SPI_PAR_EVEN_Val        << US_MR_SPI_PAR_Pos)
#define US_MR_SPI_PAR_ODD           (US_MR_SPI_PAR_ODD_Val         << US_MR_SPI_PAR_Pos)
#define US_MR_SPI_PAR_SPACE         (US_MR_SPI_PAR_SPACE_Val       << US_MR_SPI_PAR_Pos)
#define US_MR_SPI_PAR_MARK          (US_MR_SPI_PAR_MARK_Val        << US_MR_SPI_PAR_Pos)
#define US_MR_SPI_PAR_NONE          (US_MR_SPI_PAR_NONE_Val        << US_MR_SPI_PAR_Pos)
#define US_MR_SPI_PAR_5             (US_MR_SPI_PAR_5_Val           << US_MR_SPI_PAR_Pos)
#define US_MR_SPI_PAR_MULTI         (US_MR_SPI_PAR_MULTI_Val       << US_MR_SPI_PAR_Pos)
#define US_MR_SPI_PAR_7             (US_MR_SPI_PAR_7_Val           << US_MR_SPI_PAR_Pos)
#define US_MR_SPI_NBSTOP_Pos        12           /**< \brief (US_MR_SPI) Number of Stop Bits */
#define US_MR_SPI_NBSTOP_Msk        (_U_(0x3) << US_MR_SPI_NBSTOP_Pos)
#define US_MR_SPI_NBSTOP(value)     (US_MR_SPI_NBSTOP_Msk & ((value) << US_MR_SPI_NBSTOP_Pos))
#define   US_MR_SPI_NBSTOP_1_Val          _U_(0x0)   /**< \brief (US_MR_SPI) 1 stop bit */
#define   US_MR_SPI_NBSTOP_1_5_Val        _U_(0x1)   /**< \brief (US_MR_SPI) 1.5 stop bits (Only valid if SYNC=0) */
#define   US_MR_SPI_NBSTOP_2_Val          _U_(0x2)   /**< \brief (US_MR_SPI) 2 stop bits */
#define   US_MR_SPI_NBSTOP_3_Val          _U_(0x3)   /**< \brief (US_MR_SPI) Reserved */
#define US_MR_SPI_NBSTOP_1          (US_MR_SPI_NBSTOP_1_Val        << US_MR_SPI_NBSTOP_Pos)
#define US_MR_SPI_NBSTOP_1_5        (US_MR_SPI_NBSTOP_1_5_Val      << US_MR_SPI_NBSTOP_Pos)
#define US_MR_SPI_NBSTOP_2          (US_MR_SPI_NBSTOP_2_Val        << US_MR_SPI_NBSTOP_Pos)
#define US_MR_SPI_NBSTOP_3          (US_MR_SPI_NBSTOP_3_Val        << US_MR_SPI_NBSTOP_Pos)
#define US_MR_SPI_CHMODE_Pos        14           /**< \brief (US_MR_SPI) Channel Mode */
#define US_MR_SPI_CHMODE_Msk        (_U_(0x3) << US_MR_SPI_CHMODE_Pos)
#define US_MR_SPI_CHMODE(value)     (US_MR_SPI_CHMODE_Msk & ((value) << US_MR_SPI_CHMODE_Pos))
#define   US_MR_SPI_CHMODE_NORMAL_Val     _U_(0x0)   /**< \brief (US_MR_SPI) Normal Mode */
#define   US_MR_SPI_CHMODE_ECHO_Val       _U_(0x1)   /**< \brief (US_MR_SPI) Automatic Echo. Receiver input is connected to the TXD pin */
#define   US_MR_SPI_CHMODE_LOCAL_LOOP_Val _U_(0x2)   /**< \brief (US_MR_SPI) Local Loopback. Transmitter output is connected to the Receiver Input */
#define   US_MR_SPI_CHMODE_REMOTE_LOOP_Val _U_(0x3)   /**< \brief (US_MR_SPI) Remote Loopback. RXD pin is internally connected to the TXD pin */
#define US_MR_SPI_CHMODE_NORMAL     (US_MR_SPI_CHMODE_NORMAL_Val   << US_MR_SPI_CHMODE_Pos)
#define US_MR_SPI_CHMODE_ECHO       (US_MR_SPI_CHMODE_ECHO_Val     << US_MR_SPI_CHMODE_Pos)
#define US_MR_SPI_CHMODE_LOCAL_LOOP (US_MR_SPI_CHMODE_LOCAL_LOOP_Val << US_MR_SPI_CHMODE_Pos)
#define US_MR_SPI_CHMODE_REMOTE_LOOP (US_MR_SPI_CHMODE_REMOTE_LOOP_Val << US_MR_SPI_CHMODE_Pos)
#define US_MR_SPI_CPOL_Pos          16           /**< \brief (US_MR_SPI) SPI Clock Polarity */
#define US_MR_SPI_CPOL              (_U_(0x1) << US_MR_SPI_CPOL_Pos)
#define   US_MR_SPI_CPOL_ZERO_Val         _U_(0x0)   /**< \brief (US_MR_SPI) The inactive state value of SPCK is logic level zero */
#define   US_MR_SPI_CPOL_ONE_Val          _U_(0x1)   /**< \brief (US_MR_SPI) The inactive state value of SPCK is logic level one */
#define US_MR_SPI_CPOL_ZERO         (US_MR_SPI_CPOL_ZERO_Val       << US_MR_SPI_CPOL_Pos)
#define US_MR_SPI_CPOL_ONE          (US_MR_SPI_CPOL_ONE_Val        << US_MR_SPI_CPOL_Pos)
#define US_MR_SPI_MODE9_Pos         17           /**< \brief (US_MR_SPI) 9-bit Character Length */
#define US_MR_SPI_MODE9             (_U_(0x1) << US_MR_SPI_MODE9_Pos)
#define   US_MR_SPI_MODE9_0_Val           _U_(0x0)   /**< \brief (US_MR_SPI) CHRL defines character length */
#define   US_MR_SPI_MODE9_1_Val           _U_(0x1)   /**< \brief (US_MR_SPI) 9-bit character length */
#define US_MR_SPI_MODE9_0           (US_MR_SPI_MODE9_0_Val         << US_MR_SPI_MODE9_Pos)
#define US_MR_SPI_MODE9_1           (US_MR_SPI_MODE9_1_Val         << US_MR_SPI_MODE9_Pos)
#define US_MR_SPI_CLKO_Pos          18           /**< \brief (US_MR_SPI) Clock Output Select */
#define US_MR_SPI_CLKO              (_U_(0x1) << US_MR_SPI_CLKO_Pos)
#define   US_MR_SPI_CLKO_0_Val            _U_(0x0)   /**< \brief (US_MR_SPI) The USART does not drive the SCK pin */
#define   US_MR_SPI_CLKO_1_Val            _U_(0x1)   /**< \brief (US_MR_SPI) The USART drives the SCK pin if USCLKS does not select the external clock SCK */
#define US_MR_SPI_CLKO_0            (US_MR_SPI_CLKO_0_Val          << US_MR_SPI_CLKO_Pos)
#define US_MR_SPI_CLKO_1            (US_MR_SPI_CLKO_1_Val          << US_MR_SPI_CLKO_Pos)
#define US_MR_SPI_OVER_Pos          19           /**< \brief (US_MR_SPI) Oversampling Mode */
#define US_MR_SPI_OVER              (_U_(0x1) << US_MR_SPI_OVER_Pos)
#define   US_MR_SPI_OVER_X16_Val          _U_(0x0)   /**< \brief (US_MR_SPI) 16x Oversampling */
#define   US_MR_SPI_OVER_X8_Val           _U_(0x1)   /**< \brief (US_MR_SPI) 8x Oversampling */
#define US_MR_SPI_OVER_X16          (US_MR_SPI_OVER_X16_Val        << US_MR_SPI_OVER_Pos)
#define US_MR_SPI_OVER_X8           (US_MR_SPI_OVER_X8_Val         << US_MR_SPI_OVER_Pos)
#define US_MR_SPI_INACK_Pos         20           /**< \brief (US_MR_SPI) Inhibit Non Acknowledge */
#define US_MR_SPI_INACK             (_U_(0x1) << US_MR_SPI_INACK_Pos)
#define   US_MR_SPI_INACK_0_Val           _U_(0x0)   /**< \brief (US_MR_SPI) The NACK is generated */
#define   US_MR_SPI_INACK_1_Val           _U_(0x1)   /**< \brief (US_MR_SPI) The NACK is not generated */
#define US_MR_SPI_INACK_0           (US_MR_SPI_INACK_0_Val         << US_MR_SPI_INACK_Pos)
#define US_MR_SPI_INACK_1           (US_MR_SPI_INACK_1_Val         << US_MR_SPI_INACK_Pos)
#define US_MR_SPI_DSNACK_Pos        21           /**< \brief (US_MR_SPI) Disable Successive NACK */
#define US_MR_SPI_DSNACK            (_U_(0x1) << US_MR_SPI_DSNACK_Pos)
#define   US_MR_SPI_DSNACK_0_Val          _U_(0x0)   /**< \brief (US_MR_SPI) NACK is sent on the ISO line as soon as a parity error occurs in the received character (unless INACK is set) */
#define   US_MR_SPI_DSNACK_1_Val          _U_(0x1)   /**< \brief (US_MR_SPI) Successive parity errors are counted up to the value specified in the MAX_ITERATION field. These parity errors generatea NACK on the ISO line. As soon as this value is reached, no additional NACK is sent on the ISO line. The flag ITERATION is asserted */
#define US_MR_SPI_DSNACK_0          (US_MR_SPI_DSNACK_0_Val        << US_MR_SPI_DSNACK_Pos)
#define US_MR_SPI_DSNACK_1          (US_MR_SPI_DSNACK_1_Val        << US_MR_SPI_DSNACK_Pos)
#define US_MR_SPI_INVDATA_Pos       23           /**< \brief (US_MR_SPI) Inverted data */
#define US_MR_SPI_INVDATA           (_U_(0x1) << US_MR_SPI_INVDATA_Pos)
#define US_MR_SPI_MAX_ITERATION_Pos 24           /**< \brief (US_MR_SPI) Max interation */
#define US_MR_SPI_MAX_ITERATION_Msk (_U_(0x7) << US_MR_SPI_MAX_ITERATION_Pos)
#define US_MR_SPI_MAX_ITERATION(value) (US_MR_SPI_MAX_ITERATION_Msk & ((value) << US_MR_SPI_MAX_ITERATION_Pos))
#define US_MR_SPI_FILTER_Pos        28           /**< \brief (US_MR_SPI) Infrared Receive Line Filter */
#define US_MR_SPI_FILTER            (_U_(0x1) << US_MR_SPI_FILTER_Pos)
#define   US_MR_SPI_FILTER_0_Val          _U_(0x0)   /**< \brief (US_MR_SPI) The USART does not filter the receive line */
#define   US_MR_SPI_FILTER_1_Val          _U_(0x1)   /**< \brief (US_MR_SPI) The USART filters the receive line using a three-sample filter (1/16-bit clock) (2 over 3 majority) */
#define US_MR_SPI_FILTER_0          (US_MR_SPI_FILTER_0_Val        << US_MR_SPI_FILTER_Pos)
#define US_MR_SPI_FILTER_1          (US_MR_SPI_FILTER_1_Val        << US_MR_SPI_FILTER_Pos)
#define US_MR_SPI_MASK              _U_(0x17BFFFFF) /**< \brief (US_MR_SPI) MASK Register */

// USART mode
#define US_MR_USART_MODE_Pos        0            /**< \brief (US_MR_USART) Usart Mode */
#define US_MR_USART_MODE_Msk        (_U_(0xF) << US_MR_USART_MODE_Pos)
#define US_MR_USART_MODE(value)     (US_MR_USART_MODE_Msk & ((value) << US_MR_USART_MODE_Pos))
#define   US_MR_USART_MODE_NORMAL_Val     _U_(0x0)   /**< \brief (US_MR_USART) Normal */
#define   US_MR_USART_MODE_RS485_Val      _U_(0x1)   /**< \brief (US_MR_USART) RS485 */
#define   US_MR_USART_MODE_HARDWARE_Val   _U_(0x2)   /**< \brief (US_MR_USART) Hardware Handshaking */
#define   US_MR_USART_MODE_MODEM_Val      _U_(0x3)   /**< \brief (US_MR_USART) Modem */
#define   US_MR_USART_MODE_ISO7816_T0_Val _U_(0x4)   /**< \brief (US_MR_USART) IS07816 Protocol: T = 0 */
#define   US_MR_USART_MODE_ISO7816_T1_Val _U_(0x6)   /**< \brief (US_MR_USART) IS07816 Protocol: T = 1 */
#define   US_MR_USART_MODE_IRDA_Val       _U_(0x8)   /**< \brief (US_MR_USART) IrDA */
#define   US_MR_USART_MODE_LIN_MASTER_Val _U_(0xA)   /**< \brief (US_MR_USART) LIN Master */
#define   US_MR_USART_MODE_LIN_SLAVE_Val  _U_(0xB)   /**< \brief (US_MR_USART) LIN Slave */
#define   US_MR_USART_MODE_SPI_MASTER_Val _U_(0xE)   /**< \brief (US_MR_USART) SPI Master */
#define   US_MR_USART_MODE_SPI_SLAVE_Val  _U_(0xF)   /**< \brief (US_MR_USART) SPI Slave */
#define US_MR_USART_MODE_NORMAL     (US_MR_USART_MODE_NORMAL_Val   << US_MR_USART_MODE_Pos)
#define US_MR_USART_MODE_RS485      (US_MR_USART_MODE_RS485_Val    << US_MR_USART_MODE_Pos)
#define US_MR_USART_MODE_HARDWARE   (US_MR_USART_MODE_HARDWARE_Val << US_MR_USART_MODE_Pos)
#define US_MR_USART_MODE_MODEM      (US_MR_USART_MODE_MODEM_Val    << US_MR_USART_MODE_Pos)
#define US_MR_USART_MODE_ISO7816_T0 (US_MR_USART_MODE_ISO7816_T0_Val << US_MR_USART_MODE_Pos)
#define US_MR_USART_MODE_ISO7816_T1 (US_MR_USART_MODE_ISO7816_T1_Val << US_MR_USART_MODE_Pos)
#define US_MR_USART_MODE_IRDA       (US_MR_USART_MODE_IRDA_Val     << US_MR_USART_MODE_Pos)
#define US_MR_USART_MODE_LIN_MASTER (US_MR_USART_MODE_LIN_MASTER_Val << US_MR_USART_MODE_Pos)
#define US_MR_USART_MODE_LIN_SLAVE  (US_MR_USART_MODE_LIN_SLAVE_Val << US_MR_USART_MODE_Pos)
#define US_MR_USART_MODE_SPI_MASTER (US_MR_USART_MODE_SPI_MASTER_Val << US_MR_USART_MODE_Pos)
#define US_MR_USART_MODE_SPI_SLAVE  (US_MR_USART_MODE_SPI_SLAVE_Val << US_MR_USART_MODE_Pos)
#define US_MR_USART_USCLKS_Pos      4            /**< \brief (US_MR_USART) Clock Selection */
#define US_MR_USART_USCLKS_Msk      (_U_(0x3) << US_MR_USART_USCLKS_Pos)
#define US_MR_USART_USCLKS(value)   (US_MR_USART_USCLKS_Msk & ((value) << US_MR_USART_USCLKS_Pos))
#define   US_MR_USART_USCLKS_MCK_Val      _U_(0x0)   /**< \brief (US_MR_USART) MCK */
#define   US_MR_USART_USCLKS_MCK_DIV_Val  _U_(0x1)   /**< \brief (US_MR_USART) MCK / DIV */
#define   US_MR_USART_USCLKS_2_Val        _U_(0x2)   /**< \brief (US_MR_USART) Reserved */
#define   US_MR_USART_USCLKS_SCK_Val      _U_(0x3)   /**< \brief (US_MR_USART) SCK */
#define US_MR_USART_USCLKS_MCK      (US_MR_USART_USCLKS_MCK_Val    << US_MR_USART_USCLKS_Pos)
#define US_MR_USART_USCLKS_MCK_DIV  (US_MR_USART_USCLKS_MCK_DIV_Val << US_MR_USART_USCLKS_Pos)
#define US_MR_USART_USCLKS_2        (US_MR_USART_USCLKS_2_Val      << US_MR_USART_USCLKS_Pos)
#define US_MR_USART_USCLKS_SCK      (US_MR_USART_USCLKS_SCK_Val    << US_MR_USART_USCLKS_Pos)
#define US_MR_USART_CHRL_Pos        6            /**< \brief (US_MR_USART) Character Length. */
#define US_MR_USART_CHRL_Msk        (_U_(0x3) << US_MR_USART_CHRL_Pos)
#define US_MR_USART_CHRL(value)     (US_MR_USART_CHRL_Msk & ((value) << US_MR_USART_CHRL_Pos))
#define   US_MR_USART_CHRL_5_Val          _U_(0x0)   /**< \brief (US_MR_USART) 5 bits */
#define   US_MR_USART_CHRL_6_Val          _U_(0x1)   /**< \brief (US_MR_USART) 6 bits */
#define   US_MR_USART_CHRL_7_Val          _U_(0x2)   /**< \brief (US_MR_USART) 7 bits */
#define   US_MR_USART_CHRL_8_Val          _U_(0x3)   /**< \brief (US_MR_USART) 8 bits */
#define US_MR_USART_CHRL_5          (US_MR_USART_CHRL_5_Val        << US_MR_USART_CHRL_Pos)
#define US_MR_USART_CHRL_6          (US_MR_USART_CHRL_6_Val        << US_MR_USART_CHRL_Pos)
#define US_MR_USART_CHRL_7          (US_MR_USART_CHRL_7_Val        << US_MR_USART_CHRL_Pos)
#define US_MR_USART_CHRL_8          (US_MR_USART_CHRL_8_Val        << US_MR_USART_CHRL_Pos)
#define US_MR_USART_SYNC_Pos        8            /**< \brief (US_MR_USART) Synchronous Mode Select */
#define US_MR_USART_SYNC            (_U_(0x1) << US_MR_USART_SYNC_Pos)
#define   US_MR_USART_SYNC_0_Val          _U_(0x0)   /**< \brief (US_MR_USART) USART operates in Synchronous Mode */
#define   US_MR_USART_SYNC_1_Val          _U_(0x1)   /**< \brief (US_MR_USART) USART operates in Asynchronous Mode */
#define US_MR_USART_SYNC_0          (US_MR_USART_SYNC_0_Val        << US_MR_USART_SYNC_Pos)
#define US_MR_USART_SYNC_1          (US_MR_USART_SYNC_1_Val        << US_MR_USART_SYNC_Pos)
#define US_MR_USART_PAR_Pos         9            /**< \brief (US_MR_USART) Parity Type */
#define US_MR_USART_PAR_Msk         (_U_(0x7) << US_MR_USART_PAR_Pos)
#define US_MR_USART_PAR(value)      (US_MR_USART_PAR_Msk & ((value) << US_MR_USART_PAR_Pos))
#define   US_MR_USART_PAR_EVEN_Val        _U_(0x0)   /**< \brief (US_MR_USART) Even parity */
#define   US_MR_USART_PAR_ODD_Val         _U_(0x1)   /**< \brief (US_MR_USART) Odd parity */
#define   US_MR_USART_PAR_SPACE_Val       _U_(0x2)   /**< \brief (US_MR_USART) Parity forced to 0 (Space) */
#define   US_MR_USART_PAR_MARK_Val        _U_(0x3)   /**< \brief (US_MR_USART) Parity forced to 1 (Mark) */
#define   US_MR_USART_PAR_NONE_Val        _U_(0x4)   /**< \brief (US_MR_USART) No Parity */
#define   US_MR_USART_PAR_5_Val           _U_(0x5)   /**< \brief (US_MR_USART) No Parity */
#define   US_MR_USART_PAR_MULTI_Val       _U_(0x6)   /**< \brief (US_MR_USART) Multi-drop mode */
#define   US_MR_USART_PAR_7_Val           _U_(0x7)   /**< \brief (US_MR_USART) Multi-drop mode */
#define US_MR_USART_PAR_EVEN        (US_MR_USART_PAR_EVEN_Val      << US_MR_USART_PAR_Pos)
#define US_MR_USART_PAR_ODD         (US_MR_USART_PAR_ODD_Val       << US_MR_USART_PAR_Pos)
#define US_MR_USART_PAR_SPACE       (US_MR_USART_PAR_SPACE_Val     << US_MR_USART_PAR_Pos)
#define US_MR_USART_PAR_MARK        (US_MR_USART_PAR_MARK_Val      << US_MR_USART_PAR_Pos)
#define US_MR_USART_PAR_NONE        (US_MR_USART_PAR_NONE_Val      << US_MR_USART_PAR_Pos)
#define US_MR_USART_PAR_5           (US_MR_USART_PAR_5_Val         << US_MR_USART_PAR_Pos)
#define US_MR_USART_PAR_MULTI       (US_MR_USART_PAR_MULTI_Val     << US_MR_USART_PAR_Pos)
#define US_MR_USART_PAR_7           (US_MR_USART_PAR_7_Val         << US_MR_USART_PAR_Pos)
#define US_MR_USART_NBSTOP_Pos      12           /**< \brief (US_MR_USART) Number of Stop Bits */
#define US_MR_USART_NBSTOP_Msk      (_U_(0x3) << US_MR_USART_NBSTOP_Pos)
#define US_MR_USART_NBSTOP(value)   (US_MR_USART_NBSTOP_Msk & ((value) << US_MR_USART_NBSTOP_Pos))
#define   US_MR_USART_NBSTOP_1_Val        _U_(0x0)   /**< \brief (US_MR_USART) 1 stop bit */
#define   US_MR_USART_NBSTOP_1_5_Val      _U_(0x1)   /**< \brief (US_MR_USART) 1.5 stop bits (Only valid if SYNC=0) */
#define   US_MR_USART_NBSTOP_2_Val        _U_(0x2)   /**< \brief (US_MR_USART) 2 stop bits */
#define   US_MR_USART_NBSTOP_3_Val        _U_(0x3)   /**< \brief (US_MR_USART) Reserved */
#define US_MR_USART_NBSTOP_1        (US_MR_USART_NBSTOP_1_Val      << US_MR_USART_NBSTOP_Pos)
#define US_MR_USART_NBSTOP_1_5      (US_MR_USART_NBSTOP_1_5_Val    << US_MR_USART_NBSTOP_Pos)
#define US_MR_USART_NBSTOP_2        (US_MR_USART_NBSTOP_2_Val      << US_MR_USART_NBSTOP_Pos)
#define US_MR_USART_NBSTOP_3        (US_MR_USART_NBSTOP_3_Val      << US_MR_USART_NBSTOP_Pos)
#define US_MR_USART_CHMODE_Pos      14           /**< \brief (US_MR_USART) Channel Mode */
#define US_MR_USART_CHMODE_Msk      (_U_(0x3) << US_MR_USART_CHMODE_Pos)
#define US_MR_USART_CHMODE(value)   (US_MR_USART_CHMODE_Msk & ((value) << US_MR_USART_CHMODE_Pos))
#define   US_MR_USART_CHMODE_NORMAL_Val   _U_(0x0)   /**< \brief (US_MR_USART) Normal Mode */
#define   US_MR_USART_CHMODE_ECHO_Val     _U_(0x1)   /**< \brief (US_MR_USART) Automatic Echo. Receiver input is connected to the TXD pin */
#define   US_MR_USART_CHMODE_LOCAL_LOOP_Val _U_(0x2)   /**< \brief (US_MR_USART) Local Loopback. Transmitter output is connected to the Receiver Input */
#define   US_MR_USART_CHMODE_REMOTE_LOOP_Val _U_(0x3)   /**< \brief (US_MR_USART) Remote Loopback. RXD pin is internally connected to the TXD pin */
#define US_MR_USART_CHMODE_NORMAL   (US_MR_USART_CHMODE_NORMAL_Val << US_MR_USART_CHMODE_Pos)
#define US_MR_USART_CHMODE_ECHO     (US_MR_USART_CHMODE_ECHO_Val   << US_MR_USART_CHMODE_Pos)
#define US_MR_USART_CHMODE_LOCAL_LOOP (US_MR_USART_CHMODE_LOCAL_LOOP_Val << US_MR_USART_CHMODE_Pos)
#define US_MR_USART_CHMODE_REMOTE_LOOP (US_MR_USART_CHMODE_REMOTE_LOOP_Val << US_MR_USART_CHMODE_Pos)
#define US_MR_USART_MSBF_Pos        16           /**< \brief (US_MR_USART) Bit Order */
#define US_MR_USART_MSBF            (_U_(0x1) << US_MR_USART_MSBF_Pos)
#define   US_MR_USART_MSBF_LSBF_Val       _U_(0x0)   /**< \brief (US_MR_USART) Least Significant Bit first */
#define   US_MR_USART_MSBF_MSBF_Val       _U_(0x1)   /**< \brief (US_MR_USART) Most Significant Bit first */
#define US_MR_USART_MSBF_LSBF       (US_MR_USART_MSBF_LSBF_Val     << US_MR_USART_MSBF_Pos)
#define US_MR_USART_MSBF_MSBF       (US_MR_USART_MSBF_MSBF_Val     << US_MR_USART_MSBF_Pos)
#define US_MR_USART_MODE9_Pos       17           /**< \brief (US_MR_USART) 9-bit Character Length */
#define US_MR_USART_MODE9           (_U_(0x1) << US_MR_USART_MODE9_Pos)
#define   US_MR_USART_MODE9_0_Val         _U_(0x0)   /**< \brief (US_MR_USART) CHRL defines character length */
#define   US_MR_USART_MODE9_1_Val         _U_(0x1)   /**< \brief (US_MR_USART) 9-bit character length */
#define US_MR_USART_MODE9_0         (US_MR_USART_MODE9_0_Val       << US_MR_USART_MODE9_Pos)
#define US_MR_USART_MODE9_1         (US_MR_USART_MODE9_1_Val       << US_MR_USART_MODE9_Pos)
#define US_MR_USART_CLKO_Pos        18           /**< \brief (US_MR_USART) Clock Output Select */
#define US_MR_USART_CLKO            (_U_(0x1) << US_MR_USART_CLKO_Pos)
#define   US_MR_USART_CLKO_0_Val          _U_(0x0)   /**< \brief (US_MR_USART) The USART does not drive the SCK pin */
#define   US_MR_USART_CLKO_1_Val          _U_(0x1)   /**< \brief (US_MR_USART) The USART drives the SCK pin if USCLKS does not select the external clock SCK */
#define US_MR_USART_CLKO_0          (US_MR_USART_CLKO_0_Val        << US_MR_USART_CLKO_Pos)
#define US_MR_USART_CLKO_1          (US_MR_USART_CLKO_1_Val        << US_MR_USART_CLKO_Pos)
#define US_MR_USART_OVER_Pos        19           /**< \brief (US_MR_USART) Oversampling Mode */
#define US_MR_USART_OVER            (_U_(0x1) << US_MR_USART_OVER_Pos)
#define   US_MR_USART_OVER_X16_Val        _U_(0x0)   /**< \brief (US_MR_USART) 16x Oversampling */
#define   US_MR_USART_OVER_X8_Val         _U_(0x1)   /**< \brief (US_MR_USART) 8x Oversampling */
#define US_MR_USART_OVER_X16        (US_MR_USART_OVER_X16_Val      << US_MR_USART_OVER_Pos)
#define US_MR_USART_OVER_X8         (US_MR_USART_OVER_X8_Val       << US_MR_USART_OVER_Pos)
#define US_MR_USART_INACK_Pos       20           /**< \brief (US_MR_USART) Inhibit Non Acknowledge */
#define US_MR_USART_INACK           (_U_(0x1) << US_MR_USART_INACK_Pos)
#define   US_MR_USART_INACK_0_Val         _U_(0x0)   /**< \brief (US_MR_USART) The NACK is generated */
#define   US_MR_USART_INACK_1_Val         _U_(0x1)   /**< \brief (US_MR_USART) The NACK is not generated */
#define US_MR_USART_INACK_0         (US_MR_USART_INACK_0_Val       << US_MR_USART_INACK_Pos)
#define US_MR_USART_INACK_1         (US_MR_USART_INACK_1_Val       << US_MR_USART_INACK_Pos)
#define US_MR_USART_DSNACK_Pos      21           /**< \brief (US_MR_USART) Disable Successive NACK */
#define US_MR_USART_DSNACK          (_U_(0x1) << US_MR_USART_DSNACK_Pos)
#define   US_MR_USART_DSNACK_0_Val        _U_(0x0)   /**< \brief (US_MR_USART) NACK is sent on the ISO line as soon as a parity error occurs in the received character (unless INACK is set) */
#define   US_MR_USART_DSNACK_1_Val        _U_(0x1)   /**< \brief (US_MR_USART) Successive parity errors are counted up to the value specified in the MAX_ITERATION field. These parity errors generatea NACK on the ISO line. As soon as this value is reached, no additional NACK is sent on the ISO line. The flag ITERATION is asserted */
#define US_MR_USART_DSNACK_0        (US_MR_USART_DSNACK_0_Val      << US_MR_USART_DSNACK_Pos)
#define US_MR_USART_DSNACK_1        (US_MR_USART_DSNACK_1_Val      << US_MR_USART_DSNACK_Pos)
#define US_MR_USART_VAR_SYNC_Pos    22           /**< \brief (US_MR_USART) Variable synchronization of command/data sync Start Frame Delimiter */
#define US_MR_USART_VAR_SYNC        (_U_(0x1) << US_MR_USART_VAR_SYNC_Pos)
#define   US_MR_USART_VAR_SYNC_0_Val      _U_(0x0)   /**< \brief (US_MR_USART) User defined configuration of command or data sync field depending on SYNC value */
#define   US_MR_USART_VAR_SYNC_1_Val      _U_(0x1)   /**< \brief (US_MR_USART) The sync field is updated when a character is written into THR register */
#define US_MR_USART_VAR_SYNC_0      (US_MR_USART_VAR_SYNC_0_Val    << US_MR_USART_VAR_SYNC_Pos)
#define US_MR_USART_VAR_SYNC_1      (US_MR_USART_VAR_SYNC_1_Val    << US_MR_USART_VAR_SYNC_Pos)
#define US_MR_USART_INVDATA_Pos     23           /**< \brief (US_MR_USART) Inverted data */
#define US_MR_USART_INVDATA         (_U_(0x1) << US_MR_USART_INVDATA_Pos)
#define US_MR_USART_MAX_ITERATION_Pos 24           /**< \brief (US_MR_USART) Max interation */
#define US_MR_USART_MAX_ITERATION_Msk (_U_(0x7) << US_MR_USART_MAX_ITERATION_Pos)
#define US_MR_USART_MAX_ITERATION(value) (US_MR_USART_MAX_ITERATION_Msk & ((value) << US_MR_USART_MAX_ITERATION_Pos))
#define US_MR_USART_FILTER_Pos      28           /**< \brief (US_MR_USART) Infrared Receive Line Filter */
#define US_MR_USART_FILTER          (_U_(0x1) << US_MR_USART_FILTER_Pos)
#define   US_MR_USART_FILTER_0_Val        _U_(0x0)   /**< \brief (US_MR_USART) The USART does not filter the receive line */
#define   US_MR_USART_FILTER_1_Val        _U_(0x1)   /**< \brief (US_MR_USART) The USART filters the receive line using a three-sample filter (1/16-bit clock) (2 over 3 majority) */
#define US_MR_USART_FILTER_0        (US_MR_USART_FILTER_0_Val      << US_MR_USART_FILTER_Pos)
#define US_MR_USART_FILTER_1        (US_MR_USART_FILTER_1_Val      << US_MR_USART_FILTER_Pos)
#define US_MR_USART_MAN_Pos         29           /**< \brief (US_MR_USART) Manchester Encoder/Decoder Enable */
#define US_MR_USART_MAN             (_U_(0x1) << US_MR_USART_MAN_Pos)
#define   US_MR_USART_MAN_0_Val           _U_(0x0)   /**< \brief (US_MR_USART) Manchester Encoder/Decoder is disabled */
#define   US_MR_USART_MAN_1_Val           _U_(0x1)   /**< \brief (US_MR_USART) Manchester Encoder/Decoder is enabled */
#define US_MR_USART_MAN_0           (US_MR_USART_MAN_0_Val         << US_MR_USART_MAN_Pos)
#define US_MR_USART_MAN_1           (US_MR_USART_MAN_1_Val         << US_MR_USART_MAN_Pos)
#define US_MR_USART_MODSYNC_Pos     30           /**< \brief (US_MR_USART) Manchester Synchronization Mode */
#define US_MR_USART_MODSYNC         (_U_(0x1) << US_MR_USART_MODSYNC_Pos)
#define   US_MR_USART_MODSYNC_0_Val       _U_(0x0)   /**< \brief (US_MR_USART) The Manchester Start bit is a 0 to 1 transition */
#define   US_MR_USART_MODSYNC_1_Val       _U_(0x1)   /**< \brief (US_MR_USART) The Manchester Start bit is a 1 to 0 transition */
#define US_MR_USART_MODSYNC_0       (US_MR_USART_MODSYNC_0_Val     << US_MR_USART_MODSYNC_Pos)
#define US_MR_USART_MODSYNC_1       (US_MR_USART_MODSYNC_1_Val     << US_MR_USART_MODSYNC_Pos)
#define US_MR_USART_ONEBIT_Pos      31           /**< \brief (US_MR_USART) Start Frame Delimiter selector */
#define US_MR_USART_ONEBIT          (_U_(0x1) << US_MR_USART_ONEBIT_Pos)
#define   US_MR_USART_ONEBIT_0_Val        _U_(0x0)   /**< \brief (US_MR_USART) Start Frame delimiter is COMMAND or DATA SYNC */
#define   US_MR_USART_ONEBIT_1_Val        _U_(0x1)   /**< \brief (US_MR_USART) Start Frame delimiter is One Bit */
#define US_MR_USART_ONEBIT_0        (US_MR_USART_ONEBIT_0_Val      << US_MR_USART_ONEBIT_Pos)
#define US_MR_USART_ONEBIT_1        (US_MR_USART_ONEBIT_1_Val      << US_MR_USART_ONEBIT_Pos)
#define US_MR_USART_MASK            _U_(0xF7FFFFFF) /**< \brief (US_MR_USART) MASK Register */

// Any mode
#define US_MR_MODE_Pos              0            /**< \brief (US_MR) Usart Mode */
#define US_MR_MODE_Msk              (_U_(0xF) << US_MR_MODE_Pos)
#define US_MR_MODE(value)           (US_MR_MODE_Msk & ((value) << US_MR_MODE_Pos))
#define   US_MR_MODE_NORMAL_Val           _U_(0x0)   /**< \brief (US_MR) Normal */
#define   US_MR_MODE_RS485_Val            _U_(0x1)   /**< \brief (US_MR) RS485 */
#define   US_MR_MODE_HARDWARE_Val         _U_(0x2)   /**< \brief (US_MR) Hardware Handshaking */
#define   US_MR_MODE_MODEM_Val            _U_(0x3)   /**< \brief (US_MR) Modem */
#define   US_MR_MODE_ISO7816_T0_Val       _U_(0x4)   /**< \brief (US_MR) IS07816 Protocol: T = 0 */
#define   US_MR_MODE_ISO7816_T1_Val       _U_(0x6)   /**< \brief (US_MR) IS07816 Protocol: T = 1 */
#define   US_MR_MODE_IRDA_Val             _U_(0x8)   /**< \brief (US_MR) IrDA */
#define   US_MR_MODE_LIN_MASTER_Val       _U_(0xA)   /**< \brief (US_MR) LIN Master */
#define   US_MR_MODE_LIN_SLAVE_Val        _U_(0xB)   /**< \brief (US_MR) LIN Slave */
#define   US_MR_MODE_SPI_MASTER_Val       _U_(0xE)   /**< \brief (US_MR) SPI Master */
#define   US_MR_MODE_SPI_SLAVE_Val        _U_(0xF)   /**< \brief (US_MR) SPI Slave */
#define US_MR_MODE_NORMAL           (US_MR_MODE_NORMAL_Val         << US_MR_MODE_Pos)
#define US_MR_MODE_RS485            (US_MR_MODE_RS485_Val          << US_MR_MODE_Pos)
#define US_MR_MODE_HARDWARE         (US_MR_MODE_HARDWARE_Val       << US_MR_MODE_Pos)
#define US_MR_MODE_MODEM            (US_MR_MODE_MODEM_Val          << US_MR_MODE_Pos)
#define US_MR_MODE_ISO7816_T0       (US_MR_MODE_ISO7816_T0_Val     << US_MR_MODE_Pos)
#define US_MR_MODE_ISO7816_T1       (US_MR_MODE_ISO7816_T1_Val     << US_MR_MODE_Pos)
#define US_MR_MODE_IRDA             (US_MR_MODE_IRDA_Val           << US_MR_MODE_Pos)
#define US_MR_MODE_LIN_MASTER       (US_MR_MODE_LIN_MASTER_Val     << US_MR_MODE_Pos)
#define US_MR_MODE_LIN_SLAVE        (US_MR_MODE_LIN_SLAVE_Val      << US_MR_MODE_Pos)
#define US_MR_MODE_SPI_MASTER       (US_MR_MODE_SPI_MASTER_Val     << US_MR_MODE_Pos)
#define US_MR_MODE_SPI_SLAVE        (US_MR_MODE_SPI_SLAVE_Val      << US_MR_MODE_Pos)
#define US_MR_USCLKS_Pos            4            /**< \brief (US_MR) Clock Selection */
#define US_MR_USCLKS_Msk            (_U_(0x3) << US_MR_USCLKS_Pos)
#define US_MR_USCLKS(value)         (US_MR_USCLKS_Msk & ((value) << US_MR_USCLKS_Pos))
#define   US_MR_USCLKS_MCK_Val            _U_(0x0)   /**< \brief (US_MR) MCK */
#define   US_MR_USCLKS_MCK_DIV_Val        _U_(0x1)   /**< \brief (US_MR) MCK / DIV */
#define   US_MR_USCLKS_2_Val              _U_(0x2)   /**< \brief (US_MR) Reserved */
#define   US_MR_USCLKS_SCK_Val            _U_(0x3)   /**< \brief (US_MR) SCK */
#define US_MR_USCLKS_MCK            (US_MR_USCLKS_MCK_Val          << US_MR_USCLKS_Pos)
#define US_MR_USCLKS_MCK_DIV        (US_MR_USCLKS_MCK_DIV_Val      << US_MR_USCLKS_Pos)
#define US_MR_USCLKS_2              (US_MR_USCLKS_2_Val            << US_MR_USCLKS_Pos)
#define US_MR_USCLKS_SCK            (US_MR_USCLKS_SCK_Val          << US_MR_USCLKS_Pos)
#define US_MR_CHRL_Pos              6            /**< \brief (US_MR) Character Length. */
#define US_MR_CHRL_Msk              (_U_(0x3) << US_MR_CHRL_Pos)
#define US_MR_CHRL(value)           (US_MR_CHRL_Msk & ((value) << US_MR_CHRL_Pos))
#define   US_MR_CHRL_5_Val                _U_(0x0)   /**< \brief (US_MR) 5 bits */
#define   US_MR_CHRL_6_Val                _U_(0x1)   /**< \brief (US_MR) 6 bits */
#define   US_MR_CHRL_7_Val                _U_(0x2)   /**< \brief (US_MR) 7 bits */
#define   US_MR_CHRL_8_Val                _U_(0x3)   /**< \brief (US_MR) 8 bits */
#define US_MR_CHRL_5                (US_MR_CHRL_5_Val              << US_MR_CHRL_Pos)
#define US_MR_CHRL_6                (US_MR_CHRL_6_Val              << US_MR_CHRL_Pos)
#define US_MR_CHRL_7                (US_MR_CHRL_7_Val              << US_MR_CHRL_Pos)
#define US_MR_CHRL_8                (US_MR_CHRL_8_Val              << US_MR_CHRL_Pos)
#define US_MR_CPHA_Pos              8            /**< \brief (US_MR) SPI CLock Phase */
#define US_MR_CPHA                  (_U_(0x1) << US_MR_CPHA_Pos)
#define   US_MR_CPHA_0_Val                _U_(0x0)   /**< \brief (US_MR) Data is changed on the leading edge of SPCK and captured on the following edge of SPCK */
#define   US_MR_CPHA_1_Val                _U_(0x1)   /**< \brief (US_MR) Data is captured on the leading edge of SPCK and changed on the following edge of SPCK */
#define US_MR_CPHA_0                (US_MR_CPHA_0_Val              << US_MR_CPHA_Pos)
#define US_MR_CPHA_1                (US_MR_CPHA_1_Val              << US_MR_CPHA_Pos)
#define US_MR_SYNC_Pos              8            /**< \brief (US_MR) Synchronous Mode Select */
#define US_MR_SYNC                  (_U_(0x1) << US_MR_SYNC_Pos)
#define   US_MR_SYNC_0_Val                _U_(0x0)   /**< \brief (US_MR) USART operates in Synchronous Mode */
#define   US_MR_SYNC_1_Val                _U_(0x1)   /**< \brief (US_MR) USART operates in Asynchronous Mode */
#define US_MR_SYNC_0                (US_MR_SYNC_0_Val              << US_MR_SYNC_Pos)
#define US_MR_SYNC_1                (US_MR_SYNC_1_Val              << US_MR_SYNC_Pos)
#define US_MR_PAR_Pos               9            /**< \brief (US_MR) Parity Type */
#define US_MR_PAR_Msk               (_U_(0x7) << US_MR_PAR_Pos)
#define US_MR_PAR(value)            (US_MR_PAR_Msk & ((value) << US_MR_PAR_Pos))
#define   US_MR_PAR_EVEN_Val              _U_(0x0)   /**< \brief (US_MR) Even parity */
#define   US_MR_PAR_ODD_Val               _U_(0x1)   /**< \brief (US_MR) Odd parity */
#define   US_MR_PAR_SPACE_Val             _U_(0x2)   /**< \brief (US_MR) Parity forced to 0 (Space) */
#define   US_MR_PAR_MARK_Val              _U_(0x3)   /**< \brief (US_MR) Parity forced to 1 (Mark) */
#define   US_MR_PAR_NONE_Val              _U_(0x4)   /**< \brief (US_MR) No Parity */
#define   US_MR_PAR_5_Val                 _U_(0x5)   /**< \brief (US_MR) No Parity */
#define   US_MR_PAR_MULTI_Val             _U_(0x6)   /**< \brief (US_MR) Multi-drop mode */
#define   US_MR_PAR_7_Val                 _U_(0x7)   /**< \brief (US_MR) Multi-drop mode */
#define US_MR_PAR_EVEN              (US_MR_PAR_EVEN_Val            << US_MR_PAR_Pos)
#define US_MR_PAR_ODD               (US_MR_PAR_ODD_Val             << US_MR_PAR_Pos)
#define US_MR_PAR_SPACE             (US_MR_PAR_SPACE_Val           << US_MR_PAR_Pos)
#define US_MR_PAR_MARK              (US_MR_PAR_MARK_Val            << US_MR_PAR_Pos)
#define US_MR_PAR_NONE              (US_MR_PAR_NONE_Val            << US_MR_PAR_Pos)
#define US_MR_PAR_5                 (US_MR_PAR_5_Val               << US_MR_PAR_Pos)
#define US_MR_PAR_MULTI             (US_MR_PAR_MULTI_Val           << US_MR_PAR_Pos)
#define US_MR_PAR_7                 (US_MR_PAR_7_Val               << US_MR_PAR_Pos)
#define US_MR_NBSTOP_Pos            12           /**< \brief (US_MR) Number of Stop Bits */
#define US_MR_NBSTOP_Msk            (_U_(0x3) << US_MR_NBSTOP_Pos)
#define US_MR_NBSTOP(value)         (US_MR_NBSTOP_Msk & ((value) << US_MR_NBSTOP_Pos))
#define   US_MR_NBSTOP_1_Val              _U_(0x0)   /**< \brief (US_MR) 1 stop bit */
#define   US_MR_NBSTOP_1_5_Val            _U_(0x1)   /**< \brief (US_MR) 1.5 stop bits (Only valid if SYNC=0) */
#define   US_MR_NBSTOP_2_Val              _U_(0x2)   /**< \brief (US_MR) 2 stop bits */
#define   US_MR_NBSTOP_3_Val              _U_(0x3)   /**< \brief (US_MR) Reserved */
#define US_MR_NBSTOP_1              (US_MR_NBSTOP_1_Val            << US_MR_NBSTOP_Pos)
#define US_MR_NBSTOP_1_5            (US_MR_NBSTOP_1_5_Val          << US_MR_NBSTOP_Pos)
#define US_MR_NBSTOP_2              (US_MR_NBSTOP_2_Val            << US_MR_NBSTOP_Pos)
#define US_MR_NBSTOP_3              (US_MR_NBSTOP_3_Val            << US_MR_NBSTOP_Pos)
#define US_MR_CHMODE_Pos            14           /**< \brief (US_MR) Channel Mode */
#define US_MR_CHMODE_Msk            (_U_(0x3) << US_MR_CHMODE_Pos)
#define US_MR_CHMODE(value)         (US_MR_CHMODE_Msk & ((value) << US_MR_CHMODE_Pos))
#define   US_MR_CHMODE_NORMAL_Val         _U_(0x0)   /**< \brief (US_MR) Normal Mode */
#define   US_MR_CHMODE_ECHO_Val           _U_(0x1)   /**< \brief (US_MR) Automatic Echo. Receiver input is connected to the TXD pin */
#define   US_MR_CHMODE_LOCAL_LOOP_Val     _U_(0x2)   /**< \brief (US_MR) Local Loopback. Transmitter output is connected to the Receiver Input */
#define   US_MR_CHMODE_REMOTE_LOOP_Val    _U_(0x3)   /**< \brief (US_MR) Remote Loopback. RXD pin is internally connected to the TXD pin */
#define US_MR_CHMODE_NORMAL         (US_MR_CHMODE_NORMAL_Val       << US_MR_CHMODE_Pos)
#define US_MR_CHMODE_ECHO           (US_MR_CHMODE_ECHO_Val         << US_MR_CHMODE_Pos)
#define US_MR_CHMODE_LOCAL_LOOP     (US_MR_CHMODE_LOCAL_LOOP_Val   << US_MR_CHMODE_Pos)
#define US_MR_CHMODE_REMOTE_LOOP    (US_MR_CHMODE_REMOTE_LOOP_Val  << US_MR_CHMODE_Pos)
#define US_MR_CPOL_Pos              16           /**< \brief (US_MR) SPI Clock Polarity */
#define US_MR_CPOL                  (_U_(0x1) << US_MR_CPOL_Pos)
#define   US_MR_CPOL_ZERO_Val             _U_(0x0)   /**< \brief (US_MR) The inactive state value of SPCK is logic level zero */
#define   US_MR_CPOL_ONE_Val              _U_(0x1)   /**< \brief (US_MR) The inactive state value of SPCK is logic level one */
#define US_MR_CPOL_ZERO             (US_MR_CPOL_ZERO_Val           << US_MR_CPOL_Pos)
#define US_MR_CPOL_ONE              (US_MR_CPOL_ONE_Val            << US_MR_CPOL_Pos)
#define US_MR_MSBF_Pos              16           /**< \brief (US_MR) Bit Order */
#define US_MR_MSBF                  (_U_(0x1) << US_MR_MSBF_Pos)
#define   US_MR_MSBF_LSBF_Val             _U_(0x0)   /**< \brief (US_MR) Least Significant Bit first */
#define   US_MR_MSBF_MSBF_Val             _U_(0x1)   /**< \brief (US_MR) Most Significant Bit first */
#define US_MR_MSBF_LSBF             (US_MR_MSBF_LSBF_Val           << US_MR_MSBF_Pos)
#define US_MR_MSBF_MSBF             (US_MR_MSBF_MSBF_Val           << US_MR_MSBF_Pos)
#define US_MR_MODE9_Pos             17           /**< \brief (US_MR) 9-bit Character Length */
#define US_MR_MODE9                 (_U_(0x1) << US_MR_MODE9_Pos)
#define   US_MR_MODE9_0_Val               _U_(0x0)   /**< \brief (US_MR) CHRL defines character length */
#define   US_MR_MODE9_1_Val               _U_(0x1)   /**< \brief (US_MR) 9-bit character length */
#define US_MR_MODE9_0               (US_MR_MODE9_0_Val             << US_MR_MODE9_Pos)
#define US_MR_MODE9_1               (US_MR_MODE9_1_Val             << US_MR_MODE9_Pos)
#define US_MR_CLKO_Pos              18           /**< \brief (US_MR) Clock Output Select */
#define US_MR_CLKO                  (_U_(0x1) << US_MR_CLKO_Pos)
#define   US_MR_CLKO_0_Val                _U_(0x0)   /**< \brief (US_MR) The USART does not drive the SCK pin */
#define   US_MR_CLKO_1_Val                _U_(0x1)   /**< \brief (US_MR) The USART drives the SCK pin if USCLKS does not select the external clock SCK */
#define US_MR_CLKO_0                (US_MR_CLKO_0_Val              << US_MR_CLKO_Pos)
#define US_MR_CLKO_1                (US_MR_CLKO_1_Val              << US_MR_CLKO_Pos)
#define US_MR_OVER_Pos              19           /**< \brief (US_MR) Oversampling Mode */
#define US_MR_OVER                  (_U_(0x1) << US_MR_OVER_Pos)
#define   US_MR_OVER_X16_Val              _U_(0x0)   /**< \brief (US_MR) 16x Oversampling */
#define   US_MR_OVER_X8_Val               _U_(0x1)   /**< \brief (US_MR) 8x Oversampling */
#define US_MR_OVER_X16              (US_MR_OVER_X16_Val            << US_MR_OVER_Pos)
#define US_MR_OVER_X8               (US_MR_OVER_X8_Val             << US_MR_OVER_Pos)
#define US_MR_INACK_Pos             20           /**< \brief (US_MR) Inhibit Non Acknowledge */
#define US_MR_INACK                 (_U_(0x1) << US_MR_INACK_Pos)
#define   US_MR_INACK_0_Val               _U_(0x0)   /**< \brief (US_MR) The NACK is generated */
#define   US_MR_INACK_1_Val               _U_(0x1)   /**< \brief (US_MR) The NACK is not generated */
#define US_MR_INACK_0               (US_MR_INACK_0_Val             << US_MR_INACK_Pos)
#define US_MR_INACK_1               (US_MR_INACK_1_Val             << US_MR_INACK_Pos)
#define US_MR_DSNACK_Pos            21           /**< \brief (US_MR) Disable Successive NACK */
#define US_MR_DSNACK                (_U_(0x1) << US_MR_DSNACK_Pos)
#define   US_MR_DSNACK_0_Val              _U_(0x0)   /**< \brief (US_MR) NACK is sent on the ISO line as soon as a parity error occurs in the received character (unless INACK is set) */
#define   US_MR_DSNACK_1_Val              _U_(0x1)   /**< \brief (US_MR) Successive parity errors are counted up to the value specified in the MAX_ITERATION field. These parity errors generatea NACK on the ISO line. As soon as this value is reached, no additional NACK is sent on the ISO line. The flag ITERATION is asserted */
#define US_MR_DSNACK_0              (US_MR_DSNACK_0_Val            << US_MR_DSNACK_Pos)
#define US_MR_DSNACK_1              (US_MR_DSNACK_1_Val            << US_MR_DSNACK_Pos)
#define US_MR_VAR_SYNC_Pos          22           /**< \brief (US_MR) Variable synchronization of command/data sync Start Frame Delimiter */
#define US_MR_VAR_SYNC              (_U_(0x1) << US_MR_VAR_SYNC_Pos)
#define   US_MR_VAR_SYNC_0_Val            _U_(0x0)   /**< \brief (US_MR) User defined configuration of command or data sync field depending on SYNC value */
#define   US_MR_VAR_SYNC_1_Val            _U_(0x1)   /**< \brief (US_MR) The sync field is updated when a character is written into THR register */
#define US_MR_VAR_SYNC_0            (US_MR_VAR_SYNC_0_Val          << US_MR_VAR_SYNC_Pos)
#define US_MR_VAR_SYNC_1            (US_MR_VAR_SYNC_1_Val          << US_MR_VAR_SYNC_Pos)
#define US_MR_INVDATA_Pos           23           /**< \brief (US_MR) Inverted data */
#define US_MR_INVDATA               (_U_(0x1) << US_MR_INVDATA_Pos)
#define US_MR_MAX_ITERATION_Pos     24           /**< \brief (US_MR) Max interation */
#define US_MR_MAX_ITERATION_Msk     (_U_(0x7) << US_MR_MAX_ITERATION_Pos)
#define US_MR_MAX_ITERATION(value)  (US_MR_MAX_ITERATION_Msk & ((value) << US_MR_MAX_ITERATION_Pos))
#define US_MR_FILTER_Pos            28           /**< \brief (US_MR) Infrared Receive Line Filter */
#define US_MR_FILTER                (_U_(0x1) << US_MR_FILTER_Pos)
#define   US_MR_FILTER_0_Val              _U_(0x0)   /**< \brief (US_MR) The USART does not filter the receive line */
#define   US_MR_FILTER_1_Val              _U_(0x1)   /**< \brief (US_MR) The USART filters the receive line using a three-sample filter (1/16-bit clock) (2 over 3 majority) */
#define US_MR_FILTER_0              (US_MR_FILTER_0_Val            << US_MR_FILTER_Pos)
#define US_MR_FILTER_1              (US_MR_FILTER_1_Val            << US_MR_FILTER_Pos)
#define US_MR_MAN_Pos               29           /**< \brief (US_MR) Manchester Encoder/Decoder Enable */
#define US_MR_MAN                   (_U_(0x1) << US_MR_MAN_Pos)
#define   US_MR_MAN_0_Val                 _U_(0x0)   /**< \brief (US_MR) Manchester Encoder/Decoder is disabled */
#define   US_MR_MAN_1_Val                 _U_(0x1)   /**< \brief (US_MR) Manchester Encoder/Decoder is enabled */
#define US_MR_MAN_0                 (US_MR_MAN_0_Val               << US_MR_MAN_Pos)
#define US_MR_MAN_1                 (US_MR_MAN_1_Val               << US_MR_MAN_Pos)
#define US_MR_MODSYNC_Pos           30           /**< \brief (US_MR) Manchester Synchronization Mode */
#define US_MR_MODSYNC               (_U_(0x1) << US_MR_MODSYNC_Pos)
#define   US_MR_MODSYNC_0_Val             _U_(0x0)   /**< \brief (US_MR) The Manchester Start bit is a 0 to 1 transition */
#define   US_MR_MODSYNC_1_Val             _U_(0x1)   /**< \brief (US_MR) The Manchester Start bit is a 1 to 0 transition */
#define US_MR_MODSYNC_0             (US_MR_MODSYNC_0_Val           << US_MR_MODSYNC_Pos)
#define US_MR_MODSYNC_1             (US_MR_MODSYNC_1_Val           << US_MR_MODSYNC_Pos)
#define US_MR_ONEBIT_Pos            31           /**< \brief (US_MR) Start Frame Delimiter selector */
#define US_MR_ONEBIT                (_U_(0x1) << US_MR_ONEBIT_Pos)
#define   US_MR_ONEBIT_0_Val              _U_(0x0)   /**< \brief (US_MR) Start Frame delimiter is COMMAND or DATA SYNC */
#define   US_MR_ONEBIT_1_Val              _U_(0x1)   /**< \brief (US_MR) Start Frame delimiter is One Bit */
#define US_MR_ONEBIT_0              (US_MR_ONEBIT_0_Val            << US_MR_ONEBIT_Pos)
#define US_MR_ONEBIT_1              (US_MR_ONEBIT_1_Val            << US_MR_ONEBIT_Pos)
#define US_MR_MASK                  _U_(0xF7FFFFFF) /**< \brief (US_MR) MASK Register */

/* -------- US_IER : (USART Offset: 0x08) ( /W 32) Interrupt Enable Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct { // LIN mode
    uint32_t RXRDY:1;          /*!< bit:      0  Receiver Ready Interrupt Enable    */
    uint32_t TXRDY:1;          /*!< bit:      1  Transmitter Ready Interrupt Enable */
    uint32_t RXBRK:1;          /*!< bit:      2  Receiver Break Interrupt Enable    */
    uint32_t :2;               /*!< bit:  3.. 4  Reserved                           */
    uint32_t OVRE:1;           /*!< bit:      5  Overrun Error Interrupt Enable     */
    uint32_t FRAME:1;          /*!< bit:      6  Framing Error Interrupt Enable     */
    uint32_t PARE:1;           /*!< bit:      7  Parity Error Interrupt Enable      */
    uint32_t TIMEOUT:1;        /*!< bit:      8  Time-out Interrupt Enable          */
    uint32_t TXEMPTY:1;        /*!< bit:      9  Transmitter Empty Interrupt Enable */
    uint32_t ITER:1;           /*!< bit:     10  Iteration Interrupt Enable         */
    uint32_t TXBUFE:1;         /*!< bit:     11  Buffer Empty Interrupt Enable      */
    uint32_t RXBUFF:1;         /*!< bit:     12  Buffer Full Interrupt Enable       */
    uint32_t NACK:1;           /*!< bit:     13  Non Acknowledge  or LIN Break Sent or LIN Break Received Interrupt Enable */
    uint32_t LINID:1;          /*!< bit:     14  LIN Identifier Sent or LIN Identifier Received Interrupt Enable */
    uint32_t LINTC:1;          /*!< bit:     15  LIN Transfer Conpleted Interrupt Enable */
    uint32_t RIIC:1;           /*!< bit:     16  Ring Indicator Input Change Enable */
    uint32_t DSRIC:1;          /*!< bit:     17  Data Set Ready Input Change Enable */
    uint32_t DCDIC:1;          /*!< bit:     18  Data Carrier Detect Input Change Interrupt Enable */
    uint32_t CTSIC:1;          /*!< bit:     19  Clear to Send Input Change Interrupt Enable */
    uint32_t :5;               /*!< bit: 20..24  Reserved                           */
    uint32_t LINBE:1;          /*!< bit:     25  LIN Bus Error Interrupt Enable     */
    uint32_t LINISFE:1;        /*!< bit:     26  LIN Inconsistent Synch Field Error Interrupt Enable */
    uint32_t LINIPE:1;         /*!< bit:     27  LIN Identifier Parity Interrupt Enable */
    uint32_t LINCE:1;          /*!< bit:     28  LIN Checksum Error Interrupt Enable */
    uint32_t LINSNRE:1;        /*!< bit:     29  LIN Slave Not Responding Error Interrupt Enable */
    uint32_t LINSTE:1;         /*!< bit:     30  LIN Synch Tolerance Error Interrupt Enable */
    uint32_t LINHTE:1;         /*!< bit:     31  LIN Header Timeout Error Interrupt Enable */
  } LIN;                       /*!< Structure used for LIN                          */
  struct { // SPI_SLAVE mode
    uint32_t RXRDY:1;          /*!< bit:      0  Receiver Ready Interrupt Enable    */
    uint32_t TXRDY:1;          /*!< bit:      1  Transmitter Ready Interrupt Enable */
    uint32_t RXBRK:1;          /*!< bit:      2  Receiver Break Interrupt Enable    */
    uint32_t :2;               /*!< bit:  3.. 4  Reserved                           */
    uint32_t OVRE:1;           /*!< bit:      5  Overrun Error Interrupt Enable     */
    uint32_t FRAME:1;          /*!< bit:      6  Framing Error Interrupt Enable     */
    uint32_t PARE:1;           /*!< bit:      7  Parity Error Interrupt Enable      */
    uint32_t TIMEOUT:1;        /*!< bit:      8  Time-out Interrupt Enable          */
    uint32_t TXEMPTY:1;        /*!< bit:      9  Transmitter Empty Interrupt Enable */
    uint32_t UNRE:1;           /*!< bit:     10  SPI Underrun Error Interrupt Enable */
    uint32_t TXBUFE:1;         /*!< bit:     11  Buffer Empty Interrupt Enable      */
    uint32_t RXBUFF:1;         /*!< bit:     12  Buffer Full Interrupt Enable       */
    uint32_t NACK:1;           /*!< bit:     13  Non Acknowledge Interrupt Enable   */
    uint32_t :2;               /*!< bit: 14..15  Reserved                           */
    uint32_t RIIC:1;           /*!< bit:     16  Ring Indicator Input Change Enable */
    uint32_t DSRIC:1;          /*!< bit:     17  Data Set Ready Input Change Enable */
    uint32_t DCDIC:1;          /*!< bit:     18  Data Carrier Detect Input Change Interrupt Enable */
    uint32_t CTSIC:1;          /*!< bit:     19  Clear to Send Input Change Interrupt Enable */
    uint32_t :12;              /*!< bit: 20..31  Reserved                           */
  } SPI_SLAVE;                 /*!< Structure used for SPI_SLAVE                    */
  struct { // USART mode
    uint32_t RXRDY:1;          /*!< bit:      0  Receiver Ready Interrupt Enable    */
    uint32_t TXRDY:1;          /*!< bit:      1  Transmitter Ready Interrupt Enable */
    uint32_t RXBRK:1;          /*!< bit:      2  Receiver Break Interrupt Enable    */
    uint32_t :2;               /*!< bit:  3.. 4  Reserved                           */
    uint32_t OVRE:1;           /*!< bit:      5  Overrun Error Interrupt Enable     */
    uint32_t FRAME:1;          /*!< bit:      6  Framing Error Interrupt Enable     */
    uint32_t PARE:1;           /*!< bit:      7  Parity Error Interrupt Enable      */
    uint32_t TIMEOUT:1;        /*!< bit:      8  Time-out Interrupt Enable          */
    uint32_t TXEMPTY:1;        /*!< bit:      9  Transmitter Empty Interrupt Enable */
    uint32_t ITER:1;           /*!< bit:     10  Iteration Interrupt Enable         */
    uint32_t TXBUFE:1;         /*!< bit:     11  Buffer Empty Interrupt Enable      */
    uint32_t RXBUFF:1;         /*!< bit:     12  Buffer Full Interrupt Enable       */
    uint32_t NACK:1;           /*!< bit:     13  Non Acknowledge Interrupt Enable   */
    uint32_t :2;               /*!< bit: 14..15  Reserved                           */
    uint32_t RIIC:1;           /*!< bit:     16  Ring Indicator Input Change Enable */
    uint32_t DSRIC:1;          /*!< bit:     17  Data Set Ready Input Change Enable */
    uint32_t DCDIC:1;          /*!< bit:     18  Data Carrier Detect Input Change Interrupt Enable */
    uint32_t CTSIC:1;          /*!< bit:     19  Clear to Send Input Change Interrupt Enable */
    uint32_t MANE:1;           /*!< bit:     20  Manchester Error Interrupt Enable  */
    uint32_t :3;               /*!< bit: 21..23  Reserved                           */
    uint32_t MANEA:1;          /*!< bit:     24  Manchester Error Interrupt Enable  */
    uint32_t :7;               /*!< bit: 25..31  Reserved                           */
  } USART;                     /*!< Structure used for USART                        */
  uint32_t reg;                /*!< Type      used for register access              */
} US_IER_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define US_IER_OFFSET               0x08         /**< \brief (US_IER offset) Interrupt Enable Register */
#define US_IER_RESETVALUE           _U_(0x00000000); /**< \brief (US_IER reset_value) Interrupt Enable Register */

// LIN mode
#define US_IER_LIN_RXRDY_Pos        0            /**< \brief (US_IER_LIN) Receiver Ready Interrupt Enable */
#define US_IER_LIN_RXRDY            (_U_(0x1) << US_IER_LIN_RXRDY_Pos)
#define   US_IER_LIN_RXRDY_0_Val          _U_(0x0)   /**< \brief (US_IER_LIN) No Effect */
#define   US_IER_LIN_RXRDY_1_Val          _U_(0x1)   /**< \brief (US_IER_LIN) Enables the interrupt */
#define US_IER_LIN_RXRDY_0          (US_IER_LIN_RXRDY_0_Val        << US_IER_LIN_RXRDY_Pos)
#define US_IER_LIN_RXRDY_1          (US_IER_LIN_RXRDY_1_Val        << US_IER_LIN_RXRDY_Pos)
#define US_IER_LIN_TXRDY_Pos        1            /**< \brief (US_IER_LIN) Transmitter Ready Interrupt Enable */
#define US_IER_LIN_TXRDY            (_U_(0x1) << US_IER_LIN_TXRDY_Pos)
#define   US_IER_LIN_TXRDY_0_Val          _U_(0x0)   /**< \brief (US_IER_LIN) No Effect */
#define   US_IER_LIN_TXRDY_1_Val          _U_(0x1)   /**< \brief (US_IER_LIN) Enables the interrupt */
#define US_IER_LIN_TXRDY_0          (US_IER_LIN_TXRDY_0_Val        << US_IER_LIN_TXRDY_Pos)
#define US_IER_LIN_TXRDY_1          (US_IER_LIN_TXRDY_1_Val        << US_IER_LIN_TXRDY_Pos)
#define US_IER_LIN_RXBRK_Pos        2            /**< \brief (US_IER_LIN) Receiver Break Interrupt Enable */
#define US_IER_LIN_RXBRK            (_U_(0x1) << US_IER_LIN_RXBRK_Pos)
#define   US_IER_LIN_RXBRK_0_Val          _U_(0x0)   /**< \brief (US_IER_LIN) No Effect */
#define   US_IER_LIN_RXBRK_1_Val          _U_(0x1)   /**< \brief (US_IER_LIN) Enables the interrupt */
#define US_IER_LIN_RXBRK_0          (US_IER_LIN_RXBRK_0_Val        << US_IER_LIN_RXBRK_Pos)
#define US_IER_LIN_RXBRK_1          (US_IER_LIN_RXBRK_1_Val        << US_IER_LIN_RXBRK_Pos)
#define US_IER_LIN_OVRE_Pos         5            /**< \brief (US_IER_LIN) Overrun Error Interrupt Enable */
#define US_IER_LIN_OVRE             (_U_(0x1) << US_IER_LIN_OVRE_Pos)
#define   US_IER_LIN_OVRE_0_Val           _U_(0x0)   /**< \brief (US_IER_LIN) No Effect */
#define   US_IER_LIN_OVRE_1_Val           _U_(0x1)   /**< \brief (US_IER_LIN) Enables the interrupt */
#define US_IER_LIN_OVRE_0           (US_IER_LIN_OVRE_0_Val         << US_IER_LIN_OVRE_Pos)
#define US_IER_LIN_OVRE_1           (US_IER_LIN_OVRE_1_Val         << US_IER_LIN_OVRE_Pos)
#define US_IER_LIN_FRAME_Pos        6            /**< \brief (US_IER_LIN) Framing Error Interrupt Enable */
#define US_IER_LIN_FRAME            (_U_(0x1) << US_IER_LIN_FRAME_Pos)
#define   US_IER_LIN_FRAME_0_Val          _U_(0x0)   /**< \brief (US_IER_LIN) No Effect */
#define   US_IER_LIN_FRAME_1_Val          _U_(0x1)   /**< \brief (US_IER_LIN) Enables the interrupt */
#define US_IER_LIN_FRAME_0          (US_IER_LIN_FRAME_0_Val        << US_IER_LIN_FRAME_Pos)
#define US_IER_LIN_FRAME_1          (US_IER_LIN_FRAME_1_Val        << US_IER_LIN_FRAME_Pos)
#define US_IER_LIN_PARE_Pos         7            /**< \brief (US_IER_LIN) Parity Error Interrupt Enable */
#define US_IER_LIN_PARE             (_U_(0x1) << US_IER_LIN_PARE_Pos)
#define   US_IER_LIN_PARE_0_Val           _U_(0x0)   /**< \brief (US_IER_LIN) No Effect */
#define   US_IER_LIN_PARE_1_Val           _U_(0x1)   /**< \brief (US_IER_LIN) Enables the interrupt */
#define US_IER_LIN_PARE_0           (US_IER_LIN_PARE_0_Val         << US_IER_LIN_PARE_Pos)
#define US_IER_LIN_PARE_1           (US_IER_LIN_PARE_1_Val         << US_IER_LIN_PARE_Pos)
#define US_IER_LIN_TIMEOUT_Pos      8            /**< \brief (US_IER_LIN) Time-out Interrupt Enable */
#define US_IER_LIN_TIMEOUT          (_U_(0x1) << US_IER_LIN_TIMEOUT_Pos)
#define   US_IER_LIN_TIMEOUT_0_Val        _U_(0x0)   /**< \brief (US_IER_LIN) No Effect */
#define   US_IER_LIN_TIMEOUT_1_Val        _U_(0x1)   /**< \brief (US_IER_LIN) Enables the interrupt */
#define US_IER_LIN_TIMEOUT_0        (US_IER_LIN_TIMEOUT_0_Val      << US_IER_LIN_TIMEOUT_Pos)
#define US_IER_LIN_TIMEOUT_1        (US_IER_LIN_TIMEOUT_1_Val      << US_IER_LIN_TIMEOUT_Pos)
#define US_IER_LIN_TXEMPTY_Pos      9            /**< \brief (US_IER_LIN) Transmitter Empty Interrupt Enable */
#define US_IER_LIN_TXEMPTY          (_U_(0x1) << US_IER_LIN_TXEMPTY_Pos)
#define   US_IER_LIN_TXEMPTY_0_Val        _U_(0x0)   /**< \brief (US_IER_LIN) No Effect */
#define   US_IER_LIN_TXEMPTY_1_Val        _U_(0x1)   /**< \brief (US_IER_LIN) Enables the interrupt */
#define US_IER_LIN_TXEMPTY_0        (US_IER_LIN_TXEMPTY_0_Val      << US_IER_LIN_TXEMPTY_Pos)
#define US_IER_LIN_TXEMPTY_1        (US_IER_LIN_TXEMPTY_1_Val      << US_IER_LIN_TXEMPTY_Pos)
#define US_IER_LIN_ITER_Pos         10           /**< \brief (US_IER_LIN) Iteration Interrupt Enable */
#define US_IER_LIN_ITER             (_U_(0x1) << US_IER_LIN_ITER_Pos)
#define   US_IER_LIN_ITER_0_Val           _U_(0x0)   /**< \brief (US_IER_LIN) No Effect */
#define   US_IER_LIN_ITER_1_Val           _U_(0x1)   /**< \brief (US_IER_LIN) Enables the interrupt */
#define US_IER_LIN_ITER_0           (US_IER_LIN_ITER_0_Val         << US_IER_LIN_ITER_Pos)
#define US_IER_LIN_ITER_1           (US_IER_LIN_ITER_1_Val         << US_IER_LIN_ITER_Pos)
#define US_IER_LIN_TXBUFE_Pos       11           /**< \brief (US_IER_LIN) Buffer Empty Interrupt Enable */
#define US_IER_LIN_TXBUFE           (_U_(0x1) << US_IER_LIN_TXBUFE_Pos)
#define   US_IER_LIN_TXBUFE_0_Val         _U_(0x0)   /**< \brief (US_IER_LIN) No Effect */
#define   US_IER_LIN_TXBUFE_1_Val         _U_(0x1)   /**< \brief (US_IER_LIN) Enables the interrupt */
#define US_IER_LIN_TXBUFE_0         (US_IER_LIN_TXBUFE_0_Val       << US_IER_LIN_TXBUFE_Pos)
#define US_IER_LIN_TXBUFE_1         (US_IER_LIN_TXBUFE_1_Val       << US_IER_LIN_TXBUFE_Pos)
#define US_IER_LIN_RXBUFF_Pos       12           /**< \brief (US_IER_LIN) Buffer Full Interrupt Enable */
#define US_IER_LIN_RXBUFF           (_U_(0x1) << US_IER_LIN_RXBUFF_Pos)
#define   US_IER_LIN_RXBUFF_0_Val         _U_(0x0)   /**< \brief (US_IER_LIN) No Effect */
#define   US_IER_LIN_RXBUFF_1_Val         _U_(0x1)   /**< \brief (US_IER_LIN) Enables the interrupt */
#define US_IER_LIN_RXBUFF_0         (US_IER_LIN_RXBUFF_0_Val       << US_IER_LIN_RXBUFF_Pos)
#define US_IER_LIN_RXBUFF_1         (US_IER_LIN_RXBUFF_1_Val       << US_IER_LIN_RXBUFF_Pos)
#define US_IER_LIN_NACK_Pos         13           /**< \brief (US_IER_LIN) Non Acknowledge  or LIN Break Sent or LIN Break Received Interrupt Enable */
#define US_IER_LIN_NACK             (_U_(0x1) << US_IER_LIN_NACK_Pos)
#define   US_IER_LIN_NACK_0_Val           _U_(0x0)   /**< \brief (US_IER_LIN) No Effect */
#define   US_IER_LIN_NACK_1_Val           _U_(0x1)   /**< \brief (US_IER_LIN) Enables the interrupt */
#define US_IER_LIN_NACK_0           (US_IER_LIN_NACK_0_Val         << US_IER_LIN_NACK_Pos)
#define US_IER_LIN_NACK_1           (US_IER_LIN_NACK_1_Val         << US_IER_LIN_NACK_Pos)
#define US_IER_LIN_LINID_Pos        14           /**< \brief (US_IER_LIN) LIN Identifier Sent or LIN Identifier Received Interrupt Enable */
#define US_IER_LIN_LINID            (_U_(0x1) << US_IER_LIN_LINID_Pos)
#define US_IER_LIN_LINTC_Pos        15           /**< \brief (US_IER_LIN) LIN Transfer Conpleted Interrupt Enable */
#define US_IER_LIN_LINTC            (_U_(0x1) << US_IER_LIN_LINTC_Pos)
#define US_IER_LIN_RIIC_Pos         16           /**< \brief (US_IER_LIN) Ring Indicator Input Change Enable */
#define US_IER_LIN_RIIC             (_U_(0x1) << US_IER_LIN_RIIC_Pos)
#define   US_IER_LIN_RIIC_0_Val           _U_(0x0)   /**< \brief (US_IER_LIN) No Effect */
#define   US_IER_LIN_RIIC_1_Val           _U_(0x1)   /**< \brief (US_IER_LIN) Enables the interrupt */
#define US_IER_LIN_RIIC_0           (US_IER_LIN_RIIC_0_Val         << US_IER_LIN_RIIC_Pos)
#define US_IER_LIN_RIIC_1           (US_IER_LIN_RIIC_1_Val         << US_IER_LIN_RIIC_Pos)
#define US_IER_LIN_DSRIC_Pos        17           /**< \brief (US_IER_LIN) Data Set Ready Input Change Enable */
#define US_IER_LIN_DSRIC            (_U_(0x1) << US_IER_LIN_DSRIC_Pos)
#define   US_IER_LIN_DSRIC_0_Val          _U_(0x0)   /**< \brief (US_IER_LIN) No Effect */
#define   US_IER_LIN_DSRIC_1_Val          _U_(0x1)   /**< \brief (US_IER_LIN) Enables the interrupt */
#define US_IER_LIN_DSRIC_0          (US_IER_LIN_DSRIC_0_Val        << US_IER_LIN_DSRIC_Pos)
#define US_IER_LIN_DSRIC_1          (US_IER_LIN_DSRIC_1_Val        << US_IER_LIN_DSRIC_Pos)
#define US_IER_LIN_DCDIC_Pos        18           /**< \brief (US_IER_LIN) Data Carrier Detect Input Change Interrupt Enable */
#define US_IER_LIN_DCDIC            (_U_(0x1) << US_IER_LIN_DCDIC_Pos)
#define   US_IER_LIN_DCDIC_0_Val          _U_(0x0)   /**< \brief (US_IER_LIN) No Effect */
#define   US_IER_LIN_DCDIC_1_Val          _U_(0x1)   /**< \brief (US_IER_LIN) Enables the interrupt */
#define US_IER_LIN_DCDIC_0          (US_IER_LIN_DCDIC_0_Val        << US_IER_LIN_DCDIC_Pos)
#define US_IER_LIN_DCDIC_1          (US_IER_LIN_DCDIC_1_Val        << US_IER_LIN_DCDIC_Pos)
#define US_IER_LIN_CTSIC_Pos        19           /**< \brief (US_IER_LIN) Clear to Send Input Change Interrupt Enable */
#define US_IER_LIN_CTSIC            (_U_(0x1) << US_IER_LIN_CTSIC_Pos)
#define   US_IER_LIN_CTSIC_0_Val          _U_(0x0)   /**< \brief (US_IER_LIN) No Effect */
#define   US_IER_LIN_CTSIC_1_Val          _U_(0x1)   /**< \brief (US_IER_LIN) Enables the interrupt */
#define US_IER_LIN_CTSIC_0          (US_IER_LIN_CTSIC_0_Val        << US_IER_LIN_CTSIC_Pos)
#define US_IER_LIN_CTSIC_1          (US_IER_LIN_CTSIC_1_Val        << US_IER_LIN_CTSIC_Pos)
#define US_IER_LIN_LINBE_Pos        25           /**< \brief (US_IER_LIN) LIN Bus Error Interrupt Enable */
#define US_IER_LIN_LINBE            (_U_(0x1) << US_IER_LIN_LINBE_Pos)
#define US_IER_LIN_LINISFE_Pos      26           /**< \brief (US_IER_LIN) LIN Inconsistent Synch Field Error Interrupt Enable */
#define US_IER_LIN_LINISFE          (_U_(0x1) << US_IER_LIN_LINISFE_Pos)
#define US_IER_LIN_LINIPE_Pos       27           /**< \brief (US_IER_LIN) LIN Identifier Parity Interrupt Enable */
#define US_IER_LIN_LINIPE           (_U_(0x1) << US_IER_LIN_LINIPE_Pos)
#define US_IER_LIN_LINCE_Pos        28           /**< \brief (US_IER_LIN) LIN Checksum Error Interrupt Enable */
#define US_IER_LIN_LINCE            (_U_(0x1) << US_IER_LIN_LINCE_Pos)
#define US_IER_LIN_LINSNRE_Pos      29           /**< \brief (US_IER_LIN) LIN Slave Not Responding Error Interrupt Enable */
#define US_IER_LIN_LINSNRE          (_U_(0x1) << US_IER_LIN_LINSNRE_Pos)
#define US_IER_LIN_LINSTE_Pos       30           /**< \brief (US_IER_LIN) LIN Synch Tolerance Error Interrupt Enable */
#define US_IER_LIN_LINSTE           (_U_(0x1) << US_IER_LIN_LINSTE_Pos)
#define   US_IER_LIN_LINSTE_0_Val         _U_(0x0)   /**< \brief (US_IER_LIN) No Effect */
#define   US_IER_LIN_LINSTE_1_Val         _U_(0x1)   /**< \brief (US_IER_LIN) Enables the interrupt */
#define US_IER_LIN_LINSTE_0         (US_IER_LIN_LINSTE_0_Val       << US_IER_LIN_LINSTE_Pos)
#define US_IER_LIN_LINSTE_1         (US_IER_LIN_LINSTE_1_Val       << US_IER_LIN_LINSTE_Pos)
#define US_IER_LIN_LINHTE_Pos       31           /**< \brief (US_IER_LIN) LIN Header Timeout Error Interrupt Enable */
#define US_IER_LIN_LINHTE           (_U_(0x1) << US_IER_LIN_LINHTE_Pos)
#define   US_IER_LIN_LINHTE_0_Val         _U_(0x0)   /**< \brief (US_IER_LIN) No Effect */
#define   US_IER_LIN_LINHTE_1_Val         _U_(0x1)   /**< \brief (US_IER_LIN) Enables the interrupt */
#define US_IER_LIN_LINHTE_0         (US_IER_LIN_LINHTE_0_Val       << US_IER_LIN_LINHTE_Pos)
#define US_IER_LIN_LINHTE_1         (US_IER_LIN_LINHTE_1_Val       << US_IER_LIN_LINHTE_Pos)
#define US_IER_LIN_MASK             _U_(0xFE0FFFE7) /**< \brief (US_IER_LIN) MASK Register */

// SPI_SLAVE mode
#define US_IER_SPI_SLAVE_RXRDY_Pos  0            /**< \brief (US_IER_SPI_SLAVE) Receiver Ready Interrupt Enable */
#define US_IER_SPI_SLAVE_RXRDY      (_U_(0x1) << US_IER_SPI_SLAVE_RXRDY_Pos)
#define   US_IER_SPI_SLAVE_RXRDY_0_Val    _U_(0x0)   /**< \brief (US_IER_SPI_SLAVE) No Effect */
#define   US_IER_SPI_SLAVE_RXRDY_1_Val    _U_(0x1)   /**< \brief (US_IER_SPI_SLAVE) Enables the interrupt */
#define US_IER_SPI_SLAVE_RXRDY_0    (US_IER_SPI_SLAVE_RXRDY_0_Val  << US_IER_SPI_SLAVE_RXRDY_Pos)
#define US_IER_SPI_SLAVE_RXRDY_1    (US_IER_SPI_SLAVE_RXRDY_1_Val  << US_IER_SPI_SLAVE_RXRDY_Pos)
#define US_IER_SPI_SLAVE_TXRDY_Pos  1            /**< \brief (US_IER_SPI_SLAVE) Transmitter Ready Interrupt Enable */
#define US_IER_SPI_SLAVE_TXRDY      (_U_(0x1) << US_IER_SPI_SLAVE_TXRDY_Pos)
#define   US_IER_SPI_SLAVE_TXRDY_0_Val    _U_(0x0)   /**< \brief (US_IER_SPI_SLAVE) No Effect */
#define   US_IER_SPI_SLAVE_TXRDY_1_Val    _U_(0x1)   /**< \brief (US_IER_SPI_SLAVE) Enables the interrupt */
#define US_IER_SPI_SLAVE_TXRDY_0    (US_IER_SPI_SLAVE_TXRDY_0_Val  << US_IER_SPI_SLAVE_TXRDY_Pos)
#define US_IER_SPI_SLAVE_TXRDY_1    (US_IER_SPI_SLAVE_TXRDY_1_Val  << US_IER_SPI_SLAVE_TXRDY_Pos)
#define US_IER_SPI_SLAVE_RXBRK_Pos  2            /**< \brief (US_IER_SPI_SLAVE) Receiver Break Interrupt Enable */
#define US_IER_SPI_SLAVE_RXBRK      (_U_(0x1) << US_IER_SPI_SLAVE_RXBRK_Pos)
#define   US_IER_SPI_SLAVE_RXBRK_0_Val    _U_(0x0)   /**< \brief (US_IER_SPI_SLAVE) No Effect */
#define   US_IER_SPI_SLAVE_RXBRK_1_Val    _U_(0x1)   /**< \brief (US_IER_SPI_SLAVE) Enables the interrupt */
#define US_IER_SPI_SLAVE_RXBRK_0    (US_IER_SPI_SLAVE_RXBRK_0_Val  << US_IER_SPI_SLAVE_RXBRK_Pos)
#define US_IER_SPI_SLAVE_RXBRK_1    (US_IER_SPI_SLAVE_RXBRK_1_Val  << US_IER_SPI_SLAVE_RXBRK_Pos)
#define US_IER_SPI_SLAVE_OVRE_Pos   5            /**< \brief (US_IER_SPI_SLAVE) Overrun Error Interrupt Enable */
#define US_IER_SPI_SLAVE_OVRE       (_U_(0x1) << US_IER_SPI_SLAVE_OVRE_Pos)
#define   US_IER_SPI_SLAVE_OVRE_0_Val     _U_(0x0)   /**< \brief (US_IER_SPI_SLAVE) No Effect */
#define   US_IER_SPI_SLAVE_OVRE_1_Val     _U_(0x1)   /**< \brief (US_IER_SPI_SLAVE) Enables the interrupt */
#define US_IER_SPI_SLAVE_OVRE_0     (US_IER_SPI_SLAVE_OVRE_0_Val   << US_IER_SPI_SLAVE_OVRE_Pos)
#define US_IER_SPI_SLAVE_OVRE_1     (US_IER_SPI_SLAVE_OVRE_1_Val   << US_IER_SPI_SLAVE_OVRE_Pos)
#define US_IER_SPI_SLAVE_FRAME_Pos  6            /**< \brief (US_IER_SPI_SLAVE) Framing Error Interrupt Enable */
#define US_IER_SPI_SLAVE_FRAME      (_U_(0x1) << US_IER_SPI_SLAVE_FRAME_Pos)
#define   US_IER_SPI_SLAVE_FRAME_0_Val    _U_(0x0)   /**< \brief (US_IER_SPI_SLAVE) No Effect */
#define   US_IER_SPI_SLAVE_FRAME_1_Val    _U_(0x1)   /**< \brief (US_IER_SPI_SLAVE) Enables the interrupt */
#define US_IER_SPI_SLAVE_FRAME_0    (US_IER_SPI_SLAVE_FRAME_0_Val  << US_IER_SPI_SLAVE_FRAME_Pos)
#define US_IER_SPI_SLAVE_FRAME_1    (US_IER_SPI_SLAVE_FRAME_1_Val  << US_IER_SPI_SLAVE_FRAME_Pos)
#define US_IER_SPI_SLAVE_PARE_Pos   7            /**< \brief (US_IER_SPI_SLAVE) Parity Error Interrupt Enable */
#define US_IER_SPI_SLAVE_PARE       (_U_(0x1) << US_IER_SPI_SLAVE_PARE_Pos)
#define   US_IER_SPI_SLAVE_PARE_0_Val     _U_(0x0)   /**< \brief (US_IER_SPI_SLAVE) No Effect */
#define   US_IER_SPI_SLAVE_PARE_1_Val     _U_(0x1)   /**< \brief (US_IER_SPI_SLAVE) Enables the interrupt */
#define US_IER_SPI_SLAVE_PARE_0     (US_IER_SPI_SLAVE_PARE_0_Val   << US_IER_SPI_SLAVE_PARE_Pos)
#define US_IER_SPI_SLAVE_PARE_1     (US_IER_SPI_SLAVE_PARE_1_Val   << US_IER_SPI_SLAVE_PARE_Pos)
#define US_IER_SPI_SLAVE_TIMEOUT_Pos 8            /**< \brief (US_IER_SPI_SLAVE) Time-out Interrupt Enable */
#define US_IER_SPI_SLAVE_TIMEOUT    (_U_(0x1) << US_IER_SPI_SLAVE_TIMEOUT_Pos)
#define   US_IER_SPI_SLAVE_TIMEOUT_0_Val  _U_(0x0)   /**< \brief (US_IER_SPI_SLAVE) No Effect */
#define   US_IER_SPI_SLAVE_TIMEOUT_1_Val  _U_(0x1)   /**< \brief (US_IER_SPI_SLAVE) Enables the interrupt */
#define US_IER_SPI_SLAVE_TIMEOUT_0  (US_IER_SPI_SLAVE_TIMEOUT_0_Val << US_IER_SPI_SLAVE_TIMEOUT_Pos)
#define US_IER_SPI_SLAVE_TIMEOUT_1  (US_IER_SPI_SLAVE_TIMEOUT_1_Val << US_IER_SPI_SLAVE_TIMEOUT_Pos)
#define US_IER_SPI_SLAVE_TXEMPTY_Pos 9            /**< \brief (US_IER_SPI_SLAVE) Transmitter Empty Interrupt Enable */
#define US_IER_SPI_SLAVE_TXEMPTY    (_U_(0x1) << US_IER_SPI_SLAVE_TXEMPTY_Pos)
#define   US_IER_SPI_SLAVE_TXEMPTY_0_Val  _U_(0x0)   /**< \brief (US_IER_SPI_SLAVE) No Effect */
#define   US_IER_SPI_SLAVE_TXEMPTY_1_Val  _U_(0x1)   /**< \brief (US_IER_SPI_SLAVE) Enables the interrupt */
#define US_IER_SPI_SLAVE_TXEMPTY_0  (US_IER_SPI_SLAVE_TXEMPTY_0_Val << US_IER_SPI_SLAVE_TXEMPTY_Pos)
#define US_IER_SPI_SLAVE_TXEMPTY_1  (US_IER_SPI_SLAVE_TXEMPTY_1_Val << US_IER_SPI_SLAVE_TXEMPTY_Pos)
#define US_IER_SPI_SLAVE_UNRE_Pos   10           /**< \brief (US_IER_SPI_SLAVE) SPI Underrun Error Interrupt Enable */
#define US_IER_SPI_SLAVE_UNRE       (_U_(0x1) << US_IER_SPI_SLAVE_UNRE_Pos)
#define   US_IER_SPI_SLAVE_UNRE_0_Val     _U_(0x0)   /**< \brief (US_IER_SPI_SLAVE) No Effect */
#define   US_IER_SPI_SLAVE_UNRE_1_Val     _U_(0x1)   /**< \brief (US_IER_SPI_SLAVE) Enables the interrupt */
#define US_IER_SPI_SLAVE_UNRE_0     (US_IER_SPI_SLAVE_UNRE_0_Val   << US_IER_SPI_SLAVE_UNRE_Pos)
#define US_IER_SPI_SLAVE_UNRE_1     (US_IER_SPI_SLAVE_UNRE_1_Val   << US_IER_SPI_SLAVE_UNRE_Pos)
#define US_IER_SPI_SLAVE_TXBUFE_Pos 11           /**< \brief (US_IER_SPI_SLAVE) Buffer Empty Interrupt Enable */
#define US_IER_SPI_SLAVE_TXBUFE     (_U_(0x1) << US_IER_SPI_SLAVE_TXBUFE_Pos)
#define   US_IER_SPI_SLAVE_TXBUFE_0_Val   _U_(0x0)   /**< \brief (US_IER_SPI_SLAVE) No Effect */
#define   US_IER_SPI_SLAVE_TXBUFE_1_Val   _U_(0x1)   /**< \brief (US_IER_SPI_SLAVE) Enables the interrupt */
#define US_IER_SPI_SLAVE_TXBUFE_0   (US_IER_SPI_SLAVE_TXBUFE_0_Val << US_IER_SPI_SLAVE_TXBUFE_Pos)
#define US_IER_SPI_SLAVE_TXBUFE_1   (US_IER_SPI_SLAVE_TXBUFE_1_Val << US_IER_SPI_SLAVE_TXBUFE_Pos)
#define US_IER_SPI_SLAVE_RXBUFF_Pos 12           /**< \brief (US_IER_SPI_SLAVE) Buffer Full Interrupt Enable */
#define US_IER_SPI_SLAVE_RXBUFF     (_U_(0x1) << US_IER_SPI_SLAVE_RXBUFF_Pos)
#define   US_IER_SPI_SLAVE_RXBUFF_0_Val   _U_(0x0)   /**< \brief (US_IER_SPI_SLAVE) No Effect */
#define   US_IER_SPI_SLAVE_RXBUFF_1_Val   _U_(0x1)   /**< \brief (US_IER_SPI_SLAVE) Enables the interrupt */
#define US_IER_SPI_SLAVE_RXBUFF_0   (US_IER_SPI_SLAVE_RXBUFF_0_Val << US_IER_SPI_SLAVE_RXBUFF_Pos)
#define US_IER_SPI_SLAVE_RXBUFF_1   (US_IER_SPI_SLAVE_RXBUFF_1_Val << US_IER_SPI_SLAVE_RXBUFF_Pos)
#define US_IER_SPI_SLAVE_NACK_Pos   13           /**< \brief (US_IER_SPI_SLAVE) Non Acknowledge Interrupt Enable */
#define US_IER_SPI_SLAVE_NACK       (_U_(0x1) << US_IER_SPI_SLAVE_NACK_Pos)
#define   US_IER_SPI_SLAVE_NACK_0_Val     _U_(0x0)   /**< \brief (US_IER_SPI_SLAVE) No Effect */
#define   US_IER_SPI_SLAVE_NACK_1_Val     _U_(0x1)   /**< \brief (US_IER_SPI_SLAVE) Enables the interrupt */
#define US_IER_SPI_SLAVE_NACK_0     (US_IER_SPI_SLAVE_NACK_0_Val   << US_IER_SPI_SLAVE_NACK_Pos)
#define US_IER_SPI_SLAVE_NACK_1     (US_IER_SPI_SLAVE_NACK_1_Val   << US_IER_SPI_SLAVE_NACK_Pos)
#define US_IER_SPI_SLAVE_RIIC_Pos   16           /**< \brief (US_IER_SPI_SLAVE) Ring Indicator Input Change Enable */
#define US_IER_SPI_SLAVE_RIIC       (_U_(0x1) << US_IER_SPI_SLAVE_RIIC_Pos)
#define   US_IER_SPI_SLAVE_RIIC_0_Val     _U_(0x0)   /**< \brief (US_IER_SPI_SLAVE) No Effect */
#define   US_IER_SPI_SLAVE_RIIC_1_Val     _U_(0x1)   /**< \brief (US_IER_SPI_SLAVE) Enables the interrupt */
#define US_IER_SPI_SLAVE_RIIC_0     (US_IER_SPI_SLAVE_RIIC_0_Val   << US_IER_SPI_SLAVE_RIIC_Pos)
#define US_IER_SPI_SLAVE_RIIC_1     (US_IER_SPI_SLAVE_RIIC_1_Val   << US_IER_SPI_SLAVE_RIIC_Pos)
#define US_IER_SPI_SLAVE_DSRIC_Pos  17           /**< \brief (US_IER_SPI_SLAVE) Data Set Ready Input Change Enable */
#define US_IER_SPI_SLAVE_DSRIC      (_U_(0x1) << US_IER_SPI_SLAVE_DSRIC_Pos)
#define   US_IER_SPI_SLAVE_DSRIC_0_Val    _U_(0x0)   /**< \brief (US_IER_SPI_SLAVE) No Effect */
#define   US_IER_SPI_SLAVE_DSRIC_1_Val    _U_(0x1)   /**< \brief (US_IER_SPI_SLAVE) Enables the interrupt */
#define US_IER_SPI_SLAVE_DSRIC_0    (US_IER_SPI_SLAVE_DSRIC_0_Val  << US_IER_SPI_SLAVE_DSRIC_Pos)
#define US_IER_SPI_SLAVE_DSRIC_1    (US_IER_SPI_SLAVE_DSRIC_1_Val  << US_IER_SPI_SLAVE_DSRIC_Pos)
#define US_IER_SPI_SLAVE_DCDIC_Pos  18           /**< \brief (US_IER_SPI_SLAVE) Data Carrier Detect Input Change Interrupt Enable */
#define US_IER_SPI_SLAVE_DCDIC      (_U_(0x1) << US_IER_SPI_SLAVE_DCDIC_Pos)
#define   US_IER_SPI_SLAVE_DCDIC_0_Val    _U_(0x0)   /**< \brief (US_IER_SPI_SLAVE) No Effect */
#define   US_IER_SPI_SLAVE_DCDIC_1_Val    _U_(0x1)   /**< \brief (US_IER_SPI_SLAVE) Enables the interrupt */
#define US_IER_SPI_SLAVE_DCDIC_0    (US_IER_SPI_SLAVE_DCDIC_0_Val  << US_IER_SPI_SLAVE_DCDIC_Pos)
#define US_IER_SPI_SLAVE_DCDIC_1    (US_IER_SPI_SLAVE_DCDIC_1_Val  << US_IER_SPI_SLAVE_DCDIC_Pos)
#define US_IER_SPI_SLAVE_CTSIC_Pos  19           /**< \brief (US_IER_SPI_SLAVE) Clear to Send Input Change Interrupt Enable */
#define US_IER_SPI_SLAVE_CTSIC      (_U_(0x1) << US_IER_SPI_SLAVE_CTSIC_Pos)
#define   US_IER_SPI_SLAVE_CTSIC_0_Val    _U_(0x0)   /**< \brief (US_IER_SPI_SLAVE) No Effect */
#define   US_IER_SPI_SLAVE_CTSIC_1_Val    _U_(0x1)   /**< \brief (US_IER_SPI_SLAVE) Enables the interrupt */
#define US_IER_SPI_SLAVE_CTSIC_0    (US_IER_SPI_SLAVE_CTSIC_0_Val  << US_IER_SPI_SLAVE_CTSIC_Pos)
#define US_IER_SPI_SLAVE_CTSIC_1    (US_IER_SPI_SLAVE_CTSIC_1_Val  << US_IER_SPI_SLAVE_CTSIC_Pos)
#define US_IER_SPI_SLAVE_MASK       _U_(0x000F3FE7) /**< \brief (US_IER_SPI_SLAVE) MASK Register */

// USART mode
#define US_IER_USART_RXRDY_Pos      0            /**< \brief (US_IER_USART) Receiver Ready Interrupt Enable */
#define US_IER_USART_RXRDY          (_U_(0x1) << US_IER_USART_RXRDY_Pos)
#define   US_IER_USART_RXRDY_0_Val        _U_(0x0)   /**< \brief (US_IER_USART) No Effect */
#define   US_IER_USART_RXRDY_1_Val        _U_(0x1)   /**< \brief (US_IER_USART) Enables the interrupt */
#define US_IER_USART_RXRDY_0        (US_IER_USART_RXRDY_0_Val      << US_IER_USART_RXRDY_Pos)
#define US_IER_USART_RXRDY_1        (US_IER_USART_RXRDY_1_Val      << US_IER_USART_RXRDY_Pos)
#define US_IER_USART_TXRDY_Pos      1            /**< \brief (US_IER_USART) Transmitter Ready Interrupt Enable */
#define US_IER_USART_TXRDY          (_U_(0x1) << US_IER_USART_TXRDY_Pos)
#define   US_IER_USART_TXRDY_0_Val        _U_(0x0)   /**< \brief (US_IER_USART) No Effect */
#define   US_IER_USART_TXRDY_1_Val        _U_(0x1)   /**< \brief (US_IER_USART) Enables the interrupt */
#define US_IER_USART_TXRDY_0        (US_IER_USART_TXRDY_0_Val      << US_IER_USART_TXRDY_Pos)
#define US_IER_USART_TXRDY_1        (US_IER_USART_TXRDY_1_Val      << US_IER_USART_TXRDY_Pos)
#define US_IER_USART_RXBRK_Pos      2            /**< \brief (US_IER_USART) Receiver Break Interrupt Enable */
#define US_IER_USART_RXBRK          (_U_(0x1) << US_IER_USART_RXBRK_Pos)
#define   US_IER_USART_RXBRK_0_Val        _U_(0x0)   /**< \brief (US_IER_USART) No Effect */
#define   US_IER_USART_RXBRK_1_Val        _U_(0x1)   /**< \brief (US_IER_USART) Enables the interrupt */
#define US_IER_USART_RXBRK_0        (US_IER_USART_RXBRK_0_Val      << US_IER_USART_RXBRK_Pos)
#define US_IER_USART_RXBRK_1        (US_IER_USART_RXBRK_1_Val      << US_IER_USART_RXBRK_Pos)
#define US_IER_USART_OVRE_Pos       5            /**< \brief (US_IER_USART) Overrun Error Interrupt Enable */
#define US_IER_USART_OVRE           (_U_(0x1) << US_IER_USART_OVRE_Pos)
#define   US_IER_USART_OVRE_0_Val         _U_(0x0)   /**< \brief (US_IER_USART) No Effect */
#define   US_IER_USART_OVRE_1_Val         _U_(0x1)   /**< \brief (US_IER_USART) Enables the interrupt */
#define US_IER_USART_OVRE_0         (US_IER_USART_OVRE_0_Val       << US_IER_USART_OVRE_Pos)
#define US_IER_USART_OVRE_1         (US_IER_USART_OVRE_1_Val       << US_IER_USART_OVRE_Pos)
#define US_IER_USART_FRAME_Pos      6            /**< \brief (US_IER_USART) Framing Error Interrupt Enable */
#define US_IER_USART_FRAME          (_U_(0x1) << US_IER_USART_FRAME_Pos)
#define   US_IER_USART_FRAME_0_Val        _U_(0x0)   /**< \brief (US_IER_USART) No Effect */
#define   US_IER_USART_FRAME_1_Val        _U_(0x1)   /**< \brief (US_IER_USART) Enables the interrupt */
#define US_IER_USART_FRAME_0        (US_IER_USART_FRAME_0_Val      << US_IER_USART_FRAME_Pos)
#define US_IER_USART_FRAME_1        (US_IER_USART_FRAME_1_Val      << US_IER_USART_FRAME_Pos)
#define US_IER_USART_PARE_Pos       7            /**< \brief (US_IER_USART) Parity Error Interrupt Enable */
#define US_IER_USART_PARE           (_U_(0x1) << US_IER_USART_PARE_Pos)
#define   US_IER_USART_PARE_0_Val         _U_(0x0)   /**< \brief (US_IER_USART) No Effect */
#define   US_IER_USART_PARE_1_Val         _U_(0x1)   /**< \brief (US_IER_USART) Enables the interrupt */
#define US_IER_USART_PARE_0         (US_IER_USART_PARE_0_Val       << US_IER_USART_PARE_Pos)
#define US_IER_USART_PARE_1         (US_IER_USART_PARE_1_Val       << US_IER_USART_PARE_Pos)
#define US_IER_USART_TIMEOUT_Pos    8            /**< \brief (US_IER_USART) Time-out Interrupt Enable */
#define US_IER_USART_TIMEOUT        (_U_(0x1) << US_IER_USART_TIMEOUT_Pos)
#define   US_IER_USART_TIMEOUT_0_Val      _U_(0x0)   /**< \brief (US_IER_USART) No Effect */
#define   US_IER_USART_TIMEOUT_1_Val      _U_(0x1)   /**< \brief (US_IER_USART) Enables the interrupt */
#define US_IER_USART_TIMEOUT_0      (US_IER_USART_TIMEOUT_0_Val    << US_IER_USART_TIMEOUT_Pos)
#define US_IER_USART_TIMEOUT_1      (US_IER_USART_TIMEOUT_1_Val    << US_IER_USART_TIMEOUT_Pos)
#define US_IER_USART_TXEMPTY_Pos    9            /**< \brief (US_IER_USART) Transmitter Empty Interrupt Enable */
#define US_IER_USART_TXEMPTY        (_U_(0x1) << US_IER_USART_TXEMPTY_Pos)
#define   US_IER_USART_TXEMPTY_0_Val      _U_(0x0)   /**< \brief (US_IER_USART) No Effect */
#define   US_IER_USART_TXEMPTY_1_Val      _U_(0x1)   /**< \brief (US_IER_USART) Enables the interrupt */
#define US_IER_USART_TXEMPTY_0      (US_IER_USART_TXEMPTY_0_Val    << US_IER_USART_TXEMPTY_Pos)
#define US_IER_USART_TXEMPTY_1      (US_IER_USART_TXEMPTY_1_Val    << US_IER_USART_TXEMPTY_Pos)
#define US_IER_USART_ITER_Pos       10           /**< \brief (US_IER_USART) Iteration Interrupt Enable */
#define US_IER_USART_ITER           (_U_(0x1) << US_IER_USART_ITER_Pos)
#define   US_IER_USART_ITER_0_Val         _U_(0x0)   /**< \brief (US_IER_USART) No Effect */
#define   US_IER_USART_ITER_1_Val         _U_(0x1)   /**< \brief (US_IER_USART) Enables the interrupt */
#define US_IER_USART_ITER_0         (US_IER_USART_ITER_0_Val       << US_IER_USART_ITER_Pos)
#define US_IER_USART_ITER_1         (US_IER_USART_ITER_1_Val       << US_IER_USART_ITER_Pos)
#define US_IER_USART_TXBUFE_Pos     11           /**< \brief (US_IER_USART) Buffer Empty Interrupt Enable */
#define US_IER_USART_TXBUFE         (_U_(0x1) << US_IER_USART_TXBUFE_Pos)
#define   US_IER_USART_TXBUFE_0_Val       _U_(0x0)   /**< \brief (US_IER_USART) No Effect */
#define   US_IER_USART_TXBUFE_1_Val       _U_(0x1)   /**< \brief (US_IER_USART) Enables the interrupt */
#define US_IER_USART_TXBUFE_0       (US_IER_USART_TXBUFE_0_Val     << US_IER_USART_TXBUFE_Pos)
#define US_IER_USART_TXBUFE_1       (US_IER_USART_TXBUFE_1_Val     << US_IER_USART_TXBUFE_Pos)
#define US_IER_USART_RXBUFF_Pos     12           /**< \brief (US_IER_USART) Buffer Full Interrupt Enable */
#define US_IER_USART_RXBUFF         (_U_(0x1) << US_IER_USART_RXBUFF_Pos)
#define   US_IER_USART_RXBUFF_0_Val       _U_(0x0)   /**< \brief (US_IER_USART) No Effect */
#define   US_IER_USART_RXBUFF_1_Val       _U_(0x1)   /**< \brief (US_IER_USART) Enables the interrupt */
#define US_IER_USART_RXBUFF_0       (US_IER_USART_RXBUFF_0_Val     << US_IER_USART_RXBUFF_Pos)
#define US_IER_USART_RXBUFF_1       (US_IER_USART_RXBUFF_1_Val     << US_IER_USART_RXBUFF_Pos)
#define US_IER_USART_NACK_Pos       13           /**< \brief (US_IER_USART) Non Acknowledge Interrupt Enable */
#define US_IER_USART_NACK           (_U_(0x1) << US_IER_USART_NACK_Pos)
#define   US_IER_USART_NACK_0_Val         _U_(0x0)   /**< \brief (US_IER_USART) No Effect */
#define   US_IER_USART_NACK_1_Val         _U_(0x1)   /**< \brief (US_IER_USART) Enables the interrupt */
#define US_IER_USART_NACK_0         (US_IER_USART_NACK_0_Val       << US_IER_USART_NACK_Pos)
#define US_IER_USART_NACK_1         (US_IER_USART_NACK_1_Val       << US_IER_USART_NACK_Pos)
#define US_IER_USART_RIIC_Pos       16           /**< \brief (US_IER_USART) Ring Indicator Input Change Enable */
#define US_IER_USART_RIIC           (_U_(0x1) << US_IER_USART_RIIC_Pos)
#define   US_IER_USART_RIIC_0_Val         _U_(0x0)   /**< \brief (US_IER_USART) No Effect */
#define   US_IER_USART_RIIC_1_Val         _U_(0x1)   /**< \brief (US_IER_USART) Enables the interrupt */
#define US_IER_USART_RIIC_0         (US_IER_USART_RIIC_0_Val       << US_IER_USART_RIIC_Pos)
#define US_IER_USART_RIIC_1         (US_IER_USART_RIIC_1_Val       << US_IER_USART_RIIC_Pos)
#define US_IER_USART_DSRIC_Pos      17           /**< \brief (US_IER_USART) Data Set Ready Input Change Enable */
#define US_IER_USART_DSRIC          (_U_(0x1) << US_IER_USART_DSRIC_Pos)
#define   US_IER_USART_DSRIC_0_Val        _U_(0x0)   /**< \brief (US_IER_USART) No Effect */
#define   US_IER_USART_DSRIC_1_Val        _U_(0x1)   /**< \brief (US_IER_USART) Enables the interrupt */
#define US_IER_USART_DSRIC_0        (US_IER_USART_DSRIC_0_Val      << US_IER_USART_DSRIC_Pos)
#define US_IER_USART_DSRIC_1        (US_IER_USART_DSRIC_1_Val      << US_IER_USART_DSRIC_Pos)
#define US_IER_USART_DCDIC_Pos      18           /**< \brief (US_IER_USART) Data Carrier Detect Input Change Interrupt Enable */
#define US_IER_USART_DCDIC          (_U_(0x1) << US_IER_USART_DCDIC_Pos)
#define   US_IER_USART_DCDIC_0_Val        _U_(0x0)   /**< \brief (US_IER_USART) No Effect */
#define   US_IER_USART_DCDIC_1_Val        _U_(0x1)   /**< \brief (US_IER_USART) Enables the interrupt */
#define US_IER_USART_DCDIC_0        (US_IER_USART_DCDIC_0_Val      << US_IER_USART_DCDIC_Pos)
#define US_IER_USART_DCDIC_1        (US_IER_USART_DCDIC_1_Val      << US_IER_USART_DCDIC_Pos)
#define US_IER_USART_CTSIC_Pos      19           /**< \brief (US_IER_USART) Clear to Send Input Change Interrupt Enable */
#define US_IER_USART_CTSIC          (_U_(0x1) << US_IER_USART_CTSIC_Pos)
#define   US_IER_USART_CTSIC_0_Val        _U_(0x0)   /**< \brief (US_IER_USART) No Effect */
#define   US_IER_USART_CTSIC_1_Val        _U_(0x1)   /**< \brief (US_IER_USART) Enables the interrupt */
#define US_IER_USART_CTSIC_0        (US_IER_USART_CTSIC_0_Val      << US_IER_USART_CTSIC_Pos)
#define US_IER_USART_CTSIC_1        (US_IER_USART_CTSIC_1_Val      << US_IER_USART_CTSIC_Pos)
#define US_IER_USART_MANE_Pos       20           /**< \brief (US_IER_USART) Manchester Error Interrupt Enable */
#define US_IER_USART_MANE           (_U_(0x1) << US_IER_USART_MANE_Pos)
#define US_IER_USART_MANEA_Pos      24           /**< \brief (US_IER_USART) Manchester Error Interrupt Enable */
#define US_IER_USART_MANEA          (_U_(0x1) << US_IER_USART_MANEA_Pos)
#define   US_IER_USART_MANEA_0_Val        _U_(0x0)   /**< \brief (US_IER_USART) No effect */
#define   US_IER_USART_MANEA_1_Val        _U_(0x1)   /**< \brief (US_IER_USART) Enables the interrupt */
#define US_IER_USART_MANEA_0        (US_IER_USART_MANEA_0_Val      << US_IER_USART_MANEA_Pos)
#define US_IER_USART_MANEA_1        (US_IER_USART_MANEA_1_Val      << US_IER_USART_MANEA_Pos)
#define US_IER_USART_MASK           _U_(0x011F3FE7) /**< \brief (US_IER_USART) MASK Register */

// Any mode
#define US_IER_RXRDY_Pos            0            /**< \brief (US_IER) Receiver Ready Interrupt Enable */
#define US_IER_RXRDY                (_U_(0x1) << US_IER_RXRDY_Pos)
#define   US_IER_RXRDY_0_Val              _U_(0x0)   /**< \brief (US_IER) No Effect */
#define   US_IER_RXRDY_1_Val              _U_(0x1)   /**< \brief (US_IER) Enables the interrupt */
#define US_IER_RXRDY_0              (US_IER_RXRDY_0_Val            << US_IER_RXRDY_Pos)
#define US_IER_RXRDY_1              (US_IER_RXRDY_1_Val            << US_IER_RXRDY_Pos)
#define US_IER_TXRDY_Pos            1            /**< \brief (US_IER) Transmitter Ready Interrupt Enable */
#define US_IER_TXRDY                (_U_(0x1) << US_IER_TXRDY_Pos)
#define   US_IER_TXRDY_0_Val              _U_(0x0)   /**< \brief (US_IER) No Effect */
#define   US_IER_TXRDY_1_Val              _U_(0x1)   /**< \brief (US_IER) Enables the interrupt */
#define US_IER_TXRDY_0              (US_IER_TXRDY_0_Val            << US_IER_TXRDY_Pos)
#define US_IER_TXRDY_1              (US_IER_TXRDY_1_Val            << US_IER_TXRDY_Pos)
#define US_IER_RXBRK_Pos            2            /**< \brief (US_IER) Receiver Break Interrupt Enable */
#define US_IER_RXBRK                (_U_(0x1) << US_IER_RXBRK_Pos)
#define   US_IER_RXBRK_0_Val              _U_(0x0)   /**< \brief (US_IER) No Effect */
#define   US_IER_RXBRK_1_Val              _U_(0x1)   /**< \brief (US_IER) Enables the interrupt */
#define US_IER_RXBRK_0              (US_IER_RXBRK_0_Val            << US_IER_RXBRK_Pos)
#define US_IER_RXBRK_1              (US_IER_RXBRK_1_Val            << US_IER_RXBRK_Pos)
#define US_IER_OVRE_Pos             5            /**< \brief (US_IER) Overrun Error Interrupt Enable */
#define US_IER_OVRE                 (_U_(0x1) << US_IER_OVRE_Pos)
#define   US_IER_OVRE_0_Val               _U_(0x0)   /**< \brief (US_IER) No Effect */
#define   US_IER_OVRE_1_Val               _U_(0x1)   /**< \brief (US_IER) Enables the interrupt */
#define US_IER_OVRE_0               (US_IER_OVRE_0_Val             << US_IER_OVRE_Pos)
#define US_IER_OVRE_1               (US_IER_OVRE_1_Val             << US_IER_OVRE_Pos)
#define US_IER_FRAME_Pos            6            /**< \brief (US_IER) Framing Error Interrupt Enable */
#define US_IER_FRAME                (_U_(0x1) << US_IER_FRAME_Pos)
#define   US_IER_FRAME_0_Val              _U_(0x0)   /**< \brief (US_IER) No Effect */
#define   US_IER_FRAME_1_Val              _U_(0x1)   /**< \brief (US_IER) Enables the interrupt */
#define US_IER_FRAME_0              (US_IER_FRAME_0_Val            << US_IER_FRAME_Pos)
#define US_IER_FRAME_1              (US_IER_FRAME_1_Val            << US_IER_FRAME_Pos)
#define US_IER_PARE_Pos             7            /**< \brief (US_IER) Parity Error Interrupt Enable */
#define US_IER_PARE                 (_U_(0x1) << US_IER_PARE_Pos)
#define   US_IER_PARE_0_Val               _U_(0x0)   /**< \brief (US_IER) No Effect */
#define   US_IER_PARE_1_Val               _U_(0x1)   /**< \brief (US_IER) Enables the interrupt */
#define US_IER_PARE_0               (US_IER_PARE_0_Val             << US_IER_PARE_Pos)
#define US_IER_PARE_1               (US_IER_PARE_1_Val             << US_IER_PARE_Pos)
#define US_IER_TIMEOUT_Pos          8            /**< \brief (US_IER) Time-out Interrupt Enable */
#define US_IER_TIMEOUT              (_U_(0x1) << US_IER_TIMEOUT_Pos)
#define   US_IER_TIMEOUT_0_Val            _U_(0x0)   /**< \brief (US_IER) No Effect */
#define   US_IER_TIMEOUT_1_Val            _U_(0x1)   /**< \brief (US_IER) Enables the interrupt */
#define US_IER_TIMEOUT_0            (US_IER_TIMEOUT_0_Val          << US_IER_TIMEOUT_Pos)
#define US_IER_TIMEOUT_1            (US_IER_TIMEOUT_1_Val          << US_IER_TIMEOUT_Pos)
#define US_IER_TXEMPTY_Pos          9            /**< \brief (US_IER) Transmitter Empty Interrupt Enable */
#define US_IER_TXEMPTY              (_U_(0x1) << US_IER_TXEMPTY_Pos)
#define   US_IER_TXEMPTY_0_Val            _U_(0x0)   /**< \brief (US_IER) No Effect */
#define   US_IER_TXEMPTY_1_Val            _U_(0x1)   /**< \brief (US_IER) Enables the interrupt */
#define US_IER_TXEMPTY_0            (US_IER_TXEMPTY_0_Val          << US_IER_TXEMPTY_Pos)
#define US_IER_TXEMPTY_1            (US_IER_TXEMPTY_1_Val          << US_IER_TXEMPTY_Pos)
#define US_IER_ITER_Pos             10           /**< \brief (US_IER) Iteration Interrupt Enable */
#define US_IER_ITER                 (_U_(0x1) << US_IER_ITER_Pos)
#define   US_IER_ITER_0_Val               _U_(0x0)   /**< \brief (US_IER) No Effect */
#define   US_IER_ITER_1_Val               _U_(0x1)   /**< \brief (US_IER) Enables the interrupt */
#define US_IER_ITER_0               (US_IER_ITER_0_Val             << US_IER_ITER_Pos)
#define US_IER_ITER_1               (US_IER_ITER_1_Val             << US_IER_ITER_Pos)
#define US_IER_UNRE_Pos             10           /**< \brief (US_IER) SPI Underrun Error Interrupt Enable */
#define US_IER_UNRE                 (_U_(0x1) << US_IER_UNRE_Pos)
#define   US_IER_UNRE_0_Val               _U_(0x0)   /**< \brief (US_IER) No Effect */
#define   US_IER_UNRE_1_Val               _U_(0x1)   /**< \brief (US_IER) Enables the interrupt */
#define US_IER_UNRE_0               (US_IER_UNRE_0_Val             << US_IER_UNRE_Pos)
#define US_IER_UNRE_1               (US_IER_UNRE_1_Val             << US_IER_UNRE_Pos)
#define US_IER_ITER_Pos             10           /**< \brief (US_IER) Iteration Interrupt Enable */
#define US_IER_ITER                 (_U_(0x1) << US_IER_ITER_Pos)
#define   US_IER_ITER_0_Val               _U_(0x0)   /**< \brief (US_IER) No Effect */
#define   US_IER_ITER_1_Val               _U_(0x1)   /**< \brief (US_IER) Enables the interrupt */
#define US_IER_ITER_0               (US_IER_ITER_0_Val             << US_IER_ITER_Pos)
#define US_IER_ITER_1               (US_IER_ITER_1_Val             << US_IER_ITER_Pos)
#define US_IER_TXBUFE_Pos           11           /**< \brief (US_IER) Buffer Empty Interrupt Enable */
#define US_IER_TXBUFE               (_U_(0x1) << US_IER_TXBUFE_Pos)
#define   US_IER_TXBUFE_0_Val             _U_(0x0)   /**< \brief (US_IER) No Effect */
#define   US_IER_TXBUFE_1_Val             _U_(0x1)   /**< \brief (US_IER) Enables the interrupt */
#define US_IER_TXBUFE_0             (US_IER_TXBUFE_0_Val           << US_IER_TXBUFE_Pos)
#define US_IER_TXBUFE_1             (US_IER_TXBUFE_1_Val           << US_IER_TXBUFE_Pos)
#define US_IER_RXBUFF_Pos           12           /**< \brief (US_IER) Buffer Full Interrupt Enable */
#define US_IER_RXBUFF               (_U_(0x1) << US_IER_RXBUFF_Pos)
#define   US_IER_RXBUFF_0_Val             _U_(0x0)   /**< \brief (US_IER) No Effect */
#define   US_IER_RXBUFF_1_Val             _U_(0x1)   /**< \brief (US_IER) Enables the interrupt */
#define US_IER_RXBUFF_0             (US_IER_RXBUFF_0_Val           << US_IER_RXBUFF_Pos)
#define US_IER_RXBUFF_1             (US_IER_RXBUFF_1_Val           << US_IER_RXBUFF_Pos)
#define US_IER_NACK_Pos             13           /**< \brief (US_IER) Non Acknowledge  or LIN Break Sent or LIN Break Received Interrupt Enable */
#define US_IER_NACK                 (_U_(0x1) << US_IER_NACK_Pos)
#define   US_IER_NACK_0_Val               _U_(0x0)   /**< \brief (US_IER) No Effect */
#define   US_IER_NACK_1_Val               _U_(0x1)   /**< \brief (US_IER) Enables the interrupt */
#define US_IER_NACK_0               (US_IER_NACK_0_Val             << US_IER_NACK_Pos)
#define US_IER_NACK_1               (US_IER_NACK_1_Val             << US_IER_NACK_Pos)
#define US_IER_LINID_Pos            14           /**< \brief (US_IER) LIN Identifier Sent or LIN Identifier Received Interrupt Enable */
#define US_IER_LINID                (_U_(0x1) << US_IER_LINID_Pos)
#define US_IER_LINTC_Pos            15           /**< \brief (US_IER) LIN Transfer Conpleted Interrupt Enable */
#define US_IER_LINTC                (_U_(0x1) << US_IER_LINTC_Pos)
#define US_IER_RIIC_Pos             16           /**< \brief (US_IER) Ring Indicator Input Change Enable */
#define US_IER_RIIC                 (_U_(0x1) << US_IER_RIIC_Pos)
#define   US_IER_RIIC_0_Val               _U_(0x0)   /**< \brief (US_IER) No Effect */
#define   US_IER_RIIC_1_Val               _U_(0x1)   /**< \brief (US_IER) Enables the interrupt */
#define US_IER_RIIC_0               (US_IER_RIIC_0_Val             << US_IER_RIIC_Pos)
#define US_IER_RIIC_1               (US_IER_RIIC_1_Val             << US_IER_RIIC_Pos)
#define US_IER_DSRIC_Pos            17           /**< \brief (US_IER) Data Set Ready Input Change Enable */
#define US_IER_DSRIC                (_U_(0x1) << US_IER_DSRIC_Pos)
#define   US_IER_DSRIC_0_Val              _U_(0x0)   /**< \brief (US_IER) No Effect */
#define   US_IER_DSRIC_1_Val              _U_(0x1)   /**< \brief (US_IER) Enables the interrupt */
#define US_IER_DSRIC_0              (US_IER_DSRIC_0_Val            << US_IER_DSRIC_Pos)
#define US_IER_DSRIC_1              (US_IER_DSRIC_1_Val            << US_IER_DSRIC_Pos)
#define US_IER_DCDIC_Pos            18           /**< \brief (US_IER) Data Carrier Detect Input Change Interrupt Enable */
#define US_IER_DCDIC                (_U_(0x1) << US_IER_DCDIC_Pos)
#define   US_IER_DCDIC_0_Val              _U_(0x0)   /**< \brief (US_IER) No Effect */
#define   US_IER_DCDIC_1_Val              _U_(0x1)   /**< \brief (US_IER) Enables the interrupt */
#define US_IER_DCDIC_0              (US_IER_DCDIC_0_Val            << US_IER_DCDIC_Pos)
#define US_IER_DCDIC_1              (US_IER_DCDIC_1_Val            << US_IER_DCDIC_Pos)
#define US_IER_CTSIC_Pos            19           /**< \brief (US_IER) Clear to Send Input Change Interrupt Enable */
#define US_IER_CTSIC                (_U_(0x1) << US_IER_CTSIC_Pos)
#define   US_IER_CTSIC_0_Val              _U_(0x0)   /**< \brief (US_IER) No Effect */
#define   US_IER_CTSIC_1_Val              _U_(0x1)   /**< \brief (US_IER) Enables the interrupt */
#define US_IER_CTSIC_0              (US_IER_CTSIC_0_Val            << US_IER_CTSIC_Pos)
#define US_IER_CTSIC_1              (US_IER_CTSIC_1_Val            << US_IER_CTSIC_Pos)
#define US_IER_MANE_Pos             20           /**< \brief (US_IER) Manchester Error Interrupt Enable */
#define US_IER_MANE                 (_U_(0x1) << US_IER_MANE_Pos)
#define US_IER_MANEA_Pos            24           /**< \brief (US_IER) Manchester Error Interrupt Enable */
#define US_IER_MANEA                (_U_(0x1) << US_IER_MANEA_Pos)
#define   US_IER_MANEA_0_Val              _U_(0x0)   /**< \brief (US_IER) No effect */
#define   US_IER_MANEA_1_Val              _U_(0x1)   /**< \brief (US_IER) Enables the interrupt */
#define US_IER_MANEA_0              (US_IER_MANEA_0_Val            << US_IER_MANEA_Pos)
#define US_IER_MANEA_1              (US_IER_MANEA_1_Val            << US_IER_MANEA_Pos)
#define US_IER_LINBE_Pos            25           /**< \brief (US_IER) LIN Bus Error Interrupt Enable */
#define US_IER_LINBE                (_U_(0x1) << US_IER_LINBE_Pos)
#define US_IER_LINISFE_Pos          26           /**< \brief (US_IER) LIN Inconsistent Synch Field Error Interrupt Enable */
#define US_IER_LINISFE              (_U_(0x1) << US_IER_LINISFE_Pos)
#define US_IER_LINIPE_Pos           27           /**< \brief (US_IER) LIN Identifier Parity Interrupt Enable */
#define US_IER_LINIPE               (_U_(0x1) << US_IER_LINIPE_Pos)
#define US_IER_LINCE_Pos            28           /**< \brief (US_IER) LIN Checksum Error Interrupt Enable */
#define US_IER_LINCE                (_U_(0x1) << US_IER_LINCE_Pos)
#define US_IER_LINSNRE_Pos          29           /**< \brief (US_IER) LIN Slave Not Responding Error Interrupt Enable */
#define US_IER_LINSNRE              (_U_(0x1) << US_IER_LINSNRE_Pos)
#define US_IER_LINSTE_Pos           30           /**< \brief (US_IER) LIN Synch Tolerance Error Interrupt Enable */
#define US_IER_LINSTE               (_U_(0x1) << US_IER_LINSTE_Pos)
#define   US_IER_LINSTE_0_Val             _U_(0x0)   /**< \brief (US_IER) No Effect */
#define   US_IER_LINSTE_1_Val             _U_(0x1)   /**< \brief (US_IER) Enables the interrupt */
#define US_IER_LINSTE_0             (US_IER_LINSTE_0_Val           << US_IER_LINSTE_Pos)
#define US_IER_LINSTE_1             (US_IER_LINSTE_1_Val           << US_IER_LINSTE_Pos)
#define US_IER_LINHTE_Pos           31           /**< \brief (US_IER) LIN Header Timeout Error Interrupt Enable */
#define US_IER_LINHTE               (_U_(0x1) << US_IER_LINHTE_Pos)
#define   US_IER_LINHTE_0_Val             _U_(0x0)   /**< \brief (US_IER) No Effect */
#define   US_IER_LINHTE_1_Val             _U_(0x1)   /**< \brief (US_IER) Enables the interrupt */
#define US_IER_LINHTE_0             (US_IER_LINHTE_0_Val           << US_IER_LINHTE_Pos)
#define US_IER_LINHTE_1             (US_IER_LINHTE_1_Val           << US_IER_LINHTE_Pos)
#define US_IER_MASK                 _U_(0xFF1FFFE7) /**< \brief (US_IER) MASK Register */

/* -------- US_IDR : (USART Offset: 0x0C) ( /W 32) Interrupt Disable Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct { // LIN mode
    uint32_t RXRDY:1;          /*!< bit:      0  Receiver Ready Interrupt Disable   */
    uint32_t TXRDY:1;          /*!< bit:      1  Transmitter Ready Interrupt Disable */
    uint32_t RXBRK:1;          /*!< bit:      2  Receiver Break Interrupt Disable   */
    uint32_t :2;               /*!< bit:  3.. 4  Reserved                           */
    uint32_t OVRE:1;           /*!< bit:      5  Overrun Error Interrupt Disable    */
    uint32_t FRAME:1;          /*!< bit:      6  Framing Error Interrupt Disable    */
    uint32_t PARE:1;           /*!< bit:      7  Parity Error Interrupt Disable     */
    uint32_t TIMEOUT:1;        /*!< bit:      8  Time-out Interrupt Disable         */
    uint32_t TXEMPTY:1;        /*!< bit:      9  Transmitter Empty Interrupt Disable */
    uint32_t ITER:1;           /*!< bit:     10  Iteration Interrupt Disable        */
    uint32_t TXBUFE:1;         /*!< bit:     11  Buffer Empty Interrupt Disable     */
    uint32_t RXBUFF:1;         /*!< bit:     12  Buffer Full Interrupt Disable      */
    uint32_t NACK:1;           /*!< bit:     13  Non Acknowledge  or LIN Break Sent or LIN Break Received Interrupt Disable */
    uint32_t LINID:1;          /*!< bit:     14  LIN Identifier Sent or LIN Identifier Received Interrupt Disable */
    uint32_t LINTC:1;          /*!< bit:     15  LIN Transfer Conpleted Interrupt Disable */
    uint32_t RIIC:1;           /*!< bit:     16  Ring Indicator Input Change Disable */
    uint32_t DSRIC:1;          /*!< bit:     17  Data Set Ready Input Change Disable */
    uint32_t DCDIC:1;          /*!< bit:     18  Data Carrier Detect Input Change Interrupt Disable */
    uint32_t CTSIC:1;          /*!< bit:     19  Clear to Send Input Change Interrupt Disable */
    uint32_t :5;               /*!< bit: 20..24  Reserved                           */
    uint32_t LINBE:1;          /*!< bit:     25  LIN Bus Error Interrupt Disable    */
    uint32_t LINISFE:1;        /*!< bit:     26  LIN Inconsistent Synch Field Error Interrupt Disable */
    uint32_t LINIPE:1;         /*!< bit:     27  LIN Identifier Parity Interrupt Disable */
    uint32_t LINCE:1;          /*!< bit:     28  LIN Checksum Error Interrupt Disable */
    uint32_t LINSNRE:1;        /*!< bit:     29  LIN Slave Not Responding Error Interrupt Disable */
    uint32_t LINSTE:1;         /*!< bit:     30  LIN Synch Tolerance Error Interrupt Disable */
    uint32_t LINHTE:1;         /*!< bit:     31  LIN Header Timeout Error Interrupt Disable */
  } LIN;                       /*!< Structure used for LIN                          */
  struct { // SPI_SLAVE mode
    uint32_t RXRDY:1;          /*!< bit:      0  Receiver Ready Interrupt Disable   */
    uint32_t TXRDY:1;          /*!< bit:      1  Transmitter Ready Interrupt Disable */
    uint32_t RXBRK:1;          /*!< bit:      2  Receiver Break Interrupt Disable   */
    uint32_t :2;               /*!< bit:  3.. 4  Reserved                           */
    uint32_t OVRE:1;           /*!< bit:      5  Overrun Error Interrupt Disable    */
    uint32_t FRAME:1;          /*!< bit:      6  Framing Error Interrupt Disable    */
    uint32_t PARE:1;           /*!< bit:      7  Parity Error Interrupt Disable     */
    uint32_t TIMEOUT:1;        /*!< bit:      8  Time-out Interrupt Disable         */
    uint32_t TXEMPTY:1;        /*!< bit:      9  Transmitter Empty Interrupt Disable */
    uint32_t UNRE:1;           /*!< bit:     10  SPI Underrun Error Interrupt Disable */
    uint32_t TXBUFE:1;         /*!< bit:     11  Buffer Empty Interrupt Disable     */
    uint32_t RXBUFF:1;         /*!< bit:     12  Buffer Full Interrupt Disable      */
    uint32_t NACK:1;           /*!< bit:     13  Non Acknowledge Interrupt Disable  */
    uint32_t :2;               /*!< bit: 14..15  Reserved                           */
    uint32_t RIIC:1;           /*!< bit:     16  Ring Indicator Input Change Disable */
    uint32_t DSRIC:1;          /*!< bit:     17  Data Set Ready Input Change Disable */
    uint32_t DCDIC:1;          /*!< bit:     18  Data Carrier Detect Input Change Interrupt Disable */
    uint32_t CTSIC:1;          /*!< bit:     19  Clear to Send Input Change Interrupt Disable */
    uint32_t :12;              /*!< bit: 20..31  Reserved                           */
  } SPI_SLAVE;                 /*!< Structure used for SPI_SLAVE                    */
  struct { // USART mode
    uint32_t RXRDY:1;          /*!< bit:      0  Receiver Ready Interrupt Disable   */
    uint32_t TXRDY:1;          /*!< bit:      1  Transmitter Ready Interrupt Disable */
    uint32_t RXBRK:1;          /*!< bit:      2  Receiver Break Interrupt Disable   */
    uint32_t :2;               /*!< bit:  3.. 4  Reserved                           */
    uint32_t OVRE:1;           /*!< bit:      5  Overrun Error Interrupt Disable    */
    uint32_t FRAME:1;          /*!< bit:      6  Framing Error Interrupt Disable    */
    uint32_t PARE:1;           /*!< bit:      7  Parity Error Interrupt Disable     */
    uint32_t TIMEOUT:1;        /*!< bit:      8  Time-out Interrupt Disable         */
    uint32_t TXEMPTY:1;        /*!< bit:      9  Transmitter Empty Interrupt Disable */
    uint32_t ITER:1;           /*!< bit:     10  Iteration Interrupt Disable        */
    uint32_t TXBUFE:1;         /*!< bit:     11  Buffer Empty Interrupt Disable     */
    uint32_t RXBUFF:1;         /*!< bit:     12  Buffer Full Interrupt Disable      */
    uint32_t NACK:1;           /*!< bit:     13  Non Acknowledge Interrupt Disable  */
    uint32_t :2;               /*!< bit: 14..15  Reserved                           */
    uint32_t RIIC:1;           /*!< bit:     16  Ring Indicator Input Change Disable */
    uint32_t DSRIC:1;          /*!< bit:     17  Data Set Ready Input Change Disable */
    uint32_t DCDIC:1;          /*!< bit:     18  Data Carrier Detect Input Change Interrupt Disable */
    uint32_t CTSIC:1;          /*!< bit:     19  Clear to Send Input Change Interrupt Disable */
    uint32_t MANE:1;           /*!< bit:     20  Manchester Error Interrupt Disable */
    uint32_t :3;               /*!< bit: 21..23  Reserved                           */
    uint32_t MANEA:1;          /*!< bit:     24  Manchester Error Interrupt Disable */
    uint32_t :7;               /*!< bit: 25..31  Reserved                           */
  } USART;                     /*!< Structure used for USART                        */
  uint32_t reg;                /*!< Type      used for register access              */
} US_IDR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define US_IDR_OFFSET               0x0C         /**< \brief (US_IDR offset) Interrupt Disable Register */
#define US_IDR_RESETVALUE           _U_(0x00000000); /**< \brief (US_IDR reset_value) Interrupt Disable Register */

// LIN mode
#define US_IDR_LIN_RXRDY_Pos        0            /**< \brief (US_IDR_LIN) Receiver Ready Interrupt Disable */
#define US_IDR_LIN_RXRDY            (_U_(0x1) << US_IDR_LIN_RXRDY_Pos)
#define   US_IDR_LIN_RXRDY_0_Val          _U_(0x0)   /**< \brief (US_IDR_LIN) No Effect */
#define   US_IDR_LIN_RXRDY_1_Val          _U_(0x1)   /**< \brief (US_IDR_LIN) Disables the interrupt */
#define US_IDR_LIN_RXRDY_0          (US_IDR_LIN_RXRDY_0_Val        << US_IDR_LIN_RXRDY_Pos)
#define US_IDR_LIN_RXRDY_1          (US_IDR_LIN_RXRDY_1_Val        << US_IDR_LIN_RXRDY_Pos)
#define US_IDR_LIN_TXRDY_Pos        1            /**< \brief (US_IDR_LIN) Transmitter Ready Interrupt Disable */
#define US_IDR_LIN_TXRDY            (_U_(0x1) << US_IDR_LIN_TXRDY_Pos)
#define   US_IDR_LIN_TXRDY_0_Val          _U_(0x0)   /**< \brief (US_IDR_LIN) No Effect */
#define   US_IDR_LIN_TXRDY_1_Val          _U_(0x1)   /**< \brief (US_IDR_LIN) Disables the interrupt */
#define US_IDR_LIN_TXRDY_0          (US_IDR_LIN_TXRDY_0_Val        << US_IDR_LIN_TXRDY_Pos)
#define US_IDR_LIN_TXRDY_1          (US_IDR_LIN_TXRDY_1_Val        << US_IDR_LIN_TXRDY_Pos)
#define US_IDR_LIN_RXBRK_Pos        2            /**< \brief (US_IDR_LIN) Receiver Break Interrupt Disable */
#define US_IDR_LIN_RXBRK            (_U_(0x1) << US_IDR_LIN_RXBRK_Pos)
#define   US_IDR_LIN_RXBRK_0_Val          _U_(0x0)   /**< \brief (US_IDR_LIN) No Effect */
#define   US_IDR_LIN_RXBRK_1_Val          _U_(0x1)   /**< \brief (US_IDR_LIN) Disables the interrupt */
#define US_IDR_LIN_RXBRK_0          (US_IDR_LIN_RXBRK_0_Val        << US_IDR_LIN_RXBRK_Pos)
#define US_IDR_LIN_RXBRK_1          (US_IDR_LIN_RXBRK_1_Val        << US_IDR_LIN_RXBRK_Pos)
#define US_IDR_LIN_OVRE_Pos         5            /**< \brief (US_IDR_LIN) Overrun Error Interrupt Disable */
#define US_IDR_LIN_OVRE             (_U_(0x1) << US_IDR_LIN_OVRE_Pos)
#define   US_IDR_LIN_OVRE_0_Val           _U_(0x0)   /**< \brief (US_IDR_LIN) No Effect */
#define   US_IDR_LIN_OVRE_1_Val           _U_(0x1)   /**< \brief (US_IDR_LIN) Disables the interrupt */
#define US_IDR_LIN_OVRE_0           (US_IDR_LIN_OVRE_0_Val         << US_IDR_LIN_OVRE_Pos)
#define US_IDR_LIN_OVRE_1           (US_IDR_LIN_OVRE_1_Val         << US_IDR_LIN_OVRE_Pos)
#define US_IDR_LIN_FRAME_Pos        6            /**< \brief (US_IDR_LIN) Framing Error Interrupt Disable */
#define US_IDR_LIN_FRAME            (_U_(0x1) << US_IDR_LIN_FRAME_Pos)
#define   US_IDR_LIN_FRAME_0_Val          _U_(0x0)   /**< \brief (US_IDR_LIN) No Effect */
#define   US_IDR_LIN_FRAME_1_Val          _U_(0x1)   /**< \brief (US_IDR_LIN) Disables the interrupt */
#define US_IDR_LIN_FRAME_0          (US_IDR_LIN_FRAME_0_Val        << US_IDR_LIN_FRAME_Pos)
#define US_IDR_LIN_FRAME_1          (US_IDR_LIN_FRAME_1_Val        << US_IDR_LIN_FRAME_Pos)
#define US_IDR_LIN_PARE_Pos         7            /**< \brief (US_IDR_LIN) Parity Error Interrupt Disable */
#define US_IDR_LIN_PARE             (_U_(0x1) << US_IDR_LIN_PARE_Pos)
#define   US_IDR_LIN_PARE_0_Val           _U_(0x0)   /**< \brief (US_IDR_LIN) No Effect */
#define   US_IDR_LIN_PARE_1_Val           _U_(0x1)   /**< \brief (US_IDR_LIN) Disables the interrupt */
#define US_IDR_LIN_PARE_0           (US_IDR_LIN_PARE_0_Val         << US_IDR_LIN_PARE_Pos)
#define US_IDR_LIN_PARE_1           (US_IDR_LIN_PARE_1_Val         << US_IDR_LIN_PARE_Pos)
#define US_IDR_LIN_TIMEOUT_Pos      8            /**< \brief (US_IDR_LIN) Time-out Interrupt Disable */
#define US_IDR_LIN_TIMEOUT          (_U_(0x1) << US_IDR_LIN_TIMEOUT_Pos)
#define   US_IDR_LIN_TIMEOUT_0_Val        _U_(0x0)   /**< \brief (US_IDR_LIN) No Effect */
#define   US_IDR_LIN_TIMEOUT_1_Val        _U_(0x1)   /**< \brief (US_IDR_LIN) Disables the interrupt */
#define US_IDR_LIN_TIMEOUT_0        (US_IDR_LIN_TIMEOUT_0_Val      << US_IDR_LIN_TIMEOUT_Pos)
#define US_IDR_LIN_TIMEOUT_1        (US_IDR_LIN_TIMEOUT_1_Val      << US_IDR_LIN_TIMEOUT_Pos)
#define US_IDR_LIN_TXEMPTY_Pos      9            /**< \brief (US_IDR_LIN) Transmitter Empty Interrupt Disable */
#define US_IDR_LIN_TXEMPTY          (_U_(0x1) << US_IDR_LIN_TXEMPTY_Pos)
#define   US_IDR_LIN_TXEMPTY_0_Val        _U_(0x0)   /**< \brief (US_IDR_LIN) No Effect */
#define   US_IDR_LIN_TXEMPTY_1_Val        _U_(0x1)   /**< \brief (US_IDR_LIN) Disables the interrupt */
#define US_IDR_LIN_TXEMPTY_0        (US_IDR_LIN_TXEMPTY_0_Val      << US_IDR_LIN_TXEMPTY_Pos)
#define US_IDR_LIN_TXEMPTY_1        (US_IDR_LIN_TXEMPTY_1_Val      << US_IDR_LIN_TXEMPTY_Pos)
#define US_IDR_LIN_ITER_Pos         10           /**< \brief (US_IDR_LIN) Iteration Interrupt Disable */
#define US_IDR_LIN_ITER             (_U_(0x1) << US_IDR_LIN_ITER_Pos)
#define   US_IDR_LIN_ITER_0_Val           _U_(0x0)   /**< \brief (US_IDR_LIN) No Effect */
#define   US_IDR_LIN_ITER_1_Val           _U_(0x1)   /**< \brief (US_IDR_LIN) Disables the interrupt */
#define US_IDR_LIN_ITER_0           (US_IDR_LIN_ITER_0_Val         << US_IDR_LIN_ITER_Pos)
#define US_IDR_LIN_ITER_1           (US_IDR_LIN_ITER_1_Val         << US_IDR_LIN_ITER_Pos)
#define US_IDR_LIN_TXBUFE_Pos       11           /**< \brief (US_IDR_LIN) Buffer Empty Interrupt Disable */
#define US_IDR_LIN_TXBUFE           (_U_(0x1) << US_IDR_LIN_TXBUFE_Pos)
#define   US_IDR_LIN_TXBUFE_0_Val         _U_(0x0)   /**< \brief (US_IDR_LIN) No Effect */
#define   US_IDR_LIN_TXBUFE_1_Val         _U_(0x1)   /**< \brief (US_IDR_LIN) Disables the interrupt */
#define US_IDR_LIN_TXBUFE_0         (US_IDR_LIN_TXBUFE_0_Val       << US_IDR_LIN_TXBUFE_Pos)
#define US_IDR_LIN_TXBUFE_1         (US_IDR_LIN_TXBUFE_1_Val       << US_IDR_LIN_TXBUFE_Pos)
#define US_IDR_LIN_RXBUFF_Pos       12           /**< \brief (US_IDR_LIN) Buffer Full Interrupt Disable */
#define US_IDR_LIN_RXBUFF           (_U_(0x1) << US_IDR_LIN_RXBUFF_Pos)
#define   US_IDR_LIN_RXBUFF_0_Val         _U_(0x0)   /**< \brief (US_IDR_LIN) No Effect */
#define   US_IDR_LIN_RXBUFF_1_Val         _U_(0x1)   /**< \brief (US_IDR_LIN) Disables the interrupt */
#define US_IDR_LIN_RXBUFF_0         (US_IDR_LIN_RXBUFF_0_Val       << US_IDR_LIN_RXBUFF_Pos)
#define US_IDR_LIN_RXBUFF_1         (US_IDR_LIN_RXBUFF_1_Val       << US_IDR_LIN_RXBUFF_Pos)
#define US_IDR_LIN_NACK_Pos         13           /**< \brief (US_IDR_LIN) Non Acknowledge  or LIN Break Sent or LIN Break Received Interrupt Disable */
#define US_IDR_LIN_NACK             (_U_(0x1) << US_IDR_LIN_NACK_Pos)
#define   US_IDR_LIN_NACK_0_Val           _U_(0x0)   /**< \brief (US_IDR_LIN) No Effect */
#define   US_IDR_LIN_NACK_1_Val           _U_(0x1)   /**< \brief (US_IDR_LIN) Disables the interrupt */
#define US_IDR_LIN_NACK_0           (US_IDR_LIN_NACK_0_Val         << US_IDR_LIN_NACK_Pos)
#define US_IDR_LIN_NACK_1           (US_IDR_LIN_NACK_1_Val         << US_IDR_LIN_NACK_Pos)
#define US_IDR_LIN_LINID_Pos        14           /**< \brief (US_IDR_LIN) LIN Identifier Sent or LIN Identifier Received Interrupt Disable */
#define US_IDR_LIN_LINID            (_U_(0x1) << US_IDR_LIN_LINID_Pos)
#define US_IDR_LIN_LINTC_Pos        15           /**< \brief (US_IDR_LIN) LIN Transfer Conpleted Interrupt Disable */
#define US_IDR_LIN_LINTC            (_U_(0x1) << US_IDR_LIN_LINTC_Pos)
#define US_IDR_LIN_RIIC_Pos         16           /**< \brief (US_IDR_LIN) Ring Indicator Input Change Disable */
#define US_IDR_LIN_RIIC             (_U_(0x1) << US_IDR_LIN_RIIC_Pos)
#define   US_IDR_LIN_RIIC_0_Val           _U_(0x0)   /**< \brief (US_IDR_LIN) No Effect */
#define   US_IDR_LIN_RIIC_1_Val           _U_(0x1)   /**< \brief (US_IDR_LIN) Disables the interrupt */
#define US_IDR_LIN_RIIC_0           (US_IDR_LIN_RIIC_0_Val         << US_IDR_LIN_RIIC_Pos)
#define US_IDR_LIN_RIIC_1           (US_IDR_LIN_RIIC_1_Val         << US_IDR_LIN_RIIC_Pos)
#define US_IDR_LIN_DSRIC_Pos        17           /**< \brief (US_IDR_LIN) Data Set Ready Input Change Disable */
#define US_IDR_LIN_DSRIC            (_U_(0x1) << US_IDR_LIN_DSRIC_Pos)
#define   US_IDR_LIN_DSRIC_0_Val          _U_(0x0)   /**< \brief (US_IDR_LIN) No Effect */
#define   US_IDR_LIN_DSRIC_1_Val          _U_(0x1)   /**< \brief (US_IDR_LIN) Disables the interrupt */
#define US_IDR_LIN_DSRIC_0          (US_IDR_LIN_DSRIC_0_Val        << US_IDR_LIN_DSRIC_Pos)
#define US_IDR_LIN_DSRIC_1          (US_IDR_LIN_DSRIC_1_Val        << US_IDR_LIN_DSRIC_Pos)
#define US_IDR_LIN_DCDIC_Pos        18           /**< \brief (US_IDR_LIN) Data Carrier Detect Input Change Interrupt Disable */
#define US_IDR_LIN_DCDIC            (_U_(0x1) << US_IDR_LIN_DCDIC_Pos)
#define   US_IDR_LIN_DCDIC_0_Val          _U_(0x0)   /**< \brief (US_IDR_LIN) No Effect */
#define   US_IDR_LIN_DCDIC_1_Val          _U_(0x1)   /**< \brief (US_IDR_LIN) Disables the interrupt */
#define US_IDR_LIN_DCDIC_0          (US_IDR_LIN_DCDIC_0_Val        << US_IDR_LIN_DCDIC_Pos)
#define US_IDR_LIN_DCDIC_1          (US_IDR_LIN_DCDIC_1_Val        << US_IDR_LIN_DCDIC_Pos)
#define US_IDR_LIN_CTSIC_Pos        19           /**< \brief (US_IDR_LIN) Clear to Send Input Change Interrupt Disable */
#define US_IDR_LIN_CTSIC            (_U_(0x1) << US_IDR_LIN_CTSIC_Pos)
#define   US_IDR_LIN_CTSIC_0_Val          _U_(0x0)   /**< \brief (US_IDR_LIN) No Effect */
#define   US_IDR_LIN_CTSIC_1_Val          _U_(0x1)   /**< \brief (US_IDR_LIN) Disables the interrupt */
#define US_IDR_LIN_CTSIC_0          (US_IDR_LIN_CTSIC_0_Val        << US_IDR_LIN_CTSIC_Pos)
#define US_IDR_LIN_CTSIC_1          (US_IDR_LIN_CTSIC_1_Val        << US_IDR_LIN_CTSIC_Pos)
#define US_IDR_LIN_LINBE_Pos        25           /**< \brief (US_IDR_LIN) LIN Bus Error Interrupt Disable */
#define US_IDR_LIN_LINBE            (_U_(0x1) << US_IDR_LIN_LINBE_Pos)
#define US_IDR_LIN_LINISFE_Pos      26           /**< \brief (US_IDR_LIN) LIN Inconsistent Synch Field Error Interrupt Disable */
#define US_IDR_LIN_LINISFE          (_U_(0x1) << US_IDR_LIN_LINISFE_Pos)
#define US_IDR_LIN_LINIPE_Pos       27           /**< \brief (US_IDR_LIN) LIN Identifier Parity Interrupt Disable */
#define US_IDR_LIN_LINIPE           (_U_(0x1) << US_IDR_LIN_LINIPE_Pos)
#define US_IDR_LIN_LINCE_Pos        28           /**< \brief (US_IDR_LIN) LIN Checksum Error Interrupt Disable */
#define US_IDR_LIN_LINCE            (_U_(0x1) << US_IDR_LIN_LINCE_Pos)
#define US_IDR_LIN_LINSNRE_Pos      29           /**< \brief (US_IDR_LIN) LIN Slave Not Responding Error Interrupt Disable */
#define US_IDR_LIN_LINSNRE          (_U_(0x1) << US_IDR_LIN_LINSNRE_Pos)
#define US_IDR_LIN_LINSTE_Pos       30           /**< \brief (US_IDR_LIN) LIN Synch Tolerance Error Interrupt Disable */
#define US_IDR_LIN_LINSTE           (_U_(0x1) << US_IDR_LIN_LINSTE_Pos)
#define   US_IDR_LIN_LINSTE_0_Val         _U_(0x0)   /**< \brief (US_IDR_LIN) No Effect */
#define   US_IDR_LIN_LINSTE_1_Val         _U_(0x1)   /**< \brief (US_IDR_LIN) Disables the interrupt */
#define US_IDR_LIN_LINSTE_0         (US_IDR_LIN_LINSTE_0_Val       << US_IDR_LIN_LINSTE_Pos)
#define US_IDR_LIN_LINSTE_1         (US_IDR_LIN_LINSTE_1_Val       << US_IDR_LIN_LINSTE_Pos)
#define US_IDR_LIN_LINHTE_Pos       31           /**< \brief (US_IDR_LIN) LIN Header Timeout Error Interrupt Disable */
#define US_IDR_LIN_LINHTE           (_U_(0x1) << US_IDR_LIN_LINHTE_Pos)
#define   US_IDR_LIN_LINHTE_0_Val         _U_(0x0)   /**< \brief (US_IDR_LIN) No Effect */
#define   US_IDR_LIN_LINHTE_1_Val         _U_(0x1)   /**< \brief (US_IDR_LIN) Disables the interrupt */
#define US_IDR_LIN_LINHTE_0         (US_IDR_LIN_LINHTE_0_Val       << US_IDR_LIN_LINHTE_Pos)
#define US_IDR_LIN_LINHTE_1         (US_IDR_LIN_LINHTE_1_Val       << US_IDR_LIN_LINHTE_Pos)
#define US_IDR_LIN_MASK             _U_(0xFE0FFFE7) /**< \brief (US_IDR_LIN) MASK Register */

// SPI_SLAVE mode
#define US_IDR_SPI_SLAVE_RXRDY_Pos  0            /**< \brief (US_IDR_SPI_SLAVE) Receiver Ready Interrupt Disable */
#define US_IDR_SPI_SLAVE_RXRDY      (_U_(0x1) << US_IDR_SPI_SLAVE_RXRDY_Pos)
#define   US_IDR_SPI_SLAVE_RXRDY_0_Val    _U_(0x0)   /**< \brief (US_IDR_SPI_SLAVE) No Effect */
#define   US_IDR_SPI_SLAVE_RXRDY_1_Val    _U_(0x1)   /**< \brief (US_IDR_SPI_SLAVE) Disables the interrupt */
#define US_IDR_SPI_SLAVE_RXRDY_0    (US_IDR_SPI_SLAVE_RXRDY_0_Val  << US_IDR_SPI_SLAVE_RXRDY_Pos)
#define US_IDR_SPI_SLAVE_RXRDY_1    (US_IDR_SPI_SLAVE_RXRDY_1_Val  << US_IDR_SPI_SLAVE_RXRDY_Pos)
#define US_IDR_SPI_SLAVE_TXRDY_Pos  1            /**< \brief (US_IDR_SPI_SLAVE) Transmitter Ready Interrupt Disable */
#define US_IDR_SPI_SLAVE_TXRDY      (_U_(0x1) << US_IDR_SPI_SLAVE_TXRDY_Pos)
#define   US_IDR_SPI_SLAVE_TXRDY_0_Val    _U_(0x0)   /**< \brief (US_IDR_SPI_SLAVE) No Effect */
#define   US_IDR_SPI_SLAVE_TXRDY_1_Val    _U_(0x1)   /**< \brief (US_IDR_SPI_SLAVE) Disables the interrupt */
#define US_IDR_SPI_SLAVE_TXRDY_0    (US_IDR_SPI_SLAVE_TXRDY_0_Val  << US_IDR_SPI_SLAVE_TXRDY_Pos)
#define US_IDR_SPI_SLAVE_TXRDY_1    (US_IDR_SPI_SLAVE_TXRDY_1_Val  << US_IDR_SPI_SLAVE_TXRDY_Pos)
#define US_IDR_SPI_SLAVE_RXBRK_Pos  2            /**< \brief (US_IDR_SPI_SLAVE) Receiver Break Interrupt Disable */
#define US_IDR_SPI_SLAVE_RXBRK      (_U_(0x1) << US_IDR_SPI_SLAVE_RXBRK_Pos)
#define   US_IDR_SPI_SLAVE_RXBRK_0_Val    _U_(0x0)   /**< \brief (US_IDR_SPI_SLAVE) No Effect */
#define   US_IDR_SPI_SLAVE_RXBRK_1_Val    _U_(0x1)   /**< \brief (US_IDR_SPI_SLAVE) Disables the interrupt */
#define US_IDR_SPI_SLAVE_RXBRK_0    (US_IDR_SPI_SLAVE_RXBRK_0_Val  << US_IDR_SPI_SLAVE_RXBRK_Pos)
#define US_IDR_SPI_SLAVE_RXBRK_1    (US_IDR_SPI_SLAVE_RXBRK_1_Val  << US_IDR_SPI_SLAVE_RXBRK_Pos)
#define US_IDR_SPI_SLAVE_OVRE_Pos   5            /**< \brief (US_IDR_SPI_SLAVE) Overrun Error Interrupt Disable */
#define US_IDR_SPI_SLAVE_OVRE       (_U_(0x1) << US_IDR_SPI_SLAVE_OVRE_Pos)
#define   US_IDR_SPI_SLAVE_OVRE_0_Val     _U_(0x0)   /**< \brief (US_IDR_SPI_SLAVE) No Effect */
#define   US_IDR_SPI_SLAVE_OVRE_1_Val     _U_(0x1)   /**< \brief (US_IDR_SPI_SLAVE) Disables the interrupt */
#define US_IDR_SPI_SLAVE_OVRE_0     (US_IDR_SPI_SLAVE_OVRE_0_Val   << US_IDR_SPI_SLAVE_OVRE_Pos)
#define US_IDR_SPI_SLAVE_OVRE_1     (US_IDR_SPI_SLAVE_OVRE_1_Val   << US_IDR_SPI_SLAVE_OVRE_Pos)
#define US_IDR_SPI_SLAVE_FRAME_Pos  6            /**< \brief (US_IDR_SPI_SLAVE) Framing Error Interrupt Disable */
#define US_IDR_SPI_SLAVE_FRAME      (_U_(0x1) << US_IDR_SPI_SLAVE_FRAME_Pos)
#define   US_IDR_SPI_SLAVE_FRAME_0_Val    _U_(0x0)   /**< \brief (US_IDR_SPI_SLAVE) No Effect */
#define   US_IDR_SPI_SLAVE_FRAME_1_Val    _U_(0x1)   /**< \brief (US_IDR_SPI_SLAVE) Disables the interrupt */
#define US_IDR_SPI_SLAVE_FRAME_0    (US_IDR_SPI_SLAVE_FRAME_0_Val  << US_IDR_SPI_SLAVE_FRAME_Pos)
#define US_IDR_SPI_SLAVE_FRAME_1    (US_IDR_SPI_SLAVE_FRAME_1_Val  << US_IDR_SPI_SLAVE_FRAME_Pos)
#define US_IDR_SPI_SLAVE_PARE_Pos   7            /**< \brief (US_IDR_SPI_SLAVE) Parity Error Interrupt Disable */
#define US_IDR_SPI_SLAVE_PARE       (_U_(0x1) << US_IDR_SPI_SLAVE_PARE_Pos)
#define   US_IDR_SPI_SLAVE_PARE_0_Val     _U_(0x0)   /**< \brief (US_IDR_SPI_SLAVE) No Effect */
#define   US_IDR_SPI_SLAVE_PARE_1_Val     _U_(0x1)   /**< \brief (US_IDR_SPI_SLAVE) Disables the interrupt */
#define US_IDR_SPI_SLAVE_PARE_0     (US_IDR_SPI_SLAVE_PARE_0_Val   << US_IDR_SPI_SLAVE_PARE_Pos)
#define US_IDR_SPI_SLAVE_PARE_1     (US_IDR_SPI_SLAVE_PARE_1_Val   << US_IDR_SPI_SLAVE_PARE_Pos)
#define US_IDR_SPI_SLAVE_TIMEOUT_Pos 8            /**< \brief (US_IDR_SPI_SLAVE) Time-out Interrupt Disable */
#define US_IDR_SPI_SLAVE_TIMEOUT    (_U_(0x1) << US_IDR_SPI_SLAVE_TIMEOUT_Pos)
#define   US_IDR_SPI_SLAVE_TIMEOUT_0_Val  _U_(0x0)   /**< \brief (US_IDR_SPI_SLAVE) No Effect */
#define   US_IDR_SPI_SLAVE_TIMEOUT_1_Val  _U_(0x1)   /**< \brief (US_IDR_SPI_SLAVE) Disables the interrupt */
#define US_IDR_SPI_SLAVE_TIMEOUT_0  (US_IDR_SPI_SLAVE_TIMEOUT_0_Val << US_IDR_SPI_SLAVE_TIMEOUT_Pos)
#define US_IDR_SPI_SLAVE_TIMEOUT_1  (US_IDR_SPI_SLAVE_TIMEOUT_1_Val << US_IDR_SPI_SLAVE_TIMEOUT_Pos)
#define US_IDR_SPI_SLAVE_TXEMPTY_Pos 9            /**< \brief (US_IDR_SPI_SLAVE) Transmitter Empty Interrupt Disable */
#define US_IDR_SPI_SLAVE_TXEMPTY    (_U_(0x1) << US_IDR_SPI_SLAVE_TXEMPTY_Pos)
#define   US_IDR_SPI_SLAVE_TXEMPTY_0_Val  _U_(0x0)   /**< \brief (US_IDR_SPI_SLAVE) No Effect */
#define   US_IDR_SPI_SLAVE_TXEMPTY_1_Val  _U_(0x1)   /**< \brief (US_IDR_SPI_SLAVE) Disables the interrupt */
#define US_IDR_SPI_SLAVE_TXEMPTY_0  (US_IDR_SPI_SLAVE_TXEMPTY_0_Val << US_IDR_SPI_SLAVE_TXEMPTY_Pos)
#define US_IDR_SPI_SLAVE_TXEMPTY_1  (US_IDR_SPI_SLAVE_TXEMPTY_1_Val << US_IDR_SPI_SLAVE_TXEMPTY_Pos)
#define US_IDR_SPI_SLAVE_UNRE_Pos   10           /**< \brief (US_IDR_SPI_SLAVE) SPI Underrun Error Interrupt Disable */
#define US_IDR_SPI_SLAVE_UNRE       (_U_(0x1) << US_IDR_SPI_SLAVE_UNRE_Pos)
#define   US_IDR_SPI_SLAVE_UNRE_0_Val     _U_(0x0)   /**< \brief (US_IDR_SPI_SLAVE) No Effect */
#define   US_IDR_SPI_SLAVE_UNRE_1_Val     _U_(0x1)   /**< \brief (US_IDR_SPI_SLAVE) Disables the interrupt */
#define US_IDR_SPI_SLAVE_UNRE_0     (US_IDR_SPI_SLAVE_UNRE_0_Val   << US_IDR_SPI_SLAVE_UNRE_Pos)
#define US_IDR_SPI_SLAVE_UNRE_1     (US_IDR_SPI_SLAVE_UNRE_1_Val   << US_IDR_SPI_SLAVE_UNRE_Pos)
#define US_IDR_SPI_SLAVE_TXBUFE_Pos 11           /**< \brief (US_IDR_SPI_SLAVE) Buffer Empty Interrupt Disable */
#define US_IDR_SPI_SLAVE_TXBUFE     (_U_(0x1) << US_IDR_SPI_SLAVE_TXBUFE_Pos)
#define   US_IDR_SPI_SLAVE_TXBUFE_0_Val   _U_(0x0)   /**< \brief (US_IDR_SPI_SLAVE) No Effect */
#define   US_IDR_SPI_SLAVE_TXBUFE_1_Val   _U_(0x1)   /**< \brief (US_IDR_SPI_SLAVE) Disables the interrupt */
#define US_IDR_SPI_SLAVE_TXBUFE_0   (US_IDR_SPI_SLAVE_TXBUFE_0_Val << US_IDR_SPI_SLAVE_TXBUFE_Pos)
#define US_IDR_SPI_SLAVE_TXBUFE_1   (US_IDR_SPI_SLAVE_TXBUFE_1_Val << US_IDR_SPI_SLAVE_TXBUFE_Pos)
#define US_IDR_SPI_SLAVE_RXBUFF_Pos 12           /**< \brief (US_IDR_SPI_SLAVE) Buffer Full Interrupt Disable */
#define US_IDR_SPI_SLAVE_RXBUFF     (_U_(0x1) << US_IDR_SPI_SLAVE_RXBUFF_Pos)
#define   US_IDR_SPI_SLAVE_RXBUFF_0_Val   _U_(0x0)   /**< \brief (US_IDR_SPI_SLAVE) No Effect */
#define   US_IDR_SPI_SLAVE_RXBUFF_1_Val   _U_(0x1)   /**< \brief (US_IDR_SPI_SLAVE) Disables the interrupt */
#define US_IDR_SPI_SLAVE_RXBUFF_0   (US_IDR_SPI_SLAVE_RXBUFF_0_Val << US_IDR_SPI_SLAVE_RXBUFF_Pos)
#define US_IDR_SPI_SLAVE_RXBUFF_1   (US_IDR_SPI_SLAVE_RXBUFF_1_Val << US_IDR_SPI_SLAVE_RXBUFF_Pos)
#define US_IDR_SPI_SLAVE_NACK_Pos   13           /**< \brief (US_IDR_SPI_SLAVE) Non Acknowledge Interrupt Disable */
#define US_IDR_SPI_SLAVE_NACK       (_U_(0x1) << US_IDR_SPI_SLAVE_NACK_Pos)
#define   US_IDR_SPI_SLAVE_NACK_0_Val     _U_(0x0)   /**< \brief (US_IDR_SPI_SLAVE) No Effect */
#define   US_IDR_SPI_SLAVE_NACK_1_Val     _U_(0x1)   /**< \brief (US_IDR_SPI_SLAVE) Disables the interrupt */
#define US_IDR_SPI_SLAVE_NACK_0     (US_IDR_SPI_SLAVE_NACK_0_Val   << US_IDR_SPI_SLAVE_NACK_Pos)
#define US_IDR_SPI_SLAVE_NACK_1     (US_IDR_SPI_SLAVE_NACK_1_Val   << US_IDR_SPI_SLAVE_NACK_Pos)
#define US_IDR_SPI_SLAVE_RIIC_Pos   16           /**< \brief (US_IDR_SPI_SLAVE) Ring Indicator Input Change Disable */
#define US_IDR_SPI_SLAVE_RIIC       (_U_(0x1) << US_IDR_SPI_SLAVE_RIIC_Pos)
#define   US_IDR_SPI_SLAVE_RIIC_0_Val     _U_(0x0)   /**< \brief (US_IDR_SPI_SLAVE) No Effect */
#define   US_IDR_SPI_SLAVE_RIIC_1_Val     _U_(0x1)   /**< \brief (US_IDR_SPI_SLAVE) Disables the interrupt */
#define US_IDR_SPI_SLAVE_RIIC_0     (US_IDR_SPI_SLAVE_RIIC_0_Val   << US_IDR_SPI_SLAVE_RIIC_Pos)
#define US_IDR_SPI_SLAVE_RIIC_1     (US_IDR_SPI_SLAVE_RIIC_1_Val   << US_IDR_SPI_SLAVE_RIIC_Pos)
#define US_IDR_SPI_SLAVE_DSRIC_Pos  17           /**< \brief (US_IDR_SPI_SLAVE) Data Set Ready Input Change Disable */
#define US_IDR_SPI_SLAVE_DSRIC      (_U_(0x1) << US_IDR_SPI_SLAVE_DSRIC_Pos)
#define   US_IDR_SPI_SLAVE_DSRIC_0_Val    _U_(0x0)   /**< \brief (US_IDR_SPI_SLAVE) No Effect */
#define   US_IDR_SPI_SLAVE_DSRIC_1_Val    _U_(0x1)   /**< \brief (US_IDR_SPI_SLAVE) Disables the interrupt */
#define US_IDR_SPI_SLAVE_DSRIC_0    (US_IDR_SPI_SLAVE_DSRIC_0_Val  << US_IDR_SPI_SLAVE_DSRIC_Pos)
#define US_IDR_SPI_SLAVE_DSRIC_1    (US_IDR_SPI_SLAVE_DSRIC_1_Val  << US_IDR_SPI_SLAVE_DSRIC_Pos)
#define US_IDR_SPI_SLAVE_DCDIC_Pos  18           /**< \brief (US_IDR_SPI_SLAVE) Data Carrier Detect Input Change Interrupt Disable */
#define US_IDR_SPI_SLAVE_DCDIC      (_U_(0x1) << US_IDR_SPI_SLAVE_DCDIC_Pos)
#define   US_IDR_SPI_SLAVE_DCDIC_0_Val    _U_(0x0)   /**< \brief (US_IDR_SPI_SLAVE) No Effect */
#define   US_IDR_SPI_SLAVE_DCDIC_1_Val    _U_(0x1)   /**< \brief (US_IDR_SPI_SLAVE) Disables the interrupt */
#define US_IDR_SPI_SLAVE_DCDIC_0    (US_IDR_SPI_SLAVE_DCDIC_0_Val  << US_IDR_SPI_SLAVE_DCDIC_Pos)
#define US_IDR_SPI_SLAVE_DCDIC_1    (US_IDR_SPI_SLAVE_DCDIC_1_Val  << US_IDR_SPI_SLAVE_DCDIC_Pos)
#define US_IDR_SPI_SLAVE_CTSIC_Pos  19           /**< \brief (US_IDR_SPI_SLAVE) Clear to Send Input Change Interrupt Disable */
#define US_IDR_SPI_SLAVE_CTSIC      (_U_(0x1) << US_IDR_SPI_SLAVE_CTSIC_Pos)
#define   US_IDR_SPI_SLAVE_CTSIC_0_Val    _U_(0x0)   /**< \brief (US_IDR_SPI_SLAVE) No Effect */
#define   US_IDR_SPI_SLAVE_CTSIC_1_Val    _U_(0x1)   /**< \brief (US_IDR_SPI_SLAVE) Disables the interrupt */
#define US_IDR_SPI_SLAVE_CTSIC_0    (US_IDR_SPI_SLAVE_CTSIC_0_Val  << US_IDR_SPI_SLAVE_CTSIC_Pos)
#define US_IDR_SPI_SLAVE_CTSIC_1    (US_IDR_SPI_SLAVE_CTSIC_1_Val  << US_IDR_SPI_SLAVE_CTSIC_Pos)
#define US_IDR_SPI_SLAVE_MASK       _U_(0x000F3FE7) /**< \brief (US_IDR_SPI_SLAVE) MASK Register */

// USART mode
#define US_IDR_USART_RXRDY_Pos      0            /**< \brief (US_IDR_USART) Receiver Ready Interrupt Disable */
#define US_IDR_USART_RXRDY          (_U_(0x1) << US_IDR_USART_RXRDY_Pos)
#define   US_IDR_USART_RXRDY_0_Val        _U_(0x0)   /**< \brief (US_IDR_USART) No Effect */
#define   US_IDR_USART_RXRDY_1_Val        _U_(0x1)   /**< \brief (US_IDR_USART) Disables the interrupt */
#define US_IDR_USART_RXRDY_0        (US_IDR_USART_RXRDY_0_Val      << US_IDR_USART_RXRDY_Pos)
#define US_IDR_USART_RXRDY_1        (US_IDR_USART_RXRDY_1_Val      << US_IDR_USART_RXRDY_Pos)
#define US_IDR_USART_TXRDY_Pos      1            /**< \brief (US_IDR_USART) Transmitter Ready Interrupt Disable */
#define US_IDR_USART_TXRDY          (_U_(0x1) << US_IDR_USART_TXRDY_Pos)
#define   US_IDR_USART_TXRDY_0_Val        _U_(0x0)   /**< \brief (US_IDR_USART) No Effect */
#define   US_IDR_USART_TXRDY_1_Val        _U_(0x1)   /**< \brief (US_IDR_USART) Disables the interrupt */
#define US_IDR_USART_TXRDY_0        (US_IDR_USART_TXRDY_0_Val      << US_IDR_USART_TXRDY_Pos)
#define US_IDR_USART_TXRDY_1        (US_IDR_USART_TXRDY_1_Val      << US_IDR_USART_TXRDY_Pos)
#define US_IDR_USART_RXBRK_Pos      2            /**< \brief (US_IDR_USART) Receiver Break Interrupt Disable */
#define US_IDR_USART_RXBRK          (_U_(0x1) << US_IDR_USART_RXBRK_Pos)
#define   US_IDR_USART_RXBRK_0_Val        _U_(0x0)   /**< \brief (US_IDR_USART) No Effect */
#define   US_IDR_USART_RXBRK_1_Val        _U_(0x1)   /**< \brief (US_IDR_USART) Disables the interrupt */
#define US_IDR_USART_RXBRK_0        (US_IDR_USART_RXBRK_0_Val      << US_IDR_USART_RXBRK_Pos)
#define US_IDR_USART_RXBRK_1        (US_IDR_USART_RXBRK_1_Val      << US_IDR_USART_RXBRK_Pos)
#define US_IDR_USART_OVRE_Pos       5            /**< \brief (US_IDR_USART) Overrun Error Interrupt Disable */
#define US_IDR_USART_OVRE           (_U_(0x1) << US_IDR_USART_OVRE_Pos)
#define   US_IDR_USART_OVRE_0_Val         _U_(0x0)   /**< \brief (US_IDR_USART) No Effect */
#define   US_IDR_USART_OVRE_1_Val         _U_(0x1)   /**< \brief (US_IDR_USART) Disables the interrupt */
#define US_IDR_USART_OVRE_0         (US_IDR_USART_OVRE_0_Val       << US_IDR_USART_OVRE_Pos)
#define US_IDR_USART_OVRE_1         (US_IDR_USART_OVRE_1_Val       << US_IDR_USART_OVRE_Pos)
#define US_IDR_USART_FRAME_Pos      6            /**< \brief (US_IDR_USART) Framing Error Interrupt Disable */
#define US_IDR_USART_FRAME          (_U_(0x1) << US_IDR_USART_FRAME_Pos)
#define   US_IDR_USART_FRAME_0_Val        _U_(0x0)   /**< \brief (US_IDR_USART) No Effect */
#define   US_IDR_USART_FRAME_1_Val        _U_(0x1)   /**< \brief (US_IDR_USART) Disables the interrupt */
#define US_IDR_USART_FRAME_0        (US_IDR_USART_FRAME_0_Val      << US_IDR_USART_FRAME_Pos)
#define US_IDR_USART_FRAME_1        (US_IDR_USART_FRAME_1_Val      << US_IDR_USART_FRAME_Pos)
#define US_IDR_USART_PARE_Pos       7            /**< \brief (US_IDR_USART) Parity Error Interrupt Disable */
#define US_IDR_USART_PARE           (_U_(0x1) << US_IDR_USART_PARE_Pos)
#define   US_IDR_USART_PARE_0_Val         _U_(0x0)   /**< \brief (US_IDR_USART) No Effect */
#define   US_IDR_USART_PARE_1_Val         _U_(0x1)   /**< \brief (US_IDR_USART) Disables the interrupt */
#define US_IDR_USART_PARE_0         (US_IDR_USART_PARE_0_Val       << US_IDR_USART_PARE_Pos)
#define US_IDR_USART_PARE_1         (US_IDR_USART_PARE_1_Val       << US_IDR_USART_PARE_Pos)
#define US_IDR_USART_TIMEOUT_Pos    8            /**< \brief (US_IDR_USART) Time-out Interrupt Disable */
#define US_IDR_USART_TIMEOUT        (_U_(0x1) << US_IDR_USART_TIMEOUT_Pos)
#define   US_IDR_USART_TIMEOUT_0_Val      _U_(0x0)   /**< \brief (US_IDR_USART) No Effect */
#define   US_IDR_USART_TIMEOUT_1_Val      _U_(0x1)   /**< \brief (US_IDR_USART) Disables the interrupt */
#define US_IDR_USART_TIMEOUT_0      (US_IDR_USART_TIMEOUT_0_Val    << US_IDR_USART_TIMEOUT_Pos)
#define US_IDR_USART_TIMEOUT_1      (US_IDR_USART_TIMEOUT_1_Val    << US_IDR_USART_TIMEOUT_Pos)
#define US_IDR_USART_TXEMPTY_Pos    9            /**< \brief (US_IDR_USART) Transmitter Empty Interrupt Disable */
#define US_IDR_USART_TXEMPTY        (_U_(0x1) << US_IDR_USART_TXEMPTY_Pos)
#define   US_IDR_USART_TXEMPTY_0_Val      _U_(0x0)   /**< \brief (US_IDR_USART) No Effect */
#define   US_IDR_USART_TXEMPTY_1_Val      _U_(0x1)   /**< \brief (US_IDR_USART) Disables the interrupt */
#define US_IDR_USART_TXEMPTY_0      (US_IDR_USART_TXEMPTY_0_Val    << US_IDR_USART_TXEMPTY_Pos)
#define US_IDR_USART_TXEMPTY_1      (US_IDR_USART_TXEMPTY_1_Val    << US_IDR_USART_TXEMPTY_Pos)
#define US_IDR_USART_ITER_Pos       10           /**< \brief (US_IDR_USART) Iteration Interrupt Disable */
#define US_IDR_USART_ITER           (_U_(0x1) << US_IDR_USART_ITER_Pos)
#define   US_IDR_USART_ITER_0_Val         _U_(0x0)   /**< \brief (US_IDR_USART) No Effect */
#define   US_IDR_USART_ITER_1_Val         _U_(0x1)   /**< \brief (US_IDR_USART) Disables the interrupt */
#define US_IDR_USART_ITER_0         (US_IDR_USART_ITER_0_Val       << US_IDR_USART_ITER_Pos)
#define US_IDR_USART_ITER_1         (US_IDR_USART_ITER_1_Val       << US_IDR_USART_ITER_Pos)
#define US_IDR_USART_TXBUFE_Pos     11           /**< \brief (US_IDR_USART) Buffer Empty Interrupt Disable */
#define US_IDR_USART_TXBUFE         (_U_(0x1) << US_IDR_USART_TXBUFE_Pos)
#define   US_IDR_USART_TXBUFE_0_Val       _U_(0x0)   /**< \brief (US_IDR_USART) No Effect */
#define   US_IDR_USART_TXBUFE_1_Val       _U_(0x1)   /**< \brief (US_IDR_USART) Disables the interrupt */
#define US_IDR_USART_TXBUFE_0       (US_IDR_USART_TXBUFE_0_Val     << US_IDR_USART_TXBUFE_Pos)
#define US_IDR_USART_TXBUFE_1       (US_IDR_USART_TXBUFE_1_Val     << US_IDR_USART_TXBUFE_Pos)
#define US_IDR_USART_RXBUFF_Pos     12           /**< \brief (US_IDR_USART) Buffer Full Interrupt Disable */
#define US_IDR_USART_RXBUFF         (_U_(0x1) << US_IDR_USART_RXBUFF_Pos)
#define   US_IDR_USART_RXBUFF_0_Val       _U_(0x0)   /**< \brief (US_IDR_USART) No Effect */
#define   US_IDR_USART_RXBUFF_1_Val       _U_(0x1)   /**< \brief (US_IDR_USART) Disables the interrupt */
#define US_IDR_USART_RXBUFF_0       (US_IDR_USART_RXBUFF_0_Val     << US_IDR_USART_RXBUFF_Pos)
#define US_IDR_USART_RXBUFF_1       (US_IDR_USART_RXBUFF_1_Val     << US_IDR_USART_RXBUFF_Pos)
#define US_IDR_USART_NACK_Pos       13           /**< \brief (US_IDR_USART) Non Acknowledge Interrupt Disable */
#define US_IDR_USART_NACK           (_U_(0x1) << US_IDR_USART_NACK_Pos)
#define   US_IDR_USART_NACK_0_Val         _U_(0x0)   /**< \brief (US_IDR_USART) No Effect */
#define   US_IDR_USART_NACK_1_Val         _U_(0x1)   /**< \brief (US_IDR_USART) Disables the interrupt */
#define US_IDR_USART_NACK_0         (US_IDR_USART_NACK_0_Val       << US_IDR_USART_NACK_Pos)
#define US_IDR_USART_NACK_1         (US_IDR_USART_NACK_1_Val       << US_IDR_USART_NACK_Pos)
#define US_IDR_USART_RIIC_Pos       16           /**< \brief (US_IDR_USART) Ring Indicator Input Change Disable */
#define US_IDR_USART_RIIC           (_U_(0x1) << US_IDR_USART_RIIC_Pos)
#define   US_IDR_USART_RIIC_0_Val         _U_(0x0)   /**< \brief (US_IDR_USART) No Effect */
#define   US_IDR_USART_RIIC_1_Val         _U_(0x1)   /**< \brief (US_IDR_USART) Disables the interrupt */
#define US_IDR_USART_RIIC_0         (US_IDR_USART_RIIC_0_Val       << US_IDR_USART_RIIC_Pos)
#define US_IDR_USART_RIIC_1         (US_IDR_USART_RIIC_1_Val       << US_IDR_USART_RIIC_Pos)
#define US_IDR_USART_DSRIC_Pos      17           /**< \brief (US_IDR_USART) Data Set Ready Input Change Disable */
#define US_IDR_USART_DSRIC          (_U_(0x1) << US_IDR_USART_DSRIC_Pos)
#define   US_IDR_USART_DSRIC_0_Val        _U_(0x0)   /**< \brief (US_IDR_USART) No Effect */
#define   US_IDR_USART_DSRIC_1_Val        _U_(0x1)   /**< \brief (US_IDR_USART) Disables the interrupt */
#define US_IDR_USART_DSRIC_0        (US_IDR_USART_DSRIC_0_Val      << US_IDR_USART_DSRIC_Pos)
#define US_IDR_USART_DSRIC_1        (US_IDR_USART_DSRIC_1_Val      << US_IDR_USART_DSRIC_Pos)
#define US_IDR_USART_DCDIC_Pos      18           /**< \brief (US_IDR_USART) Data Carrier Detect Input Change Interrupt Disable */
#define US_IDR_USART_DCDIC          (_U_(0x1) << US_IDR_USART_DCDIC_Pos)
#define   US_IDR_USART_DCDIC_0_Val        _U_(0x0)   /**< \brief (US_IDR_USART) No Effect */
#define   US_IDR_USART_DCDIC_1_Val        _U_(0x1)   /**< \brief (US_IDR_USART) Disables the interrupt */
#define US_IDR_USART_DCDIC_0        (US_IDR_USART_DCDIC_0_Val      << US_IDR_USART_DCDIC_Pos)
#define US_IDR_USART_DCDIC_1        (US_IDR_USART_DCDIC_1_Val      << US_IDR_USART_DCDIC_Pos)
#define US_IDR_USART_CTSIC_Pos      19           /**< \brief (US_IDR_USART) Clear to Send Input Change Interrupt Disable */
#define US_IDR_USART_CTSIC          (_U_(0x1) << US_IDR_USART_CTSIC_Pos)
#define   US_IDR_USART_CTSIC_0_Val        _U_(0x0)   /**< \brief (US_IDR_USART) No Effect */
#define   US_IDR_USART_CTSIC_1_Val        _U_(0x1)   /**< \brief (US_IDR_USART) Disables the interrupt */
#define US_IDR_USART_CTSIC_0        (US_IDR_USART_CTSIC_0_Val      << US_IDR_USART_CTSIC_Pos)
#define US_IDR_USART_CTSIC_1        (US_IDR_USART_CTSIC_1_Val      << US_IDR_USART_CTSIC_Pos)
#define US_IDR_USART_MANE_Pos       20           /**< \brief (US_IDR_USART) Manchester Error Interrupt Disable */
#define US_IDR_USART_MANE           (_U_(0x1) << US_IDR_USART_MANE_Pos)
#define US_IDR_USART_MANEA_Pos      24           /**< \brief (US_IDR_USART) Manchester Error Interrupt Disable */
#define US_IDR_USART_MANEA          (_U_(0x1) << US_IDR_USART_MANEA_Pos)
#define   US_IDR_USART_MANEA_0_Val        _U_(0x0)   /**< \brief (US_IDR_USART) No effect */
#define   US_IDR_USART_MANEA_1_Val        _U_(0x1)   /**< \brief (US_IDR_USART) Disables the corresponding interrupt */
#define US_IDR_USART_MANEA_0        (US_IDR_USART_MANEA_0_Val      << US_IDR_USART_MANEA_Pos)
#define US_IDR_USART_MANEA_1        (US_IDR_USART_MANEA_1_Val      << US_IDR_USART_MANEA_Pos)
#define US_IDR_USART_MASK           _U_(0x011F3FE7) /**< \brief (US_IDR_USART) MASK Register */

// Any mode
#define US_IDR_RXRDY_Pos            0            /**< \brief (US_IDR) Receiver Ready Interrupt Disable */
#define US_IDR_RXRDY                (_U_(0x1) << US_IDR_RXRDY_Pos)
#define   US_IDR_RXRDY_0_Val              _U_(0x0)   /**< \brief (US_IDR) No Effect */
#define   US_IDR_RXRDY_1_Val              _U_(0x1)   /**< \brief (US_IDR) Disables the interrupt */
#define US_IDR_RXRDY_0              (US_IDR_RXRDY_0_Val            << US_IDR_RXRDY_Pos)
#define US_IDR_RXRDY_1              (US_IDR_RXRDY_1_Val            << US_IDR_RXRDY_Pos)
#define US_IDR_TXRDY_Pos            1            /**< \brief (US_IDR) Transmitter Ready Interrupt Disable */
#define US_IDR_TXRDY                (_U_(0x1) << US_IDR_TXRDY_Pos)
#define   US_IDR_TXRDY_0_Val              _U_(0x0)   /**< \brief (US_IDR) No Effect */
#define   US_IDR_TXRDY_1_Val              _U_(0x1)   /**< \brief (US_IDR) Disables the interrupt */
#define US_IDR_TXRDY_0              (US_IDR_TXRDY_0_Val            << US_IDR_TXRDY_Pos)
#define US_IDR_TXRDY_1              (US_IDR_TXRDY_1_Val            << US_IDR_TXRDY_Pos)
#define US_IDR_RXBRK_Pos            2            /**< \brief (US_IDR) Receiver Break Interrupt Disable */
#define US_IDR_RXBRK                (_U_(0x1) << US_IDR_RXBRK_Pos)
#define   US_IDR_RXBRK_0_Val              _U_(0x0)   /**< \brief (US_IDR) No Effect */
#define   US_IDR_RXBRK_1_Val              _U_(0x1)   /**< \brief (US_IDR) Disables the interrupt */
#define US_IDR_RXBRK_0              (US_IDR_RXBRK_0_Val            << US_IDR_RXBRK_Pos)
#define US_IDR_RXBRK_1              (US_IDR_RXBRK_1_Val            << US_IDR_RXBRK_Pos)
#define US_IDR_OVRE_Pos             5            /**< \brief (US_IDR) Overrun Error Interrupt Disable */
#define US_IDR_OVRE                 (_U_(0x1) << US_IDR_OVRE_Pos)
#define   US_IDR_OVRE_0_Val               _U_(0x0)   /**< \brief (US_IDR) No Effect */
#define   US_IDR_OVRE_1_Val               _U_(0x1)   /**< \brief (US_IDR) Disables the interrupt */
#define US_IDR_OVRE_0               (US_IDR_OVRE_0_Val             << US_IDR_OVRE_Pos)
#define US_IDR_OVRE_1               (US_IDR_OVRE_1_Val             << US_IDR_OVRE_Pos)
#define US_IDR_FRAME_Pos            6            /**< \brief (US_IDR) Framing Error Interrupt Disable */
#define US_IDR_FRAME                (_U_(0x1) << US_IDR_FRAME_Pos)
#define   US_IDR_FRAME_0_Val              _U_(0x0)   /**< \brief (US_IDR) No Effect */
#define   US_IDR_FRAME_1_Val              _U_(0x1)   /**< \brief (US_IDR) Disables the interrupt */
#define US_IDR_FRAME_0              (US_IDR_FRAME_0_Val            << US_IDR_FRAME_Pos)
#define US_IDR_FRAME_1              (US_IDR_FRAME_1_Val            << US_IDR_FRAME_Pos)
#define US_IDR_PARE_Pos             7            /**< \brief (US_IDR) Parity Error Interrupt Disable */
#define US_IDR_PARE                 (_U_(0x1) << US_IDR_PARE_Pos)
#define   US_IDR_PARE_0_Val               _U_(0x0)   /**< \brief (US_IDR) No Effect */
#define   US_IDR_PARE_1_Val               _U_(0x1)   /**< \brief (US_IDR) Disables the interrupt */
#define US_IDR_PARE_0               (US_IDR_PARE_0_Val             << US_IDR_PARE_Pos)
#define US_IDR_PARE_1               (US_IDR_PARE_1_Val             << US_IDR_PARE_Pos)
#define US_IDR_TIMEOUT_Pos          8            /**< \brief (US_IDR) Time-out Interrupt Disable */
#define US_IDR_TIMEOUT              (_U_(0x1) << US_IDR_TIMEOUT_Pos)
#define   US_IDR_TIMEOUT_0_Val            _U_(0x0)   /**< \brief (US_IDR) No Effect */
#define   US_IDR_TIMEOUT_1_Val            _U_(0x1)   /**< \brief (US_IDR) Disables the interrupt */
#define US_IDR_TIMEOUT_0            (US_IDR_TIMEOUT_0_Val          << US_IDR_TIMEOUT_Pos)
#define US_IDR_TIMEOUT_1            (US_IDR_TIMEOUT_1_Val          << US_IDR_TIMEOUT_Pos)
#define US_IDR_TXEMPTY_Pos          9            /**< \brief (US_IDR) Transmitter Empty Interrupt Disable */
#define US_IDR_TXEMPTY              (_U_(0x1) << US_IDR_TXEMPTY_Pos)
#define   US_IDR_TXEMPTY_0_Val            _U_(0x0)   /**< \brief (US_IDR) No Effect */
#define   US_IDR_TXEMPTY_1_Val            _U_(0x1)   /**< \brief (US_IDR) Disables the interrupt */
#define US_IDR_TXEMPTY_0            (US_IDR_TXEMPTY_0_Val          << US_IDR_TXEMPTY_Pos)
#define US_IDR_TXEMPTY_1            (US_IDR_TXEMPTY_1_Val          << US_IDR_TXEMPTY_Pos)
#define US_IDR_ITER_Pos             10           /**< \brief (US_IDR) Iteration Interrupt Disable */
#define US_IDR_ITER                 (_U_(0x1) << US_IDR_ITER_Pos)
#define   US_IDR_ITER_0_Val               _U_(0x0)   /**< \brief (US_IDR) No Effect */
#define   US_IDR_ITER_1_Val               _U_(0x1)   /**< \brief (US_IDR) Disables the interrupt */
#define US_IDR_ITER_0               (US_IDR_ITER_0_Val             << US_IDR_ITER_Pos)
#define US_IDR_ITER_1               (US_IDR_ITER_1_Val             << US_IDR_ITER_Pos)
#define US_IDR_UNRE_Pos             10           /**< \brief (US_IDR) SPI Underrun Error Interrupt Disable */
#define US_IDR_UNRE                 (_U_(0x1) << US_IDR_UNRE_Pos)
#define   US_IDR_UNRE_0_Val               _U_(0x0)   /**< \brief (US_IDR) No Effect */
#define   US_IDR_UNRE_1_Val               _U_(0x1)   /**< \brief (US_IDR) Disables the interrupt */
#define US_IDR_UNRE_0               (US_IDR_UNRE_0_Val             << US_IDR_UNRE_Pos)
#define US_IDR_UNRE_1               (US_IDR_UNRE_1_Val             << US_IDR_UNRE_Pos)
#define US_IDR_ITER_Pos             10           /**< \brief (US_IDR) Iteration Interrupt Disable */
#define US_IDR_ITER                 (_U_(0x1) << US_IDR_ITER_Pos)
#define   US_IDR_ITER_0_Val               _U_(0x0)   /**< \brief (US_IDR) No Effect */
#define   US_IDR_ITER_1_Val               _U_(0x1)   /**< \brief (US_IDR) Disables the interrupt */
#define US_IDR_ITER_0               (US_IDR_ITER_0_Val             << US_IDR_ITER_Pos)
#define US_IDR_ITER_1               (US_IDR_ITER_1_Val             << US_IDR_ITER_Pos)
#define US_IDR_TXBUFE_Pos           11           /**< \brief (US_IDR) Buffer Empty Interrupt Disable */
#define US_IDR_TXBUFE               (_U_(0x1) << US_IDR_TXBUFE_Pos)
#define   US_IDR_TXBUFE_0_Val             _U_(0x0)   /**< \brief (US_IDR) No Effect */
#define   US_IDR_TXBUFE_1_Val             _U_(0x1)   /**< \brief (US_IDR) Disables the interrupt */
#define US_IDR_TXBUFE_0             (US_IDR_TXBUFE_0_Val           << US_IDR_TXBUFE_Pos)
#define US_IDR_TXBUFE_1             (US_IDR_TXBUFE_1_Val           << US_IDR_TXBUFE_Pos)
#define US_IDR_RXBUFF_Pos           12           /**< \brief (US_IDR) Buffer Full Interrupt Disable */
#define US_IDR_RXBUFF               (_U_(0x1) << US_IDR_RXBUFF_Pos)
#define   US_IDR_RXBUFF_0_Val             _U_(0x0)   /**< \brief (US_IDR) No Effect */
#define   US_IDR_RXBUFF_1_Val             _U_(0x1)   /**< \brief (US_IDR) Disables the interrupt */
#define US_IDR_RXBUFF_0             (US_IDR_RXBUFF_0_Val           << US_IDR_RXBUFF_Pos)
#define US_IDR_RXBUFF_1             (US_IDR_RXBUFF_1_Val           << US_IDR_RXBUFF_Pos)
#define US_IDR_NACK_Pos             13           /**< \brief (US_IDR) Non Acknowledge  or LIN Break Sent or LIN Break Received Interrupt Disable */
#define US_IDR_NACK                 (_U_(0x1) << US_IDR_NACK_Pos)
#define   US_IDR_NACK_0_Val               _U_(0x0)   /**< \brief (US_IDR) No Effect */
#define   US_IDR_NACK_1_Val               _U_(0x1)   /**< \brief (US_IDR) Disables the interrupt */
#define US_IDR_NACK_0               (US_IDR_NACK_0_Val             << US_IDR_NACK_Pos)
#define US_IDR_NACK_1               (US_IDR_NACK_1_Val             << US_IDR_NACK_Pos)
#define US_IDR_LINID_Pos            14           /**< \brief (US_IDR) LIN Identifier Sent or LIN Identifier Received Interrupt Disable */
#define US_IDR_LINID                (_U_(0x1) << US_IDR_LINID_Pos)
#define US_IDR_LINTC_Pos            15           /**< \brief (US_IDR) LIN Transfer Conpleted Interrupt Disable */
#define US_IDR_LINTC                (_U_(0x1) << US_IDR_LINTC_Pos)
#define US_IDR_RIIC_Pos             16           /**< \brief (US_IDR) Ring Indicator Input Change Disable */
#define US_IDR_RIIC                 (_U_(0x1) << US_IDR_RIIC_Pos)
#define   US_IDR_RIIC_0_Val               _U_(0x0)   /**< \brief (US_IDR) No Effect */
#define   US_IDR_RIIC_1_Val               _U_(0x1)   /**< \brief (US_IDR) Disables the interrupt */
#define US_IDR_RIIC_0               (US_IDR_RIIC_0_Val             << US_IDR_RIIC_Pos)
#define US_IDR_RIIC_1               (US_IDR_RIIC_1_Val             << US_IDR_RIIC_Pos)
#define US_IDR_DSRIC_Pos            17           /**< \brief (US_IDR) Data Set Ready Input Change Disable */
#define US_IDR_DSRIC                (_U_(0x1) << US_IDR_DSRIC_Pos)
#define   US_IDR_DSRIC_0_Val              _U_(0x0)   /**< \brief (US_IDR) No Effect */
#define   US_IDR_DSRIC_1_Val              _U_(0x1)   /**< \brief (US_IDR) Disables the interrupt */
#define US_IDR_DSRIC_0              (US_IDR_DSRIC_0_Val            << US_IDR_DSRIC_Pos)
#define US_IDR_DSRIC_1              (US_IDR_DSRIC_1_Val            << US_IDR_DSRIC_Pos)
#define US_IDR_DCDIC_Pos            18           /**< \brief (US_IDR) Data Carrier Detect Input Change Interrupt Disable */
#define US_IDR_DCDIC                (_U_(0x1) << US_IDR_DCDIC_Pos)
#define   US_IDR_DCDIC_0_Val              _U_(0x0)   /**< \brief (US_IDR) No Effect */
#define   US_IDR_DCDIC_1_Val              _U_(0x1)   /**< \brief (US_IDR) Disables the interrupt */
#define US_IDR_DCDIC_0              (US_IDR_DCDIC_0_Val            << US_IDR_DCDIC_Pos)
#define US_IDR_DCDIC_1              (US_IDR_DCDIC_1_Val            << US_IDR_DCDIC_Pos)
#define US_IDR_CTSIC_Pos            19           /**< \brief (US_IDR) Clear to Send Input Change Interrupt Disable */
#define US_IDR_CTSIC                (_U_(0x1) << US_IDR_CTSIC_Pos)
#define   US_IDR_CTSIC_0_Val              _U_(0x0)   /**< \brief (US_IDR) No Effect */
#define   US_IDR_CTSIC_1_Val              _U_(0x1)   /**< \brief (US_IDR) Disables the interrupt */
#define US_IDR_CTSIC_0              (US_IDR_CTSIC_0_Val            << US_IDR_CTSIC_Pos)
#define US_IDR_CTSIC_1              (US_IDR_CTSIC_1_Val            << US_IDR_CTSIC_Pos)
#define US_IDR_MANE_Pos             20           /**< \brief (US_IDR) Manchester Error Interrupt Disable */
#define US_IDR_MANE                 (_U_(0x1) << US_IDR_MANE_Pos)
#define US_IDR_MANEA_Pos            24           /**< \brief (US_IDR) Manchester Error Interrupt Disable */
#define US_IDR_MANEA                (_U_(0x1) << US_IDR_MANEA_Pos)
#define   US_IDR_MANEA_0_Val              _U_(0x0)   /**< \brief (US_IDR) No effect */
#define   US_IDR_MANEA_1_Val              _U_(0x1)   /**< \brief (US_IDR) Disables the corresponding interrupt */
#define US_IDR_MANEA_0              (US_IDR_MANEA_0_Val            << US_IDR_MANEA_Pos)
#define US_IDR_MANEA_1              (US_IDR_MANEA_1_Val            << US_IDR_MANEA_Pos)
#define US_IDR_LINBE_Pos            25           /**< \brief (US_IDR) LIN Bus Error Interrupt Disable */
#define US_IDR_LINBE                (_U_(0x1) << US_IDR_LINBE_Pos)
#define US_IDR_LINISFE_Pos          26           /**< \brief (US_IDR) LIN Inconsistent Synch Field Error Interrupt Disable */
#define US_IDR_LINISFE              (_U_(0x1) << US_IDR_LINISFE_Pos)
#define US_IDR_LINIPE_Pos           27           /**< \brief (US_IDR) LIN Identifier Parity Interrupt Disable */
#define US_IDR_LINIPE               (_U_(0x1) << US_IDR_LINIPE_Pos)
#define US_IDR_LINCE_Pos            28           /**< \brief (US_IDR) LIN Checksum Error Interrupt Disable */
#define US_IDR_LINCE                (_U_(0x1) << US_IDR_LINCE_Pos)
#define US_IDR_LINSNRE_Pos          29           /**< \brief (US_IDR) LIN Slave Not Responding Error Interrupt Disable */
#define US_IDR_LINSNRE              (_U_(0x1) << US_IDR_LINSNRE_Pos)
#define US_IDR_LINSTE_Pos           30           /**< \brief (US_IDR) LIN Synch Tolerance Error Interrupt Disable */
#define US_IDR_LINSTE               (_U_(0x1) << US_IDR_LINSTE_Pos)
#define   US_IDR_LINSTE_0_Val             _U_(0x0)   /**< \brief (US_IDR) No Effect */
#define   US_IDR_LINSTE_1_Val             _U_(0x1)   /**< \brief (US_IDR) Disables the interrupt */
#define US_IDR_LINSTE_0             (US_IDR_LINSTE_0_Val           << US_IDR_LINSTE_Pos)
#define US_IDR_LINSTE_1             (US_IDR_LINSTE_1_Val           << US_IDR_LINSTE_Pos)
#define US_IDR_LINHTE_Pos           31           /**< \brief (US_IDR) LIN Header Timeout Error Interrupt Disable */
#define US_IDR_LINHTE               (_U_(0x1) << US_IDR_LINHTE_Pos)
#define   US_IDR_LINHTE_0_Val             _U_(0x0)   /**< \brief (US_IDR) No Effect */
#define   US_IDR_LINHTE_1_Val             _U_(0x1)   /**< \brief (US_IDR) Disables the interrupt */
#define US_IDR_LINHTE_0             (US_IDR_LINHTE_0_Val           << US_IDR_LINHTE_Pos)
#define US_IDR_LINHTE_1             (US_IDR_LINHTE_1_Val           << US_IDR_LINHTE_Pos)
#define US_IDR_MASK                 _U_(0xFF1FFFE7) /**< \brief (US_IDR) MASK Register */

/* -------- US_IMR : (USART Offset: 0x10) (R/  32) Interrupt Mask Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct { // LIN mode
    uint32_t RXRDY:1;          /*!< bit:      0  RXRDY Interrupt Mask               */
    uint32_t TXRDY:1;          /*!< bit:      1  TXRDY Interrupt Mask               */
    uint32_t RXBRK:1;          /*!< bit:      2  Receiver Break Interrupt Mask      */
    uint32_t :2;               /*!< bit:  3.. 4  Reserved                           */
    uint32_t OVRE:1;           /*!< bit:      5  Overrun Error Interrupt Mask       */
    uint32_t FRAME:1;          /*!< bit:      6  Framing Error Interrupt Mask       */
    uint32_t PARE:1;           /*!< bit:      7  Parity Error Interrupt Mask        */
    uint32_t TIMEOUT:1;        /*!< bit:      8  Time-out Interrupt Mask            */
    uint32_t TXEMPTY:1;        /*!< bit:      9  TXEMPTY Interrupt Mask             */
    uint32_t ITER:1;           /*!< bit:     10  Iteration Interrupt Mask           */
    uint32_t TXBUFE:1;         /*!< bit:     11  Buffer Empty Interrupt Mask        */
    uint32_t RXBUFF:1;         /*!< bit:     12  Buffer Full Interrupt Mask         */
    uint32_t NACK:1;           /*!< bit:     13  Non Acknowledge  or LIN Break Sent or LIN Break Received Interrupt Mask */
    uint32_t LINID:1;          /*!< bit:     14  LIN Identifier Sent or LIN Received Interrupt Mask */
    uint32_t LINTC:1;          /*!< bit:     15  LIN Transfer Conpleted Interrupt Mask */
    uint32_t RIIC:1;           /*!< bit:     16  Ring Indicator Input Change Mask   */
    uint32_t DSRIC:1;          /*!< bit:     17  Data Set Ready Input Change Mask   */
    uint32_t DCDIC:1;          /*!< bit:     18  Data Carrier Detect Input Change Interrupt Mask */
    uint32_t CTSIC:1;          /*!< bit:     19  Clear to Send Input Change Interrupt Mask */
    uint32_t :5;               /*!< bit: 20..24  Reserved                           */
    uint32_t LINBE:1;          /*!< bit:     25  LIN Bus Error Interrupt Mask       */
    uint32_t LINISFE:1;        /*!< bit:     26  LIN Inconsistent Synch Field Error Interrupt Mask */
    uint32_t LINIPE:1;         /*!< bit:     27  LIN Identifier Parity Interrupt Mask */
    uint32_t LINCE:1;          /*!< bit:     28  LIN Checksum Error Interrupt Mask  */
    uint32_t LINSNRE:1;        /*!< bit:     29  LIN Slave Not Responding Error Interrupt Mask */
    uint32_t LINSTE:1;         /*!< bit:     30  LIN Synch Tolerance Error Interrupt Mask */
    uint32_t LINHTE:1;         /*!< bit:     31  LIN Header Timeout Error Interrupt Mask */
  } LIN;                       /*!< Structure used for LIN                          */
  struct { // SPI_SLAVE mode
    uint32_t RXRDY:1;          /*!< bit:      0  RXRDY Interrupt Mask               */
    uint32_t TXRDY:1;          /*!< bit:      1  TXRDY Interrupt Mask               */
    uint32_t RXBRK:1;          /*!< bit:      2  Receiver Break Interrupt Mask      */
    uint32_t :2;               /*!< bit:  3.. 4  Reserved                           */
    uint32_t OVRE:1;           /*!< bit:      5  Overrun Error Interrupt Mask       */
    uint32_t FRAME:1;          /*!< bit:      6  Framing Error Interrupt Mask       */
    uint32_t PARE:1;           /*!< bit:      7  Parity Error Interrupt Mask        */
    uint32_t TIMEOUT:1;        /*!< bit:      8  Time-out Interrupt Mask            */
    uint32_t TXEMPTY:1;        /*!< bit:      9  TXEMPTY Interrupt Mask             */
    uint32_t UNRE:1;           /*!< bit:     10  SPI Underrun Error Interrupt Mask  */
    uint32_t TXBUFE:1;         /*!< bit:     11  Buffer Empty Interrupt Mask        */
    uint32_t RXBUFF:1;         /*!< bit:     12  Buffer Full Interrupt Mask         */
    uint32_t NACK:1;           /*!< bit:     13  Non Acknowledge Interrupt Mask     */
    uint32_t :2;               /*!< bit: 14..15  Reserved                           */
    uint32_t RIIC:1;           /*!< bit:     16  Ring Indicator Input Change Mask   */
    uint32_t DSRIC:1;          /*!< bit:     17  Data Set Ready Input Change Mask   */
    uint32_t DCDIC:1;          /*!< bit:     18  Data Carrier Detect Input Change Interrupt Mask */
    uint32_t CTSIC:1;          /*!< bit:     19  Clear to Send Input Change Interrupt Mask */
    uint32_t :12;              /*!< bit: 20..31  Reserved                           */
  } SPI_SLAVE;                 /*!< Structure used for SPI_SLAVE                    */
  struct { // USART mode
    uint32_t RXRDY:1;          /*!< bit:      0  RXRDY Interrupt Mask               */
    uint32_t TXRDY:1;          /*!< bit:      1  TXRDY Interrupt Mask               */
    uint32_t RXBRK:1;          /*!< bit:      2  Receiver Break Interrupt Mask      */
    uint32_t :2;               /*!< bit:  3.. 4  Reserved                           */
    uint32_t OVRE:1;           /*!< bit:      5  Overrun Error Interrupt Mask       */
    uint32_t FRAME:1;          /*!< bit:      6  Framing Error Interrupt Mask       */
    uint32_t PARE:1;           /*!< bit:      7  Parity Error Interrupt Mask        */
    uint32_t TIMEOUT:1;        /*!< bit:      8  Time-out Interrupt Mask            */
    uint32_t TXEMPTY:1;        /*!< bit:      9  TXEMPTY Interrupt Mask             */
    uint32_t ITER:1;           /*!< bit:     10  Iteration Interrupt Mask           */
    uint32_t TXBUFE:1;         /*!< bit:     11  Buffer Empty Interrupt Mask        */
    uint32_t RXBUFF:1;         /*!< bit:     12  Buffer Full Interrupt Mask         */
    uint32_t NACK:1;           /*!< bit:     13  Non Acknowledge Interrupt Mask     */
    uint32_t :2;               /*!< bit: 14..15  Reserved                           */
    uint32_t RIIC:1;           /*!< bit:     16  Ring Indicator Input Change Mask   */
    uint32_t DSRIC:1;          /*!< bit:     17  Data Set Ready Input Change Mask   */
    uint32_t DCDIC:1;          /*!< bit:     18  Data Carrier Detect Input Change Interrupt Mask */
    uint32_t CTSIC:1;          /*!< bit:     19  Clear to Send Input Change Interrupt Mask */
    uint32_t MANE:1;           /*!< bit:     20  Manchester Error Interrupt Mask    */
    uint32_t :3;               /*!< bit: 21..23  Reserved                           */
    uint32_t MANEA:1;          /*!< bit:     24  Manchester Error Interrupt Mask    */
    uint32_t :7;               /*!< bit: 25..31  Reserved                           */
  } USART;                     /*!< Structure used for USART                        */
  uint32_t reg;                /*!< Type      used for register access              */
} US_IMR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define US_IMR_OFFSET               0x10         /**< \brief (US_IMR offset) Interrupt Mask Register */
#define US_IMR_RESETVALUE           _U_(0x00000000); /**< \brief (US_IMR reset_value) Interrupt Mask Register */

// LIN mode
#define US_IMR_LIN_RXRDY_Pos        0            /**< \brief (US_IMR_LIN) RXRDY Interrupt Mask */
#define US_IMR_LIN_RXRDY            (_U_(0x1) << US_IMR_LIN_RXRDY_Pos)
#define   US_IMR_LIN_RXRDY_0_Val          _U_(0x0)   /**< \brief (US_IMR_LIN) The interrupt is disabled */
#define   US_IMR_LIN_RXRDY_1_Val          _U_(0x1)   /**< \brief (US_IMR_LIN) The interrupt is enabled */
#define US_IMR_LIN_RXRDY_0          (US_IMR_LIN_RXRDY_0_Val        << US_IMR_LIN_RXRDY_Pos)
#define US_IMR_LIN_RXRDY_1          (US_IMR_LIN_RXRDY_1_Val        << US_IMR_LIN_RXRDY_Pos)
#define US_IMR_LIN_TXRDY_Pos        1            /**< \brief (US_IMR_LIN) TXRDY Interrupt Mask */
#define US_IMR_LIN_TXRDY            (_U_(0x1) << US_IMR_LIN_TXRDY_Pos)
#define   US_IMR_LIN_TXRDY_0_Val          _U_(0x0)   /**< \brief (US_IMR_LIN) The interrupt is disabled */
#define   US_IMR_LIN_TXRDY_1_Val          _U_(0x1)   /**< \brief (US_IMR_LIN) The interrupt is enabled */
#define US_IMR_LIN_TXRDY_0          (US_IMR_LIN_TXRDY_0_Val        << US_IMR_LIN_TXRDY_Pos)
#define US_IMR_LIN_TXRDY_1          (US_IMR_LIN_TXRDY_1_Val        << US_IMR_LIN_TXRDY_Pos)
#define US_IMR_LIN_RXBRK_Pos        2            /**< \brief (US_IMR_LIN) Receiver Break Interrupt Mask */
#define US_IMR_LIN_RXBRK            (_U_(0x1) << US_IMR_LIN_RXBRK_Pos)
#define   US_IMR_LIN_RXBRK_0_Val          _U_(0x0)   /**< \brief (US_IMR_LIN) The interrupt is disabled */
#define   US_IMR_LIN_RXBRK_1_Val          _U_(0x1)   /**< \brief (US_IMR_LIN) The interrupt is enabled */
#define US_IMR_LIN_RXBRK_0          (US_IMR_LIN_RXBRK_0_Val        << US_IMR_LIN_RXBRK_Pos)
#define US_IMR_LIN_RXBRK_1          (US_IMR_LIN_RXBRK_1_Val        << US_IMR_LIN_RXBRK_Pos)
#define US_IMR_LIN_OVRE_Pos         5            /**< \brief (US_IMR_LIN) Overrun Error Interrupt Mask */
#define US_IMR_LIN_OVRE             (_U_(0x1) << US_IMR_LIN_OVRE_Pos)
#define   US_IMR_LIN_OVRE_0_Val           _U_(0x0)   /**< \brief (US_IMR_LIN) The interrupt is disabled */
#define   US_IMR_LIN_OVRE_1_Val           _U_(0x1)   /**< \brief (US_IMR_LIN) The interrupt is enabled */
#define US_IMR_LIN_OVRE_0           (US_IMR_LIN_OVRE_0_Val         << US_IMR_LIN_OVRE_Pos)
#define US_IMR_LIN_OVRE_1           (US_IMR_LIN_OVRE_1_Val         << US_IMR_LIN_OVRE_Pos)
#define US_IMR_LIN_FRAME_Pos        6            /**< \brief (US_IMR_LIN) Framing Error Interrupt Mask */
#define US_IMR_LIN_FRAME            (_U_(0x1) << US_IMR_LIN_FRAME_Pos)
#define   US_IMR_LIN_FRAME_0_Val          _U_(0x0)   /**< \brief (US_IMR_LIN) The interrupt is disabled */
#define   US_IMR_LIN_FRAME_1_Val          _U_(0x1)   /**< \brief (US_IMR_LIN) The interrupt is enabled */
#define US_IMR_LIN_FRAME_0          (US_IMR_LIN_FRAME_0_Val        << US_IMR_LIN_FRAME_Pos)
#define US_IMR_LIN_FRAME_1          (US_IMR_LIN_FRAME_1_Val        << US_IMR_LIN_FRAME_Pos)
#define US_IMR_LIN_PARE_Pos         7            /**< \brief (US_IMR_LIN) Parity Error Interrupt Mask */
#define US_IMR_LIN_PARE             (_U_(0x1) << US_IMR_LIN_PARE_Pos)
#define   US_IMR_LIN_PARE_0_Val           _U_(0x0)   /**< \brief (US_IMR_LIN) The interrupt is disabled */
#define   US_IMR_LIN_PARE_1_Val           _U_(0x1)   /**< \brief (US_IMR_LIN) The interrupt is enabled */
#define US_IMR_LIN_PARE_0           (US_IMR_LIN_PARE_0_Val         << US_IMR_LIN_PARE_Pos)
#define US_IMR_LIN_PARE_1           (US_IMR_LIN_PARE_1_Val         << US_IMR_LIN_PARE_Pos)
#define US_IMR_LIN_TIMEOUT_Pos      8            /**< \brief (US_IMR_LIN) Time-out Interrupt Mask */
#define US_IMR_LIN_TIMEOUT          (_U_(0x1) << US_IMR_LIN_TIMEOUT_Pos)
#define   US_IMR_LIN_TIMEOUT_0_Val        _U_(0x0)   /**< \brief (US_IMR_LIN) The interrupt is disabled */
#define   US_IMR_LIN_TIMEOUT_1_Val        _U_(0x1)   /**< \brief (US_IMR_LIN) The interrupt is enabled */
#define US_IMR_LIN_TIMEOUT_0        (US_IMR_LIN_TIMEOUT_0_Val      << US_IMR_LIN_TIMEOUT_Pos)
#define US_IMR_LIN_TIMEOUT_1        (US_IMR_LIN_TIMEOUT_1_Val      << US_IMR_LIN_TIMEOUT_Pos)
#define US_IMR_LIN_TXEMPTY_Pos      9            /**< \brief (US_IMR_LIN) TXEMPTY Interrupt Mask */
#define US_IMR_LIN_TXEMPTY          (_U_(0x1) << US_IMR_LIN_TXEMPTY_Pos)
#define   US_IMR_LIN_TXEMPTY_0_Val        _U_(0x0)   /**< \brief (US_IMR_LIN) The interrupt is disabled */
#define   US_IMR_LIN_TXEMPTY_1_Val        _U_(0x1)   /**< \brief (US_IMR_LIN) The interrupt is enabled */
#define US_IMR_LIN_TXEMPTY_0        (US_IMR_LIN_TXEMPTY_0_Val      << US_IMR_LIN_TXEMPTY_Pos)
#define US_IMR_LIN_TXEMPTY_1        (US_IMR_LIN_TXEMPTY_1_Val      << US_IMR_LIN_TXEMPTY_Pos)
#define US_IMR_LIN_ITER_Pos         10           /**< \brief (US_IMR_LIN) Iteration Interrupt Mask */
#define US_IMR_LIN_ITER             (_U_(0x1) << US_IMR_LIN_ITER_Pos)
#define   US_IMR_LIN_ITER_0_Val           _U_(0x0)   /**< \brief (US_IMR_LIN) The interrupt is disabled */
#define   US_IMR_LIN_ITER_1_Val           _U_(0x1)   /**< \brief (US_IMR_LIN) The interrupt is enabled */
#define US_IMR_LIN_ITER_0           (US_IMR_LIN_ITER_0_Val         << US_IMR_LIN_ITER_Pos)
#define US_IMR_LIN_ITER_1           (US_IMR_LIN_ITER_1_Val         << US_IMR_LIN_ITER_Pos)
#define US_IMR_LIN_TXBUFE_Pos       11           /**< \brief (US_IMR_LIN) Buffer Empty Interrupt Mask */
#define US_IMR_LIN_TXBUFE           (_U_(0x1) << US_IMR_LIN_TXBUFE_Pos)
#define   US_IMR_LIN_TXBUFE_0_Val         _U_(0x0)   /**< \brief (US_IMR_LIN) The interrupt is disabled */
#define   US_IMR_LIN_TXBUFE_1_Val         _U_(0x1)   /**< \brief (US_IMR_LIN) The interrupt is enabled */
#define US_IMR_LIN_TXBUFE_0         (US_IMR_LIN_TXBUFE_0_Val       << US_IMR_LIN_TXBUFE_Pos)
#define US_IMR_LIN_TXBUFE_1         (US_IMR_LIN_TXBUFE_1_Val       << US_IMR_LIN_TXBUFE_Pos)
#define US_IMR_LIN_RXBUFF_Pos       12           /**< \brief (US_IMR_LIN) Buffer Full Interrupt Mask */
#define US_IMR_LIN_RXBUFF           (_U_(0x1) << US_IMR_LIN_RXBUFF_Pos)
#define   US_IMR_LIN_RXBUFF_0_Val         _U_(0x0)   /**< \brief (US_IMR_LIN) The interrupt is disabled */
#define   US_IMR_LIN_RXBUFF_1_Val         _U_(0x1)   /**< \brief (US_IMR_LIN) The interrupt is enabled */
#define US_IMR_LIN_RXBUFF_0         (US_IMR_LIN_RXBUFF_0_Val       << US_IMR_LIN_RXBUFF_Pos)
#define US_IMR_LIN_RXBUFF_1         (US_IMR_LIN_RXBUFF_1_Val       << US_IMR_LIN_RXBUFF_Pos)
#define US_IMR_LIN_NACK_Pos         13           /**< \brief (US_IMR_LIN) Non Acknowledge  or LIN Break Sent or LIN Break Received Interrupt Mask */
#define US_IMR_LIN_NACK             (_U_(0x1) << US_IMR_LIN_NACK_Pos)
#define   US_IMR_LIN_NACK_0_Val           _U_(0x0)   /**< \brief (US_IMR_LIN) The interrupt is disabled */
#define   US_IMR_LIN_NACK_1_Val           _U_(0x1)   /**< \brief (US_IMR_LIN) The interrupt is enabled */
#define US_IMR_LIN_NACK_0           (US_IMR_LIN_NACK_0_Val         << US_IMR_LIN_NACK_Pos)
#define US_IMR_LIN_NACK_1           (US_IMR_LIN_NACK_1_Val         << US_IMR_LIN_NACK_Pos)
#define US_IMR_LIN_LINID_Pos        14           /**< \brief (US_IMR_LIN) LIN Identifier Sent or LIN Received Interrupt Mask */
#define US_IMR_LIN_LINID            (_U_(0x1) << US_IMR_LIN_LINID_Pos)
#define US_IMR_LIN_LINTC_Pos        15           /**< \brief (US_IMR_LIN) LIN Transfer Conpleted Interrupt Mask */
#define US_IMR_LIN_LINTC            (_U_(0x1) << US_IMR_LIN_LINTC_Pos)
#define US_IMR_LIN_RIIC_Pos         16           /**< \brief (US_IMR_LIN) Ring Indicator Input Change Mask */
#define US_IMR_LIN_RIIC             (_U_(0x1) << US_IMR_LIN_RIIC_Pos)
#define   US_IMR_LIN_RIIC_0_Val           _U_(0x0)   /**< \brief (US_IMR_LIN) The interrupt is disabled */
#define   US_IMR_LIN_RIIC_1_Val           _U_(0x1)   /**< \brief (US_IMR_LIN) The interrupt is enabled */
#define US_IMR_LIN_RIIC_0           (US_IMR_LIN_RIIC_0_Val         << US_IMR_LIN_RIIC_Pos)
#define US_IMR_LIN_RIIC_1           (US_IMR_LIN_RIIC_1_Val         << US_IMR_LIN_RIIC_Pos)
#define US_IMR_LIN_DSRIC_Pos        17           /**< \brief (US_IMR_LIN) Data Set Ready Input Change Mask */
#define US_IMR_LIN_DSRIC            (_U_(0x1) << US_IMR_LIN_DSRIC_Pos)
#define   US_IMR_LIN_DSRIC_0_Val          _U_(0x0)   /**< \brief (US_IMR_LIN) The interrupt is disabled */
#define   US_IMR_LIN_DSRIC_1_Val          _U_(0x1)   /**< \brief (US_IMR_LIN) The interrupt is enabled */
#define US_IMR_LIN_DSRIC_0          (US_IMR_LIN_DSRIC_0_Val        << US_IMR_LIN_DSRIC_Pos)
#define US_IMR_LIN_DSRIC_1          (US_IMR_LIN_DSRIC_1_Val        << US_IMR_LIN_DSRIC_Pos)
#define US_IMR_LIN_DCDIC_Pos        18           /**< \brief (US_IMR_LIN) Data Carrier Detect Input Change Interrupt Mask */
#define US_IMR_LIN_DCDIC            (_U_(0x1) << US_IMR_LIN_DCDIC_Pos)
#define   US_IMR_LIN_DCDIC_0_Val          _U_(0x0)   /**< \brief (US_IMR_LIN) The interrupt is disabled */
#define   US_IMR_LIN_DCDIC_1_Val          _U_(0x1)   /**< \brief (US_IMR_LIN) The interrupt is enabled */
#define US_IMR_LIN_DCDIC_0          (US_IMR_LIN_DCDIC_0_Val        << US_IMR_LIN_DCDIC_Pos)
#define US_IMR_LIN_DCDIC_1          (US_IMR_LIN_DCDIC_1_Val        << US_IMR_LIN_DCDIC_Pos)
#define US_IMR_LIN_CTSIC_Pos        19           /**< \brief (US_IMR_LIN) Clear to Send Input Change Interrupt Mask */
#define US_IMR_LIN_CTSIC            (_U_(0x1) << US_IMR_LIN_CTSIC_Pos)
#define   US_IMR_LIN_CTSIC_0_Val          _U_(0x0)   /**< \brief (US_IMR_LIN) The interrupt is disabled */
#define   US_IMR_LIN_CTSIC_1_Val          _U_(0x1)   /**< \brief (US_IMR_LIN) The interrupt is enabled */
#define US_IMR_LIN_CTSIC_0          (US_IMR_LIN_CTSIC_0_Val        << US_IMR_LIN_CTSIC_Pos)
#define US_IMR_LIN_CTSIC_1          (US_IMR_LIN_CTSIC_1_Val        << US_IMR_LIN_CTSIC_Pos)
#define US_IMR_LIN_LINBE_Pos        25           /**< \brief (US_IMR_LIN) LIN Bus Error Interrupt Mask */
#define US_IMR_LIN_LINBE            (_U_(0x1) << US_IMR_LIN_LINBE_Pos)
#define US_IMR_LIN_LINISFE_Pos      26           /**< \brief (US_IMR_LIN) LIN Inconsistent Synch Field Error Interrupt Mask */
#define US_IMR_LIN_LINISFE          (_U_(0x1) << US_IMR_LIN_LINISFE_Pos)
#define US_IMR_LIN_LINIPE_Pos       27           /**< \brief (US_IMR_LIN) LIN Identifier Parity Interrupt Mask */
#define US_IMR_LIN_LINIPE           (_U_(0x1) << US_IMR_LIN_LINIPE_Pos)
#define US_IMR_LIN_LINCE_Pos        28           /**< \brief (US_IMR_LIN) LIN Checksum Error Interrupt Mask */
#define US_IMR_LIN_LINCE            (_U_(0x1) << US_IMR_LIN_LINCE_Pos)
#define US_IMR_LIN_LINSNRE_Pos      29           /**< \brief (US_IMR_LIN) LIN Slave Not Responding Error Interrupt Mask */
#define US_IMR_LIN_LINSNRE          (_U_(0x1) << US_IMR_LIN_LINSNRE_Pos)
#define US_IMR_LIN_LINSTE_Pos       30           /**< \brief (US_IMR_LIN) LIN Synch Tolerance Error Interrupt Mask */
#define US_IMR_LIN_LINSTE           (_U_(0x1) << US_IMR_LIN_LINSTE_Pos)
#define   US_IMR_LIN_LINSTE_0_Val         _U_(0x0)   /**< \brief (US_IMR_LIN) The interrupt is disabled */
#define   US_IMR_LIN_LINSTE_1_Val         _U_(0x1)   /**< \brief (US_IMR_LIN) The interrupt is enabled */
#define US_IMR_LIN_LINSTE_0         (US_IMR_LIN_LINSTE_0_Val       << US_IMR_LIN_LINSTE_Pos)
#define US_IMR_LIN_LINSTE_1         (US_IMR_LIN_LINSTE_1_Val       << US_IMR_LIN_LINSTE_Pos)
#define US_IMR_LIN_LINHTE_Pos       31           /**< \brief (US_IMR_LIN) LIN Header Timeout Error Interrupt Mask */
#define US_IMR_LIN_LINHTE           (_U_(0x1) << US_IMR_LIN_LINHTE_Pos)
#define   US_IMR_LIN_LINHTE_0_Val         _U_(0x0)   /**< \brief (US_IMR_LIN) The interrupt is disabled */
#define   US_IMR_LIN_LINHTE_1_Val         _U_(0x1)   /**< \brief (US_IMR_LIN) The interrupt is enabled */
#define US_IMR_LIN_LINHTE_0         (US_IMR_LIN_LINHTE_0_Val       << US_IMR_LIN_LINHTE_Pos)
#define US_IMR_LIN_LINHTE_1         (US_IMR_LIN_LINHTE_1_Val       << US_IMR_LIN_LINHTE_Pos)
#define US_IMR_LIN_MASK             _U_(0xFE0FFFE7) /**< \brief (US_IMR_LIN) MASK Register */

// SPI_SLAVE mode
#define US_IMR_SPI_SLAVE_RXRDY_Pos  0            /**< \brief (US_IMR_SPI_SLAVE) RXRDY Interrupt Mask */
#define US_IMR_SPI_SLAVE_RXRDY      (_U_(0x1) << US_IMR_SPI_SLAVE_RXRDY_Pos)
#define   US_IMR_SPI_SLAVE_RXRDY_0_Val    _U_(0x0)   /**< \brief (US_IMR_SPI_SLAVE) The interrupt is disabled */
#define   US_IMR_SPI_SLAVE_RXRDY_1_Val    _U_(0x1)   /**< \brief (US_IMR_SPI_SLAVE) The interrupt is enabled */
#define US_IMR_SPI_SLAVE_RXRDY_0    (US_IMR_SPI_SLAVE_RXRDY_0_Val  << US_IMR_SPI_SLAVE_RXRDY_Pos)
#define US_IMR_SPI_SLAVE_RXRDY_1    (US_IMR_SPI_SLAVE_RXRDY_1_Val  << US_IMR_SPI_SLAVE_RXRDY_Pos)
#define US_IMR_SPI_SLAVE_TXRDY_Pos  1            /**< \brief (US_IMR_SPI_SLAVE) TXRDY Interrupt Mask */
#define US_IMR_SPI_SLAVE_TXRDY      (_U_(0x1) << US_IMR_SPI_SLAVE_TXRDY_Pos)
#define   US_IMR_SPI_SLAVE_TXRDY_0_Val    _U_(0x0)   /**< \brief (US_IMR_SPI_SLAVE) The interrupt is disabled */
#define   US_IMR_SPI_SLAVE_TXRDY_1_Val    _U_(0x1)   /**< \brief (US_IMR_SPI_SLAVE) The interrupt is enabled */
#define US_IMR_SPI_SLAVE_TXRDY_0    (US_IMR_SPI_SLAVE_TXRDY_0_Val  << US_IMR_SPI_SLAVE_TXRDY_Pos)
#define US_IMR_SPI_SLAVE_TXRDY_1    (US_IMR_SPI_SLAVE_TXRDY_1_Val  << US_IMR_SPI_SLAVE_TXRDY_Pos)
#define US_IMR_SPI_SLAVE_RXBRK_Pos  2            /**< \brief (US_IMR_SPI_SLAVE) Receiver Break Interrupt Mask */
#define US_IMR_SPI_SLAVE_RXBRK      (_U_(0x1) << US_IMR_SPI_SLAVE_RXBRK_Pos)
#define   US_IMR_SPI_SLAVE_RXBRK_0_Val    _U_(0x0)   /**< \brief (US_IMR_SPI_SLAVE) The interrupt is disabled */
#define   US_IMR_SPI_SLAVE_RXBRK_1_Val    _U_(0x1)   /**< \brief (US_IMR_SPI_SLAVE) The interrupt is enabled */
#define US_IMR_SPI_SLAVE_RXBRK_0    (US_IMR_SPI_SLAVE_RXBRK_0_Val  << US_IMR_SPI_SLAVE_RXBRK_Pos)
#define US_IMR_SPI_SLAVE_RXBRK_1    (US_IMR_SPI_SLAVE_RXBRK_1_Val  << US_IMR_SPI_SLAVE_RXBRK_Pos)
#define US_IMR_SPI_SLAVE_OVRE_Pos   5            /**< \brief (US_IMR_SPI_SLAVE) Overrun Error Interrupt Mask */
#define US_IMR_SPI_SLAVE_OVRE       (_U_(0x1) << US_IMR_SPI_SLAVE_OVRE_Pos)
#define   US_IMR_SPI_SLAVE_OVRE_0_Val     _U_(0x0)   /**< \brief (US_IMR_SPI_SLAVE) The interrupt is disabled */
#define   US_IMR_SPI_SLAVE_OVRE_1_Val     _U_(0x1)   /**< \brief (US_IMR_SPI_SLAVE) The interrupt is enabled */
#define US_IMR_SPI_SLAVE_OVRE_0     (US_IMR_SPI_SLAVE_OVRE_0_Val   << US_IMR_SPI_SLAVE_OVRE_Pos)
#define US_IMR_SPI_SLAVE_OVRE_1     (US_IMR_SPI_SLAVE_OVRE_1_Val   << US_IMR_SPI_SLAVE_OVRE_Pos)
#define US_IMR_SPI_SLAVE_FRAME_Pos  6            /**< \brief (US_IMR_SPI_SLAVE) Framing Error Interrupt Mask */
#define US_IMR_SPI_SLAVE_FRAME      (_U_(0x1) << US_IMR_SPI_SLAVE_FRAME_Pos)
#define   US_IMR_SPI_SLAVE_FRAME_0_Val    _U_(0x0)   /**< \brief (US_IMR_SPI_SLAVE) The interrupt is disabled */
#define   US_IMR_SPI_SLAVE_FRAME_1_Val    _U_(0x1)   /**< \brief (US_IMR_SPI_SLAVE) The interrupt is enabled */
#define US_IMR_SPI_SLAVE_FRAME_0    (US_IMR_SPI_SLAVE_FRAME_0_Val  << US_IMR_SPI_SLAVE_FRAME_Pos)
#define US_IMR_SPI_SLAVE_FRAME_1    (US_IMR_SPI_SLAVE_FRAME_1_Val  << US_IMR_SPI_SLAVE_FRAME_Pos)
#define US_IMR_SPI_SLAVE_PARE_Pos   7            /**< \brief (US_IMR_SPI_SLAVE) Parity Error Interrupt Mask */
#define US_IMR_SPI_SLAVE_PARE       (_U_(0x1) << US_IMR_SPI_SLAVE_PARE_Pos)
#define   US_IMR_SPI_SLAVE_PARE_0_Val     _U_(0x0)   /**< \brief (US_IMR_SPI_SLAVE) The interrupt is disabled */
#define   US_IMR_SPI_SLAVE_PARE_1_Val     _U_(0x1)   /**< \brief (US_IMR_SPI_SLAVE) The interrupt is enabled */
#define US_IMR_SPI_SLAVE_PARE_0     (US_IMR_SPI_SLAVE_PARE_0_Val   << US_IMR_SPI_SLAVE_PARE_Pos)
#define US_IMR_SPI_SLAVE_PARE_1     (US_IMR_SPI_SLAVE_PARE_1_Val   << US_IMR_SPI_SLAVE_PARE_Pos)
#define US_IMR_SPI_SLAVE_TIMEOUT_Pos 8            /**< \brief (US_IMR_SPI_SLAVE) Time-out Interrupt Mask */
#define US_IMR_SPI_SLAVE_TIMEOUT    (_U_(0x1) << US_IMR_SPI_SLAVE_TIMEOUT_Pos)
#define   US_IMR_SPI_SLAVE_TIMEOUT_0_Val  _U_(0x0)   /**< \brief (US_IMR_SPI_SLAVE) The interrupt is disabled */
#define   US_IMR_SPI_SLAVE_TIMEOUT_1_Val  _U_(0x1)   /**< \brief (US_IMR_SPI_SLAVE) The interrupt is enabled */
#define US_IMR_SPI_SLAVE_TIMEOUT_0  (US_IMR_SPI_SLAVE_TIMEOUT_0_Val << US_IMR_SPI_SLAVE_TIMEOUT_Pos)
#define US_IMR_SPI_SLAVE_TIMEOUT_1  (US_IMR_SPI_SLAVE_TIMEOUT_1_Val << US_IMR_SPI_SLAVE_TIMEOUT_Pos)
#define US_IMR_SPI_SLAVE_TXEMPTY_Pos 9            /**< \brief (US_IMR_SPI_SLAVE) TXEMPTY Interrupt Mask */
#define US_IMR_SPI_SLAVE_TXEMPTY    (_U_(0x1) << US_IMR_SPI_SLAVE_TXEMPTY_Pos)
#define   US_IMR_SPI_SLAVE_TXEMPTY_0_Val  _U_(0x0)   /**< \brief (US_IMR_SPI_SLAVE) The interrupt is disabled */
#define   US_IMR_SPI_SLAVE_TXEMPTY_1_Val  _U_(0x1)   /**< \brief (US_IMR_SPI_SLAVE) The interrupt is enabled */
#define US_IMR_SPI_SLAVE_TXEMPTY_0  (US_IMR_SPI_SLAVE_TXEMPTY_0_Val << US_IMR_SPI_SLAVE_TXEMPTY_Pos)
#define US_IMR_SPI_SLAVE_TXEMPTY_1  (US_IMR_SPI_SLAVE_TXEMPTY_1_Val << US_IMR_SPI_SLAVE_TXEMPTY_Pos)
#define US_IMR_SPI_SLAVE_UNRE_Pos   10           /**< \brief (US_IMR_SPI_SLAVE) SPI Underrun Error Interrupt Mask */
#define US_IMR_SPI_SLAVE_UNRE       (_U_(0x1) << US_IMR_SPI_SLAVE_UNRE_Pos)
#define   US_IMR_SPI_SLAVE_UNRE_0_Val     _U_(0x0)   /**< \brief (US_IMR_SPI_SLAVE) The interrupt is disabled */
#define   US_IMR_SPI_SLAVE_UNRE_1_Val     _U_(0x1)   /**< \brief (US_IMR_SPI_SLAVE) The interrupt is enabled */
#define US_IMR_SPI_SLAVE_UNRE_0     (US_IMR_SPI_SLAVE_UNRE_0_Val   << US_IMR_SPI_SLAVE_UNRE_Pos)
#define US_IMR_SPI_SLAVE_UNRE_1     (US_IMR_SPI_SLAVE_UNRE_1_Val   << US_IMR_SPI_SLAVE_UNRE_Pos)
#define US_IMR_SPI_SLAVE_TXBUFE_Pos 11           /**< \brief (US_IMR_SPI_SLAVE) Buffer Empty Interrupt Mask */
#define US_IMR_SPI_SLAVE_TXBUFE     (_U_(0x1) << US_IMR_SPI_SLAVE_TXBUFE_Pos)
#define   US_IMR_SPI_SLAVE_TXBUFE_0_Val   _U_(0x0)   /**< \brief (US_IMR_SPI_SLAVE) The interrupt is disabled */
#define   US_IMR_SPI_SLAVE_TXBUFE_1_Val   _U_(0x1)   /**< \brief (US_IMR_SPI_SLAVE) The interrupt is enabled */
#define US_IMR_SPI_SLAVE_TXBUFE_0   (US_IMR_SPI_SLAVE_TXBUFE_0_Val << US_IMR_SPI_SLAVE_TXBUFE_Pos)
#define US_IMR_SPI_SLAVE_TXBUFE_1   (US_IMR_SPI_SLAVE_TXBUFE_1_Val << US_IMR_SPI_SLAVE_TXBUFE_Pos)
#define US_IMR_SPI_SLAVE_RXBUFF_Pos 12           /**< \brief (US_IMR_SPI_SLAVE) Buffer Full Interrupt Mask */
#define US_IMR_SPI_SLAVE_RXBUFF     (_U_(0x1) << US_IMR_SPI_SLAVE_RXBUFF_Pos)
#define   US_IMR_SPI_SLAVE_RXBUFF_0_Val   _U_(0x0)   /**< \brief (US_IMR_SPI_SLAVE) The interrupt is disabled */
#define   US_IMR_SPI_SLAVE_RXBUFF_1_Val   _U_(0x1)   /**< \brief (US_IMR_SPI_SLAVE) The interrupt is enabled */
#define US_IMR_SPI_SLAVE_RXBUFF_0   (US_IMR_SPI_SLAVE_RXBUFF_0_Val << US_IMR_SPI_SLAVE_RXBUFF_Pos)
#define US_IMR_SPI_SLAVE_RXBUFF_1   (US_IMR_SPI_SLAVE_RXBUFF_1_Val << US_IMR_SPI_SLAVE_RXBUFF_Pos)
#define US_IMR_SPI_SLAVE_NACK_Pos   13           /**< \brief (US_IMR_SPI_SLAVE) Non Acknowledge Interrupt Mask */
#define US_IMR_SPI_SLAVE_NACK       (_U_(0x1) << US_IMR_SPI_SLAVE_NACK_Pos)
#define   US_IMR_SPI_SLAVE_NACK_0_Val     _U_(0x0)   /**< \brief (US_IMR_SPI_SLAVE) The interrupt is disabled */
#define   US_IMR_SPI_SLAVE_NACK_1_Val     _U_(0x1)   /**< \brief (US_IMR_SPI_SLAVE) The interrupt is enabled */
#define US_IMR_SPI_SLAVE_NACK_0     (US_IMR_SPI_SLAVE_NACK_0_Val   << US_IMR_SPI_SLAVE_NACK_Pos)
#define US_IMR_SPI_SLAVE_NACK_1     (US_IMR_SPI_SLAVE_NACK_1_Val   << US_IMR_SPI_SLAVE_NACK_Pos)
#define US_IMR_SPI_SLAVE_RIIC_Pos   16           /**< \brief (US_IMR_SPI_SLAVE) Ring Indicator Input Change Mask */
#define US_IMR_SPI_SLAVE_RIIC       (_U_(0x1) << US_IMR_SPI_SLAVE_RIIC_Pos)
#define   US_IMR_SPI_SLAVE_RIIC_0_Val     _U_(0x0)   /**< \brief (US_IMR_SPI_SLAVE) The interrupt is disabled */
#define   US_IMR_SPI_SLAVE_RIIC_1_Val     _U_(0x1)   /**< \brief (US_IMR_SPI_SLAVE) The interrupt is enabled */
#define US_IMR_SPI_SLAVE_RIIC_0     (US_IMR_SPI_SLAVE_RIIC_0_Val   << US_IMR_SPI_SLAVE_RIIC_Pos)
#define US_IMR_SPI_SLAVE_RIIC_1     (US_IMR_SPI_SLAVE_RIIC_1_Val   << US_IMR_SPI_SLAVE_RIIC_Pos)
#define US_IMR_SPI_SLAVE_DSRIC_Pos  17           /**< \brief (US_IMR_SPI_SLAVE) Data Set Ready Input Change Mask */
#define US_IMR_SPI_SLAVE_DSRIC      (_U_(0x1) << US_IMR_SPI_SLAVE_DSRIC_Pos)
#define   US_IMR_SPI_SLAVE_DSRIC_0_Val    _U_(0x0)   /**< \brief (US_IMR_SPI_SLAVE) The interrupt is disabled */
#define   US_IMR_SPI_SLAVE_DSRIC_1_Val    _U_(0x1)   /**< \brief (US_IMR_SPI_SLAVE) The interrupt is enabled */
#define US_IMR_SPI_SLAVE_DSRIC_0    (US_IMR_SPI_SLAVE_DSRIC_0_Val  << US_IMR_SPI_SLAVE_DSRIC_Pos)
#define US_IMR_SPI_SLAVE_DSRIC_1    (US_IMR_SPI_SLAVE_DSRIC_1_Val  << US_IMR_SPI_SLAVE_DSRIC_Pos)
#define US_IMR_SPI_SLAVE_DCDIC_Pos  18           /**< \brief (US_IMR_SPI_SLAVE) Data Carrier Detect Input Change Interrupt Mask */
#define US_IMR_SPI_SLAVE_DCDIC      (_U_(0x1) << US_IMR_SPI_SLAVE_DCDIC_Pos)
#define   US_IMR_SPI_SLAVE_DCDIC_0_Val    _U_(0x0)   /**< \brief (US_IMR_SPI_SLAVE) The interrupt is disabled */
#define   US_IMR_SPI_SLAVE_DCDIC_1_Val    _U_(0x1)   /**< \brief (US_IMR_SPI_SLAVE) The interrupt is enabled */
#define US_IMR_SPI_SLAVE_DCDIC_0    (US_IMR_SPI_SLAVE_DCDIC_0_Val  << US_IMR_SPI_SLAVE_DCDIC_Pos)
#define US_IMR_SPI_SLAVE_DCDIC_1    (US_IMR_SPI_SLAVE_DCDIC_1_Val  << US_IMR_SPI_SLAVE_DCDIC_Pos)
#define US_IMR_SPI_SLAVE_CTSIC_Pos  19           /**< \brief (US_IMR_SPI_SLAVE) Clear to Send Input Change Interrupt Mask */
#define US_IMR_SPI_SLAVE_CTSIC      (_U_(0x1) << US_IMR_SPI_SLAVE_CTSIC_Pos)
#define   US_IMR_SPI_SLAVE_CTSIC_0_Val    _U_(0x0)   /**< \brief (US_IMR_SPI_SLAVE) The interrupt is disabled */
#define   US_IMR_SPI_SLAVE_CTSIC_1_Val    _U_(0x1)   /**< \brief (US_IMR_SPI_SLAVE) The interrupt is enabled */
#define US_IMR_SPI_SLAVE_CTSIC_0    (US_IMR_SPI_SLAVE_CTSIC_0_Val  << US_IMR_SPI_SLAVE_CTSIC_Pos)
#define US_IMR_SPI_SLAVE_CTSIC_1    (US_IMR_SPI_SLAVE_CTSIC_1_Val  << US_IMR_SPI_SLAVE_CTSIC_Pos)
#define US_IMR_SPI_SLAVE_MASK       _U_(0x000F3FE7) /**< \brief (US_IMR_SPI_SLAVE) MASK Register */

// USART mode
#define US_IMR_USART_RXRDY_Pos      0            /**< \brief (US_IMR_USART) RXRDY Interrupt Mask */
#define US_IMR_USART_RXRDY          (_U_(0x1) << US_IMR_USART_RXRDY_Pos)
#define   US_IMR_USART_RXRDY_0_Val        _U_(0x0)   /**< \brief (US_IMR_USART) The interrupt is disabled */
#define   US_IMR_USART_RXRDY_1_Val        _U_(0x1)   /**< \brief (US_IMR_USART) The interrupt is enabled */
#define US_IMR_USART_RXRDY_0        (US_IMR_USART_RXRDY_0_Val      << US_IMR_USART_RXRDY_Pos)
#define US_IMR_USART_RXRDY_1        (US_IMR_USART_RXRDY_1_Val      << US_IMR_USART_RXRDY_Pos)
#define US_IMR_USART_TXRDY_Pos      1            /**< \brief (US_IMR_USART) TXRDY Interrupt Mask */
#define US_IMR_USART_TXRDY          (_U_(0x1) << US_IMR_USART_TXRDY_Pos)
#define   US_IMR_USART_TXRDY_0_Val        _U_(0x0)   /**< \brief (US_IMR_USART) The interrupt is disabled */
#define   US_IMR_USART_TXRDY_1_Val        _U_(0x1)   /**< \brief (US_IMR_USART) The interrupt is enabled */
#define US_IMR_USART_TXRDY_0        (US_IMR_USART_TXRDY_0_Val      << US_IMR_USART_TXRDY_Pos)
#define US_IMR_USART_TXRDY_1        (US_IMR_USART_TXRDY_1_Val      << US_IMR_USART_TXRDY_Pos)
#define US_IMR_USART_RXBRK_Pos      2            /**< \brief (US_IMR_USART) Receiver Break Interrupt Mask */
#define US_IMR_USART_RXBRK          (_U_(0x1) << US_IMR_USART_RXBRK_Pos)
#define   US_IMR_USART_RXBRK_0_Val        _U_(0x0)   /**< \brief (US_IMR_USART) The interrupt is disabled */
#define   US_IMR_USART_RXBRK_1_Val        _U_(0x1)   /**< \brief (US_IMR_USART) The interrupt is enabled */
#define US_IMR_USART_RXBRK_0        (US_IMR_USART_RXBRK_0_Val      << US_IMR_USART_RXBRK_Pos)
#define US_IMR_USART_RXBRK_1        (US_IMR_USART_RXBRK_1_Val      << US_IMR_USART_RXBRK_Pos)
#define US_IMR_USART_OVRE_Pos       5            /**< \brief (US_IMR_USART) Overrun Error Interrupt Mask */
#define US_IMR_USART_OVRE           (_U_(0x1) << US_IMR_USART_OVRE_Pos)
#define   US_IMR_USART_OVRE_0_Val         _U_(0x0)   /**< \brief (US_IMR_USART) The interrupt is disabled */
#define   US_IMR_USART_OVRE_1_Val         _U_(0x1)   /**< \brief (US_IMR_USART) The interrupt is enabled */
#define US_IMR_USART_OVRE_0         (US_IMR_USART_OVRE_0_Val       << US_IMR_USART_OVRE_Pos)
#define US_IMR_USART_OVRE_1         (US_IMR_USART_OVRE_1_Val       << US_IMR_USART_OVRE_Pos)
#define US_IMR_USART_FRAME_Pos      6            /**< \brief (US_IMR_USART) Framing Error Interrupt Mask */
#define US_IMR_USART_FRAME          (_U_(0x1) << US_IMR_USART_FRAME_Pos)
#define   US_IMR_USART_FRAME_0_Val        _U_(0x0)   /**< \brief (US_IMR_USART) The interrupt is disabled */
#define   US_IMR_USART_FRAME_1_Val        _U_(0x1)   /**< \brief (US_IMR_USART) The interrupt is enabled */
#define US_IMR_USART_FRAME_0        (US_IMR_USART_FRAME_0_Val      << US_IMR_USART_FRAME_Pos)
#define US_IMR_USART_FRAME_1        (US_IMR_USART_FRAME_1_Val      << US_IMR_USART_FRAME_Pos)
#define US_IMR_USART_PARE_Pos       7            /**< \brief (US_IMR_USART) Parity Error Interrupt Mask */
#define US_IMR_USART_PARE           (_U_(0x1) << US_IMR_USART_PARE_Pos)
#define   US_IMR_USART_PARE_0_Val         _U_(0x0)   /**< \brief (US_IMR_USART) The interrupt is disabled */
#define   US_IMR_USART_PARE_1_Val         _U_(0x1)   /**< \brief (US_IMR_USART) The interrupt is enabled */
#define US_IMR_USART_PARE_0         (US_IMR_USART_PARE_0_Val       << US_IMR_USART_PARE_Pos)
#define US_IMR_USART_PARE_1         (US_IMR_USART_PARE_1_Val       << US_IMR_USART_PARE_Pos)
#define US_IMR_USART_TIMEOUT_Pos    8            /**< \brief (US_IMR_USART) Time-out Interrupt Mask */
#define US_IMR_USART_TIMEOUT        (_U_(0x1) << US_IMR_USART_TIMEOUT_Pos)
#define   US_IMR_USART_TIMEOUT_0_Val      _U_(0x0)   /**< \brief (US_IMR_USART) The interrupt is disabled */
#define   US_IMR_USART_TIMEOUT_1_Val      _U_(0x1)   /**< \brief (US_IMR_USART) The interrupt is enabled */
#define US_IMR_USART_TIMEOUT_0      (US_IMR_USART_TIMEOUT_0_Val    << US_IMR_USART_TIMEOUT_Pos)
#define US_IMR_USART_TIMEOUT_1      (US_IMR_USART_TIMEOUT_1_Val    << US_IMR_USART_TIMEOUT_Pos)
#define US_IMR_USART_TXEMPTY_Pos    9            /**< \brief (US_IMR_USART) TXEMPTY Interrupt Mask */
#define US_IMR_USART_TXEMPTY        (_U_(0x1) << US_IMR_USART_TXEMPTY_Pos)
#define   US_IMR_USART_TXEMPTY_0_Val      _U_(0x0)   /**< \brief (US_IMR_USART) The interrupt is disabled */
#define   US_IMR_USART_TXEMPTY_1_Val      _U_(0x1)   /**< \brief (US_IMR_USART) The interrupt is enabled */
#define US_IMR_USART_TXEMPTY_0      (US_IMR_USART_TXEMPTY_0_Val    << US_IMR_USART_TXEMPTY_Pos)
#define US_IMR_USART_TXEMPTY_1      (US_IMR_USART_TXEMPTY_1_Val    << US_IMR_USART_TXEMPTY_Pos)
#define US_IMR_USART_ITER_Pos       10           /**< \brief (US_IMR_USART) Iteration Interrupt Mask */
#define US_IMR_USART_ITER           (_U_(0x1) << US_IMR_USART_ITER_Pos)
#define   US_IMR_USART_ITER_0_Val         _U_(0x0)   /**< \brief (US_IMR_USART) The interrupt is disabled */
#define   US_IMR_USART_ITER_1_Val         _U_(0x1)   /**< \brief (US_IMR_USART) The interrupt is enabled */
#define US_IMR_USART_ITER_0         (US_IMR_USART_ITER_0_Val       << US_IMR_USART_ITER_Pos)
#define US_IMR_USART_ITER_1         (US_IMR_USART_ITER_1_Val       << US_IMR_USART_ITER_Pos)
#define US_IMR_USART_TXBUFE_Pos     11           /**< \brief (US_IMR_USART) Buffer Empty Interrupt Mask */
#define US_IMR_USART_TXBUFE         (_U_(0x1) << US_IMR_USART_TXBUFE_Pos)
#define   US_IMR_USART_TXBUFE_0_Val       _U_(0x0)   /**< \brief (US_IMR_USART) The interrupt is disabled */
#define   US_IMR_USART_TXBUFE_1_Val       _U_(0x1)   /**< \brief (US_IMR_USART) The interrupt is enabled */
#define US_IMR_USART_TXBUFE_0       (US_IMR_USART_TXBUFE_0_Val     << US_IMR_USART_TXBUFE_Pos)
#define US_IMR_USART_TXBUFE_1       (US_IMR_USART_TXBUFE_1_Val     << US_IMR_USART_TXBUFE_Pos)
#define US_IMR_USART_RXBUFF_Pos     12           /**< \brief (US_IMR_USART) Buffer Full Interrupt Mask */
#define US_IMR_USART_RXBUFF         (_U_(0x1) << US_IMR_USART_RXBUFF_Pos)
#define   US_IMR_USART_RXBUFF_0_Val       _U_(0x0)   /**< \brief (US_IMR_USART) The interrupt is disabled */
#define   US_IMR_USART_RXBUFF_1_Val       _U_(0x1)   /**< \brief (US_IMR_USART) The interrupt is enabled */
#define US_IMR_USART_RXBUFF_0       (US_IMR_USART_RXBUFF_0_Val     << US_IMR_USART_RXBUFF_Pos)
#define US_IMR_USART_RXBUFF_1       (US_IMR_USART_RXBUFF_1_Val     << US_IMR_USART_RXBUFF_Pos)
#define US_IMR_USART_NACK_Pos       13           /**< \brief (US_IMR_USART) Non Acknowledge Interrupt Mask */
#define US_IMR_USART_NACK           (_U_(0x1) << US_IMR_USART_NACK_Pos)
#define   US_IMR_USART_NACK_0_Val         _U_(0x0)   /**< \brief (US_IMR_USART) The interrupt is disabled */
#define   US_IMR_USART_NACK_1_Val         _U_(0x1)   /**< \brief (US_IMR_USART) The interrupt is enabled */
#define US_IMR_USART_NACK_0         (US_IMR_USART_NACK_0_Val       << US_IMR_USART_NACK_Pos)
#define US_IMR_USART_NACK_1         (US_IMR_USART_NACK_1_Val       << US_IMR_USART_NACK_Pos)
#define US_IMR_USART_RIIC_Pos       16           /**< \brief (US_IMR_USART) Ring Indicator Input Change Mask */
#define US_IMR_USART_RIIC           (_U_(0x1) << US_IMR_USART_RIIC_Pos)
#define   US_IMR_USART_RIIC_0_Val         _U_(0x0)   /**< \brief (US_IMR_USART) The interrupt is disabled */
#define   US_IMR_USART_RIIC_1_Val         _U_(0x1)   /**< \brief (US_IMR_USART) The interrupt is enabled */
#define US_IMR_USART_RIIC_0         (US_IMR_USART_RIIC_0_Val       << US_IMR_USART_RIIC_Pos)
#define US_IMR_USART_RIIC_1         (US_IMR_USART_RIIC_1_Val       << US_IMR_USART_RIIC_Pos)
#define US_IMR_USART_DSRIC_Pos      17           /**< \brief (US_IMR_USART) Data Set Ready Input Change Mask */
#define US_IMR_USART_DSRIC          (_U_(0x1) << US_IMR_USART_DSRIC_Pos)
#define   US_IMR_USART_DSRIC_0_Val        _U_(0x0)   /**< \brief (US_IMR_USART) The interrupt is disabled */
#define   US_IMR_USART_DSRIC_1_Val        _U_(0x1)   /**< \brief (US_IMR_USART) The interrupt is enabled */
#define US_IMR_USART_DSRIC_0        (US_IMR_USART_DSRIC_0_Val      << US_IMR_USART_DSRIC_Pos)
#define US_IMR_USART_DSRIC_1        (US_IMR_USART_DSRIC_1_Val      << US_IMR_USART_DSRIC_Pos)
#define US_IMR_USART_DCDIC_Pos      18           /**< \brief (US_IMR_USART) Data Carrier Detect Input Change Interrupt Mask */
#define US_IMR_USART_DCDIC          (_U_(0x1) << US_IMR_USART_DCDIC_Pos)
#define   US_IMR_USART_DCDIC_0_Val        _U_(0x0)   /**< \brief (US_IMR_USART) The interrupt is disabled */
#define   US_IMR_USART_DCDIC_1_Val        _U_(0x1)   /**< \brief (US_IMR_USART) The interrupt is enabled */
#define US_IMR_USART_DCDIC_0        (US_IMR_USART_DCDIC_0_Val      << US_IMR_USART_DCDIC_Pos)
#define US_IMR_USART_DCDIC_1        (US_IMR_USART_DCDIC_1_Val      << US_IMR_USART_DCDIC_Pos)
#define US_IMR_USART_CTSIC_Pos      19           /**< \brief (US_IMR_USART) Clear to Send Input Change Interrupt Mask */
#define US_IMR_USART_CTSIC          (_U_(0x1) << US_IMR_USART_CTSIC_Pos)
#define   US_IMR_USART_CTSIC_0_Val        _U_(0x0)   /**< \brief (US_IMR_USART) The interrupt is disabled */
#define   US_IMR_USART_CTSIC_1_Val        _U_(0x1)   /**< \brief (US_IMR_USART) The interrupt is enabled */
#define US_IMR_USART_CTSIC_0        (US_IMR_USART_CTSIC_0_Val      << US_IMR_USART_CTSIC_Pos)
#define US_IMR_USART_CTSIC_1        (US_IMR_USART_CTSIC_1_Val      << US_IMR_USART_CTSIC_Pos)
#define US_IMR_USART_MANE_Pos       20           /**< \brief (US_IMR_USART) Manchester Error Interrupt Mask */
#define US_IMR_USART_MANE           (_U_(0x1) << US_IMR_USART_MANE_Pos)
#define US_IMR_USART_MANEA_Pos      24           /**< \brief (US_IMR_USART) Manchester Error Interrupt Mask */
#define US_IMR_USART_MANEA          (_U_(0x1) << US_IMR_USART_MANEA_Pos)
#define   US_IMR_USART_MANEA_0_Val        _U_(0x0)   /**< \brief (US_IMR_USART) The interrupt is disabled */
#define   US_IMR_USART_MANEA_1_Val        _U_(0x1)   /**< \brief (US_IMR_USART) The interrupt is enabled */
#define US_IMR_USART_MANEA_0        (US_IMR_USART_MANEA_0_Val      << US_IMR_USART_MANEA_Pos)
#define US_IMR_USART_MANEA_1        (US_IMR_USART_MANEA_1_Val      << US_IMR_USART_MANEA_Pos)
#define US_IMR_USART_MASK           _U_(0x011F3FE7) /**< \brief (US_IMR_USART) MASK Register */

// Any mode
#define US_IMR_RXRDY_Pos            0            /**< \brief (US_IMR) RXRDY Interrupt Mask */
#define US_IMR_RXRDY                (_U_(0x1) << US_IMR_RXRDY_Pos)
#define   US_IMR_RXRDY_0_Val              _U_(0x0)   /**< \brief (US_IMR) The interrupt is disabled */
#define   US_IMR_RXRDY_1_Val              _U_(0x1)   /**< \brief (US_IMR) The interrupt is enabled */
#define US_IMR_RXRDY_0              (US_IMR_RXRDY_0_Val            << US_IMR_RXRDY_Pos)
#define US_IMR_RXRDY_1              (US_IMR_RXRDY_1_Val            << US_IMR_RXRDY_Pos)
#define US_IMR_TXRDY_Pos            1            /**< \brief (US_IMR) TXRDY Interrupt Mask */
#define US_IMR_TXRDY                (_U_(0x1) << US_IMR_TXRDY_Pos)
#define   US_IMR_TXRDY_0_Val              _U_(0x0)   /**< \brief (US_IMR) The interrupt is disabled */
#define   US_IMR_TXRDY_1_Val              _U_(0x1)   /**< \brief (US_IMR) The interrupt is enabled */
#define US_IMR_TXRDY_0              (US_IMR_TXRDY_0_Val            << US_IMR_TXRDY_Pos)
#define US_IMR_TXRDY_1              (US_IMR_TXRDY_1_Val            << US_IMR_TXRDY_Pos)
#define US_IMR_RXBRK_Pos            2            /**< \brief (US_IMR) Receiver Break Interrupt Mask */
#define US_IMR_RXBRK                (_U_(0x1) << US_IMR_RXBRK_Pos)
#define   US_IMR_RXBRK_0_Val              _U_(0x0)   /**< \brief (US_IMR) The interrupt is disabled */
#define   US_IMR_RXBRK_1_Val              _U_(0x1)   /**< \brief (US_IMR) The interrupt is enabled */
#define US_IMR_RXBRK_0              (US_IMR_RXBRK_0_Val            << US_IMR_RXBRK_Pos)
#define US_IMR_RXBRK_1              (US_IMR_RXBRK_1_Val            << US_IMR_RXBRK_Pos)
#define US_IMR_OVRE_Pos             5            /**< \brief (US_IMR) Overrun Error Interrupt Mask */
#define US_IMR_OVRE                 (_U_(0x1) << US_IMR_OVRE_Pos)
#define   US_IMR_OVRE_0_Val               _U_(0x0)   /**< \brief (US_IMR) The interrupt is disabled */
#define   US_IMR_OVRE_1_Val               _U_(0x1)   /**< \brief (US_IMR) The interrupt is enabled */
#define US_IMR_OVRE_0               (US_IMR_OVRE_0_Val             << US_IMR_OVRE_Pos)
#define US_IMR_OVRE_1               (US_IMR_OVRE_1_Val             << US_IMR_OVRE_Pos)
#define US_IMR_FRAME_Pos            6            /**< \brief (US_IMR) Framing Error Interrupt Mask */
#define US_IMR_FRAME                (_U_(0x1) << US_IMR_FRAME_Pos)
#define   US_IMR_FRAME_0_Val              _U_(0x0)   /**< \brief (US_IMR) The interrupt is disabled */
#define   US_IMR_FRAME_1_Val              _U_(0x1)   /**< \brief (US_IMR) The interrupt is enabled */
#define US_IMR_FRAME_0              (US_IMR_FRAME_0_Val            << US_IMR_FRAME_Pos)
#define US_IMR_FRAME_1              (US_IMR_FRAME_1_Val            << US_IMR_FRAME_Pos)
#define US_IMR_PARE_Pos             7            /**< \brief (US_IMR) Parity Error Interrupt Mask */
#define US_IMR_PARE                 (_U_(0x1) << US_IMR_PARE_Pos)
#define   US_IMR_PARE_0_Val               _U_(0x0)   /**< \brief (US_IMR) The interrupt is disabled */
#define   US_IMR_PARE_1_Val               _U_(0x1)   /**< \brief (US_IMR) The interrupt is enabled */
#define US_IMR_PARE_0               (US_IMR_PARE_0_Val             << US_IMR_PARE_Pos)
#define US_IMR_PARE_1               (US_IMR_PARE_1_Val             << US_IMR_PARE_Pos)
#define US_IMR_TIMEOUT_Pos          8            /**< \brief (US_IMR) Time-out Interrupt Mask */
#define US_IMR_TIMEOUT              (_U_(0x1) << US_IMR_TIMEOUT_Pos)
#define   US_IMR_TIMEOUT_0_Val            _U_(0x0)   /**< \brief (US_IMR) The interrupt is disabled */
#define   US_IMR_TIMEOUT_1_Val            _U_(0x1)   /**< \brief (US_IMR) The interrupt is enabled */
#define US_IMR_TIMEOUT_0            (US_IMR_TIMEOUT_0_Val          << US_IMR_TIMEOUT_Pos)
#define US_IMR_TIMEOUT_1            (US_IMR_TIMEOUT_1_Val          << US_IMR_TIMEOUT_Pos)
#define US_IMR_TXEMPTY_Pos          9            /**< \brief (US_IMR) TXEMPTY Interrupt Mask */
#define US_IMR_TXEMPTY              (_U_(0x1) << US_IMR_TXEMPTY_Pos)
#define   US_IMR_TXEMPTY_0_Val            _U_(0x0)   /**< \brief (US_IMR) The interrupt is disabled */
#define   US_IMR_TXEMPTY_1_Val            _U_(0x1)   /**< \brief (US_IMR) The interrupt is enabled */
#define US_IMR_TXEMPTY_0            (US_IMR_TXEMPTY_0_Val          << US_IMR_TXEMPTY_Pos)
#define US_IMR_TXEMPTY_1            (US_IMR_TXEMPTY_1_Val          << US_IMR_TXEMPTY_Pos)
#define US_IMR_ITER_Pos             10           /**< \brief (US_IMR) Iteration Interrupt Mask */
#define US_IMR_ITER                 (_U_(0x1) << US_IMR_ITER_Pos)
#define   US_IMR_ITER_0_Val               _U_(0x0)   /**< \brief (US_IMR) The interrupt is disabled */
#define   US_IMR_ITER_1_Val               _U_(0x1)   /**< \brief (US_IMR) The interrupt is enabled */
#define US_IMR_ITER_0               (US_IMR_ITER_0_Val             << US_IMR_ITER_Pos)
#define US_IMR_ITER_1               (US_IMR_ITER_1_Val             << US_IMR_ITER_Pos)
#define US_IMR_UNRE_Pos             10           /**< \brief (US_IMR) SPI Underrun Error Interrupt Mask */
#define US_IMR_UNRE                 (_U_(0x1) << US_IMR_UNRE_Pos)
#define   US_IMR_UNRE_0_Val               _U_(0x0)   /**< \brief (US_IMR) The interrupt is disabled */
#define   US_IMR_UNRE_1_Val               _U_(0x1)   /**< \brief (US_IMR) The interrupt is enabled */
#define US_IMR_UNRE_0               (US_IMR_UNRE_0_Val             << US_IMR_UNRE_Pos)
#define US_IMR_UNRE_1               (US_IMR_UNRE_1_Val             << US_IMR_UNRE_Pos)
#define US_IMR_ITER_Pos             10           /**< \brief (US_IMR) Iteration Interrupt Mask */
#define US_IMR_ITER                 (_U_(0x1) << US_IMR_ITER_Pos)
#define   US_IMR_ITER_0_Val               _U_(0x0)   /**< \brief (US_IMR) The interrupt is disabled */
#define   US_IMR_ITER_1_Val               _U_(0x1)   /**< \brief (US_IMR) The interrupt is enabled */
#define US_IMR_ITER_0               (US_IMR_ITER_0_Val             << US_IMR_ITER_Pos)
#define US_IMR_ITER_1               (US_IMR_ITER_1_Val             << US_IMR_ITER_Pos)
#define US_IMR_TXBUFE_Pos           11           /**< \brief (US_IMR) Buffer Empty Interrupt Mask */
#define US_IMR_TXBUFE               (_U_(0x1) << US_IMR_TXBUFE_Pos)
#define   US_IMR_TXBUFE_0_Val             _U_(0x0)   /**< \brief (US_IMR) The interrupt is disabled */
#define   US_IMR_TXBUFE_1_Val             _U_(0x1)   /**< \brief (US_IMR) The interrupt is enabled */
#define US_IMR_TXBUFE_0             (US_IMR_TXBUFE_0_Val           << US_IMR_TXBUFE_Pos)
#define US_IMR_TXBUFE_1             (US_IMR_TXBUFE_1_Val           << US_IMR_TXBUFE_Pos)
#define US_IMR_RXBUFF_Pos           12           /**< \brief (US_IMR) Buffer Full Interrupt Mask */
#define US_IMR_RXBUFF               (_U_(0x1) << US_IMR_RXBUFF_Pos)
#define   US_IMR_RXBUFF_0_Val             _U_(0x0)   /**< \brief (US_IMR) The interrupt is disabled */
#define   US_IMR_RXBUFF_1_Val             _U_(0x1)   /**< \brief (US_IMR) The interrupt is enabled */
#define US_IMR_RXBUFF_0             (US_IMR_RXBUFF_0_Val           << US_IMR_RXBUFF_Pos)
#define US_IMR_RXBUFF_1             (US_IMR_RXBUFF_1_Val           << US_IMR_RXBUFF_Pos)
#define US_IMR_NACK_Pos             13           /**< \brief (US_IMR) Non Acknowledge  or LIN Break Sent or LIN Break Received Interrupt Mask */
#define US_IMR_NACK                 (_U_(0x1) << US_IMR_NACK_Pos)
#define   US_IMR_NACK_0_Val               _U_(0x0)   /**< \brief (US_IMR) The interrupt is disabled */
#define   US_IMR_NACK_1_Val               _U_(0x1)   /**< \brief (US_IMR) The interrupt is enabled */
#define US_IMR_NACK_0               (US_IMR_NACK_0_Val             << US_IMR_NACK_Pos)
#define US_IMR_NACK_1               (US_IMR_NACK_1_Val             << US_IMR_NACK_Pos)
#define US_IMR_LINID_Pos            14           /**< \brief (US_IMR) LIN Identifier Sent or LIN Received Interrupt Mask */
#define US_IMR_LINID                (_U_(0x1) << US_IMR_LINID_Pos)
#define US_IMR_LINTC_Pos            15           /**< \brief (US_IMR) LIN Transfer Conpleted Interrupt Mask */
#define US_IMR_LINTC                (_U_(0x1) << US_IMR_LINTC_Pos)
#define US_IMR_RIIC_Pos             16           /**< \brief (US_IMR) Ring Indicator Input Change Mask */
#define US_IMR_RIIC                 (_U_(0x1) << US_IMR_RIIC_Pos)
#define   US_IMR_RIIC_0_Val               _U_(0x0)   /**< \brief (US_IMR) The interrupt is disabled */
#define   US_IMR_RIIC_1_Val               _U_(0x1)   /**< \brief (US_IMR) The interrupt is enabled */
#define US_IMR_RIIC_0               (US_IMR_RIIC_0_Val             << US_IMR_RIIC_Pos)
#define US_IMR_RIIC_1               (US_IMR_RIIC_1_Val             << US_IMR_RIIC_Pos)
#define US_IMR_DSRIC_Pos            17           /**< \brief (US_IMR) Data Set Ready Input Change Mask */
#define US_IMR_DSRIC                (_U_(0x1) << US_IMR_DSRIC_Pos)
#define   US_IMR_DSRIC_0_Val              _U_(0x0)   /**< \brief (US_IMR) The interrupt is disabled */
#define   US_IMR_DSRIC_1_Val              _U_(0x1)   /**< \brief (US_IMR) The interrupt is enabled */
#define US_IMR_DSRIC_0              (US_IMR_DSRIC_0_Val            << US_IMR_DSRIC_Pos)
#define US_IMR_DSRIC_1              (US_IMR_DSRIC_1_Val            << US_IMR_DSRIC_Pos)
#define US_IMR_DCDIC_Pos            18           /**< \brief (US_IMR) Data Carrier Detect Input Change Interrupt Mask */
#define US_IMR_DCDIC                (_U_(0x1) << US_IMR_DCDIC_Pos)
#define   US_IMR_DCDIC_0_Val              _U_(0x0)   /**< \brief (US_IMR) The interrupt is disabled */
#define   US_IMR_DCDIC_1_Val              _U_(0x1)   /**< \brief (US_IMR) The interrupt is enabled */
#define US_IMR_DCDIC_0              (US_IMR_DCDIC_0_Val            << US_IMR_DCDIC_Pos)
#define US_IMR_DCDIC_1              (US_IMR_DCDIC_1_Val            << US_IMR_DCDIC_Pos)
#define US_IMR_CTSIC_Pos            19           /**< \brief (US_IMR) Clear to Send Input Change Interrupt Mask */
#define US_IMR_CTSIC                (_U_(0x1) << US_IMR_CTSIC_Pos)
#define   US_IMR_CTSIC_0_Val              _U_(0x0)   /**< \brief (US_IMR) The interrupt is disabled */
#define   US_IMR_CTSIC_1_Val              _U_(0x1)   /**< \brief (US_IMR) The interrupt is enabled */
#define US_IMR_CTSIC_0              (US_IMR_CTSIC_0_Val            << US_IMR_CTSIC_Pos)
#define US_IMR_CTSIC_1              (US_IMR_CTSIC_1_Val            << US_IMR_CTSIC_Pos)
#define US_IMR_MANE_Pos             20           /**< \brief (US_IMR) Manchester Error Interrupt Mask */
#define US_IMR_MANE                 (_U_(0x1) << US_IMR_MANE_Pos)
#define US_IMR_MANEA_Pos            24           /**< \brief (US_IMR) Manchester Error Interrupt Mask */
#define US_IMR_MANEA                (_U_(0x1) << US_IMR_MANEA_Pos)
#define   US_IMR_MANEA_0_Val              _U_(0x0)   /**< \brief (US_IMR) The interrupt is disabled */
#define   US_IMR_MANEA_1_Val              _U_(0x1)   /**< \brief (US_IMR) The interrupt is enabled */
#define US_IMR_MANEA_0              (US_IMR_MANEA_0_Val            << US_IMR_MANEA_Pos)
#define US_IMR_MANEA_1              (US_IMR_MANEA_1_Val            << US_IMR_MANEA_Pos)
#define US_IMR_LINBE_Pos            25           /**< \brief (US_IMR) LIN Bus Error Interrupt Mask */
#define US_IMR_LINBE                (_U_(0x1) << US_IMR_LINBE_Pos)
#define US_IMR_LINISFE_Pos          26           /**< \brief (US_IMR) LIN Inconsistent Synch Field Error Interrupt Mask */
#define US_IMR_LINISFE              (_U_(0x1) << US_IMR_LINISFE_Pos)
#define US_IMR_LINIPE_Pos           27           /**< \brief (US_IMR) LIN Identifier Parity Interrupt Mask */
#define US_IMR_LINIPE               (_U_(0x1) << US_IMR_LINIPE_Pos)
#define US_IMR_LINCE_Pos            28           /**< \brief (US_IMR) LIN Checksum Error Interrupt Mask */
#define US_IMR_LINCE                (_U_(0x1) << US_IMR_LINCE_Pos)
#define US_IMR_LINSNRE_Pos          29           /**< \brief (US_IMR) LIN Slave Not Responding Error Interrupt Mask */
#define US_IMR_LINSNRE              (_U_(0x1) << US_IMR_LINSNRE_Pos)
#define US_IMR_LINSTE_Pos           30           /**< \brief (US_IMR) LIN Synch Tolerance Error Interrupt Mask */
#define US_IMR_LINSTE               (_U_(0x1) << US_IMR_LINSTE_Pos)
#define   US_IMR_LINSTE_0_Val             _U_(0x0)   /**< \brief (US_IMR) The interrupt is disabled */
#define   US_IMR_LINSTE_1_Val             _U_(0x1)   /**< \brief (US_IMR) The interrupt is enabled */
#define US_IMR_LINSTE_0             (US_IMR_LINSTE_0_Val           << US_IMR_LINSTE_Pos)
#define US_IMR_LINSTE_1             (US_IMR_LINSTE_1_Val           << US_IMR_LINSTE_Pos)
#define US_IMR_LINHTE_Pos           31           /**< \brief (US_IMR) LIN Header Timeout Error Interrupt Mask */
#define US_IMR_LINHTE               (_U_(0x1) << US_IMR_LINHTE_Pos)
#define   US_IMR_LINHTE_0_Val             _U_(0x0)   /**< \brief (US_IMR) The interrupt is disabled */
#define   US_IMR_LINHTE_1_Val             _U_(0x1)   /**< \brief (US_IMR) The interrupt is enabled */
#define US_IMR_LINHTE_0             (US_IMR_LINHTE_0_Val           << US_IMR_LINHTE_Pos)
#define US_IMR_LINHTE_1             (US_IMR_LINHTE_1_Val           << US_IMR_LINHTE_Pos)
#define US_IMR_MASK                 _U_(0xFF1FFFE7) /**< \brief (US_IMR) MASK Register */

/* -------- US_CSR : (USART Offset: 0x14) (R/  32) Channel Status Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct { // LIN mode
    uint32_t RXRDY:1;          /*!< bit:      0  Receiver Ready                     */
    uint32_t TXRDY:1;          /*!< bit:      1  Transmitter Ready                  */
    uint32_t RXBRK:1;          /*!< bit:      2  Break Received/End of Break        */
    uint32_t :2;               /*!< bit:  3.. 4  Reserved                           */
    uint32_t OVRE:1;           /*!< bit:      5  Overrun Error                      */
    uint32_t FRAME:1;          /*!< bit:      6  Framing Error                      */
    uint32_t PARE:1;           /*!< bit:      7  Parity Error                       */
    uint32_t TIMEOUT:1;        /*!< bit:      8  Receiver Time-out                  */
    uint32_t TXEMPTY:1;        /*!< bit:      9  Transmitter Empty                  */
    uint32_t ITER:1;           /*!< bit:     10  Max number of Repetitions Reached  */
    uint32_t TXBUFE:1;         /*!< bit:     11  Transmission Buffer Empty          */
    uint32_t RXBUFF:1;         /*!< bit:     12  Reception Buffer Full              */
    uint32_t NACK:1;           /*!< bit:     13  Non Acknowledge or LIN Break Sent or LIN Break Received */
    uint32_t LINID:1;          /*!< bit:     14  LIN Identifier Sent or LIN Identifier Received */
    uint32_t LINTC:1;          /*!< bit:     15  LIN Transfer Conpleted             */
    uint32_t RIIC:1;           /*!< bit:     16  Ring Indicator Input Change Flag   */
    uint32_t DSRIC:1;          /*!< bit:     17  Data Set Ready Input Change Flag   */
    uint32_t DCDIC:1;          /*!< bit:     18  Data Carrier Detect Input Change Flag */
    uint32_t CTSIC:1;          /*!< bit:     19  Clear to Send Input Change Flag    */
    uint32_t RI:1;             /*!< bit:     20  Image of RI Input                  */
    uint32_t DSR:1;            /*!< bit:     21  Image of DSR Input                 */
    uint32_t DCD:1;            /*!< bit:     22  Image of DCD Input                 */
    uint32_t LINBLS:1;         /*!< bit:     23  LIN Bus Line Status                */
    uint32_t :1;               /*!< bit:     24  Reserved                           */
    uint32_t LINBE:1;          /*!< bit:     25  LIN Bit Error                      */
    uint32_t LINISFE:1;        /*!< bit:     26  LIN Inconsistent Synch Field Error */
    uint32_t LINIPE:1;         /*!< bit:     27  LIN Identifier Parity Error        */
    uint32_t LINCE:1;          /*!< bit:     28  LIN Checksum Error                 */
    uint32_t LINSNRE:1;        /*!< bit:     29  LIN Slave Not Responding Error     */
    uint32_t LINSTE:1;         /*!< bit:     30  LIN Synch Tolerance Error          */
    uint32_t LINHTE:1;         /*!< bit:     31  LIN Header Timeout Error           */
  } LIN;                       /*!< Structure used for LIN                          */
  struct { // SPI_SLAVE mode
    uint32_t RXRDY:1;          /*!< bit:      0  Receiver Ready                     */
    uint32_t TXRDY:1;          /*!< bit:      1  Transmitter Ready                  */
    uint32_t RXBRK:1;          /*!< bit:      2  Break Received/End of Break        */
    uint32_t :2;               /*!< bit:  3.. 4  Reserved                           */
    uint32_t OVRE:1;           /*!< bit:      5  Overrun Error                      */
    uint32_t FRAME:1;          /*!< bit:      6  Framing Error                      */
    uint32_t PARE:1;           /*!< bit:      7  Parity Error                       */
    uint32_t TIMEOUT:1;        /*!< bit:      8  Receiver Time-out                  */
    uint32_t TXEMPTY:1;        /*!< bit:      9  Transmitter Empty                  */
    uint32_t UNRE:1;           /*!< bit:     10  SPI Underrun Error                 */
    uint32_t TXBUFE:1;         /*!< bit:     11  Transmission Buffer Empty          */
    uint32_t RXBUFF:1;         /*!< bit:     12  Reception Buffer Full              */
    uint32_t NACK:1;           /*!< bit:     13  Non Acknowledge                    */
    uint32_t :2;               /*!< bit: 14..15  Reserved                           */
    uint32_t RIIC:1;           /*!< bit:     16  Ring Indicator Input Change Flag   */
    uint32_t DSRIC:1;          /*!< bit:     17  Data Set Ready Input Change Flag   */
    uint32_t DCDIC:1;          /*!< bit:     18  Data Carrier Detect Input Change Flag */
    uint32_t CTSIC:1;          /*!< bit:     19  Clear to Send Input Change Flag    */
    uint32_t RI:1;             /*!< bit:     20  Image of RI Input                  */
    uint32_t DSR:1;            /*!< bit:     21  Image of DSR Input                 */
    uint32_t DCD:1;            /*!< bit:     22  Image of DCD Input                 */
    uint32_t CTS:1;            /*!< bit:     23  Image of CTS Input                 */
    uint32_t :8;               /*!< bit: 24..31  Reserved                           */
  } SPI_SLAVE;                 /*!< Structure used for SPI_SLAVE                    */
  struct { // USART mode
    uint32_t RXRDY:1;          /*!< bit:      0  Receiver Ready                     */
    uint32_t TXRDY:1;          /*!< bit:      1  Transmitter Ready                  */
    uint32_t RXBRK:1;          /*!< bit:      2  Break Received/End of Break        */
    uint32_t :2;               /*!< bit:  3.. 4  Reserved                           */
    uint32_t OVRE:1;           /*!< bit:      5  Overrun Error                      */
    uint32_t FRAME:1;          /*!< bit:      6  Framing Error                      */
    uint32_t PARE:1;           /*!< bit:      7  Parity Error                       */
    uint32_t TIMEOUT:1;        /*!< bit:      8  Receiver Time-out                  */
    uint32_t TXEMPTY:1;        /*!< bit:      9  Transmitter Empty                  */
    uint32_t ITER:1;           /*!< bit:     10  Max number of Repetitions Reached  */
    uint32_t TXBUFE:1;         /*!< bit:     11  Transmission Buffer Empty          */
    uint32_t RXBUFF:1;         /*!< bit:     12  Reception Buffer Full              */
    uint32_t NACK:1;           /*!< bit:     13  Non Acknowledge                    */
    uint32_t :2;               /*!< bit: 14..15  Reserved                           */
    uint32_t RIIC:1;           /*!< bit:     16  Ring Indicator Input Change Flag   */
    uint32_t DSRIC:1;          /*!< bit:     17  Data Set Ready Input Change Flag   */
    uint32_t DCDIC:1;          /*!< bit:     18  Data Carrier Detect Input Change Flag */
    uint32_t CTSIC:1;          /*!< bit:     19  Clear to Send Input Change Flag    */
    uint32_t RI:1;             /*!< bit:     20  Image of RI Input                  */
    uint32_t DSR:1;            /*!< bit:     21  Image of DSR Input                 */
    uint32_t DCD:1;            /*!< bit:     22  Image of DCD Input                 */
    uint32_t CTS:1;            /*!< bit:     23  Image of CTS Input                 */
    uint32_t MANERR:1;         /*!< bit:     24  Manchester Error                   */
    uint32_t :7;               /*!< bit: 25..31  Reserved                           */
  } USART;                     /*!< Structure used for USART                        */
  uint32_t reg;                /*!< Type      used for register access              */
} US_CSR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define US_CSR_OFFSET               0x14         /**< \brief (US_CSR offset) Channel Status Register */
#define US_CSR_RESETVALUE           _U_(0x00000000); /**< \brief (US_CSR reset_value) Channel Status Register */

// LIN mode
#define US_CSR_LIN_RXRDY_Pos        0            /**< \brief (US_CSR_LIN) Receiver Ready */
#define US_CSR_LIN_RXRDY            (_U_(0x1) << US_CSR_LIN_RXRDY_Pos)
#define   US_CSR_LIN_RXRDY_0_Val          _U_(0x0)   /**< \brief (US_CSR_LIN) No complete character has been received since the last read of RHR or the receiver is disabled. If characters werebeing received when the receiver was disabled, RXRDY changes to 1 when the receiver is enabled */
#define   US_CSR_LIN_RXRDY_1_Val          _U_(0x1)   /**< \brief (US_CSR_LIN) At least one complete character has been received and RHR has not yet been read */
#define US_CSR_LIN_RXRDY_0          (US_CSR_LIN_RXRDY_0_Val        << US_CSR_LIN_RXRDY_Pos)
#define US_CSR_LIN_RXRDY_1          (US_CSR_LIN_RXRDY_1_Val        << US_CSR_LIN_RXRDY_Pos)
#define US_CSR_LIN_TXRDY_Pos        1            /**< \brief (US_CSR_LIN) Transmitter Ready */
#define US_CSR_LIN_TXRDY            (_U_(0x1) << US_CSR_LIN_TXRDY_Pos)
#define   US_CSR_LIN_TXRDY_0_Val          _U_(0x0)   /**< \brief (US_CSR_LIN) A character is in the THR waiting to be transferred to the Transmit Shift Register, or an STTBRK command has been requested, or the transmitter is disabled. As soon as the transmitter is enabled, TXRDY becomes 1 */
#define   US_CSR_LIN_TXRDY_1_Val          _U_(0x1)   /**< \brief (US_CSR_LIN) There is no character in the THR */
#define US_CSR_LIN_TXRDY_0          (US_CSR_LIN_TXRDY_0_Val        << US_CSR_LIN_TXRDY_Pos)
#define US_CSR_LIN_TXRDY_1          (US_CSR_LIN_TXRDY_1_Val        << US_CSR_LIN_TXRDY_Pos)
#define US_CSR_LIN_RXBRK_Pos        2            /**< \brief (US_CSR_LIN) Break Received/End of Break */
#define US_CSR_LIN_RXBRK            (_U_(0x1) << US_CSR_LIN_RXBRK_Pos)
#define   US_CSR_LIN_RXBRK_0_Val          _U_(0x0)   /**< \brief (US_CSR_LIN) No Break received or End of Break detected since the last RSTSTA */
#define   US_CSR_LIN_RXBRK_1_Val          _U_(0x1)   /**< \brief (US_CSR_LIN) Break Received or End of Break detected since the last RSTSTA */
#define US_CSR_LIN_RXBRK_0          (US_CSR_LIN_RXBRK_0_Val        << US_CSR_LIN_RXBRK_Pos)
#define US_CSR_LIN_RXBRK_1          (US_CSR_LIN_RXBRK_1_Val        << US_CSR_LIN_RXBRK_Pos)
#define US_CSR_LIN_OVRE_Pos         5            /**< \brief (US_CSR_LIN) Overrun Error */
#define US_CSR_LIN_OVRE             (_U_(0x1) << US_CSR_LIN_OVRE_Pos)
#define   US_CSR_LIN_OVRE_0_Val           _U_(0x0)   /**< \brief (US_CSR_LIN) No overrun error has occurred since since the last RSTSTA */
#define   US_CSR_LIN_OVRE_1_Val           _U_(0x1)   /**< \brief (US_CSR_LIN) At least one overrun error has occurred since the last RSTSTA */
#define US_CSR_LIN_OVRE_0           (US_CSR_LIN_OVRE_0_Val         << US_CSR_LIN_OVRE_Pos)
#define US_CSR_LIN_OVRE_1           (US_CSR_LIN_OVRE_1_Val         << US_CSR_LIN_OVRE_Pos)
#define US_CSR_LIN_FRAME_Pos        6            /**< \brief (US_CSR_LIN) Framing Error */
#define US_CSR_LIN_FRAME            (_U_(0x1) << US_CSR_LIN_FRAME_Pos)
#define   US_CSR_LIN_FRAME_0_Val          _U_(0x0)   /**< \brief (US_CSR_LIN) No stop bit has been detected low since the last RSTSTA */
#define   US_CSR_LIN_FRAME_1_Val          _U_(0x1)   /**< \brief (US_CSR_LIN) At least one stop bit has been detected low since the last RSTSTA */
#define US_CSR_LIN_FRAME_0          (US_CSR_LIN_FRAME_0_Val        << US_CSR_LIN_FRAME_Pos)
#define US_CSR_LIN_FRAME_1          (US_CSR_LIN_FRAME_1_Val        << US_CSR_LIN_FRAME_Pos)
#define US_CSR_LIN_PARE_Pos         7            /**< \brief (US_CSR_LIN) Parity Error */
#define US_CSR_LIN_PARE             (_U_(0x1) << US_CSR_LIN_PARE_Pos)
#define   US_CSR_LIN_PARE_0_Val           _U_(0x0)   /**< \brief (US_CSR_LIN) No parity error has been detected since the last RSTSTA */
#define   US_CSR_LIN_PARE_1_Val           _U_(0x1)   /**< \brief (US_CSR_LIN) At least one parity error has been detected since the last RSTSTA */
#define US_CSR_LIN_PARE_0           (US_CSR_LIN_PARE_0_Val         << US_CSR_LIN_PARE_Pos)
#define US_CSR_LIN_PARE_1           (US_CSR_LIN_PARE_1_Val         << US_CSR_LIN_PARE_Pos)
#define US_CSR_LIN_TIMEOUT_Pos      8            /**< \brief (US_CSR_LIN) Receiver Time-out */
#define US_CSR_LIN_TIMEOUT          (_U_(0x1) << US_CSR_LIN_TIMEOUT_Pos)
#define   US_CSR_LIN_TIMEOUT_0_Val        _U_(0x0)   /**< \brief (US_CSR_LIN) There has not been a time-out since the last Start Time-out command or the Time-out Register is 0 */
#define   US_CSR_LIN_TIMEOUT_1_Val        _U_(0x1)   /**< \brief (US_CSR_LIN) There has been a time-out since the last Start Time-out command */
#define US_CSR_LIN_TIMEOUT_0        (US_CSR_LIN_TIMEOUT_0_Val      << US_CSR_LIN_TIMEOUT_Pos)
#define US_CSR_LIN_TIMEOUT_1        (US_CSR_LIN_TIMEOUT_1_Val      << US_CSR_LIN_TIMEOUT_Pos)
#define US_CSR_LIN_TXEMPTY_Pos      9            /**< \brief (US_CSR_LIN) Transmitter Empty */
#define US_CSR_LIN_TXEMPTY          (_U_(0x1) << US_CSR_LIN_TXEMPTY_Pos)
#define   US_CSR_LIN_TXEMPTY_0_Val        _U_(0x0)   /**< \brief (US_CSR_LIN) There are characters in either THR or the Transmit Shift Register, or the transmitter is disabled */
#define   US_CSR_LIN_TXEMPTY_1_Val        _U_(0x1)   /**< \brief (US_CSR_LIN) There is at least one character in either THR or the Transmit Shift Register */
#define US_CSR_LIN_TXEMPTY_0        (US_CSR_LIN_TXEMPTY_0_Val      << US_CSR_LIN_TXEMPTY_Pos)
#define US_CSR_LIN_TXEMPTY_1        (US_CSR_LIN_TXEMPTY_1_Val      << US_CSR_LIN_TXEMPTY_Pos)
#define US_CSR_LIN_ITER_Pos         10           /**< \brief (US_CSR_LIN) Max number of Repetitions Reached */
#define US_CSR_LIN_ITER             (_U_(0x1) << US_CSR_LIN_ITER_Pos)
#define   US_CSR_LIN_ITER_0_Val           _U_(0x0)   /**< \brief (US_CSR_LIN) Maximum number of repetitions has not been reached since the last RSIT */
#define   US_CSR_LIN_ITER_1_Val           _U_(0x1)   /**< \brief (US_CSR_LIN) Maximum number of repetitions has been reached since the last RSIT */
#define US_CSR_LIN_ITER_0           (US_CSR_LIN_ITER_0_Val         << US_CSR_LIN_ITER_Pos)
#define US_CSR_LIN_ITER_1           (US_CSR_LIN_ITER_1_Val         << US_CSR_LIN_ITER_Pos)
#define US_CSR_LIN_TXBUFE_Pos       11           /**< \brief (US_CSR_LIN) Transmission Buffer Empty */
#define US_CSR_LIN_TXBUFE           (_U_(0x1) << US_CSR_LIN_TXBUFE_Pos)
#define   US_CSR_LIN_TXBUFE_0_Val         _U_(0x0)   /**< \brief (US_CSR_LIN) The signal Buffer Empty from the Transmit PDC channel is inactive */
#define   US_CSR_LIN_TXBUFE_1_Val         _U_(0x1)   /**< \brief (US_CSR_LIN) The signal Buffer Empty from the Transmit PDC channel is active */
#define US_CSR_LIN_TXBUFE_0         (US_CSR_LIN_TXBUFE_0_Val       << US_CSR_LIN_TXBUFE_Pos)
#define US_CSR_LIN_TXBUFE_1         (US_CSR_LIN_TXBUFE_1_Val       << US_CSR_LIN_TXBUFE_Pos)
#define US_CSR_LIN_RXBUFF_Pos       12           /**< \brief (US_CSR_LIN) Reception Buffer Full */
#define US_CSR_LIN_RXBUFF           (_U_(0x1) << US_CSR_LIN_RXBUFF_Pos)
#define   US_CSR_LIN_RXBUFF_0_Val         _U_(0x0)   /**< \brief (US_CSR_LIN) The signal Buffer Full from the Receive PDC channel is inactive */
#define   US_CSR_LIN_RXBUFF_1_Val         _U_(0x1)   /**< \brief (US_CSR_LIN) The signal Buffer Full from the Receive PDC channel is active */
#define US_CSR_LIN_RXBUFF_0         (US_CSR_LIN_RXBUFF_0_Val       << US_CSR_LIN_RXBUFF_Pos)
#define US_CSR_LIN_RXBUFF_1         (US_CSR_LIN_RXBUFF_1_Val       << US_CSR_LIN_RXBUFF_Pos)
#define US_CSR_LIN_NACK_Pos         13           /**< \brief (US_CSR_LIN) Non Acknowledge or LIN Break Sent or LIN Break Received */
#define US_CSR_LIN_NACK             (_U_(0x1) << US_CSR_LIN_NACK_Pos)
#define   US_CSR_LIN_NACK_0_Val           _U_(0x0)   /**< \brief (US_CSR_LIN) No Non Acknowledge has not been detected since the last RSTNACK */
#define   US_CSR_LIN_NACK_1_Val           _U_(0x1)   /**< \brief (US_CSR_LIN) At least one Non Acknowledge has been detected since the last RSTNACK */
#define US_CSR_LIN_NACK_0           (US_CSR_LIN_NACK_0_Val         << US_CSR_LIN_NACK_Pos)
#define US_CSR_LIN_NACK_1           (US_CSR_LIN_NACK_1_Val         << US_CSR_LIN_NACK_Pos)
#define US_CSR_LIN_LINID_Pos        14           /**< \brief (US_CSR_LIN) LIN Identifier Sent or LIN Identifier Received */
#define US_CSR_LIN_LINID            (_U_(0x1) << US_CSR_LIN_LINID_Pos)
#define US_CSR_LIN_LINTC_Pos        15           /**< \brief (US_CSR_LIN) LIN Transfer Conpleted */
#define US_CSR_LIN_LINTC            (_U_(0x1) << US_CSR_LIN_LINTC_Pos)
#define US_CSR_LIN_RIIC_Pos         16           /**< \brief (US_CSR_LIN) Ring Indicator Input Change Flag */
#define US_CSR_LIN_RIIC             (_U_(0x1) << US_CSR_LIN_RIIC_Pos)
#define   US_CSR_LIN_RIIC_0_Val           _U_(0x0)   /**< \brief (US_CSR_LIN) No input change has been detected on the RI pin since the last read of CSR */
#define   US_CSR_LIN_RIIC_1_Val           _U_(0x1)   /**< \brief (US_CSR_LIN) At least one input change has been detected on the RI pin since the last read of CSR */
#define US_CSR_LIN_RIIC_0           (US_CSR_LIN_RIIC_0_Val         << US_CSR_LIN_RIIC_Pos)
#define US_CSR_LIN_RIIC_1           (US_CSR_LIN_RIIC_1_Val         << US_CSR_LIN_RIIC_Pos)
#define US_CSR_LIN_DSRIC_Pos        17           /**< \brief (US_CSR_LIN) Data Set Ready Input Change Flag */
#define US_CSR_LIN_DSRIC            (_U_(0x1) << US_CSR_LIN_DSRIC_Pos)
#define   US_CSR_LIN_DSRIC_0_Val          _U_(0x0)   /**< \brief (US_CSR_LIN) No input change has been detected on the DSR pin since the last read of CSR */
#define   US_CSR_LIN_DSRIC_1_Val          _U_(0x1)   /**< \brief (US_CSR_LIN) At least one input change has been detected on the DSR pin since the last read of CSR */
#define US_CSR_LIN_DSRIC_0          (US_CSR_LIN_DSRIC_0_Val        << US_CSR_LIN_DSRIC_Pos)
#define US_CSR_LIN_DSRIC_1          (US_CSR_LIN_DSRIC_1_Val        << US_CSR_LIN_DSRIC_Pos)
#define US_CSR_LIN_DCDIC_Pos        18           /**< \brief (US_CSR_LIN) Data Carrier Detect Input Change Flag */
#define US_CSR_LIN_DCDIC            (_U_(0x1) << US_CSR_LIN_DCDIC_Pos)
#define   US_CSR_LIN_DCDIC_0_Val          _U_(0x0)   /**< \brief (US_CSR_LIN) No input change has been detected on the DCD pin since the last read of CSR */
#define   US_CSR_LIN_DCDIC_1_Val          _U_(0x1)   /**< \brief (US_CSR_LIN) At least one input change has been detected on the DCD pin since the last read of CSR */
#define US_CSR_LIN_DCDIC_0          (US_CSR_LIN_DCDIC_0_Val        << US_CSR_LIN_DCDIC_Pos)
#define US_CSR_LIN_DCDIC_1          (US_CSR_LIN_DCDIC_1_Val        << US_CSR_LIN_DCDIC_Pos)
#define US_CSR_LIN_CTSIC_Pos        19           /**< \brief (US_CSR_LIN) Clear to Send Input Change Flag */
#define US_CSR_LIN_CTSIC            (_U_(0x1) << US_CSR_LIN_CTSIC_Pos)
#define   US_CSR_LIN_CTSIC_0_Val          _U_(0x0)   /**< \brief (US_CSR_LIN) No input change has been detected on the CTS pin since the last read of CSR */
#define   US_CSR_LIN_CTSIC_1_Val          _U_(0x1)   /**< \brief (US_CSR_LIN) At least one input change has been detected on the CTS pin since the last read of CSR */
#define US_CSR_LIN_CTSIC_0          (US_CSR_LIN_CTSIC_0_Val        << US_CSR_LIN_CTSIC_Pos)
#define US_CSR_LIN_CTSIC_1          (US_CSR_LIN_CTSIC_1_Val        << US_CSR_LIN_CTSIC_Pos)
#define US_CSR_LIN_RI_Pos           20           /**< \brief (US_CSR_LIN) Image of RI Input */
#define US_CSR_LIN_RI               (_U_(0x1) << US_CSR_LIN_RI_Pos)
#define   US_CSR_LIN_RI_0_Val             _U_(0x0)   /**< \brief (US_CSR_LIN) RI is at 0 */
#define   US_CSR_LIN_RI_1_Val             _U_(0x1)   /**< \brief (US_CSR_LIN) RI is at 1 */
#define US_CSR_LIN_RI_0             (US_CSR_LIN_RI_0_Val           << US_CSR_LIN_RI_Pos)
#define US_CSR_LIN_RI_1             (US_CSR_LIN_RI_1_Val           << US_CSR_LIN_RI_Pos)
#define US_CSR_LIN_DSR_Pos          21           /**< \brief (US_CSR_LIN) Image of DSR Input */
#define US_CSR_LIN_DSR              (_U_(0x1) << US_CSR_LIN_DSR_Pos)
#define   US_CSR_LIN_DSR_0_Val            _U_(0x0)   /**< \brief (US_CSR_LIN) DSR is at 0 */
#define   US_CSR_LIN_DSR_1_Val            _U_(0x1)   /**< \brief (US_CSR_LIN) DSR is at 1 */
#define US_CSR_LIN_DSR_0            (US_CSR_LIN_DSR_0_Val          << US_CSR_LIN_DSR_Pos)
#define US_CSR_LIN_DSR_1            (US_CSR_LIN_DSR_1_Val          << US_CSR_LIN_DSR_Pos)
#define US_CSR_LIN_DCD_Pos          22           /**< \brief (US_CSR_LIN) Image of DCD Input */
#define US_CSR_LIN_DCD              (_U_(0x1) << US_CSR_LIN_DCD_Pos)
#define   US_CSR_LIN_DCD_0_Val            _U_(0x0)   /**< \brief (US_CSR_LIN) DCD is at 0 */
#define   US_CSR_LIN_DCD_1_Val            _U_(0x1)   /**< \brief (US_CSR_LIN) DCD is at 1 */
#define US_CSR_LIN_DCD_0            (US_CSR_LIN_DCD_0_Val          << US_CSR_LIN_DCD_Pos)
#define US_CSR_LIN_DCD_1            (US_CSR_LIN_DCD_1_Val          << US_CSR_LIN_DCD_Pos)
#define US_CSR_LIN_LINBLS_Pos       23           /**< \brief (US_CSR_LIN) LIN Bus Line Status */
#define US_CSR_LIN_LINBLS           (_U_(0x1) << US_CSR_LIN_LINBLS_Pos)
#define   US_CSR_LIN_LINBLS_0_Val         _U_(0x0)   /**< \brief (US_CSR_LIN) CTS is at 0 */
#define   US_CSR_LIN_LINBLS_1_Val         _U_(0x1)   /**< \brief (US_CSR_LIN) CTS is at 1 */
#define US_CSR_LIN_LINBLS_0         (US_CSR_LIN_LINBLS_0_Val       << US_CSR_LIN_LINBLS_Pos)
#define US_CSR_LIN_LINBLS_1         (US_CSR_LIN_LINBLS_1_Val       << US_CSR_LIN_LINBLS_Pos)
#define US_CSR_LIN_LINBE_Pos        25           /**< \brief (US_CSR_LIN) LIN Bit Error */
#define US_CSR_LIN_LINBE            (_U_(0x1) << US_CSR_LIN_LINBE_Pos)
#define US_CSR_LIN_LINISFE_Pos      26           /**< \brief (US_CSR_LIN) LIN Inconsistent Synch Field Error */
#define US_CSR_LIN_LINISFE          (_U_(0x1) << US_CSR_LIN_LINISFE_Pos)
#define US_CSR_LIN_LINIPE_Pos       27           /**< \brief (US_CSR_LIN) LIN Identifier Parity Error */
#define US_CSR_LIN_LINIPE           (_U_(0x1) << US_CSR_LIN_LINIPE_Pos)
#define US_CSR_LIN_LINCE_Pos        28           /**< \brief (US_CSR_LIN) LIN Checksum Error */
#define US_CSR_LIN_LINCE            (_U_(0x1) << US_CSR_LIN_LINCE_Pos)
#define US_CSR_LIN_LINSNRE_Pos      29           /**< \brief (US_CSR_LIN) LIN Slave Not Responding Error */
#define US_CSR_LIN_LINSNRE          (_U_(0x1) << US_CSR_LIN_LINSNRE_Pos)
#define US_CSR_LIN_LINSTE_Pos       30           /**< \brief (US_CSR_LIN) LIN Synch Tolerance Error */
#define US_CSR_LIN_LINSTE           (_U_(0x1) << US_CSR_LIN_LINSTE_Pos)
#define   US_CSR_LIN_LINSTE_0_Val         _U_(0x0)   /**< \brief (US_CSR_LIN) COMM_TX is at 0 */
#define   US_CSR_LIN_LINSTE_1_Val         _U_(0x1)   /**< \brief (US_CSR_LIN) COMM_TX is at 1 */
#define US_CSR_LIN_LINSTE_0         (US_CSR_LIN_LINSTE_0_Val       << US_CSR_LIN_LINSTE_Pos)
#define US_CSR_LIN_LINSTE_1         (US_CSR_LIN_LINSTE_1_Val       << US_CSR_LIN_LINSTE_Pos)
#define US_CSR_LIN_LINHTE_Pos       31           /**< \brief (US_CSR_LIN) LIN Header Timeout Error */
#define US_CSR_LIN_LINHTE           (_U_(0x1) << US_CSR_LIN_LINHTE_Pos)
#define   US_CSR_LIN_LINHTE_0_Val         _U_(0x0)   /**< \brief (US_CSR_LIN) COMM_RX is at 0 */
#define   US_CSR_LIN_LINHTE_1_Val         _U_(0x1)   /**< \brief (US_CSR_LIN) COMM_RX is at 1 */
#define US_CSR_LIN_LINHTE_0         (US_CSR_LIN_LINHTE_0_Val       << US_CSR_LIN_LINHTE_Pos)
#define US_CSR_LIN_LINHTE_1         (US_CSR_LIN_LINHTE_1_Val       << US_CSR_LIN_LINHTE_Pos)
#define US_CSR_LIN_MASK             _U_(0xFEFFFFE7) /**< \brief (US_CSR_LIN) MASK Register */

// SPI_SLAVE mode
#define US_CSR_SPI_SLAVE_RXRDY_Pos  0            /**< \brief (US_CSR_SPI_SLAVE) Receiver Ready */
#define US_CSR_SPI_SLAVE_RXRDY      (_U_(0x1) << US_CSR_SPI_SLAVE_RXRDY_Pos)
#define   US_CSR_SPI_SLAVE_RXRDY_0_Val    _U_(0x0)   /**< \brief (US_CSR_SPI_SLAVE) No complete character has been received since the last read of RHR or the receiver is disabled. If characters werebeing received when the receiver was disabled, RXRDY changes to 1 when the receiver is enabled */
#define   US_CSR_SPI_SLAVE_RXRDY_1_Val    _U_(0x1)   /**< \brief (US_CSR_SPI_SLAVE) At least one complete character has been received and RHR has not yet been read */
#define US_CSR_SPI_SLAVE_RXRDY_0    (US_CSR_SPI_SLAVE_RXRDY_0_Val  << US_CSR_SPI_SLAVE_RXRDY_Pos)
#define US_CSR_SPI_SLAVE_RXRDY_1    (US_CSR_SPI_SLAVE_RXRDY_1_Val  << US_CSR_SPI_SLAVE_RXRDY_Pos)
#define US_CSR_SPI_SLAVE_TXRDY_Pos  1            /**< \brief (US_CSR_SPI_SLAVE) Transmitter Ready */
#define US_CSR_SPI_SLAVE_TXRDY      (_U_(0x1) << US_CSR_SPI_SLAVE_TXRDY_Pos)
#define   US_CSR_SPI_SLAVE_TXRDY_0_Val    _U_(0x0)   /**< \brief (US_CSR_SPI_SLAVE) A character is in the THR waiting to be transferred to the Transmit Shift Register, or an STTBRK command has been requested, or the transmitter is disabled. As soon as the transmitter is enabled, TXRDY becomes 1 */
#define   US_CSR_SPI_SLAVE_TXRDY_1_Val    _U_(0x1)   /**< \brief (US_CSR_SPI_SLAVE) There is no character in the THR */
#define US_CSR_SPI_SLAVE_TXRDY_0    (US_CSR_SPI_SLAVE_TXRDY_0_Val  << US_CSR_SPI_SLAVE_TXRDY_Pos)
#define US_CSR_SPI_SLAVE_TXRDY_1    (US_CSR_SPI_SLAVE_TXRDY_1_Val  << US_CSR_SPI_SLAVE_TXRDY_Pos)
#define US_CSR_SPI_SLAVE_RXBRK_Pos  2            /**< \brief (US_CSR_SPI_SLAVE) Break Received/End of Break */
#define US_CSR_SPI_SLAVE_RXBRK      (_U_(0x1) << US_CSR_SPI_SLAVE_RXBRK_Pos)
#define   US_CSR_SPI_SLAVE_RXBRK_0_Val    _U_(0x0)   /**< \brief (US_CSR_SPI_SLAVE) No Break received or End of Break detected since the last RSTSTA */
#define   US_CSR_SPI_SLAVE_RXBRK_1_Val    _U_(0x1)   /**< \brief (US_CSR_SPI_SLAVE) Break Received or End of Break detected since the last RSTSTA */
#define US_CSR_SPI_SLAVE_RXBRK_0    (US_CSR_SPI_SLAVE_RXBRK_0_Val  << US_CSR_SPI_SLAVE_RXBRK_Pos)
#define US_CSR_SPI_SLAVE_RXBRK_1    (US_CSR_SPI_SLAVE_RXBRK_1_Val  << US_CSR_SPI_SLAVE_RXBRK_Pos)
#define US_CSR_SPI_SLAVE_OVRE_Pos   5            /**< \brief (US_CSR_SPI_SLAVE) Overrun Error */
#define US_CSR_SPI_SLAVE_OVRE       (_U_(0x1) << US_CSR_SPI_SLAVE_OVRE_Pos)
#define   US_CSR_SPI_SLAVE_OVRE_0_Val     _U_(0x0)   /**< \brief (US_CSR_SPI_SLAVE) No overrun error has occurred since since the last RSTSTA */
#define   US_CSR_SPI_SLAVE_OVRE_1_Val     _U_(0x1)   /**< \brief (US_CSR_SPI_SLAVE) At least one overrun error has occurred since the last RSTSTA */
#define US_CSR_SPI_SLAVE_OVRE_0     (US_CSR_SPI_SLAVE_OVRE_0_Val   << US_CSR_SPI_SLAVE_OVRE_Pos)
#define US_CSR_SPI_SLAVE_OVRE_1     (US_CSR_SPI_SLAVE_OVRE_1_Val   << US_CSR_SPI_SLAVE_OVRE_Pos)
#define US_CSR_SPI_SLAVE_FRAME_Pos  6            /**< \brief (US_CSR_SPI_SLAVE) Framing Error */
#define US_CSR_SPI_SLAVE_FRAME      (_U_(0x1) << US_CSR_SPI_SLAVE_FRAME_Pos)
#define   US_CSR_SPI_SLAVE_FRAME_0_Val    _U_(0x0)   /**< \brief (US_CSR_SPI_SLAVE) No stop bit has been detected low since the last RSTSTA */
#define   US_CSR_SPI_SLAVE_FRAME_1_Val    _U_(0x1)   /**< \brief (US_CSR_SPI_SLAVE) At least one stop bit has been detected low since the last RSTSTA */
#define US_CSR_SPI_SLAVE_FRAME_0    (US_CSR_SPI_SLAVE_FRAME_0_Val  << US_CSR_SPI_SLAVE_FRAME_Pos)
#define US_CSR_SPI_SLAVE_FRAME_1    (US_CSR_SPI_SLAVE_FRAME_1_Val  << US_CSR_SPI_SLAVE_FRAME_Pos)
#define US_CSR_SPI_SLAVE_PARE_Pos   7            /**< \brief (US_CSR_SPI_SLAVE) Parity Error */
#define US_CSR_SPI_SLAVE_PARE       (_U_(0x1) << US_CSR_SPI_SLAVE_PARE_Pos)
#define   US_CSR_SPI_SLAVE_PARE_0_Val     _U_(0x0)   /**< \brief (US_CSR_SPI_SLAVE) No parity error has been detected since the last RSTSTA */
#define   US_CSR_SPI_SLAVE_PARE_1_Val     _U_(0x1)   /**< \brief (US_CSR_SPI_SLAVE) At least one parity error has been detected since the last RSTSTA */
#define US_CSR_SPI_SLAVE_PARE_0     (US_CSR_SPI_SLAVE_PARE_0_Val   << US_CSR_SPI_SLAVE_PARE_Pos)
#define US_CSR_SPI_SLAVE_PARE_1     (US_CSR_SPI_SLAVE_PARE_1_Val   << US_CSR_SPI_SLAVE_PARE_Pos)
#define US_CSR_SPI_SLAVE_TIMEOUT_Pos 8            /**< \brief (US_CSR_SPI_SLAVE) Receiver Time-out */
#define US_CSR_SPI_SLAVE_TIMEOUT    (_U_(0x1) << US_CSR_SPI_SLAVE_TIMEOUT_Pos)
#define   US_CSR_SPI_SLAVE_TIMEOUT_0_Val  _U_(0x0)   /**< \brief (US_CSR_SPI_SLAVE) There has not been a time-out since the last Start Time-out command or the Time-out Register is 0 */
#define   US_CSR_SPI_SLAVE_TIMEOUT_1_Val  _U_(0x1)   /**< \brief (US_CSR_SPI_SLAVE) There has been a time-out since the last Start Time-out command */
#define US_CSR_SPI_SLAVE_TIMEOUT_0  (US_CSR_SPI_SLAVE_TIMEOUT_0_Val << US_CSR_SPI_SLAVE_TIMEOUT_Pos)
#define US_CSR_SPI_SLAVE_TIMEOUT_1  (US_CSR_SPI_SLAVE_TIMEOUT_1_Val << US_CSR_SPI_SLAVE_TIMEOUT_Pos)
#define US_CSR_SPI_SLAVE_TXEMPTY_Pos 9            /**< \brief (US_CSR_SPI_SLAVE) Transmitter Empty */
#define US_CSR_SPI_SLAVE_TXEMPTY    (_U_(0x1) << US_CSR_SPI_SLAVE_TXEMPTY_Pos)
#define   US_CSR_SPI_SLAVE_TXEMPTY_0_Val  _U_(0x0)   /**< \brief (US_CSR_SPI_SLAVE) There are characters in either THR or the Transmit Shift Register, or the transmitter is disabled */
#define   US_CSR_SPI_SLAVE_TXEMPTY_1_Val  _U_(0x1)   /**< \brief (US_CSR_SPI_SLAVE) There is at least one character in either THR or the Transmit Shift Register */
#define US_CSR_SPI_SLAVE_TXEMPTY_0  (US_CSR_SPI_SLAVE_TXEMPTY_0_Val << US_CSR_SPI_SLAVE_TXEMPTY_Pos)
#define US_CSR_SPI_SLAVE_TXEMPTY_1  (US_CSR_SPI_SLAVE_TXEMPTY_1_Val << US_CSR_SPI_SLAVE_TXEMPTY_Pos)
#define US_CSR_SPI_SLAVE_UNRE_Pos   10           /**< \brief (US_CSR_SPI_SLAVE) SPI Underrun Error */
#define US_CSR_SPI_SLAVE_UNRE       (_U_(0x1) << US_CSR_SPI_SLAVE_UNRE_Pos)
#define   US_CSR_SPI_SLAVE_UNRE_0_Val     _U_(0x0)   /**< \brief (US_CSR_SPI_SLAVE) No SPI underrun error has occurred since the last RSTSTA */
#define   US_CSR_SPI_SLAVE_UNRE_1_Val     _U_(0x1)   /**< \brief (US_CSR_SPI_SLAVE) At least one SPI underrun error has occurred since the last RSTSTA */
#define US_CSR_SPI_SLAVE_UNRE_0     (US_CSR_SPI_SLAVE_UNRE_0_Val   << US_CSR_SPI_SLAVE_UNRE_Pos)
#define US_CSR_SPI_SLAVE_UNRE_1     (US_CSR_SPI_SLAVE_UNRE_1_Val   << US_CSR_SPI_SLAVE_UNRE_Pos)
#define US_CSR_SPI_SLAVE_TXBUFE_Pos 11           /**< \brief (US_CSR_SPI_SLAVE) Transmission Buffer Empty */
#define US_CSR_SPI_SLAVE_TXBUFE     (_U_(0x1) << US_CSR_SPI_SLAVE_TXBUFE_Pos)
#define   US_CSR_SPI_SLAVE_TXBUFE_0_Val   _U_(0x0)   /**< \brief (US_CSR_SPI_SLAVE) The signal Buffer Empty from the Transmit PDC channel is inactive */
#define   US_CSR_SPI_SLAVE_TXBUFE_1_Val   _U_(0x1)   /**< \brief (US_CSR_SPI_SLAVE) The signal Buffer Empty from the Transmit PDC channel is active */
#define US_CSR_SPI_SLAVE_TXBUFE_0   (US_CSR_SPI_SLAVE_TXBUFE_0_Val << US_CSR_SPI_SLAVE_TXBUFE_Pos)
#define US_CSR_SPI_SLAVE_TXBUFE_1   (US_CSR_SPI_SLAVE_TXBUFE_1_Val << US_CSR_SPI_SLAVE_TXBUFE_Pos)
#define US_CSR_SPI_SLAVE_RXBUFF_Pos 12           /**< \brief (US_CSR_SPI_SLAVE) Reception Buffer Full */
#define US_CSR_SPI_SLAVE_RXBUFF     (_U_(0x1) << US_CSR_SPI_SLAVE_RXBUFF_Pos)
#define   US_CSR_SPI_SLAVE_RXBUFF_0_Val   _U_(0x0)   /**< \brief (US_CSR_SPI_SLAVE) The signal Buffer Full from the Receive PDC channel is inactive */
#define   US_CSR_SPI_SLAVE_RXBUFF_1_Val   _U_(0x1)   /**< \brief (US_CSR_SPI_SLAVE) The signal Buffer Full from the Receive PDC channel is active */
#define US_CSR_SPI_SLAVE_RXBUFF_0   (US_CSR_SPI_SLAVE_RXBUFF_0_Val << US_CSR_SPI_SLAVE_RXBUFF_Pos)
#define US_CSR_SPI_SLAVE_RXBUFF_1   (US_CSR_SPI_SLAVE_RXBUFF_1_Val << US_CSR_SPI_SLAVE_RXBUFF_Pos)
#define US_CSR_SPI_SLAVE_NACK_Pos   13           /**< \brief (US_CSR_SPI_SLAVE) Non Acknowledge */
#define US_CSR_SPI_SLAVE_NACK       (_U_(0x1) << US_CSR_SPI_SLAVE_NACK_Pos)
#define   US_CSR_SPI_SLAVE_NACK_0_Val     _U_(0x0)   /**< \brief (US_CSR_SPI_SLAVE) No Non Acknowledge has not been detected since the last RSTNACK */
#define   US_CSR_SPI_SLAVE_NACK_1_Val     _U_(0x1)   /**< \brief (US_CSR_SPI_SLAVE) At least one Non Acknowledge has been detected since the last RSTNACK */
#define US_CSR_SPI_SLAVE_NACK_0     (US_CSR_SPI_SLAVE_NACK_0_Val   << US_CSR_SPI_SLAVE_NACK_Pos)
#define US_CSR_SPI_SLAVE_NACK_1     (US_CSR_SPI_SLAVE_NACK_1_Val   << US_CSR_SPI_SLAVE_NACK_Pos)
#define US_CSR_SPI_SLAVE_RIIC_Pos   16           /**< \brief (US_CSR_SPI_SLAVE) Ring Indicator Input Change Flag */
#define US_CSR_SPI_SLAVE_RIIC       (_U_(0x1) << US_CSR_SPI_SLAVE_RIIC_Pos)
#define   US_CSR_SPI_SLAVE_RIIC_0_Val     _U_(0x0)   /**< \brief (US_CSR_SPI_SLAVE) No input change has been detected on the RI pin since the last read of CSR */
#define   US_CSR_SPI_SLAVE_RIIC_1_Val     _U_(0x1)   /**< \brief (US_CSR_SPI_SLAVE) At least one input change has been detected on the RI pin since the last read of CSR */
#define US_CSR_SPI_SLAVE_RIIC_0     (US_CSR_SPI_SLAVE_RIIC_0_Val   << US_CSR_SPI_SLAVE_RIIC_Pos)
#define US_CSR_SPI_SLAVE_RIIC_1     (US_CSR_SPI_SLAVE_RIIC_1_Val   << US_CSR_SPI_SLAVE_RIIC_Pos)
#define US_CSR_SPI_SLAVE_DSRIC_Pos  17           /**< \brief (US_CSR_SPI_SLAVE) Data Set Ready Input Change Flag */
#define US_CSR_SPI_SLAVE_DSRIC      (_U_(0x1) << US_CSR_SPI_SLAVE_DSRIC_Pos)
#define   US_CSR_SPI_SLAVE_DSRIC_0_Val    _U_(0x0)   /**< \brief (US_CSR_SPI_SLAVE) No input change has been detected on the DSR pin since the last read of CSR */
#define   US_CSR_SPI_SLAVE_DSRIC_1_Val    _U_(0x1)   /**< \brief (US_CSR_SPI_SLAVE) At least one input change has been detected on the DSR pin since the last read of CSR */
#define US_CSR_SPI_SLAVE_DSRIC_0    (US_CSR_SPI_SLAVE_DSRIC_0_Val  << US_CSR_SPI_SLAVE_DSRIC_Pos)
#define US_CSR_SPI_SLAVE_DSRIC_1    (US_CSR_SPI_SLAVE_DSRIC_1_Val  << US_CSR_SPI_SLAVE_DSRIC_Pos)
#define US_CSR_SPI_SLAVE_DCDIC_Pos  18           /**< \brief (US_CSR_SPI_SLAVE) Data Carrier Detect Input Change Flag */
#define US_CSR_SPI_SLAVE_DCDIC      (_U_(0x1) << US_CSR_SPI_SLAVE_DCDIC_Pos)
#define   US_CSR_SPI_SLAVE_DCDIC_0_Val    _U_(0x0)   /**< \brief (US_CSR_SPI_SLAVE) No input change has been detected on the DCD pin since the last read of CSR */
#define   US_CSR_SPI_SLAVE_DCDIC_1_Val    _U_(0x1)   /**< \brief (US_CSR_SPI_SLAVE) At least one input change has been detected on the DCD pin since the last read of CSR */
#define US_CSR_SPI_SLAVE_DCDIC_0    (US_CSR_SPI_SLAVE_DCDIC_0_Val  << US_CSR_SPI_SLAVE_DCDIC_Pos)
#define US_CSR_SPI_SLAVE_DCDIC_1    (US_CSR_SPI_SLAVE_DCDIC_1_Val  << US_CSR_SPI_SLAVE_DCDIC_Pos)
#define US_CSR_SPI_SLAVE_CTSIC_Pos  19           /**< \brief (US_CSR_SPI_SLAVE) Clear to Send Input Change Flag */
#define US_CSR_SPI_SLAVE_CTSIC      (_U_(0x1) << US_CSR_SPI_SLAVE_CTSIC_Pos)
#define   US_CSR_SPI_SLAVE_CTSIC_0_Val    _U_(0x0)   /**< \brief (US_CSR_SPI_SLAVE) No input change has been detected on the CTS pin since the last read of CSR */
#define   US_CSR_SPI_SLAVE_CTSIC_1_Val    _U_(0x1)   /**< \brief (US_CSR_SPI_SLAVE) At least one input change has been detected on the CTS pin since the last read of CSR */
#define US_CSR_SPI_SLAVE_CTSIC_0    (US_CSR_SPI_SLAVE_CTSIC_0_Val  << US_CSR_SPI_SLAVE_CTSIC_Pos)
#define US_CSR_SPI_SLAVE_CTSIC_1    (US_CSR_SPI_SLAVE_CTSIC_1_Val  << US_CSR_SPI_SLAVE_CTSIC_Pos)
#define US_CSR_SPI_SLAVE_RI_Pos     20           /**< \brief (US_CSR_SPI_SLAVE) Image of RI Input */
#define US_CSR_SPI_SLAVE_RI         (_U_(0x1) << US_CSR_SPI_SLAVE_RI_Pos)
#define   US_CSR_SPI_SLAVE_RI_0_Val       _U_(0x0)   /**< \brief (US_CSR_SPI_SLAVE) RI is at 0 */
#define   US_CSR_SPI_SLAVE_RI_1_Val       _U_(0x1)   /**< \brief (US_CSR_SPI_SLAVE) RI is at 1 */
#define US_CSR_SPI_SLAVE_RI_0       (US_CSR_SPI_SLAVE_RI_0_Val     << US_CSR_SPI_SLAVE_RI_Pos)
#define US_CSR_SPI_SLAVE_RI_1       (US_CSR_SPI_SLAVE_RI_1_Val     << US_CSR_SPI_SLAVE_RI_Pos)
#define US_CSR_SPI_SLAVE_DSR_Pos    21           /**< \brief (US_CSR_SPI_SLAVE) Image of DSR Input */
#define US_CSR_SPI_SLAVE_DSR        (_U_(0x1) << US_CSR_SPI_SLAVE_DSR_Pos)
#define   US_CSR_SPI_SLAVE_DSR_0_Val      _U_(0x0)   /**< \brief (US_CSR_SPI_SLAVE) DSR is at 0 */
#define   US_CSR_SPI_SLAVE_DSR_1_Val      _U_(0x1)   /**< \brief (US_CSR_SPI_SLAVE) DSR is at 1 */
#define US_CSR_SPI_SLAVE_DSR_0      (US_CSR_SPI_SLAVE_DSR_0_Val    << US_CSR_SPI_SLAVE_DSR_Pos)
#define US_CSR_SPI_SLAVE_DSR_1      (US_CSR_SPI_SLAVE_DSR_1_Val    << US_CSR_SPI_SLAVE_DSR_Pos)
#define US_CSR_SPI_SLAVE_DCD_Pos    22           /**< \brief (US_CSR_SPI_SLAVE) Image of DCD Input */
#define US_CSR_SPI_SLAVE_DCD        (_U_(0x1) << US_CSR_SPI_SLAVE_DCD_Pos)
#define   US_CSR_SPI_SLAVE_DCD_0_Val      _U_(0x0)   /**< \brief (US_CSR_SPI_SLAVE) DCD is at 0 */
#define   US_CSR_SPI_SLAVE_DCD_1_Val      _U_(0x1)   /**< \brief (US_CSR_SPI_SLAVE) DCD is at 1 */
#define US_CSR_SPI_SLAVE_DCD_0      (US_CSR_SPI_SLAVE_DCD_0_Val    << US_CSR_SPI_SLAVE_DCD_Pos)
#define US_CSR_SPI_SLAVE_DCD_1      (US_CSR_SPI_SLAVE_DCD_1_Val    << US_CSR_SPI_SLAVE_DCD_Pos)
#define US_CSR_SPI_SLAVE_CTS_Pos    23           /**< \brief (US_CSR_SPI_SLAVE) Image of CTS Input */
#define US_CSR_SPI_SLAVE_CTS        (_U_(0x1) << US_CSR_SPI_SLAVE_CTS_Pos)
#define   US_CSR_SPI_SLAVE_CTS_0_Val      _U_(0x0)   /**< \brief (US_CSR_SPI_SLAVE) CTS is at 0 */
#define   US_CSR_SPI_SLAVE_CTS_1_Val      _U_(0x1)   /**< \brief (US_CSR_SPI_SLAVE) CTS is at 1 */
#define US_CSR_SPI_SLAVE_CTS_0      (US_CSR_SPI_SLAVE_CTS_0_Val    << US_CSR_SPI_SLAVE_CTS_Pos)
#define US_CSR_SPI_SLAVE_CTS_1      (US_CSR_SPI_SLAVE_CTS_1_Val    << US_CSR_SPI_SLAVE_CTS_Pos)
#define US_CSR_SPI_SLAVE_MASK       _U_(0x00FF3FE7) /**< \brief (US_CSR_SPI_SLAVE) MASK Register */

// USART mode
#define US_CSR_USART_RXRDY_Pos      0            /**< \brief (US_CSR_USART) Receiver Ready */
#define US_CSR_USART_RXRDY          (_U_(0x1) << US_CSR_USART_RXRDY_Pos)
#define   US_CSR_USART_RXRDY_0_Val        _U_(0x0)   /**< \brief (US_CSR_USART) No complete character has been received since the last read of RHR or the receiver is disabled. If characters werebeing received when the receiver was disabled, RXRDY changes to 1 when the receiver is enabled */
#define   US_CSR_USART_RXRDY_1_Val        _U_(0x1)   /**< \brief (US_CSR_USART) At least one complete character has been received and RHR has not yet been read */
#define US_CSR_USART_RXRDY_0        (US_CSR_USART_RXRDY_0_Val      << US_CSR_USART_RXRDY_Pos)
#define US_CSR_USART_RXRDY_1        (US_CSR_USART_RXRDY_1_Val      << US_CSR_USART_RXRDY_Pos)
#define US_CSR_USART_TXRDY_Pos      1            /**< \brief (US_CSR_USART) Transmitter Ready */
#define US_CSR_USART_TXRDY          (_U_(0x1) << US_CSR_USART_TXRDY_Pos)
#define   US_CSR_USART_TXRDY_0_Val        _U_(0x0)   /**< \brief (US_CSR_USART) A character is in the THR waiting to be transferred to the Transmit Shift Register, or an STTBRK command has been requested, or the transmitter is disabled. As soon as the transmitter is enabled, TXRDY becomes 1 */
#define   US_CSR_USART_TXRDY_1_Val        _U_(0x1)   /**< \brief (US_CSR_USART) There is no character in the THR */
#define US_CSR_USART_TXRDY_0        (US_CSR_USART_TXRDY_0_Val      << US_CSR_USART_TXRDY_Pos)
#define US_CSR_USART_TXRDY_1        (US_CSR_USART_TXRDY_1_Val      << US_CSR_USART_TXRDY_Pos)
#define US_CSR_USART_RXBRK_Pos      2            /**< \brief (US_CSR_USART) Break Received/End of Break */
#define US_CSR_USART_RXBRK          (_U_(0x1) << US_CSR_USART_RXBRK_Pos)
#define   US_CSR_USART_RXBRK_0_Val        _U_(0x0)   /**< \brief (US_CSR_USART) No Break received or End of Break detected since the last RSTSTA */
#define   US_CSR_USART_RXBRK_1_Val        _U_(0x1)   /**< \brief (US_CSR_USART) Break Received or End of Break detected since the last RSTSTA */
#define US_CSR_USART_RXBRK_0        (US_CSR_USART_RXBRK_0_Val      << US_CSR_USART_RXBRK_Pos)
#define US_CSR_USART_RXBRK_1        (US_CSR_USART_RXBRK_1_Val      << US_CSR_USART_RXBRK_Pos)
#define US_CSR_USART_OVRE_Pos       5            /**< \brief (US_CSR_USART) Overrun Error */
#define US_CSR_USART_OVRE           (_U_(0x1) << US_CSR_USART_OVRE_Pos)
#define   US_CSR_USART_OVRE_0_Val         _U_(0x0)   /**< \brief (US_CSR_USART) No overrun error has occurred since since the last RSTSTA */
#define   US_CSR_USART_OVRE_1_Val         _U_(0x1)   /**< \brief (US_CSR_USART) At least one overrun error has occurred since the last RSTSTA */
#define US_CSR_USART_OVRE_0         (US_CSR_USART_OVRE_0_Val       << US_CSR_USART_OVRE_Pos)
#define US_CSR_USART_OVRE_1         (US_CSR_USART_OVRE_1_Val       << US_CSR_USART_OVRE_Pos)
#define US_CSR_USART_FRAME_Pos      6            /**< \brief (US_CSR_USART) Framing Error */
#define US_CSR_USART_FRAME          (_U_(0x1) << US_CSR_USART_FRAME_Pos)
#define   US_CSR_USART_FRAME_0_Val        _U_(0x0)   /**< \brief (US_CSR_USART) No stop bit has been detected low since the last RSTSTA */
#define   US_CSR_USART_FRAME_1_Val        _U_(0x1)   /**< \brief (US_CSR_USART) At least one stop bit has been detected low since the last RSTSTA */
#define US_CSR_USART_FRAME_0        (US_CSR_USART_FRAME_0_Val      << US_CSR_USART_FRAME_Pos)
#define US_CSR_USART_FRAME_1        (US_CSR_USART_FRAME_1_Val      << US_CSR_USART_FRAME_Pos)
#define US_CSR_USART_PARE_Pos       7            /**< \brief (US_CSR_USART) Parity Error */
#define US_CSR_USART_PARE           (_U_(0x1) << US_CSR_USART_PARE_Pos)
#define   US_CSR_USART_PARE_0_Val         _U_(0x0)   /**< \brief (US_CSR_USART) No parity error has been detected since the last RSTSTA */
#define   US_CSR_USART_PARE_1_Val         _U_(0x1)   /**< \brief (US_CSR_USART) At least one parity error has been detected since the last RSTSTA */
#define US_CSR_USART_PARE_0         (US_CSR_USART_PARE_0_Val       << US_CSR_USART_PARE_Pos)
#define US_CSR_USART_PARE_1         (US_CSR_USART_PARE_1_Val       << US_CSR_USART_PARE_Pos)
#define US_CSR_USART_TIMEOUT_Pos    8            /**< \brief (US_CSR_USART) Receiver Time-out */
#define US_CSR_USART_TIMEOUT        (_U_(0x1) << US_CSR_USART_TIMEOUT_Pos)
#define   US_CSR_USART_TIMEOUT_0_Val      _U_(0x0)   /**< \brief (US_CSR_USART) There has not been a time-out since the last Start Time-out command or the Time-out Register is 0 */
#define   US_CSR_USART_TIMEOUT_1_Val      _U_(0x1)   /**< \brief (US_CSR_USART) There has been a time-out since the last Start Time-out command */
#define US_CSR_USART_TIMEOUT_0      (US_CSR_USART_TIMEOUT_0_Val    << US_CSR_USART_TIMEOUT_Pos)
#define US_CSR_USART_TIMEOUT_1      (US_CSR_USART_TIMEOUT_1_Val    << US_CSR_USART_TIMEOUT_Pos)
#define US_CSR_USART_TXEMPTY_Pos    9            /**< \brief (US_CSR_USART) Transmitter Empty */
#define US_CSR_USART_TXEMPTY        (_U_(0x1) << US_CSR_USART_TXEMPTY_Pos)
#define   US_CSR_USART_TXEMPTY_0_Val      _U_(0x0)   /**< \brief (US_CSR_USART) There are characters in either THR or the Transmit Shift Register, or the transmitter is disabled */
#define   US_CSR_USART_TXEMPTY_1_Val      _U_(0x1)   /**< \brief (US_CSR_USART) There is at least one character in either THR or the Transmit Shift Register */
#define US_CSR_USART_TXEMPTY_0      (US_CSR_USART_TXEMPTY_0_Val    << US_CSR_USART_TXEMPTY_Pos)
#define US_CSR_USART_TXEMPTY_1      (US_CSR_USART_TXEMPTY_1_Val    << US_CSR_USART_TXEMPTY_Pos)
#define US_CSR_USART_ITER_Pos       10           /**< \brief (US_CSR_USART) Max number of Repetitions Reached */
#define US_CSR_USART_ITER           (_U_(0x1) << US_CSR_USART_ITER_Pos)
#define   US_CSR_USART_ITER_0_Val         _U_(0x0)   /**< \brief (US_CSR_USART) Maximum number of repetitions has not been reached since the last RSIT */
#define   US_CSR_USART_ITER_1_Val         _U_(0x1)   /**< \brief (US_CSR_USART) Maximum number of repetitions has been reached since the last RSIT */
#define US_CSR_USART_ITER_0         (US_CSR_USART_ITER_0_Val       << US_CSR_USART_ITER_Pos)
#define US_CSR_USART_ITER_1         (US_CSR_USART_ITER_1_Val       << US_CSR_USART_ITER_Pos)
#define US_CSR_USART_TXBUFE_Pos     11           /**< \brief (US_CSR_USART) Transmission Buffer Empty */
#define US_CSR_USART_TXBUFE         (_U_(0x1) << US_CSR_USART_TXBUFE_Pos)
#define   US_CSR_USART_TXBUFE_0_Val       _U_(0x0)   /**< \brief (US_CSR_USART) The signal Buffer Empty from the Transmit PDC channel is inactive */
#define   US_CSR_USART_TXBUFE_1_Val       _U_(0x1)   /**< \brief (US_CSR_USART) The signal Buffer Empty from the Transmit PDC channel is active */
#define US_CSR_USART_TXBUFE_0       (US_CSR_USART_TXBUFE_0_Val     << US_CSR_USART_TXBUFE_Pos)
#define US_CSR_USART_TXBUFE_1       (US_CSR_USART_TXBUFE_1_Val     << US_CSR_USART_TXBUFE_Pos)
#define US_CSR_USART_RXBUFF_Pos     12           /**< \brief (US_CSR_USART) Reception Buffer Full */
#define US_CSR_USART_RXBUFF         (_U_(0x1) << US_CSR_USART_RXBUFF_Pos)
#define   US_CSR_USART_RXBUFF_0_Val       _U_(0x0)   /**< \brief (US_CSR_USART) The signal Buffer Full from the Receive PDC channel is inactive */
#define   US_CSR_USART_RXBUFF_1_Val       _U_(0x1)   /**< \brief (US_CSR_USART) The signal Buffer Full from the Receive PDC channel is active */
#define US_CSR_USART_RXBUFF_0       (US_CSR_USART_RXBUFF_0_Val     << US_CSR_USART_RXBUFF_Pos)
#define US_CSR_USART_RXBUFF_1       (US_CSR_USART_RXBUFF_1_Val     << US_CSR_USART_RXBUFF_Pos)
#define US_CSR_USART_NACK_Pos       13           /**< \brief (US_CSR_USART) Non Acknowledge */
#define US_CSR_USART_NACK           (_U_(0x1) << US_CSR_USART_NACK_Pos)
#define   US_CSR_USART_NACK_0_Val         _U_(0x0)   /**< \brief (US_CSR_USART) No Non Acknowledge has not been detected since the last RSTNACK */
#define   US_CSR_USART_NACK_1_Val         _U_(0x1)   /**< \brief (US_CSR_USART) At least one Non Acknowledge has been detected since the last RSTNACK */
#define US_CSR_USART_NACK_0         (US_CSR_USART_NACK_0_Val       << US_CSR_USART_NACK_Pos)
#define US_CSR_USART_NACK_1         (US_CSR_USART_NACK_1_Val       << US_CSR_USART_NACK_Pos)
#define US_CSR_USART_RIIC_Pos       16           /**< \brief (US_CSR_USART) Ring Indicator Input Change Flag */
#define US_CSR_USART_RIIC           (_U_(0x1) << US_CSR_USART_RIIC_Pos)
#define   US_CSR_USART_RIIC_0_Val         _U_(0x0)   /**< \brief (US_CSR_USART) No input change has been detected on the RI pin since the last read of CSR */
#define   US_CSR_USART_RIIC_1_Val         _U_(0x1)   /**< \brief (US_CSR_USART) At least one input change has been detected on the RI pin since the last read of CSR */
#define US_CSR_USART_RIIC_0         (US_CSR_USART_RIIC_0_Val       << US_CSR_USART_RIIC_Pos)
#define US_CSR_USART_RIIC_1         (US_CSR_USART_RIIC_1_Val       << US_CSR_USART_RIIC_Pos)
#define US_CSR_USART_DSRIC_Pos      17           /**< \brief (US_CSR_USART) Data Set Ready Input Change Flag */
#define US_CSR_USART_DSRIC          (_U_(0x1) << US_CSR_USART_DSRIC_Pos)
#define   US_CSR_USART_DSRIC_0_Val        _U_(0x0)   /**< \brief (US_CSR_USART) No input change has been detected on the DSR pin since the last read of CSR */
#define   US_CSR_USART_DSRIC_1_Val        _U_(0x1)   /**< \brief (US_CSR_USART) At least one input change has been detected on the DSR pin since the last read of CSR */
#define US_CSR_USART_DSRIC_0        (US_CSR_USART_DSRIC_0_Val      << US_CSR_USART_DSRIC_Pos)
#define US_CSR_USART_DSRIC_1        (US_CSR_USART_DSRIC_1_Val      << US_CSR_USART_DSRIC_Pos)
#define US_CSR_USART_DCDIC_Pos      18           /**< \brief (US_CSR_USART) Data Carrier Detect Input Change Flag */
#define US_CSR_USART_DCDIC          (_U_(0x1) << US_CSR_USART_DCDIC_Pos)
#define   US_CSR_USART_DCDIC_0_Val        _U_(0x0)   /**< \brief (US_CSR_USART) No input change has been detected on the DCD pin since the last read of CSR */
#define   US_CSR_USART_DCDIC_1_Val        _U_(0x1)   /**< \brief (US_CSR_USART) At least one input change has been detected on the DCD pin since the last read of CSR */
#define US_CSR_USART_DCDIC_0        (US_CSR_USART_DCDIC_0_Val      << US_CSR_USART_DCDIC_Pos)
#define US_CSR_USART_DCDIC_1        (US_CSR_USART_DCDIC_1_Val      << US_CSR_USART_DCDIC_Pos)
#define US_CSR_USART_CTSIC_Pos      19           /**< \brief (US_CSR_USART) Clear to Send Input Change Flag */
#define US_CSR_USART_CTSIC          (_U_(0x1) << US_CSR_USART_CTSIC_Pos)
#define   US_CSR_USART_CTSIC_0_Val        _U_(0x0)   /**< \brief (US_CSR_USART) No input change has been detected on the CTS pin since the last read of CSR */
#define   US_CSR_USART_CTSIC_1_Val        _U_(0x1)   /**< \brief (US_CSR_USART) At least one input change has been detected on the CTS pin since the last read of CSR */
#define US_CSR_USART_CTSIC_0        (US_CSR_USART_CTSIC_0_Val      << US_CSR_USART_CTSIC_Pos)
#define US_CSR_USART_CTSIC_1        (US_CSR_USART_CTSIC_1_Val      << US_CSR_USART_CTSIC_Pos)
#define US_CSR_USART_RI_Pos         20           /**< \brief (US_CSR_USART) Image of RI Input */
#define US_CSR_USART_RI             (_U_(0x1) << US_CSR_USART_RI_Pos)
#define   US_CSR_USART_RI_0_Val           _U_(0x0)   /**< \brief (US_CSR_USART) RI is at 0 */
#define   US_CSR_USART_RI_1_Val           _U_(0x1)   /**< \brief (US_CSR_USART) RI is at 1 */
#define US_CSR_USART_RI_0           (US_CSR_USART_RI_0_Val         << US_CSR_USART_RI_Pos)
#define US_CSR_USART_RI_1           (US_CSR_USART_RI_1_Val         << US_CSR_USART_RI_Pos)
#define US_CSR_USART_DSR_Pos        21           /**< \brief (US_CSR_USART) Image of DSR Input */
#define US_CSR_USART_DSR            (_U_(0x1) << US_CSR_USART_DSR_Pos)
#define   US_CSR_USART_DSR_0_Val          _U_(0x0)   /**< \brief (US_CSR_USART) DSR is at 0 */
#define   US_CSR_USART_DSR_1_Val          _U_(0x1)   /**< \brief (US_CSR_USART) DSR is at 1 */
#define US_CSR_USART_DSR_0          (US_CSR_USART_DSR_0_Val        << US_CSR_USART_DSR_Pos)
#define US_CSR_USART_DSR_1          (US_CSR_USART_DSR_1_Val        << US_CSR_USART_DSR_Pos)
#define US_CSR_USART_DCD_Pos        22           /**< \brief (US_CSR_USART) Image of DCD Input */
#define US_CSR_USART_DCD            (_U_(0x1) << US_CSR_USART_DCD_Pos)
#define   US_CSR_USART_DCD_0_Val          _U_(0x0)   /**< \brief (US_CSR_USART) DCD is at 0 */
#define   US_CSR_USART_DCD_1_Val          _U_(0x1)   /**< \brief (US_CSR_USART) DCD is at 1 */
#define US_CSR_USART_DCD_0          (US_CSR_USART_DCD_0_Val        << US_CSR_USART_DCD_Pos)
#define US_CSR_USART_DCD_1          (US_CSR_USART_DCD_1_Val        << US_CSR_USART_DCD_Pos)
#define US_CSR_USART_CTS_Pos        23           /**< \brief (US_CSR_USART) Image of CTS Input */
#define US_CSR_USART_CTS            (_U_(0x1) << US_CSR_USART_CTS_Pos)
#define   US_CSR_USART_CTS_0_Val          _U_(0x0)   /**< \brief (US_CSR_USART) CTS is at 0 */
#define   US_CSR_USART_CTS_1_Val          _U_(0x1)   /**< \brief (US_CSR_USART) CTS is at 1 */
#define US_CSR_USART_CTS_0          (US_CSR_USART_CTS_0_Val        << US_CSR_USART_CTS_Pos)
#define US_CSR_USART_CTS_1          (US_CSR_USART_CTS_1_Val        << US_CSR_USART_CTS_Pos)
#define US_CSR_USART_MANERR_Pos     24           /**< \brief (US_CSR_USART) Manchester Error */
#define US_CSR_USART_MANERR         (_U_(0x1) << US_CSR_USART_MANERR_Pos)
#define   US_CSR_USART_MANERR_0_Val       _U_(0x0)   /**< \brief (US_CSR_USART) No Manchester error has been detected since the last RSTSTA */
#define   US_CSR_USART_MANERR_1_Val       _U_(0x1)   /**< \brief (US_CSR_USART) At least one Manchester error has been detected since the last RSTSTA */
#define US_CSR_USART_MANERR_0       (US_CSR_USART_MANERR_0_Val     << US_CSR_USART_MANERR_Pos)
#define US_CSR_USART_MANERR_1       (US_CSR_USART_MANERR_1_Val     << US_CSR_USART_MANERR_Pos)
#define US_CSR_USART_MASK           _U_(0x01FF3FE7) /**< \brief (US_CSR_USART) MASK Register */

// Any mode
#define US_CSR_RXRDY_Pos            0            /**< \brief (US_CSR) Receiver Ready */
#define US_CSR_RXRDY                (_U_(0x1) << US_CSR_RXRDY_Pos)
#define   US_CSR_RXRDY_0_Val              _U_(0x0)   /**< \brief (US_CSR) No complete character has been received since the last read of RHR or the receiver is disabled. If characters werebeing received when the receiver was disabled, RXRDY changes to 1 when the receiver is enabled */
#define   US_CSR_RXRDY_1_Val              _U_(0x1)   /**< \brief (US_CSR) At least one complete character has been received and RHR has not yet been read */
#define US_CSR_RXRDY_0              (US_CSR_RXRDY_0_Val            << US_CSR_RXRDY_Pos)
#define US_CSR_RXRDY_1              (US_CSR_RXRDY_1_Val            << US_CSR_RXRDY_Pos)
#define US_CSR_TXRDY_Pos            1            /**< \brief (US_CSR) Transmitter Ready */
#define US_CSR_TXRDY                (_U_(0x1) << US_CSR_TXRDY_Pos)
#define   US_CSR_TXRDY_0_Val              _U_(0x0)   /**< \brief (US_CSR) A character is in the THR waiting to be transferred to the Transmit Shift Register, or an STTBRK command has been requested, or the transmitter is disabled. As soon as the transmitter is enabled, TXRDY becomes 1 */
#define   US_CSR_TXRDY_1_Val              _U_(0x1)   /**< \brief (US_CSR) There is no character in the THR */
#define US_CSR_TXRDY_0              (US_CSR_TXRDY_0_Val            << US_CSR_TXRDY_Pos)
#define US_CSR_TXRDY_1              (US_CSR_TXRDY_1_Val            << US_CSR_TXRDY_Pos)
#define US_CSR_RXBRK_Pos            2            /**< \brief (US_CSR) Break Received/End of Break */
#define US_CSR_RXBRK                (_U_(0x1) << US_CSR_RXBRK_Pos)
#define   US_CSR_RXBRK_0_Val              _U_(0x0)   /**< \brief (US_CSR) No Break received or End of Break detected since the last RSTSTA */
#define   US_CSR_RXBRK_1_Val              _U_(0x1)   /**< \brief (US_CSR) Break Received or End of Break detected since the last RSTSTA */
#define US_CSR_RXBRK_0              (US_CSR_RXBRK_0_Val            << US_CSR_RXBRK_Pos)
#define US_CSR_RXBRK_1              (US_CSR_RXBRK_1_Val            << US_CSR_RXBRK_Pos)
#define US_CSR_OVRE_Pos             5            /**< \brief (US_CSR) Overrun Error */
#define US_CSR_OVRE                 (_U_(0x1) << US_CSR_OVRE_Pos)
#define   US_CSR_OVRE_0_Val               _U_(0x0)   /**< \brief (US_CSR) No overrun error has occurred since since the last RSTSTA */
#define   US_CSR_OVRE_1_Val               _U_(0x1)   /**< \brief (US_CSR) At least one overrun error has occurred since the last RSTSTA */
#define US_CSR_OVRE_0               (US_CSR_OVRE_0_Val             << US_CSR_OVRE_Pos)
#define US_CSR_OVRE_1               (US_CSR_OVRE_1_Val             << US_CSR_OVRE_Pos)
#define US_CSR_FRAME_Pos            6            /**< \brief (US_CSR) Framing Error */
#define US_CSR_FRAME                (_U_(0x1) << US_CSR_FRAME_Pos)
#define   US_CSR_FRAME_0_Val              _U_(0x0)   /**< \brief (US_CSR) No stop bit has been detected low since the last RSTSTA */
#define   US_CSR_FRAME_1_Val              _U_(0x1)   /**< \brief (US_CSR) At least one stop bit has been detected low since the last RSTSTA */
#define US_CSR_FRAME_0              (US_CSR_FRAME_0_Val            << US_CSR_FRAME_Pos)
#define US_CSR_FRAME_1              (US_CSR_FRAME_1_Val            << US_CSR_FRAME_Pos)
#define US_CSR_PARE_Pos             7            /**< \brief (US_CSR) Parity Error */
#define US_CSR_PARE                 (_U_(0x1) << US_CSR_PARE_Pos)
#define   US_CSR_PARE_0_Val               _U_(0x0)   /**< \brief (US_CSR) No parity error has been detected since the last RSTSTA */
#define   US_CSR_PARE_1_Val               _U_(0x1)   /**< \brief (US_CSR) At least one parity error has been detected since the last RSTSTA */
#define US_CSR_PARE_0               (US_CSR_PARE_0_Val             << US_CSR_PARE_Pos)
#define US_CSR_PARE_1               (US_CSR_PARE_1_Val             << US_CSR_PARE_Pos)
#define US_CSR_TIMEOUT_Pos          8            /**< \brief (US_CSR) Receiver Time-out */
#define US_CSR_TIMEOUT              (_U_(0x1) << US_CSR_TIMEOUT_Pos)
#define   US_CSR_TIMEOUT_0_Val            _U_(0x0)   /**< \brief (US_CSR) There has not been a time-out since the last Start Time-out command or the Time-out Register is 0 */
#define   US_CSR_TIMEOUT_1_Val            _U_(0x1)   /**< \brief (US_CSR) There has been a time-out since the last Start Time-out command */
#define US_CSR_TIMEOUT_0            (US_CSR_TIMEOUT_0_Val          << US_CSR_TIMEOUT_Pos)
#define US_CSR_TIMEOUT_1            (US_CSR_TIMEOUT_1_Val          << US_CSR_TIMEOUT_Pos)
#define US_CSR_TXEMPTY_Pos          9            /**< \brief (US_CSR) Transmitter Empty */
#define US_CSR_TXEMPTY              (_U_(0x1) << US_CSR_TXEMPTY_Pos)
#define   US_CSR_TXEMPTY_0_Val            _U_(0x0)   /**< \brief (US_CSR) There are characters in either THR or the Transmit Shift Register, or the transmitter is disabled */
#define   US_CSR_TXEMPTY_1_Val            _U_(0x1)   /**< \brief (US_CSR) There is at least one character in either THR or the Transmit Shift Register */
#define US_CSR_TXEMPTY_0            (US_CSR_TXEMPTY_0_Val          << US_CSR_TXEMPTY_Pos)
#define US_CSR_TXEMPTY_1            (US_CSR_TXEMPTY_1_Val          << US_CSR_TXEMPTY_Pos)
#define US_CSR_ITER_Pos             10           /**< \brief (US_CSR) Max number of Repetitions Reached */
#define US_CSR_ITER                 (_U_(0x1) << US_CSR_ITER_Pos)
#define   US_CSR_ITER_0_Val               _U_(0x0)   /**< \brief (US_CSR) Maximum number of repetitions has not been reached since the last RSIT */
#define   US_CSR_ITER_1_Val               _U_(0x1)   /**< \brief (US_CSR) Maximum number of repetitions has been reached since the last RSIT */
#define US_CSR_ITER_0               (US_CSR_ITER_0_Val             << US_CSR_ITER_Pos)
#define US_CSR_ITER_1               (US_CSR_ITER_1_Val             << US_CSR_ITER_Pos)
#define US_CSR_UNRE_Pos             10           /**< \brief (US_CSR) SPI Underrun Error */
#define US_CSR_UNRE                 (_U_(0x1) << US_CSR_UNRE_Pos)
#define   US_CSR_UNRE_0_Val               _U_(0x0)   /**< \brief (US_CSR) No SPI underrun error has occurred since the last RSTSTA */
#define   US_CSR_UNRE_1_Val               _U_(0x1)   /**< \brief (US_CSR) At least one SPI underrun error has occurred since the last RSTSTA */
#define US_CSR_UNRE_0               (US_CSR_UNRE_0_Val             << US_CSR_UNRE_Pos)
#define US_CSR_UNRE_1               (US_CSR_UNRE_1_Val             << US_CSR_UNRE_Pos)
#define US_CSR_ITER_Pos             10           /**< \brief (US_CSR) Max number of Repetitions Reached */
#define US_CSR_ITER                 (_U_(0x1) << US_CSR_ITER_Pos)
#define   US_CSR_ITER_0_Val               _U_(0x0)   /**< \brief (US_CSR) Maximum number of repetitions has not been reached since the last RSIT */
#define   US_CSR_ITER_1_Val               _U_(0x1)   /**< \brief (US_CSR) Maximum number of repetitions has been reached since the last RSIT */
#define US_CSR_ITER_0               (US_CSR_ITER_0_Val             << US_CSR_ITER_Pos)
#define US_CSR_ITER_1               (US_CSR_ITER_1_Val             << US_CSR_ITER_Pos)
#define US_CSR_TXBUFE_Pos           11           /**< \brief (US_CSR) Transmission Buffer Empty */
#define US_CSR_TXBUFE               (_U_(0x1) << US_CSR_TXBUFE_Pos)
#define   US_CSR_TXBUFE_0_Val             _U_(0x0)   /**< \brief (US_CSR) The signal Buffer Empty from the Transmit PDC channel is inactive */
#define   US_CSR_TXBUFE_1_Val             _U_(0x1)   /**< \brief (US_CSR) The signal Buffer Empty from the Transmit PDC channel is active */
#define US_CSR_TXBUFE_0             (US_CSR_TXBUFE_0_Val           << US_CSR_TXBUFE_Pos)
#define US_CSR_TXBUFE_1             (US_CSR_TXBUFE_1_Val           << US_CSR_TXBUFE_Pos)
#define US_CSR_RXBUFF_Pos           12           /**< \brief (US_CSR) Reception Buffer Full */
#define US_CSR_RXBUFF               (_U_(0x1) << US_CSR_RXBUFF_Pos)
#define   US_CSR_RXBUFF_0_Val             _U_(0x0)   /**< \brief (US_CSR) The signal Buffer Full from the Receive PDC channel is inactive */
#define   US_CSR_RXBUFF_1_Val             _U_(0x1)   /**< \brief (US_CSR) The signal Buffer Full from the Receive PDC channel is active */
#define US_CSR_RXBUFF_0             (US_CSR_RXBUFF_0_Val           << US_CSR_RXBUFF_Pos)
#define US_CSR_RXBUFF_1             (US_CSR_RXBUFF_1_Val           << US_CSR_RXBUFF_Pos)
#define US_CSR_NACK_Pos             13           /**< \brief (US_CSR) Non Acknowledge or LIN Break Sent or LIN Break Received */
#define US_CSR_NACK                 (_U_(0x1) << US_CSR_NACK_Pos)
#define   US_CSR_NACK_0_Val               _U_(0x0)   /**< \brief (US_CSR) No Non Acknowledge has not been detected since the last RSTNACK */
#define   US_CSR_NACK_1_Val               _U_(0x1)   /**< \brief (US_CSR) At least one Non Acknowledge has been detected since the last RSTNACK */
#define US_CSR_NACK_0               (US_CSR_NACK_0_Val             << US_CSR_NACK_Pos)
#define US_CSR_NACK_1               (US_CSR_NACK_1_Val             << US_CSR_NACK_Pos)
#define US_CSR_LINID_Pos            14           /**< \brief (US_CSR) LIN Identifier Sent or LIN Identifier Received */
#define US_CSR_LINID                (_U_(0x1) << US_CSR_LINID_Pos)
#define US_CSR_LINTC_Pos            15           /**< \brief (US_CSR) LIN Transfer Conpleted */
#define US_CSR_LINTC                (_U_(0x1) << US_CSR_LINTC_Pos)
#define US_CSR_RIIC_Pos             16           /**< \brief (US_CSR) Ring Indicator Input Change Flag */
#define US_CSR_RIIC                 (_U_(0x1) << US_CSR_RIIC_Pos)
#define   US_CSR_RIIC_0_Val               _U_(0x0)   /**< \brief (US_CSR) No input change has been detected on the RI pin since the last read of CSR */
#define   US_CSR_RIIC_1_Val               _U_(0x1)   /**< \brief (US_CSR) At least one input change has been detected on the RI pin since the last read of CSR */
#define US_CSR_RIIC_0               (US_CSR_RIIC_0_Val             << US_CSR_RIIC_Pos)
#define US_CSR_RIIC_1               (US_CSR_RIIC_1_Val             << US_CSR_RIIC_Pos)
#define US_CSR_DSRIC_Pos            17           /**< \brief (US_CSR) Data Set Ready Input Change Flag */
#define US_CSR_DSRIC                (_U_(0x1) << US_CSR_DSRIC_Pos)
#define   US_CSR_DSRIC_0_Val              _U_(0x0)   /**< \brief (US_CSR) No input change has been detected on the DSR pin since the last read of CSR */
#define   US_CSR_DSRIC_1_Val              _U_(0x1)   /**< \brief (US_CSR) At least one input change has been detected on the DSR pin since the last read of CSR */
#define US_CSR_DSRIC_0              (US_CSR_DSRIC_0_Val            << US_CSR_DSRIC_Pos)
#define US_CSR_DSRIC_1              (US_CSR_DSRIC_1_Val            << US_CSR_DSRIC_Pos)
#define US_CSR_DCDIC_Pos            18           /**< \brief (US_CSR) Data Carrier Detect Input Change Flag */
#define US_CSR_DCDIC                (_U_(0x1) << US_CSR_DCDIC_Pos)
#define   US_CSR_DCDIC_0_Val              _U_(0x0)   /**< \brief (US_CSR) No input change has been detected on the DCD pin since the last read of CSR */
#define   US_CSR_DCDIC_1_Val              _U_(0x1)   /**< \brief (US_CSR) At least one input change has been detected on the DCD pin since the last read of CSR */
#define US_CSR_DCDIC_0              (US_CSR_DCDIC_0_Val            << US_CSR_DCDIC_Pos)
#define US_CSR_DCDIC_1              (US_CSR_DCDIC_1_Val            << US_CSR_DCDIC_Pos)
#define US_CSR_CTSIC_Pos            19           /**< \brief (US_CSR) Clear to Send Input Change Flag */
#define US_CSR_CTSIC                (_U_(0x1) << US_CSR_CTSIC_Pos)
#define   US_CSR_CTSIC_0_Val              _U_(0x0)   /**< \brief (US_CSR) No input change has been detected on the CTS pin since the last read of CSR */
#define   US_CSR_CTSIC_1_Val              _U_(0x1)   /**< \brief (US_CSR) At least one input change has been detected on the CTS pin since the last read of CSR */
#define US_CSR_CTSIC_0              (US_CSR_CTSIC_0_Val            << US_CSR_CTSIC_Pos)
#define US_CSR_CTSIC_1              (US_CSR_CTSIC_1_Val            << US_CSR_CTSIC_Pos)
#define US_CSR_RI_Pos               20           /**< \brief (US_CSR) Image of RI Input */
#define US_CSR_RI                   (_U_(0x1) << US_CSR_RI_Pos)
#define   US_CSR_RI_0_Val                 _U_(0x0)   /**< \brief (US_CSR) RI is at 0 */
#define   US_CSR_RI_1_Val                 _U_(0x1)   /**< \brief (US_CSR) RI is at 1 */
#define US_CSR_RI_0                 (US_CSR_RI_0_Val               << US_CSR_RI_Pos)
#define US_CSR_RI_1                 (US_CSR_RI_1_Val               << US_CSR_RI_Pos)
#define US_CSR_DSR_Pos              21           /**< \brief (US_CSR) Image of DSR Input */
#define US_CSR_DSR                  (_U_(0x1) << US_CSR_DSR_Pos)
#define   US_CSR_DSR_0_Val                _U_(0x0)   /**< \brief (US_CSR) DSR is at 0 */
#define   US_CSR_DSR_1_Val                _U_(0x1)   /**< \brief (US_CSR) DSR is at 1 */
#define US_CSR_DSR_0                (US_CSR_DSR_0_Val              << US_CSR_DSR_Pos)
#define US_CSR_DSR_1                (US_CSR_DSR_1_Val              << US_CSR_DSR_Pos)
#define US_CSR_DCD_Pos              22           /**< \brief (US_CSR) Image of DCD Input */
#define US_CSR_DCD                  (_U_(0x1) << US_CSR_DCD_Pos)
#define   US_CSR_DCD_0_Val                _U_(0x0)   /**< \brief (US_CSR) DCD is at 0 */
#define   US_CSR_DCD_1_Val                _U_(0x1)   /**< \brief (US_CSR) DCD is at 1 */
#define US_CSR_DCD_0                (US_CSR_DCD_0_Val              << US_CSR_DCD_Pos)
#define US_CSR_DCD_1                (US_CSR_DCD_1_Val              << US_CSR_DCD_Pos)
#define US_CSR_LINBLS_Pos           23           /**< \brief (US_CSR) LIN Bus Line Status */
#define US_CSR_LINBLS               (_U_(0x1) << US_CSR_LINBLS_Pos)
#define   US_CSR_LINBLS_0_Val             _U_(0x0)   /**< \brief (US_CSR) CTS is at 0 */
#define   US_CSR_LINBLS_1_Val             _U_(0x1)   /**< \brief (US_CSR) CTS is at 1 */
#define US_CSR_LINBLS_0             (US_CSR_LINBLS_0_Val           << US_CSR_LINBLS_Pos)
#define US_CSR_LINBLS_1             (US_CSR_LINBLS_1_Val           << US_CSR_LINBLS_Pos)
#define US_CSR_CTS_Pos              23           /**< \brief (US_CSR) Image of CTS Input */
#define US_CSR_CTS                  (_U_(0x1) << US_CSR_CTS_Pos)
#define   US_CSR_CTS_0_Val                _U_(0x0)   /**< \brief (US_CSR) CTS is at 0 */
#define   US_CSR_CTS_1_Val                _U_(0x1)   /**< \brief (US_CSR) CTS is at 1 */
#define US_CSR_CTS_0                (US_CSR_CTS_0_Val              << US_CSR_CTS_Pos)
#define US_CSR_CTS_1                (US_CSR_CTS_1_Val              << US_CSR_CTS_Pos)
#define US_CSR_MANERR_Pos           24           /**< \brief (US_CSR) Manchester Error */
#define US_CSR_MANERR               (_U_(0x1) << US_CSR_MANERR_Pos)
#define   US_CSR_MANERR_0_Val             _U_(0x0)   /**< \brief (US_CSR) No Manchester error has been detected since the last RSTSTA */
#define   US_CSR_MANERR_1_Val             _U_(0x1)   /**< \brief (US_CSR) At least one Manchester error has been detected since the last RSTSTA */
#define US_CSR_MANERR_0             (US_CSR_MANERR_0_Val           << US_CSR_MANERR_Pos)
#define US_CSR_MANERR_1             (US_CSR_MANERR_1_Val           << US_CSR_MANERR_Pos)
#define US_CSR_LINBE_Pos            25           /**< \brief (US_CSR) LIN Bit Error */
#define US_CSR_LINBE                (_U_(0x1) << US_CSR_LINBE_Pos)
#define US_CSR_LINISFE_Pos          26           /**< \brief (US_CSR) LIN Inconsistent Synch Field Error */
#define US_CSR_LINISFE              (_U_(0x1) << US_CSR_LINISFE_Pos)
#define US_CSR_LINIPE_Pos           27           /**< \brief (US_CSR) LIN Identifier Parity Error */
#define US_CSR_LINIPE               (_U_(0x1) << US_CSR_LINIPE_Pos)
#define US_CSR_LINCE_Pos            28           /**< \brief (US_CSR) LIN Checksum Error */
#define US_CSR_LINCE                (_U_(0x1) << US_CSR_LINCE_Pos)
#define US_CSR_LINSNRE_Pos          29           /**< \brief (US_CSR) LIN Slave Not Responding Error */
#define US_CSR_LINSNRE              (_U_(0x1) << US_CSR_LINSNRE_Pos)
#define US_CSR_LINSTE_Pos           30           /**< \brief (US_CSR) LIN Synch Tolerance Error */
#define US_CSR_LINSTE               (_U_(0x1) << US_CSR_LINSTE_Pos)
#define   US_CSR_LINSTE_0_Val             _U_(0x0)   /**< \brief (US_CSR) COMM_TX is at 0 */
#define   US_CSR_LINSTE_1_Val             _U_(0x1)   /**< \brief (US_CSR) COMM_TX is at 1 */
#define US_CSR_LINSTE_0             (US_CSR_LINSTE_0_Val           << US_CSR_LINSTE_Pos)
#define US_CSR_LINSTE_1             (US_CSR_LINSTE_1_Val           << US_CSR_LINSTE_Pos)
#define US_CSR_LINHTE_Pos           31           /**< \brief (US_CSR) LIN Header Timeout Error */
#define US_CSR_LINHTE               (_U_(0x1) << US_CSR_LINHTE_Pos)
#define   US_CSR_LINHTE_0_Val             _U_(0x0)   /**< \brief (US_CSR) COMM_RX is at 0 */
#define   US_CSR_LINHTE_1_Val             _U_(0x1)   /**< \brief (US_CSR) COMM_RX is at 1 */
#define US_CSR_LINHTE_0             (US_CSR_LINHTE_0_Val           << US_CSR_LINHTE_Pos)
#define US_CSR_LINHTE_1             (US_CSR_LINHTE_1_Val           << US_CSR_LINHTE_Pos)
#define US_CSR_MASK                 _U_(0xFFFFFFE7) /**< \brief (US_CSR) MASK Register */

/* -------- US_RHR : (USART Offset: 0x18) (R/  32) Receiver Holding Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t RXCHR:9;          /*!< bit:  0.. 8  Received Character                 */
    uint32_t :6;               /*!< bit:  9..14  Reserved                           */
    uint32_t RXSYNH:1;         /*!< bit:     15  Received Sync                      */
    uint32_t :16;              /*!< bit: 16..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} US_RHR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define US_RHR_OFFSET               0x18         /**< \brief (US_RHR offset) Receiver Holding Register */
#define US_RHR_RESETVALUE           _U_(0x00000000); /**< \brief (US_RHR reset_value) Receiver Holding Register */

#define US_RHR_RXCHR_Pos            0            /**< \brief (US_RHR) Received Character */
#define US_RHR_RXCHR_Msk            (_U_(0x1FF) << US_RHR_RXCHR_Pos)
#define US_RHR_RXCHR(value)         (US_RHR_RXCHR_Msk & ((value) << US_RHR_RXCHR_Pos))
#define US_RHR_RXSYNH_Pos           15           /**< \brief (US_RHR) Received Sync */
#define US_RHR_RXSYNH               (_U_(0x1) << US_RHR_RXSYNH_Pos)
#define   US_RHR_RXSYNH_0_Val             _U_(0x0)   /**< \brief (US_RHR) Last character received is a Data */
#define   US_RHR_RXSYNH_1_Val             _U_(0x1)   /**< \brief (US_RHR) Last character received is a Command */
#define US_RHR_RXSYNH_0             (US_RHR_RXSYNH_0_Val           << US_RHR_RXSYNH_Pos)
#define US_RHR_RXSYNH_1             (US_RHR_RXSYNH_1_Val           << US_RHR_RXSYNH_Pos)
#define US_RHR_MASK                 _U_(0x000081FF) /**< \brief (US_RHR) MASK Register */

/* -------- US_THR : (USART Offset: 0x1C) ( /W 32) Transmitter Holding Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t TXCHR:9;          /*!< bit:  0.. 8  Character to be Transmitted        */
    uint32_t :6;               /*!< bit:  9..14  Reserved                           */
    uint32_t TXSYNH:1;         /*!< bit:     15  Sync Field to be transmitted       */
    uint32_t :16;              /*!< bit: 16..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} US_THR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define US_THR_OFFSET               0x1C         /**< \brief (US_THR offset) Transmitter Holding Register */
#define US_THR_RESETVALUE           _U_(0x00000000); /**< \brief (US_THR reset_value) Transmitter Holding Register */

#define US_THR_TXCHR_Pos            0            /**< \brief (US_THR) Character to be Transmitted */
#define US_THR_TXCHR_Msk            (_U_(0x1FF) << US_THR_TXCHR_Pos)
#define US_THR_TXCHR(value)         (US_THR_TXCHR_Msk & ((value) << US_THR_TXCHR_Pos))
#define US_THR_TXSYNH_Pos           15           /**< \brief (US_THR) Sync Field to be transmitted */
#define US_THR_TXSYNH               (_U_(0x1) << US_THR_TXSYNH_Pos)
#define   US_THR_TXSYNH_0_Val             _U_(0x0)   /**< \brief (US_THR) The next character sent is encoded as a data. Start Frame Delimiter is DATA SYNC */
#define   US_THR_TXSYNH_1_Val             _U_(0x1)   /**< \brief (US_THR) The next character sent is encoded as a command. Start Frame Delimiter is COMMAND SYNC */
#define US_THR_TXSYNH_0             (US_THR_TXSYNH_0_Val           << US_THR_TXSYNH_Pos)
#define US_THR_TXSYNH_1             (US_THR_TXSYNH_1_Val           << US_THR_TXSYNH_Pos)
#define US_THR_MASK                 _U_(0x000081FF) /**< \brief (US_THR) MASK Register */

/* -------- US_BRGR : (USART Offset: 0x20) (R/W 32) Baud Rate Generator Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t CD:16;            /*!< bit:  0..15  Clock Divisor                      */
    uint32_t FP:3;             /*!< bit: 16..18  Fractional Part                    */
    uint32_t :13;              /*!< bit: 19..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} US_BRGR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define US_BRGR_OFFSET              0x20         /**< \brief (US_BRGR offset) Baud Rate Generator Register */
#define US_BRGR_RESETVALUE          _U_(0x00000000); /**< \brief (US_BRGR reset_value) Baud Rate Generator Register */

#define US_BRGR_CD_Pos              0            /**< \brief (US_BRGR) Clock Divisor */
#define US_BRGR_CD_Msk              (_U_(0xFFFF) << US_BRGR_CD_Pos)
#define US_BRGR_CD(value)           (US_BRGR_CD_Msk & ((value) << US_BRGR_CD_Pos))
#define   US_BRGR_CD_DISABLE_Val          _U_(0x0)   /**< \brief (US_BRGR) Disables the clock */
#define   US_BRGR_CD_BYPASS_Val           _U_(0x1)   /**< \brief (US_BRGR) Clock Divisor Bypass */
#define   US_BRGR_CD_2_Val                _U_(0x2)   /**< \brief (US_BRGR) Baud Rate (Asynchronous Mode) = Selected Clock/(16 x CD) or (8 x CD); Baud Rate (Synchronous Mode) = Selected Clock/CD; */
#define US_BRGR_CD_DISABLE          (US_BRGR_CD_DISABLE_Val        << US_BRGR_CD_Pos)
#define US_BRGR_CD_BYPASS           (US_BRGR_CD_BYPASS_Val         << US_BRGR_CD_Pos)
#define US_BRGR_CD_2                (US_BRGR_CD_2_Val              << US_BRGR_CD_Pos)
#define US_BRGR_FP_Pos              16           /**< \brief (US_BRGR) Fractional Part */
#define US_BRGR_FP_Msk              (_U_(0x7) << US_BRGR_FP_Pos)
#define US_BRGR_FP(value)           (US_BRGR_FP_Msk & ((value) << US_BRGR_FP_Pos))
#define   US_BRGR_FP_0_Val                _U_(0x0)   /**< \brief (US_BRGR) Fractional divider is disabled */
#define US_BRGR_FP_0                (US_BRGR_FP_0_Val              << US_BRGR_FP_Pos)
#define US_BRGR_MASK                _U_(0x0007FFFF) /**< \brief (US_BRGR) MASK Register */

/* -------- US_RTOR : (USART Offset: 0x24) (R/W 32) Receiver Time-out Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t TO:17;            /*!< bit:  0..16  Time-out Value                     */
    uint32_t :15;              /*!< bit: 17..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} US_RTOR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define US_RTOR_OFFSET              0x24         /**< \brief (US_RTOR offset) Receiver Time-out Register */
#define US_RTOR_RESETVALUE          _U_(0x00000000); /**< \brief (US_RTOR reset_value) Receiver Time-out Register */

#define US_RTOR_TO_Pos              0            /**< \brief (US_RTOR) Time-out Value */
#define US_RTOR_TO_Msk              (_U_(0x1FFFF) << US_RTOR_TO_Pos)
#define US_RTOR_TO(value)           (US_RTOR_TO_Msk & ((value) << US_RTOR_TO_Pos))
#define   US_RTOR_TO_DISABLE_Val          _U_(0x0)   /**< \brief (US_RTOR) Disables the RX Time-out function */
#define US_RTOR_TO_DISABLE          (US_RTOR_TO_DISABLE_Val        << US_RTOR_TO_Pos)
#define US_RTOR_MASK                _U_(0x0001FFFF) /**< \brief (US_RTOR) MASK Register */

/* -------- US_TTGR : (USART Offset: 0x28) (R/W 32) Transmitter Timeguard Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t TG:8;             /*!< bit:  0.. 7  Timeguard Value                    */
    uint32_t :24;              /*!< bit:  8..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} US_TTGR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define US_TTGR_OFFSET              0x28         /**< \brief (US_TTGR offset) Transmitter Timeguard Register */
#define US_TTGR_RESETVALUE          _U_(0x00000000); /**< \brief (US_TTGR reset_value) Transmitter Timeguard Register */

#define US_TTGR_TG_Pos              0            /**< \brief (US_TTGR) Timeguard Value */
#define US_TTGR_TG_Msk              (_U_(0xFF) << US_TTGR_TG_Pos)
#define US_TTGR_TG(value)           (US_TTGR_TG_Msk & ((value) << US_TTGR_TG_Pos))
#define   US_TTGR_TG_DISABLE_Val          _U_(0x0)   /**< \brief (US_TTGR) Disables the TX Timeguard function. */
#define US_TTGR_TG_DISABLE          (US_TTGR_TG_DISABLE_Val        << US_TTGR_TG_Pos)
#define US_TTGR_MASK                _U_(0x000000FF) /**< \brief (US_TTGR) MASK Register */

/* -------- US_FIDI : (USART Offset: 0x40) (R/W 32) FI DI Ratio Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t FI_DI_RATIO:11;   /*!< bit:  0..10  FI Over DI Ratio Value             */
    uint32_t :21;              /*!< bit: 11..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} US_FIDI_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define US_FIDI_OFFSET              0x40         /**< \brief (US_FIDI offset) FI DI Ratio Register */
#define US_FIDI_RESETVALUE          _U_(0x00000174); /**< \brief (US_FIDI reset_value) FI DI Ratio Register */

#define US_FIDI_FI_DI_RATIO_Pos     0            /**< \brief (US_FIDI) FI Over DI Ratio Value */
#define US_FIDI_FI_DI_RATIO_Msk     (_U_(0x7FF) << US_FIDI_FI_DI_RATIO_Pos)
#define US_FIDI_FI_DI_RATIO(value)  (US_FIDI_FI_DI_RATIO_Msk & ((value) << US_FIDI_FI_DI_RATIO_Pos))
#define   US_FIDI_FI_DI_RATIO_DISABLE_Val _U_(0x0)   /**< \brief (US_FIDI) Baud Rate = 0 */
#define US_FIDI_FI_DI_RATIO_DISABLE (US_FIDI_FI_DI_RATIO_DISABLE_Val << US_FIDI_FI_DI_RATIO_Pos)
#define US_FIDI_MASK                _U_(0x000007FF) /**< \brief (US_FIDI) MASK Register */

/* -------- US_NER : (USART Offset: 0x44) (R/  32) Number of Errors Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t NB_ERRORS:8;      /*!< bit:  0.. 7  Error number during ISO7816 transfers */
    uint32_t :24;              /*!< bit:  8..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} US_NER_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define US_NER_OFFSET               0x44         /**< \brief (US_NER offset) Number of Errors Register */
#define US_NER_RESETVALUE           _U_(0x00000000); /**< \brief (US_NER reset_value) Number of Errors Register */

#define US_NER_NB_ERRORS_Pos        0            /**< \brief (US_NER) Error number during ISO7816 transfers */
#define US_NER_NB_ERRORS_Msk        (_U_(0xFF) << US_NER_NB_ERRORS_Pos)
#define US_NER_NB_ERRORS(value)     (US_NER_NB_ERRORS_Msk & ((value) << US_NER_NB_ERRORS_Pos))
#define US_NER_MASK                 _U_(0x000000FF) /**< \brief (US_NER) MASK Register */

/* -------- US_IFR : (USART Offset: 0x4C) (R/W 32) IrDA Filter Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t IRDA_FILTER:8;    /*!< bit:  0.. 7  Irda filter                        */
    uint32_t :24;              /*!< bit:  8..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} US_IFR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define US_IFR_OFFSET               0x4C         /**< \brief (US_IFR offset) IrDA Filter Register */
#define US_IFR_RESETVALUE           _U_(0x00000000); /**< \brief (US_IFR reset_value) IrDA Filter Register */

#define US_IFR_IRDA_FILTER_Pos      0            /**< \brief (US_IFR) Irda filter */
#define US_IFR_IRDA_FILTER_Msk      (_U_(0xFF) << US_IFR_IRDA_FILTER_Pos)
#define US_IFR_IRDA_FILTER(value)   (US_IFR_IRDA_FILTER_Msk & ((value) << US_IFR_IRDA_FILTER_Pos))
#define US_IFR_MASK                 _U_(0x000000FF) /**< \brief (US_IFR) MASK Register */

/* -------- US_MAN : (USART Offset: 0x50) (R/W 32) Manchester Configuration Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t TX_PL:4;          /*!< bit:  0.. 3  Transmitter Preamble Length        */
    uint32_t :4;               /*!< bit:  4.. 7  Reserved                           */
    uint32_t TX_PP:2;          /*!< bit:  8.. 9  Transmitter Preamble Pattern       */
    uint32_t :2;               /*!< bit: 10..11  Reserved                           */
    uint32_t TX_MPOL:1;        /*!< bit:     12  Transmitter Manchester Polarity    */
    uint32_t :3;               /*!< bit: 13..15  Reserved                           */
    uint32_t RX_PL:4;          /*!< bit: 16..19  Receiver Preamble Length           */
    uint32_t :4;               /*!< bit: 20..23  Reserved                           */
    uint32_t RX_PP:2;          /*!< bit: 24..25  Receiver Preamble Pattern detected */
    uint32_t :2;               /*!< bit: 26..27  Reserved                           */
    uint32_t RX_MPOL:1;        /*!< bit:     28  Receiver Manchester Polarity       */
    uint32_t :1;               /*!< bit:     29  Reserved                           */
    uint32_t DRIFT:1;          /*!< bit:     30  Drift compensation                 */
    uint32_t :1;               /*!< bit:     31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} US_MAN_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define US_MAN_OFFSET               0x50         /**< \brief (US_MAN offset) Manchester Configuration Register */
#define US_MAN_RESETVALUE           _U_(0x30011004); /**< \brief (US_MAN reset_value) Manchester Configuration Register */

#define US_MAN_TX_PL_Pos            0            /**< \brief (US_MAN) Transmitter Preamble Length */
#define US_MAN_TX_PL_Msk            (_U_(0xF) << US_MAN_TX_PL_Pos)
#define US_MAN_TX_PL(value)         (US_MAN_TX_PL_Msk & ((value) << US_MAN_TX_PL_Pos))
#define   US_MAN_TX_PL_0_Val              _U_(0x0)   /**< \brief (US_MAN) The Transmitter Preamble pattern generation is disabled */
#define US_MAN_TX_PL_0              (US_MAN_TX_PL_0_Val            << US_MAN_TX_PL_Pos)
#define US_MAN_TX_PP_Pos            8            /**< \brief (US_MAN) Transmitter Preamble Pattern */
#define US_MAN_TX_PP_Msk            (_U_(0x3) << US_MAN_TX_PP_Pos)
#define US_MAN_TX_PP(value)         (US_MAN_TX_PP_Msk & ((value) << US_MAN_TX_PP_Pos))
#define   US_MAN_TX_PP_0_Val              _U_(0x0)   /**< \brief (US_MAN) ALL_ONE */
#define   US_MAN_TX_PP_1_Val              _U_(0x1)   /**< \brief (US_MAN) ALL_ZERO */
#define   US_MAN_TX_PP_2_Val              _U_(0x2)   /**< \brief (US_MAN) ZERO_ONE */
#define   US_MAN_TX_PP_3_Val              _U_(0x3)   /**< \brief (US_MAN) ONE_ZERO */
#define US_MAN_TX_PP_0              (US_MAN_TX_PP_0_Val            << US_MAN_TX_PP_Pos)
#define US_MAN_TX_PP_1              (US_MAN_TX_PP_1_Val            << US_MAN_TX_PP_Pos)
#define US_MAN_TX_PP_2              (US_MAN_TX_PP_2_Val            << US_MAN_TX_PP_Pos)
#define US_MAN_TX_PP_3              (US_MAN_TX_PP_3_Val            << US_MAN_TX_PP_Pos)
#define US_MAN_TX_MPOL_Pos          12           /**< \brief (US_MAN) Transmitter Manchester Polarity */
#define US_MAN_TX_MPOL              (_U_(0x1) << US_MAN_TX_MPOL_Pos)
#define   US_MAN_TX_MPOL_0_Val            _U_(0x0)   /**< \brief (US_MAN) Logic Zero is coded as a zero-to-one transition, Logic One is coded as a one-to-zero transition */
#define   US_MAN_TX_MPOL_1_Val            _U_(0x1)   /**< \brief (US_MAN) Logic Zero is coded as a one-to-zero transition, Logic One is coded as a zero-to-one transition */
#define US_MAN_TX_MPOL_0            (US_MAN_TX_MPOL_0_Val          << US_MAN_TX_MPOL_Pos)
#define US_MAN_TX_MPOL_1            (US_MAN_TX_MPOL_1_Val          << US_MAN_TX_MPOL_Pos)
#define US_MAN_RX_PL_Pos            16           /**< \brief (US_MAN) Receiver Preamble Length */
#define US_MAN_RX_PL_Msk            (_U_(0xF) << US_MAN_RX_PL_Pos)
#define US_MAN_RX_PL(value)         (US_MAN_RX_PL_Msk & ((value) << US_MAN_RX_PL_Pos))
#define   US_MAN_RX_PL_0_Val              _U_(0x0)   /**< \brief (US_MAN) The receiver preamble pattern detection is disabled */
#define US_MAN_RX_PL_0              (US_MAN_RX_PL_0_Val            << US_MAN_RX_PL_Pos)
#define US_MAN_RX_PP_Pos            24           /**< \brief (US_MAN) Receiver Preamble Pattern detected */
#define US_MAN_RX_PP_Msk            (_U_(0x3) << US_MAN_RX_PP_Pos)
#define US_MAN_RX_PP(value)         (US_MAN_RX_PP_Msk & ((value) << US_MAN_RX_PP_Pos))
#define   US_MAN_RX_PP_0_Val              _U_(0x0)   /**< \brief (US_MAN) ALL_ONE */
#define   US_MAN_RX_PP_1_Val              _U_(0x1)   /**< \brief (US_MAN) ALL_ZERO */
#define   US_MAN_RX_PP_2_Val              _U_(0x2)   /**< \brief (US_MAN) ZERO_ONE */
#define   US_MAN_RX_PP_3_Val              _U_(0x3)   /**< \brief (US_MAN) ONE_ZERO */
#define US_MAN_RX_PP_0              (US_MAN_RX_PP_0_Val            << US_MAN_RX_PP_Pos)
#define US_MAN_RX_PP_1              (US_MAN_RX_PP_1_Val            << US_MAN_RX_PP_Pos)
#define US_MAN_RX_PP_2              (US_MAN_RX_PP_2_Val            << US_MAN_RX_PP_Pos)
#define US_MAN_RX_PP_3              (US_MAN_RX_PP_3_Val            << US_MAN_RX_PP_Pos)
#define US_MAN_RX_MPOL_Pos          28           /**< \brief (US_MAN) Receiver Manchester Polarity */
#define US_MAN_RX_MPOL              (_U_(0x1) << US_MAN_RX_MPOL_Pos)
#define   US_MAN_RX_MPOL_0_Val            _U_(0x0)   /**< \brief (US_MAN) Logic Zero is coded as a zero-to-one transition, Logic One is coded as a one-to-zero transition */
#define   US_MAN_RX_MPOL_1_Val            _U_(0x1)   /**< \brief (US_MAN) Logic Zero is coded as a one-to-zero transition, Logic One is coded as a zero-to-one transition */
#define US_MAN_RX_MPOL_0            (US_MAN_RX_MPOL_0_Val          << US_MAN_RX_MPOL_Pos)
#define US_MAN_RX_MPOL_1            (US_MAN_RX_MPOL_1_Val          << US_MAN_RX_MPOL_Pos)
#define US_MAN_DRIFT_Pos            30           /**< \brief (US_MAN) Drift compensation */
#define US_MAN_DRIFT                (_U_(0x1) << US_MAN_DRIFT_Pos)
#define   US_MAN_DRIFT_0_Val              _U_(0x0)   /**< \brief (US_MAN) The USART can not recover from an important clock drift */
#define   US_MAN_DRIFT_1_Val              _U_(0x1)   /**< \brief (US_MAN) The USART can recover from clock drift. The 16X clock mode must be enabled */
#define US_MAN_DRIFT_0              (US_MAN_DRIFT_0_Val            << US_MAN_DRIFT_Pos)
#define US_MAN_DRIFT_1              (US_MAN_DRIFT_1_Val            << US_MAN_DRIFT_Pos)
#define US_MAN_MASK                 _U_(0x530F130F) /**< \brief (US_MAN) MASK Register */

/* -------- US_LINMR : (USART Offset: 0x54) (R/W 32) LIN Mode Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t NACT:2;           /*!< bit:  0.. 1  LIN Node Action                    */
    uint32_t PARDIS:1;         /*!< bit:      2  Parity Disable                     */
    uint32_t CHKDIS:1;         /*!< bit:      3  Checksum Disable                   */
    uint32_t CHKTYP:1;         /*!< bit:      4  Checksum Type                      */
    uint32_t DLM:1;            /*!< bit:      5  Data Length Mode                   */
    uint32_t FSDIS:1;          /*!< bit:      6  Frame Slot Mode Disable            */
    uint32_t WKUPTYP:1;        /*!< bit:      7  Wakeup Signal Type                 */
    uint32_t DLC:8;            /*!< bit:  8..15  Data Length Control                */
    uint32_t PDCM:1;           /*!< bit:     16  PDC Mode                           */
    uint32_t SYNCDIS:1;        /*!< bit:     17  Synchronization Disable            */
    uint32_t :14;              /*!< bit: 18..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} US_LINMR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define US_LINMR_OFFSET             0x54         /**< \brief (US_LINMR offset) LIN Mode Register */
#define US_LINMR_RESETVALUE         _U_(0x00000000); /**< \brief (US_LINMR reset_value) LIN Mode Register */

#define US_LINMR_NACT_Pos           0            /**< \brief (US_LINMR) LIN Node Action */
#define US_LINMR_NACT_Msk           (_U_(0x3) << US_LINMR_NACT_Pos)
#define US_LINMR_NACT(value)        (US_LINMR_NACT_Msk & ((value) << US_LINMR_NACT_Pos))
#define   US_LINMR_NACT_PUBLISH_Val       _U_(0x0)   /**< \brief (US_LINMR) The LIN Controller transmits the response */
#define   US_LINMR_NACT_SUBSCRIBE_Val     _U_(0x1)   /**< \brief (US_LINMR) The LIN Controller receives the response */
#define   US_LINMR_NACT_IGNORE_Val        _U_(0x2)   /**< \brief (US_LINMR) The LIN Controller doesn't transmit and doesn't receive the response */
#define US_LINMR_NACT_PUBLISH       (US_LINMR_NACT_PUBLISH_Val     << US_LINMR_NACT_Pos)
#define US_LINMR_NACT_SUBSCRIBE     (US_LINMR_NACT_SUBSCRIBE_Val   << US_LINMR_NACT_Pos)
#define US_LINMR_NACT_IGNORE        (US_LINMR_NACT_IGNORE_Val      << US_LINMR_NACT_Pos)
#define US_LINMR_PARDIS_Pos         2            /**< \brief (US_LINMR) Parity Disable */
#define US_LINMR_PARDIS             (_U_(0x1) << US_LINMR_PARDIS_Pos)
#define US_LINMR_CHKDIS_Pos         3            /**< \brief (US_LINMR) Checksum Disable */
#define US_LINMR_CHKDIS             (_U_(0x1) << US_LINMR_CHKDIS_Pos)
#define US_LINMR_CHKTYP_Pos         4            /**< \brief (US_LINMR) Checksum Type */
#define US_LINMR_CHKTYP             (_U_(0x1) << US_LINMR_CHKTYP_Pos)
#define US_LINMR_DLM_Pos            5            /**< \brief (US_LINMR) Data Length Mode */
#define US_LINMR_DLM                (_U_(0x1) << US_LINMR_DLM_Pos)
#define US_LINMR_FSDIS_Pos          6            /**< \brief (US_LINMR) Frame Slot Mode Disable */
#define US_LINMR_FSDIS              (_U_(0x1) << US_LINMR_FSDIS_Pos)
#define US_LINMR_WKUPTYP_Pos        7            /**< \brief (US_LINMR) Wakeup Signal Type */
#define US_LINMR_WKUPTYP            (_U_(0x1) << US_LINMR_WKUPTYP_Pos)
#define US_LINMR_DLC_Pos            8            /**< \brief (US_LINMR) Data Length Control */
#define US_LINMR_DLC_Msk            (_U_(0xFF) << US_LINMR_DLC_Pos)
#define US_LINMR_DLC(value)         (US_LINMR_DLC_Msk & ((value) << US_LINMR_DLC_Pos))
#define US_LINMR_PDCM_Pos           16           /**< \brief (US_LINMR) PDC Mode */
#define US_LINMR_PDCM               (_U_(0x1) << US_LINMR_PDCM_Pos)
#define US_LINMR_SYNCDIS_Pos        17           /**< \brief (US_LINMR) Synchronization Disable */
#define US_LINMR_SYNCDIS            (_U_(0x1) << US_LINMR_SYNCDIS_Pos)
#define US_LINMR_MASK               _U_(0x0003FFFF) /**< \brief (US_LINMR) MASK Register */

/* -------- US_LINIR : (USART Offset: 0x58) (R/W 32) LIN Identifier Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t IDCHR:8;          /*!< bit:  0.. 7  Identifier Character               */
    uint32_t :24;              /*!< bit:  8..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} US_LINIR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define US_LINIR_OFFSET             0x58         /**< \brief (US_LINIR offset) LIN Identifier Register */
#define US_LINIR_RESETVALUE         _U_(0x00000000); /**< \brief (US_LINIR reset_value) LIN Identifier Register */

#define US_LINIR_IDCHR_Pos          0            /**< \brief (US_LINIR) Identifier Character */
#define US_LINIR_IDCHR_Msk          (_U_(0xFF) << US_LINIR_IDCHR_Pos)
#define US_LINIR_IDCHR(value)       (US_LINIR_IDCHR_Msk & ((value) << US_LINIR_IDCHR_Pos))
#define US_LINIR_MASK               _U_(0x000000FF) /**< \brief (US_LINIR) MASK Register */

/* -------- US_LINBRR : (USART Offset: 0x5C) (R/  32) LIN Baud Rate Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t LINCD:16;         /*!< bit:  0..15  Clock Divider after Synchronization */
    uint32_t LINFP:3;          /*!< bit: 16..18  Fractional Part after Synchronization */
    uint32_t :13;              /*!< bit: 19..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} US_LINBRR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define US_LINBRR_OFFSET            0x5C         /**< \brief (US_LINBRR offset) LIN Baud Rate Register */
#define US_LINBRR_RESETVALUE        _U_(0x00000000); /**< \brief (US_LINBRR reset_value) LIN Baud Rate Register */

#define US_LINBRR_LINCD_Pos         0            /**< \brief (US_LINBRR) Clock Divider after Synchronization */
#define US_LINBRR_LINCD_Msk         (_U_(0xFFFF) << US_LINBRR_LINCD_Pos)
#define US_LINBRR_LINCD(value)      (US_LINBRR_LINCD_Msk & ((value) << US_LINBRR_LINCD_Pos))
#define US_LINBRR_LINFP_Pos         16           /**< \brief (US_LINBRR) Fractional Part after Synchronization */
#define US_LINBRR_LINFP_Msk         (_U_(0x7) << US_LINBRR_LINFP_Pos)
#define US_LINBRR_LINFP(value)      (US_LINBRR_LINFP_Msk & ((value) << US_LINBRR_LINFP_Pos))
#define US_LINBRR_MASK              _U_(0x0007FFFF) /**< \brief (US_LINBRR) MASK Register */

/* -------- US_WPMR : (USART Offset: 0xE4) (R/W 32) Write Protect Mode Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t WPEN:1;           /*!< bit:      0  Write Protect Enable               */
    uint32_t :7;               /*!< bit:  1.. 7  Reserved                           */
    uint32_t WPKEY:24;         /*!< bit:  8..31  Write Protect Key                  */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} US_WPMR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define US_WPMR_OFFSET              0xE4         /**< \brief (US_WPMR offset) Write Protect Mode Register */
#define US_WPMR_RESETVALUE          _U_(0x00000000); /**< \brief (US_WPMR reset_value) Write Protect Mode Register */

#define US_WPMR_WPEN_Pos            0            /**< \brief (US_WPMR) Write Protect Enable */
#define US_WPMR_WPEN                (_U_(0x1) << US_WPMR_WPEN_Pos)
#define   US_WPMR_WPEN_0_Val              _U_(0x0)   /**< \brief (US_WPMR) Disables the Write Protect if WPKEY corresponds to 0x858365 ("USA" in ACII) */
#define   US_WPMR_WPEN_1_Val              _U_(0x1)   /**< \brief (US_WPMR) Enables the Write Protect if WPKEY corresponds to 0x858365 ("USA" in ACII) */
#define US_WPMR_WPEN_0              (US_WPMR_WPEN_0_Val            << US_WPMR_WPEN_Pos)
#define US_WPMR_WPEN_1              (US_WPMR_WPEN_1_Val            << US_WPMR_WPEN_Pos)
#define US_WPMR_WPKEY_Pos           8            /**< \brief (US_WPMR) Write Protect Key */
#define US_WPMR_WPKEY_Msk           (_U_(0xFFFFFF) << US_WPMR_WPKEY_Pos)
#define US_WPMR_WPKEY(value)        (US_WPMR_WPKEY_Msk & ((value) << US_WPMR_WPKEY_Pos))
#define US_WPMR_MASK                _U_(0xFFFFFF01) /**< \brief (US_WPMR) MASK Register */

/* -------- US_WPSR : (USART Offset: 0xE8) (R/  32) Write Protect Status Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t WPV:1;            /*!< bit:      0  Write Protect Violation Status     */
    uint32_t :7;               /*!< bit:  1.. 7  Reserved                           */
    uint32_t WPVSRC:16;        /*!< bit:  8..23  Write Protect Violation Source     */
    uint32_t :8;               /*!< bit: 24..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} US_WPSR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define US_WPSR_OFFSET              0xE8         /**< \brief (US_WPSR offset) Write Protect Status Register */
#define US_WPSR_RESETVALUE          _U_(0x00000000); /**< \brief (US_WPSR reset_value) Write Protect Status Register */

#define US_WPSR_WPV_Pos             0            /**< \brief (US_WPSR) Write Protect Violation Status */
#define US_WPSR_WPV                 (_U_(0x1) << US_WPSR_WPV_Pos)
#define   US_WPSR_WPV_0_Val               _U_(0x0)   /**< \brief (US_WPSR) No Write Protect Violation has occurred since the last read of the WPSR register */
#define   US_WPSR_WPV_1_Val               _U_(0x1)   /**< \brief (US_WPSR) A Write Protect Violation has occurred since the last read of the WPSR register. If this violation is an unauthorized attempt to write a protected register, the associated violation is reported into field WPVSRC */
#define US_WPSR_WPV_0               (US_WPSR_WPV_0_Val             << US_WPSR_WPV_Pos)
#define US_WPSR_WPV_1               (US_WPSR_WPV_1_Val             << US_WPSR_WPV_Pos)
#define US_WPSR_WPVSRC_Pos          8            /**< \brief (US_WPSR) Write Protect Violation Source */
#define US_WPSR_WPVSRC_Msk          (_U_(0xFFFF) << US_WPSR_WPVSRC_Pos)
#define US_WPSR_WPVSRC(value)       (US_WPSR_WPVSRC_Msk & ((value) << US_WPSR_WPVSRC_Pos))
#define US_WPSR_MASK                _U_(0x00FFFF01) /**< \brief (US_WPSR) MASK Register */

/* -------- US_VERSION : (USART Offset: 0xFC) (R/  32) Version Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t VERSION:12;       /*!< bit:  0..11  Version                            */
    uint32_t :4;               /*!< bit: 12..15  Reserved                           */
    uint32_t MFN:4;            /*!< bit: 16..19  MFN                                */
    uint32_t :12;              /*!< bit: 20..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} US_VERSION_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define US_VERSION_OFFSET           0xFC         /**< \brief (US_VERSION offset) Version Register */
#define US_VERSION_RESETVALUE       _U_(0x00000602); /**< \brief (US_VERSION reset_value) Version Register */

#define US_VERSION_VERSION_Pos      0            /**< \brief (US_VERSION) Version */
#define US_VERSION_VERSION_Msk      (_U_(0xFFF) << US_VERSION_VERSION_Pos)
#define US_VERSION_VERSION(value)   (US_VERSION_VERSION_Msk & ((value) << US_VERSION_VERSION_Pos))
#define US_VERSION_MFN_Pos          16           /**< \brief (US_VERSION) MFN */
#define US_VERSION_MFN_Msk          (_U_(0xF) << US_VERSION_MFN_Pos)
#define US_VERSION_MFN(value)       (US_VERSION_MFN_Msk & ((value) << US_VERSION_MFN_Pos))
#define US_VERSION_MASK             _U_(0x000F0FFF) /**< \brief (US_VERSION) MASK Register */

/** \brief USART hardware registers */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef struct {
  __O  uint32_t US_CR;          /**< (USART Offset: 0x00) Control Register */
  __IO uint32_t US_MR;          /**< (USART Offset: 0x04) Mode Register */
  __O  uint32_t US_IER;         /**< (USART Offset: 0x08) Interrupt Enable Register */
  __O  uint32_t US_IDR;         /**< (USART Offset: 0x0C) Interrupt Disable Register */
  __I  uint32_t US_IMR;         /**< (USART Offset: 0x10) Interrupt Mask Register */
  __I  uint32_t US_CSR;         /**< (USART Offset: 0x14) Channel Status Register */
  __I  uint32_t US_RHR;         /**< (USART Offset: 0x18) Receive Holding Register */
  __O  uint32_t US_THR;         /**< (USART Offset: 0x1C) Transmit Holding Register */
  __IO uint32_t US_BRGR;        /**< (USART Offset: 0x20) Baud Rate Generator Register */
  __IO uint32_t US_RTOR;        /**< (USART Offset: 0x24) Receiver Timeout Register */
  __IO uint32_t US_TTGR;        /**< (USART Offset: 0x28) Transmitter Timeguard Register */
  __I  uint8_t  Reserved1[20];
  __IO uint32_t US_FIDI;        /**< (USART Offset: 0x40) FI DI Ratio Register */
  __I  uint32_t US_NER;         /**< (USART Offset: 0x44) Number of Errors Register */
  __I  uint8_t  Reserved2[4];
  __IO uint32_t US_IF;          /**< (USART Offset: 0x4C) IrDA Filter Register */
  __IO uint32_t US_MAN;         /**< (USART Offset: 0x50) Manchester Configuration Register */
  __IO uint32_t US_LINMR;       /**< (USART Offset: 0x54) LIN Mode Register */
  __IO uint32_t US_LINIR;       /**< (USART Offset: 0x58) LIN Identifier Register */
  __I  uint32_t US_LINBRR;      /**< (USART Offset: 0x5C) LIN Baud Rate Register */
  __I  uint8_t  Reserved3[132];
  __IO uint32_t US_WPMR;        /**< (USART Offset: 0xE4) Write Protection Mode Register */
  __I  uint32_t US_WPSR;        /**< (USART Offset: 0xE8) Write Protection Status Register */
  __I  uint8_t  Reserved4[16];
  __I  uint32_t US_VERSION;     /**< (USART Offset: 0xFC) Version Register */
} Usart;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

/*@}*/

#endif /* _SAM4L_USART_COMPONENT_ */
