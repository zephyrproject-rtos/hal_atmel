/**
 * \file
 *
 * \brief Component description for FREQM
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

#ifndef _SAM4L_FREQM_COMPONENT_
#define _SAM4L_FREQM_COMPONENT_

/* ========================================================================== */
/**  SOFTWARE API DEFINITION FOR FREQM */
/* ========================================================================== */
/** \addtogroup SAM4L_FREQM Frequency Meter */
/*@{*/

#define FREQM_I7530
#define REV_FREQM                   0x311

/* -------- FREQM_CTRL : (FREQM Offset: 0x000) ( /W 32) Control register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t START:1;          /*!< bit:      0  Start frequency measurement        */
    uint32_t :31;              /*!< bit:  1..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} FREQM_CTRL_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define FREQM_CTRL_OFFSET           0x000        /**< \brief (FREQM_CTRL offset) Control register */
#define FREQM_CTRL_RESETVALUE       _U_(0x00000000); /**< \brief (FREQM_CTRL reset_value) Control register */

#define FREQM_CTRL_START_Pos        0            /**< \brief (FREQM_CTRL) Start frequency measurement */
#define FREQM_CTRL_START            (_U_(0x1) << FREQM_CTRL_START_Pos)
#define FREQM_CTRL_MASK             _U_(0x00000001) /**< \brief (FREQM_CTRL) MASK Register */

/* -------- FREQM_MODE : (FREQM Offset: 0x004) (R/W 32) Mode  register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t REFSEL:2;         /*!< bit:  0.. 1  Reference Clock Selection          */
    uint32_t :6;               /*!< bit:  2.. 7  Reserved                           */
    uint32_t REFNUM:8;         /*!< bit:  8..15  Number of Reference CLock Cycles   */
    uint32_t CLKSEL:5;         /*!< bit: 16..20  Clock Source Selection             */
    uint32_t :10;              /*!< bit: 21..30  Reserved                           */
    uint32_t REFCEN:1;         /*!< bit:     31  Reference Clock Enable             */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} FREQM_MODE_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define FREQM_MODE_OFFSET           0x004        /**< \brief (FREQM_MODE offset) Mode  register */
#define FREQM_MODE_RESETVALUE       _U_(0x00000000); /**< \brief (FREQM_MODE reset_value) Mode  register */

#define FREQM_MODE_REFSEL_Pos       0            /**< \brief (FREQM_MODE) Reference Clock Selection */
#define FREQM_MODE_REFSEL_Msk       (_U_(0x3) << FREQM_MODE_REFSEL_Pos)
#define FREQM_MODE_REFSEL(value)    (FREQM_MODE_REFSEL_Msk & ((value) << FREQM_MODE_REFSEL_Pos))
#define FREQM_MODE_REFNUM_Pos       8            /**< \brief (FREQM_MODE) Number of Reference CLock Cycles */
#define FREQM_MODE_REFNUM_Msk       (_U_(0xFF) << FREQM_MODE_REFNUM_Pos)
#define FREQM_MODE_REFNUM(value)    (FREQM_MODE_REFNUM_Msk & ((value) << FREQM_MODE_REFNUM_Pos))
#define FREQM_MODE_CLKSEL_Pos       16           /**< \brief (FREQM_MODE) Clock Source Selection */
#define FREQM_MODE_CLKSEL_Msk       (_U_(0x1F) << FREQM_MODE_CLKSEL_Pos)
#define FREQM_MODE_CLKSEL(value)    (FREQM_MODE_CLKSEL_Msk & ((value) << FREQM_MODE_CLKSEL_Pos))
#define FREQM_MODE_REFCEN_Pos       31           /**< \brief (FREQM_MODE) Reference Clock Enable */
#define FREQM_MODE_REFCEN           (_U_(0x1) << FREQM_MODE_REFCEN_Pos)
#define FREQM_MODE_MASK             _U_(0x801FFF03) /**< \brief (FREQM_MODE) MASK Register */

/* -------- FREQM_STATUS : (FREQM Offset: 0x008) (R/  32) Status  register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t BUSY:1;           /*!< bit:      0  Frequency measurement on-going     */
    uint32_t RCLKBUSY:1;       /*!< bit:      1  Reference Clock busy               */
    uint32_t :30;              /*!< bit:  2..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} FREQM_STATUS_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define FREQM_STATUS_OFFSET         0x008        /**< \brief (FREQM_STATUS offset) Status  register */
#define FREQM_STATUS_RESETVALUE     _U_(0x00000000); /**< \brief (FREQM_STATUS reset_value) Status  register */

#define FREQM_STATUS_BUSY_Pos       0            /**< \brief (FREQM_STATUS) Frequency measurement on-going */
#define FREQM_STATUS_BUSY           (_U_(0x1) << FREQM_STATUS_BUSY_Pos)
#define FREQM_STATUS_RCLKBUSY_Pos   1            /**< \brief (FREQM_STATUS) Reference Clock busy */
#define FREQM_STATUS_RCLKBUSY       (_U_(0x1) << FREQM_STATUS_RCLKBUSY_Pos)
#define FREQM_STATUS_MASK           _U_(0x00000003) /**< \brief (FREQM_STATUS) MASK Register */

