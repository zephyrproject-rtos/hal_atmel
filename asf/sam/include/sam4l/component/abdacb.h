/**
 * \file
 *
 * \brief Component description for ABDACB
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

#ifndef _SAM4L_ABDACB_COMPONENT_
#define _SAM4L_ABDACB_COMPONENT_

/* ========================================================================== */
/**  SOFTWARE API DEFINITION FOR ABDACB */
/* ========================================================================== */
/** \addtogroup SAM4L_ABDACB Audio Bitstream DAC */
/*@{*/

#define ABDACB_I7563
#define REV_ABDACB                  0x100

/* -------- ABDACB_CR : (ABDACB Offset: 0x00) (R/W 32) Control Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t EN:1;             /*!< bit:      0  Enable                             */
    uint32_t SWAP:1;           /*!< bit:      1  Swap Channels                      */
    uint32_t :1;               /*!< bit:      2  Reserved                           */
    uint32_t ALTUPR:1;         /*!< bit:      3  Alternative up-sampling ratio      */
    uint32_t CMOC:1;           /*!< bit:      4  Common mode offset control         */
    uint32_t MONO:1;           /*!< bit:      5  Mono mode                          */
    uint32_t :1;               /*!< bit:      6  Reserved                           */
    uint32_t SWRST:1;          /*!< bit:      7  Software reset                     */
    uint32_t :8;               /*!< bit:  8..15  Reserved                           */
    uint32_t DATAFORMAT:3;     /*!< bit: 16..18  Data word format                   */
    uint32_t :5;               /*!< bit: 19..23  Reserved                           */
    uint32_t FS:4;             /*!< bit: 24..27  Sampling frequency                 */
    uint32_t :4;               /*!< bit: 28..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} ABDACB_CR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define ABDACB_CR_OFFSET            0x00         /**< \brief (ABDACB_CR offset) Control Register */
#define ABDACB_CR_RESETVALUE        _U_(0x00000000); /**< \brief (ABDACB_CR reset_value) Control Register */

#define ABDACB_CR_EN_Pos            0            /**< \brief (ABDACB_CR) Enable */
#define ABDACB_CR_EN                (_U_(0x1) << ABDACB_CR_EN_Pos)
#define   ABDACB_CR_EN_0_Val              _U_(0x0)   /**< \brief (ABDACB_CR) Audio DAC is disabled */
#define   ABDACB_CR_EN_1_Val              _U_(0x1)   /**< \brief (ABDACB_CR) Audio DAC is enabled */
#define ABDACB_CR_EN_0              (ABDACB_CR_EN_0_Val            << ABDACB_CR_EN_Pos)
#define ABDACB_CR_EN_1              (ABDACB_CR_EN_1_Val            << ABDACB_CR_EN_Pos)
#define ABDACB_CR_SWAP_Pos          1            /**< \brief (ABDACB_CR) Swap Channels */
#define ABDACB_CR_SWAP              (_U_(0x1) << ABDACB_CR_SWAP_Pos)
#define   ABDACB_CR_SWAP_0_Val            _U_(0x0)   /**< \brief (ABDACB_CR) The CHANNEL0 and CHANNEL1 samples will not be swapped when writing the Audio DAC Sample Data Register (SDR) */
#define   ABDACB_CR_SWAP_1_Val            _U_(0x1)   /**< \brief (ABDACB_CR) The CHANNEL0 and CHANNEL1 samples will be swapped when writing the Audio DAC Sample Data Register (SDR) */
#define ABDACB_CR_SWAP_0            (ABDACB_CR_SWAP_0_Val          << ABDACB_CR_SWAP_Pos)
#define ABDACB_CR_SWAP_1            (ABDACB_CR_SWAP_1_Val          << ABDACB_CR_SWAP_Pos)
#define ABDACB_CR_ALTUPR_Pos        3            /**< \brief (ABDACB_CR) Alternative up-sampling ratio */
#define ABDACB_CR_ALTUPR            (_U_(0x1) << ABDACB_CR_ALTUPR_Pos)
#define ABDACB_CR_CMOC_Pos          4            /**< \brief (ABDACB_CR) Common mode offset control */
#define ABDACB_CR_CMOC              (_U_(0x1) << ABDACB_CR_CMOC_Pos)
#define ABDACB_CR_MONO_Pos          5            /**< \brief (ABDACB_CR) Mono mode */
#define ABDACB_CR_MONO              (_U_(0x1) << ABDACB_CR_MONO_Pos)
#define ABDACB_CR_SWRST_Pos         7            /**< \brief (ABDACB_CR) Software reset */
#define ABDACB_CR_SWRST             (_U_(0x1) << ABDACB_CR_SWRST_Pos)
#define ABDACB_CR_DATAFORMAT_Pos    16           /**< \brief (ABDACB_CR) Data word format */
#define ABDACB_CR_DATAFORMAT_Msk    (_U_(0x7) << ABDACB_CR_DATAFORMAT_Pos)
#define ABDACB_CR_DATAFORMAT(value) (ABDACB_CR_DATAFORMAT_Msk & ((value) << ABDACB_CR_DATAFORMAT_Pos))
#define ABDACB_CR_FS_Pos            24           /**< \brief (ABDACB_CR) Sampling frequency */
#define ABDACB_CR_FS_Msk            (_U_(0xF) << ABDACB_CR_FS_Pos)
#define ABDACB_CR_FS(value)         (ABDACB_CR_FS_Msk & ((value) << ABDACB_CR_FS_Pos))
#define ABDACB_CR_MASK              _U_(0x0F0700BB) /**< \brief (ABDACB_CR) MASK Register */