/* -------- FREQM_VALUE : (FREQM Offset: 0x00C) (R/  32) Value register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t VALUE:24;         /*!< bit:  0..23  Measured frequency                 */
    uint32_t :8;               /*!< bit: 24..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} FREQM_VALUE_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define FREQM_VALUE_OFFSET          0x00C        /**< \brief (FREQM_VALUE offset) Value register */
#define FREQM_VALUE_RESETVALUE      _U_(0x00000000); /**< \brief (FREQM_VALUE reset_value) Value register */

#define FREQM_VALUE_VALUE_Pos       0            /**< \brief (FREQM_VALUE) Measured frequency */
#define FREQM_VALUE_VALUE_Msk       (_U_(0xFFFFFF) << FREQM_VALUE_VALUE_Pos)
#define FREQM_VALUE_VALUE(value)    (FREQM_VALUE_VALUE_Msk & ((value) << FREQM_VALUE_VALUE_Pos))
#define FREQM_VALUE_MASK            _U_(0x00FFFFFF) /**< \brief (FREQM_VALUE) MASK Register */

/* -------- FREQM_IER : (FREQM Offset: 0x010) ( /W 32) Interrupt Enable Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t DONE:1;           /*!< bit:      0  Frequency measurment done          */
    uint32_t RCLKRDY:1;        /*!< bit:      1  Reference Clock ready              */
    uint32_t :30;              /*!< bit:  2..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} FREQM_IER_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define FREQM_IER_OFFSET            0x010        /**< \brief (FREQM_IER offset) Interrupt Enable Register */
#define FREQM_IER_RESETVALUE        _U_(0x00000000); /**< \brief (FREQM_IER reset_value) Interrupt Enable Register */

#define FREQM_IER_DONE_Pos          0            /**< \brief (FREQM_IER) Frequency measurment done */
#define FREQM_IER_DONE              (_U_(0x1) << FREQM_IER_DONE_Pos)
#define FREQM_IER_RCLKRDY_Pos       1            /**< \brief (FREQM_IER) Reference Clock ready */
#define FREQM_IER_RCLKRDY           (_U_(0x1) << FREQM_IER_RCLKRDY_Pos)
#define FREQM_IER_MASK              _U_(0x00000003) /**< \brief (FREQM_IER) MASK Register */

/* -------- FREQM_IDR : (FREQM Offset: 0x014) ( /W 32) Interrupt Diable Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t DONE:1;           /*!< bit:      0  Frequency measurment done          */
    uint32_t RCLKRDY:1;        /*!< bit:      1  Reference Clock ready              */
    uint32_t :30;              /*!< bit:  2..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} FREQM_IDR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define FREQM_IDR_OFFSET            0x014        /**< \brief (FREQM_IDR offset) Interrupt Diable Register */
#define FREQM_IDR_RESETVALUE        _U_(0x00000000); /**< \brief (FREQM_IDR reset_value) Interrupt Diable Register */

#define FREQM_IDR_DONE_Pos          0            /**< \brief (FREQM_IDR) Frequency measurment done */
#define FREQM_IDR_DONE              (_U_(0x1) << FREQM_IDR_DONE_Pos)
#define FREQM_IDR_RCLKRDY_Pos       1            /**< \brief (FREQM_IDR) Reference Clock ready */
#define FREQM_IDR_RCLKRDY           (_U_(0x1) << FREQM_IDR_RCLKRDY_Pos)
#define FREQM_IDR_MASK              _U_(0x00000003) /**< \brief (FREQM_IDR) MASK Register */

/* -------- FREQM_IMR : (FREQM Offset: 0x018) (R/  32) Interrupt Mask Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t DONE:1;           /*!< bit:      0  Frequency measurment done          */
    uint32_t RCLKRDY:1;        /*!< bit:      1  Reference Clock ready              */
    uint32_t :30;              /*!< bit:  2..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} FREQM_IMR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define FREQM_IMR_OFFSET            0x018        /**< \brief (FREQM_IMR offset) Interrupt Mask Register */
#define FREQM_IMR_RESETVALUE        _U_(0x00000000); /**< \brief (FREQM_IMR reset_value) Interrupt Mask Register */

#define FREQM_IMR_DONE_Pos          0            /**< \brief (FREQM_IMR) Frequency measurment done */
#define FREQM_IMR_DONE              (_U_(0x1) << FREQM_IMR_DONE_Pos)
#define FREQM_IMR_RCLKRDY_Pos       1            /**< \brief (FREQM_IMR) Reference Clock ready */
#define FREQM_IMR_RCLKRDY           (_U_(0x1) << FREQM_IMR_RCLKRDY_Pos)
#define FREQM_IMR_MASK              _U_(0x00000003) /**< \brief (FREQM_IMR) MASK Register */

/* -------- FREQM_ISR : (FREQM Offset: 0x01C) (R/  32) Interrupt Status Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t DONE:1;           /*!< bit:      0  Frequency measurment done          */
    uint32_t RCLKRDY:1;        /*!< bit:      1  Reference Clock ready              */
    uint32_t :30;              /*!< bit:  2..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} FREQM_ISR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define FREQM_ISR_OFFSET            0x01C        /**< \brief (FREQM_ISR offset) Interrupt Status Register */