/* -------- ABDACB_SDR0 : (ABDACB Offset: 0x04) (R/W 32) Sample Data Register 0 -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t DATA:32;          /*!< bit:  0..31  Sample Data                        */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} ABDACB_SDR0_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define ABDACB_SDR0_OFFSET          0x04         /**< \brief (ABDACB_SDR0 offset) Sample Data Register 0 */
#define ABDACB_SDR0_RESETVALUE      _U_(0x00000000); /**< \brief (ABDACB_SDR0 reset_value) Sample Data Register 0 */

#define ABDACB_SDR0_DATA_Pos        0            /**< \brief (ABDACB_SDR0) Sample Data */
#define ABDACB_SDR0_DATA_Msk        (_U_(0xFFFFFFFF) << ABDACB_SDR0_DATA_Pos)
#define ABDACB_SDR0_DATA(value)     (ABDACB_SDR0_DATA_Msk & ((value) << ABDACB_SDR0_DATA_Pos))
#define ABDACB_SDR0_MASK            _U_(0xFFFFFFFF) /**< \brief (ABDACB_SDR0) MASK Register */

/* -------- ABDACB_SDR1 : (ABDACB Offset: 0x08) (R/W 32) Sample Data Register 1 -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t DATA:32;          /*!< bit:  0..31  Sample Data                        */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} ABDACB_SDR1_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define ABDACB_SDR1_OFFSET          0x08         /**< \brief (ABDACB_SDR1 offset) Sample Data Register 1 */
#define ABDACB_SDR1_RESETVALUE      _U_(0x00000000); /**< \brief (ABDACB_SDR1 reset_value) Sample Data Register 1 */

#define ABDACB_SDR1_DATA_Pos        0            /**< \brief (ABDACB_SDR1) Sample Data */
#define ABDACB_SDR1_DATA_Msk        (_U_(0xFFFFFFFF) << ABDACB_SDR1_DATA_Pos)
#define ABDACB_SDR1_DATA(value)     (ABDACB_SDR1_DATA_Msk & ((value) << ABDACB_SDR1_DATA_Pos))
#define ABDACB_SDR1_MASK            _U_(0xFFFFFFFF) /**< \brief (ABDACB_SDR1) MASK Register */

/* -------- ABDACB_VCR0 : (ABDACB Offset: 0x0C) (R/W 32) Volume Control Register 0 -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t VOLUME:15;        /*!< bit:  0..14  Volume Control                     */
    uint32_t :16;              /*!< bit: 15..30  Reserved                           */
    uint32_t MUTE:1;           /*!< bit:     31  Mute                               */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} ABDACB_VCR0_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define ABDACB_VCR0_OFFSET          0x0C         /**< \brief (ABDACB_VCR0 offset) Volume Control Register 0 */
#define ABDACB_VCR0_RESETVALUE      _U_(0x00000000); /**< \brief (ABDACB_VCR0 reset_value) Volume Control Register 0 */

#define ABDACB_VCR0_VOLUME_Pos      0            /**< \brief (ABDACB_VCR0) Volume Control */
#define ABDACB_VCR0_VOLUME_Msk      (_U_(0x7FFF) << ABDACB_VCR0_VOLUME_Pos)
#define ABDACB_VCR0_VOLUME(value)   (ABDACB_VCR0_VOLUME_Msk & ((value) << ABDACB_VCR0_VOLUME_Pos))
#define ABDACB_VCR0_MUTE_Pos        31           /**< \brief (ABDACB_VCR0) Mute */
#define ABDACB_VCR0_MUTE            (_U_(0x1) << ABDACB_VCR0_MUTE_Pos)
#define ABDACB_VCR0_MASK            _U_(0x80007FFF) /**< \brief (ABDACB_VCR0) MASK Register */

/* -------- ABDACB_VCR1 : (ABDACB Offset: 0x10) (R/W 32) Volume Control Register 1 -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t VOLUME:15;        /*!< bit:  0..14  Volume Control                     */
    uint32_t :16;              /*!< bit: 15..30  Reserved                           */
    uint32_t MUTE:1;           /*!< bit:     31  Mute                               */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} ABDACB_VCR1_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define ABDACB_VCR1_OFFSET          0x10         /**< \brief (ABDACB_VCR1 offset) Volume Control Register 1 */
#define ABDACB_VCR1_RESETVALUE      _U_(0x00000000); /**< \brief (ABDACB_VCR1 reset_value) Volume Control Register 1 */

#define ABDACB_VCR1_VOLUME_Pos      0            /**< \brief (ABDACB_VCR1) Volume Control */
#define ABDACB_VCR1_VOLUME_Msk      (_U_(0x7FFF) << ABDACB_VCR1_VOLUME_Pos)
#define ABDACB_VCR1_VOLUME(value)   (ABDACB_VCR1_VOLUME_Msk & ((value) << ABDACB_VCR1_VOLUME_Pos))
#define ABDACB_VCR1_MUTE_Pos        31           /**< \brief (ABDACB_VCR1) Mute */
#define ABDACB_VCR1_MUTE            (_U_(0x1) << ABDACB_VCR1_MUTE_Pos)
#define ABDACB_VCR1_MASK            _U_(0x80007FFF) /**< \brief (ABDACB_VCR1) MASK Register */

/* -------- ABDACB_IER : (ABDACB Offset: 0x14) ( /W 32) Interrupt Enable Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t :1;               /*!< bit:      0  Reserved                           */
    uint32_t TXRDY:1;          /*!< bit:      1  Transmit Ready Interrupt Enable    */
    uint32_t TXUR:1;           /*!< bit:      2  Transmit Underrun Interrupt Enable */
    uint32_t :29;              /*!< bit:  3..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} ABDACB_IER_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define ABDACB_IER_OFFSET           0x14         /**< \brief (ABDACB_IER offset) Interrupt Enable Register */
#define ABDACB_IER_RESETVALUE       _U_(0x00000000); /**< \brief (ABDACB_IER reset_value) Interrupt Enable Register */