#define FREQM_ISR_RESETVALUE        _U_(0x00000000); /**< \brief (FREQM_ISR reset_value) Interrupt Status Register */

#define FREQM_ISR_DONE_Pos          0            /**< \brief (FREQM_ISR) Frequency measurment done */
#define FREQM_ISR_DONE              (_U_(0x1) << FREQM_ISR_DONE_Pos)
#define FREQM_ISR_RCLKRDY_Pos       1            /**< \brief (FREQM_ISR) Reference Clock ready */
#define FREQM_ISR_RCLKRDY           (_U_(0x1) << FREQM_ISR_RCLKRDY_Pos)
#define FREQM_ISR_MASK              _U_(0x00000003) /**< \brief (FREQM_ISR) MASK Register */

/* -------- FREQM_ICR : (FREQM Offset: 0x020) ( /W 32) Interrupt Clear Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t DONE:1;           /*!< bit:      0  Frequency measurment done          */
    uint32_t RCLKRDY:1;        /*!< bit:      1  Reference Clock ready              */
    uint32_t :30;              /*!< bit:  2..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} FREQM_ICR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define FREQM_ICR_OFFSET            0x020        /**< \brief (FREQM_ICR offset) Interrupt Clear Register */
#define FREQM_ICR_RESETVALUE        _U_(0x00000000); /**< \brief (FREQM_ICR reset_value) Interrupt Clear Register */

#define FREQM_ICR_DONE_Pos          0            /**< \brief (FREQM_ICR) Frequency measurment done */
#define FREQM_ICR_DONE              (_U_(0x1) << FREQM_ICR_DONE_Pos)
#define FREQM_ICR_RCLKRDY_Pos       1            /**< \brief (FREQM_ICR) Reference Clock ready */
#define FREQM_ICR_RCLKRDY           (_U_(0x1) << FREQM_ICR_RCLKRDY_Pos)
#define FREQM_ICR_MASK              _U_(0x00000003) /**< \brief (FREQM_ICR) MASK Register */

/* -------- FREQM_VERSION : (FREQM Offset: 0x3FC) (R/  32) Version Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t VERSION:12;       /*!< bit:  0..11  Version number                     */
    uint32_t :4;               /*!< bit: 12..15  Reserved                           */
    uint32_t VARIANT:4;        /*!< bit: 16..19  Variant number                     */
    uint32_t :12;              /*!< bit: 20..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} FREQM_VERSION_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define FREQM_VERSION_OFFSET        0x3FC        /**< \brief (FREQM_VERSION offset) Version Register */
#define FREQM_VERSION_RESETVALUE    _U_(0x00000311); /**< \brief (FREQM_VERSION reset_value) Version Register */

#define FREQM_VERSION_VERSION_Pos   0            /**< \brief (FREQM_VERSION) Version number */
#define FREQM_VERSION_VERSION_Msk   (_U_(0xFFF) << FREQM_VERSION_VERSION_Pos)
#define FREQM_VERSION_VERSION(value) (FREQM_VERSION_VERSION_Msk & ((value) << FREQM_VERSION_VERSION_Pos))
#define FREQM_VERSION_VARIANT_Pos   16           /**< \brief (FREQM_VERSION) Variant number */
#define FREQM_VERSION_VARIANT_Msk   (_U_(0xF) << FREQM_VERSION_VARIANT_Pos)
#define FREQM_VERSION_VARIANT(value) (FREQM_VERSION_VARIANT_Msk & ((value) << FREQM_VERSION_VARIANT_Pos))
#define FREQM_VERSION_MASK          _U_(0x000F0FFF) /**< \brief (FREQM_VERSION) MASK Register */

/** \brief FREQM hardware registers */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef struct {
  __O  uint32_t CTRL;        /**< \brief Offset: 0x000 ( /W 32) Control register */
  __IO uint32_t MODE;        /**< \brief Offset: 0x004 (R/W 32) Mode  register */
  __I  uint32_t STATUS;      /**< \brief Offset: 0x008 (R/  32) Status  register */
  __I  uint32_t VALUE;       /**< \brief Offset: 0x00C (R/  32) Value register */
  __O  uint32_t IER;         /**< \brief Offset: 0x010 ( /W 32) Interrupt Enable Register */
  __O  uint32_t IDR;         /**< \brief Offset: 0x014 ( /W 32) Interrupt Diable Register */
  __I  uint32_t IMR;         /**< \brief Offset: 0x018 (R/  32) Interrupt Mask Register */
  __I  uint32_t ISR;         /**< \brief Offset: 0x01C (R/  32) Interrupt Status Register */
  __O  uint32_t ICR;         /**< \brief Offset: 0x020 ( /W 32) Interrupt Clear Register */
       RoReg8   Reserved1[0x3D8];
  __I  uint32_t VERSION;     /**< \brief Offset: 0x3FC (R/  32) Version Register */
} Freqm;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

/*@}*/

#endif /* _SAM4L_FREQM_COMPONENT_ */