#define ABDACB_IER_TXRDY_Pos        1            /**< \brief (ABDACB_IER) Transmit Ready Interrupt Enable */
#define ABDACB_IER_TXRDY            (_U_(0x1) << ABDACB_IER_TXRDY_Pos)
#define   ABDACB_IER_TXRDY_0_Val          _U_(0x0)   /**< \brief (ABDACB_IER) No effect */
#define   ABDACB_IER_TXRDY_1_Val          _U_(0x1)   /**< \brief (ABDACB_IER) Enables the Audio DAC TX Ready interrupt */
#define ABDACB_IER_TXRDY_0          (ABDACB_IER_TXRDY_0_Val        << ABDACB_IER_TXRDY_Pos)
#define ABDACB_IER_TXRDY_1          (ABDACB_IER_TXRDY_1_Val        << ABDACB_IER_TXRDY_Pos)
#define ABDACB_IER_TXUR_Pos         2            /**< \brief (ABDACB_IER) Transmit Underrun Interrupt Enable */
#define ABDACB_IER_TXUR             (_U_(0x1) << ABDACB_IER_TXUR_Pos)
#define   ABDACB_IER_TXUR_0_Val           _U_(0x0)   /**< \brief (ABDACB_IER) No effect */
#define   ABDACB_IER_TXUR_1_Val           _U_(0x1)   /**< \brief (ABDACB_IER) Enables the Audio DAC Underrun interrupt */
#define ABDACB_IER_TXUR_0           (ABDACB_IER_TXUR_0_Val         << ABDACB_IER_TXUR_Pos)
#define ABDACB_IER_TXUR_1           (ABDACB_IER_TXUR_1_Val         << ABDACB_IER_TXUR_Pos)
#define ABDACB_IER_MASK             _U_(0x00000006) /**< \brief (ABDACB_IER) MASK Register */

/* -------- ABDACB_IDR : (ABDACB Offset: 0x18) ( /W 32) Interupt Disable Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t :1;               /*!< bit:      0  Reserved                           */
    uint32_t TXRDY:1;          /*!< bit:      1  Transmit Ready Interrupt Disable   */
    uint32_t TXUR:1;           /*!< bit:      2  Transmit Underrun Interrupt Disable */
    uint32_t :29;              /*!< bit:  3..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} ABDACB_IDR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define ABDACB_IDR_OFFSET           0x18         /**< \brief (ABDACB_IDR offset) Interupt Disable Register */
#define ABDACB_IDR_RESETVALUE       _U_(0x00000000); /**< \brief (ABDACB_IDR reset_value) Interupt Disable Register */

#define ABDACB_IDR_TXRDY_Pos        1            /**< \brief (ABDACB_IDR) Transmit Ready Interrupt Disable */
#define ABDACB_IDR_TXRDY            (_U_(0x1) << ABDACB_IDR_TXRDY_Pos)
#define   ABDACB_IDR_TXRDY_0_Val          _U_(0x0)   /**< \brief (ABDACB_IDR) No effect */
#define   ABDACB_IDR_TXRDY_1_Val          _U_(0x1)   /**< \brief (ABDACB_IDR) Disable the Audio DAC TX Ready interrupt */
#define ABDACB_IDR_TXRDY_0          (ABDACB_IDR_TXRDY_0_Val        << ABDACB_IDR_TXRDY_Pos)
#define ABDACB_IDR_TXRDY_1          (ABDACB_IDR_TXRDY_1_Val        << ABDACB_IDR_TXRDY_Pos)
#define ABDACB_IDR_TXUR_Pos         2            /**< \brief (ABDACB_IDR) Transmit Underrun Interrupt Disable */
#define ABDACB_IDR_TXUR             (_U_(0x1) << ABDACB_IDR_TXUR_Pos)
#define   ABDACB_IDR_TXUR_0_Val           _U_(0x0)   /**< \brief (ABDACB_IDR) No effect */
#define   ABDACB_IDR_TXUR_1_Val           _U_(0x1)   /**< \brief (ABDACB_IDR) Disable the Audio DAC Underrun interrupt */
#define ABDACB_IDR_TXUR_0           (ABDACB_IDR_TXUR_0_Val         << ABDACB_IDR_TXUR_Pos)
#define ABDACB_IDR_TXUR_1           (ABDACB_IDR_TXUR_1_Val         << ABDACB_IDR_TXUR_Pos)
#define ABDACB_IDR_MASK             _U_(0x00000006) /**< \brief (ABDACB_IDR) MASK Register */

/* -------- ABDACB_IMR : (ABDACB Offset: 0x1C) (R/  32) Interrupt Mask Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t :1;               /*!< bit:      0  Reserved                           */
    uint32_t TXRDY:1;          /*!< bit:      1  Transmit Ready Interrupt Mask      */
    uint32_t TXUR:1;           /*!< bit:      2  Transmit Underrun Interrupt Mask   */
    uint32_t :29;              /*!< bit:  3..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} ABDACB_IMR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define ABDACB_IMR_OFFSET           0x1C         /**< \brief (ABDACB_IMR offset) Interrupt Mask Register */
#define ABDACB_IMR_RESETVALUE       _U_(0x00000000); /**< \brief (ABDACB_IMR reset_value) Interrupt Mask Register */

#define ABDACB_IMR_TXRDY_Pos        1            /**< \brief (ABDACB_IMR) Transmit Ready Interrupt Mask */
#define ABDACB_IMR_TXRDY            (_U_(0x1) << ABDACB_IMR_TXRDY_Pos)
#define   ABDACB_IMR_TXRDY_0_Val          _U_(0x0)   /**< \brief (ABDACB_IMR) The Audio DAC TX Ready interrupt is disabled */
#define   ABDACB_IMR_TXRDY_1_Val          _U_(0x1)   /**< \brief (ABDACB_IMR) The Audio DAC TX Ready interrupt is enabled */
#define ABDACB_IMR_TXRDY_0          (ABDACB_IMR_TXRDY_0_Val        << ABDACB_IMR_TXRDY_Pos)
#define ABDACB_IMR_TXRDY_1          (ABDACB_IMR_TXRDY_1_Val        << ABDACB_IMR_TXRDY_Pos)
#define ABDACB_IMR_TXUR_Pos         2            /**< \brief (ABDACB_IMR) Transmit Underrun Interrupt Mask */
#define ABDACB_IMR_TXUR             (_U_(0x1) << ABDACB_IMR_TXUR_Pos)
#define   ABDACB_IMR_TXUR_0_Val           _U_(0x0)   /**< \brief (ABDACB_IMR) The Audio DAC Underrun interrupt is disabled */
#define   ABDACB_IMR_TXUR_1_Val           _U_(0x1)   /**< \brief (ABDACB_IMR) The Audio DAC Underrun interrupt is enabled */
#define ABDACB_IMR_TXUR_0           (ABDACB_IMR_TXUR_0_Val         << ABDACB_IMR_TXUR_Pos)
#define ABDACB_IMR_TXUR_1           (ABDACB_IMR_TXUR_1_Val         << ABDACB_IMR_TXUR_Pos)
#define ABDACB_IMR_MASK             _U_(0x00000006) /**< \brief (ABDACB_IMR) MASK Register */

/* -------- ABDACB_SR : (ABDACB Offset: 0x20) (R/  32) Status Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t BUSY:1;           /*!< bit:      0  ABDACB Busy                        */
    uint32_t TXRDY:1;          /*!< bit:      1  Transmit Ready                     */
    uint32_t TXUR:1;           /*!< bit:      2  Transmit Underrun                  */
    uint32_t :29;              /*!< bit:  3..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} ABDACB_SR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define ABDACB_SR_OFFSET            0x20         /**< \brief (ABDACB_SR offset) Status Register */
#define ABDACB_SR_RESETVALUE        _U_(0x00000000); /**< \brief (ABDACB_SR reset_value) Status Register */

#define ABDACB_SR_BUSY_Pos          0            /**< \brief (ABDACB_SR) ABDACB Busy */
#define ABDACB_SR_BUSY              (_U_(0x1) << ABDACB_SR_BUSY_Pos)
#define ABDACB_SR_TXRDY_Pos         1            /**< \brief (ABDACB_SR) Transmit Ready */
#define ABDACB_SR_TXRDY             (_U_(0x1) << ABDACB_SR_TXRDY_Pos)
#define   ABDACB_SR_TXRDY_0_Val           _U_(0x0)   /**< \brief (ABDACB_SR) No Audio DAC TX Ready has occured since the last time ISR was read or since reset */
#define   ABDACB_SR_TXRDY_1_Val           _U_(0x1)   /**< \brief (ABDACB_SR) At least one Audio DAC TX Ready has occured since the last time ISR was read or since reset */
#define ABDACB_SR_TXRDY_0           (ABDACB_SR_TXRDY_0_Val         << ABDACB_SR_TXRDY_Pos)
#define ABDACB_SR_TXRDY_1           (ABDACB_SR_TXRDY_1_Val         << ABDACB_SR_TXRDY_Pos)
#define ABDACB_SR_TXUR_Pos          2            /**< \brief (ABDACB_SR) Transmit Underrun */
#define ABDACB_SR_TXUR              (_U_(0x1) << ABDACB_SR_TXUR_Pos)
#define   ABDACB_SR_TXUR_0_Val            _U_(0x0)   /**< \brief (ABDACB_SR) No Audio DAC Underrun has occured since the last time ISR was read or since reset */
#define   ABDACB_SR_TXUR_1_Val            _U_(0x1)   /**< \brief (ABDACB_SR) At least one Audio DAC Underrun has occured since the last time ISR was read or since reset */
#define ABDACB_SR_TXUR_0            (ABDACB_SR_TXUR_0_Val          << ABDACB_SR_TXUR_Pos)
#define ABDACB_SR_TXUR_1            (ABDACB_SR_TXUR_1_Val          << ABDACB_SR_TXUR_Pos)
#define ABDACB_SR_MASK              _U_(0x00000007) /**< \brief (ABDACB_SR) MASK Register */

/* -------- ABDACB_SCR : (ABDACB Offset: 0x24) ( /W 32) Status Clear Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t :1;               /*!< bit:      0  Reserved                           */
    uint32_t TXRDY:1;          /*!< bit:      1  Transmit Ready Interrupt Clear     */
    uint32_t TXUR:1;           /*!< bit:      2  Transmit Underrun Interrupt Clear  */
    uint32_t :29;              /*!< bit:  3..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} ABDACB_SCR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define ABDACB_SCR_OFFSET           0x24         /**< \brief (ABDACB_SCR offset) Status Clear Register */
#define ABDACB_SCR_RESETVALUE       _U_(0x00000000); /**< \brief (ABDACB_SCR reset_value) Status Clear Register */

#define ABDACB_SCR_TXRDY_Pos        1            /**< \brief (ABDACB_SCR) Transmit Ready Interrupt Clear */
#define ABDACB_SCR_TXRDY            (_U_(0x1) << ABDACB_SCR_TXRDY_Pos)
#define   ABDACB_SCR_TXRDY_0_Val          _U_(0x0)   /**< \brief (ABDACB_SCR) No effect */
#define   ABDACB_SCR_TXRDY_1_Val          _U_(0x1)   /**< \brief (ABDACB_SCR) Clear the Audio DAC TX Ready interrupt */
#define ABDACB_SCR_TXRDY_0          (ABDACB_SCR_TXRDY_0_Val        << ABDACB_SCR_TXRDY_Pos)
#define ABDACB_SCR_TXRDY_1          (ABDACB_SCR_TXRDY_1_Val        << ABDACB_SCR_TXRDY_Pos)
#define ABDACB_SCR_TXUR_Pos         2            /**< \brief (ABDACB_SCR) Transmit Underrun Interrupt Clear */
#define ABDACB_SCR_TXUR             (_U_(0x1) << ABDACB_SCR_TXUR_Pos)
#define   ABDACB_SCR_TXUR_0_Val           _U_(0x0)   /**< \brief (ABDACB_SCR) No effect */
#define   ABDACB_SCR_TXUR_1_Val           _U_(0x1)   /**< \brief (ABDACB_SCR) Clear the Audio DAC Underrun interrupt */
#define ABDACB_SCR_TXUR_0           (ABDACB_SCR_TXUR_0_Val         << ABDACB_SCR_TXUR_Pos)
#define ABDACB_SCR_TXUR_1           (ABDACB_SCR_TXUR_1_Val         << ABDACB_SCR_TXUR_Pos)
#define ABDACB_SCR_MASK             _U_(0x00000006) /**< \brief (ABDACB_SCR) MASK Register */

/* -------- ABDACB_PARAMETER : (ABDACB Offset: 0x28) (R/  32) Parameter Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  uint32_t reg;                /*!< Type      used for register access              */
} ABDACB_PARAMETER_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define ABDACB_PARAMETER_OFFSET     0x28         /**< \brief (ABDACB_PARAMETER offset) Parameter Register */
#define ABDACB_PARAMETER_RESETVALUE _U_(0x00000000); /**< \brief (ABDACB_PARAMETER reset_value) Parameter Register */
#define ABDACB_PARAMETER_MASK       _U_(0xFFFFFFFF) /**< \brief (ABDACB_PARAMETER) MASK Register */

/* -------- ABDACB_VERSION : (ABDACB Offset: 0x2C) (R/  32) Version Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t VERSION:12;       /*!< bit:  0..11  Version Number                     */
    uint32_t :4;               /*!< bit: 12..15  Reserved                           */
    uint32_t VARIANT:4;        /*!< bit: 16..19  Variant Number                     */
    uint32_t :12;              /*!< bit: 20..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} ABDACB_VERSION_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define ABDACB_VERSION_OFFSET       0x2C         /**< \brief (ABDACB_VERSION offset) Version Register */
#define ABDACB_VERSION_RESETVALUE   _U_(0x00000100); /**< \brief (ABDACB_VERSION reset_value) Version Register */

#define ABDACB_VERSION_VERSION_Pos  0            /**< \brief (ABDACB_VERSION) Version Number */
#define ABDACB_VERSION_VERSION_Msk  (_U_(0xFFF) << ABDACB_VERSION_VERSION_Pos)
#define ABDACB_VERSION_VERSION(value) (ABDACB_VERSION_VERSION_Msk & ((value) << ABDACB_VERSION_VERSION_Pos))
#define ABDACB_VERSION_VARIANT_Pos  16           /**< \brief (ABDACB_VERSION) Variant Number */
#define ABDACB_VERSION_VARIANT_Msk  (_U_(0xF) << ABDACB_VERSION_VARIANT_Pos)
#define ABDACB_VERSION_VARIANT(value) (ABDACB_VERSION_VARIANT_Msk & ((value) << ABDACB_VERSION_VARIANT_Pos))
#define ABDACB_VERSION_MASK         _U_(0x000F0FFF) /**< \brief (ABDACB_VERSION) MASK Register */

/** \brief ABDACB hardware registers */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef struct {
  __IO uint32_t CR;          /**< \brief Offset: 0x00 (R/W 32) Control Register */
  __IO uint32_t SDR0;        /**< \brief Offset: 0x04 (R/W 32) Sample Data Register 0 */
  __IO uint32_t SDR1;        /**< \brief Offset: 0x08 (R/W 32) Sample Data Register 1 */
  __IO uint32_t VCR0;        /**< \brief Offset: 0x0C (R/W 32) Volume Control Register 0 */
  __IO uint32_t VCR1;        /**< \brief Offset: 0x10 (R/W 32) Volume Control Register 1 */
  __O  uint32_t IER;         /**< \brief Offset: 0x14 ( /W 32) Interrupt Enable Register */
  __O  uint32_t IDR;         /**< \brief Offset: 0x18 ( /W 32) Interupt Disable Register */
  __I  uint32_t IMR;         /**< \brief Offset: 0x1C (R/  32) Interrupt Mask Register */
  __I  uint32_t SR;          /**< \brief Offset: 0x20 (R/  32) Status Register */
  __O  uint32_t SCR;         /**< \brief Offset: 0x24 ( /W 32) Status Clear Register */
  __I  uint32_t PARAMETER;   /**< \brief Offset: 0x28 (R/  32) Parameter Register */
  __I  uint32_t VERSION;     /**< \brief Offset: 0x2C (R/  32) Version Register */
} Abdacb;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

/*@}*/

#endif /* _SAM4L_ABDACB_COMPONENT_ */
