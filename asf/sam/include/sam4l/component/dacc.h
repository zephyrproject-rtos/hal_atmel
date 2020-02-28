/**
 * \file
 *
 * \brief Component description for DACC
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

#ifndef _SAM4L_DACC_COMPONENT_
#define _SAM4L_DACC_COMPONENT_

/* ========================================================================== */
/**  SOFTWARE API DEFINITION FOR DACC */
/* ========================================================================== */
/** \addtogroup SAM4L_DACC DAC Controller */
/*@{*/

#define DACC_I7645
#define REV_DACC                    0x111

/* -------- DACC_CR : (DACC Offset: 0x00) ( /W 32) Control Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t SWRST:1;          /*!< bit:      0  Software Reset                     */
    uint32_t :31;              /*!< bit:  1..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} DACC_CR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define DACC_CR_OFFSET              0x00         /**< \brief (DACC_CR offset) Control Register */
#define DACC_CR_RESETVALUE          _U_(0x00000000); /**< \brief (DACC_CR reset_value) Control Register */

#define DACC_CR_SWRST_Pos           0            /**< \brief (DACC_CR) Software Reset */
#define DACC_CR_SWRST               (_U_(0x1) << DACC_CR_SWRST_Pos)
#define DACC_CR_MASK                _U_(0x00000001) /**< \brief (DACC_CR) MASK Register */

/* -------- DACC_MR : (DACC Offset: 0x04) (R/W 32) Mode Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t TRGEN:1;          /*!< bit:      0  Trigger Enable                     */
    uint32_t TRGSEL:3;         /*!< bit:  1.. 3  Trigger Selection                  */
    uint32_t DACEN:1;          /*!< bit:      4  DAC Enable                         */
    uint32_t WORD:1;           /*!< bit:      5  Word Transfer                      */
    uint32_t :2;               /*!< bit:  6.. 7  Reserved                           */
    uint32_t STARTUP:8;        /*!< bit:  8..15  Startup Time Selection             */
    uint32_t CLKDIV:16;        /*!< bit: 16..31  Clock Divider for Internal Trigger */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} DACC_MR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define DACC_MR_OFFSET              0x04         /**< \brief (DACC_MR offset) Mode Register */
#define DACC_MR_RESETVALUE          _U_(0x00000000); /**< \brief (DACC_MR reset_value) Mode Register */

#define DACC_MR_TRGEN_Pos           0            /**< \brief (DACC_MR) Trigger Enable */
#define DACC_MR_TRGEN               (_U_(0x1) << DACC_MR_TRGEN_Pos)
#define DACC_MR_TRGSEL_Pos          1            /**< \brief (DACC_MR) Trigger Selection */
#define DACC_MR_TRGSEL_Msk          (_U_(0x7) << DACC_MR_TRGSEL_Pos)
#define DACC_MR_TRGSEL(value)       (DACC_MR_TRGSEL_Msk & ((value) << DACC_MR_TRGSEL_Pos))
#define DACC_MR_DACEN_Pos           4            /**< \brief (DACC_MR) DAC Enable */
#define DACC_MR_DACEN               (_U_(0x1) << DACC_MR_DACEN_Pos)
#define DACC_MR_WORD_Pos            5            /**< \brief (DACC_MR) Word Transfer */
#define DACC_MR_WORD                (_U_(0x1) << DACC_MR_WORD_Pos)
#define DACC_MR_STARTUP_Pos         8            /**< \brief (DACC_MR) Startup Time Selection */
#define DACC_MR_STARTUP_Msk         (_U_(0xFF) << DACC_MR_STARTUP_Pos)
#define DACC_MR_STARTUP(value)      (DACC_MR_STARTUP_Msk & ((value) << DACC_MR_STARTUP_Pos))
#define DACC_MR_CLKDIV_Pos          16           /**< \brief (DACC_MR) Clock Divider for Internal Trigger */
#define DACC_MR_CLKDIV_Msk          (_U_(0xFFFF) << DACC_MR_CLKDIV_Pos)
#define DACC_MR_CLKDIV(value)       (DACC_MR_CLKDIV_Msk & ((value) << DACC_MR_CLKDIV_Pos))
#define DACC_MR_MASK                _U_(0xFFFFFF3F) /**< \brief (DACC_MR) MASK Register */

/* -------- DACC_CDR : (DACC Offset: 0x08) ( /W 32) Conversion Data Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t DATA:32;          /*!< bit:  0..31  Data to Convert                    */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} DACC_CDR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define DACC_CDR_OFFSET             0x08         /**< \brief (DACC_CDR offset) Conversion Data Register */
#define DACC_CDR_RESETVALUE         _U_(0x00000000); /**< \brief (DACC_CDR reset_value) Conversion Data Register */

#define DACC_CDR_DATA_Pos           0            /**< \brief (DACC_CDR) Data to Convert */
#define DACC_CDR_DATA_Msk           (_U_(0xFFFFFFFF) << DACC_CDR_DATA_Pos)
#define DACC_CDR_DATA(value)        (DACC_CDR_DATA_Msk & ((value) << DACC_CDR_DATA_Pos))
#define DACC_CDR_MASK               _U_(0xFFFFFFFF) /**< \brief (DACC_CDR) MASK Register */

/* -------- DACC_IER : (DACC Offset: 0x0C) ( /W 32) Interrupt Enable Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t TXRDY:1;          /*!< bit:      0  Transmit Ready Interrupt Enable    */
    uint32_t :31;              /*!< bit:  1..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} DACC_IER_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define DACC_IER_OFFSET             0x0C         /**< \brief (DACC_IER offset) Interrupt Enable Register */
#define DACC_IER_RESETVALUE         _U_(0x00000000); /**< \brief (DACC_IER reset_value) Interrupt Enable Register */

#define DACC_IER_TXRDY_Pos          0            /**< \brief (DACC_IER) Transmit Ready Interrupt Enable */
#define DACC_IER_TXRDY              (_U_(0x1) << DACC_IER_TXRDY_Pos)
#define DACC_IER_MASK               _U_(0x00000001) /**< \brief (DACC_IER) MASK Register */

/* -------- DACC_IDR : (DACC Offset: 0x10) ( /W 32) Interrupt Disable Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t TXRDY:1;          /*!< bit:      0  Transmit Ready Interrupt Disable   */
    uint32_t :31;              /*!< bit:  1..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} DACC_IDR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define DACC_IDR_OFFSET             0x10         /**< \brief (DACC_IDR offset) Interrupt Disable Register */

#define DACC_IDR_TXRDY_Pos          0            /**< \brief (DACC_IDR) Transmit Ready Interrupt Disable */
#define DACC_IDR_TXRDY              (_U_(0x1) << DACC_IDR_TXRDY_Pos)
#define DACC_IDR_MASK               _U_(0x00000001) /**< \brief (DACC_IDR) MASK Register */

/* -------- DACC_IMR : (DACC Offset: 0x14) (R/  32) Interrupt Mask Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t TXRDY:1;          /*!< bit:      0  Transmit Ready Interrupt Mask      */
    uint32_t :31;              /*!< bit:  1..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} DACC_IMR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define DACC_IMR_OFFSET             0x14         /**< \brief (DACC_IMR offset) Interrupt Mask Register */
#define DACC_IMR_RESETVALUE         _U_(0x00000000); /**< \brief (DACC_IMR reset_value) Interrupt Mask Register */

#define DACC_IMR_TXRDY_Pos          0            /**< \brief (DACC_IMR) Transmit Ready Interrupt Mask */
#define DACC_IMR_TXRDY              (_U_(0x1) << DACC_IMR_TXRDY_Pos)
#define DACC_IMR_MASK               _U_(0x00000001) /**< \brief (DACC_IMR) MASK Register */

/* -------- DACC_ISR : (DACC Offset: 0x18) (R/  32) Interrupt Status Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t TXRDY:1;          /*!< bit:      0  Transmit Ready Interrupt Status    */
    uint32_t :31;              /*!< bit:  1..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} DACC_ISR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define DACC_ISR_OFFSET             0x18         /**< \brief (DACC_ISR offset) Interrupt Status Register */
#define DACC_ISR_RESETVALUE         _U_(0x00000000); /**< \brief (DACC_ISR reset_value) Interrupt Status Register */

#define DACC_ISR_TXRDY_Pos          0            /**< \brief (DACC_ISR) Transmit Ready Interrupt Status */
#define DACC_ISR_TXRDY              (_U_(0x1) << DACC_ISR_TXRDY_Pos)
#define DACC_ISR_MASK               _U_(0x00000001) /**< \brief (DACC_ISR) MASK Register */

/* -------- DACC_WPMR : (DACC Offset: 0xE4) (R/W 32) Write Protect Mode Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t WPEN:1;           /*!< bit:      0  Write Protect Enable               */
    uint32_t :7;               /*!< bit:  1.. 7  Reserved                           */
    uint32_t WPKEY:24;         /*!< bit:  8..31  Write Protect Key                  */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} DACC_WPMR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define DACC_WPMR_OFFSET            0xE4         /**< \brief (DACC_WPMR offset) Write Protect Mode Register */
#define DACC_WPMR_RESETVALUE        _U_(0x00000000); /**< \brief (DACC_WPMR reset_value) Write Protect Mode Register */

#define DACC_WPMR_WPEN_Pos          0            /**< \brief (DACC_WPMR) Write Protect Enable */
#define DACC_WPMR_WPEN              (_U_(0x1) << DACC_WPMR_WPEN_Pos)
#define DACC_WPMR_WPKEY_Pos         8            /**< \brief (DACC_WPMR) Write Protect Key */
#define DACC_WPMR_WPKEY_Msk         (_U_(0xFFFFFF) << DACC_WPMR_WPKEY_Pos)
#define DACC_WPMR_WPKEY(value)      (DACC_WPMR_WPKEY_Msk & ((value) << DACC_WPMR_WPKEY_Pos))
#define DACC_WPMR_MASK              _U_(0xFFFFFF01) /**< \brief (DACC_WPMR) MASK Register */

/* -------- DACC_WPSR : (DACC Offset: 0xE8) (R/  32) Write Protect Status Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t WPROTERR:1;       /*!< bit:      0  Write Protection Error             */
    uint32_t :7;               /*!< bit:  1.. 7  Reserved                           */
    uint32_t WPROTADDR:8;      /*!< bit:  8..15  Write Protection Error Address     */
    uint32_t :16;              /*!< bit: 16..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} DACC_WPSR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define DACC_WPSR_OFFSET            0xE8         /**< \brief (DACC_WPSR offset) Write Protect Status Register */
#define DACC_WPSR_RESETVALUE        _U_(0x00000000); /**< \brief (DACC_WPSR reset_value) Write Protect Status Register */

#define DACC_WPSR_WPROTERR_Pos      0            /**< \brief (DACC_WPSR) Write Protection Error */
#define DACC_WPSR_WPROTERR          (_U_(0x1) << DACC_WPSR_WPROTERR_Pos)
#define DACC_WPSR_WPROTADDR_Pos     8            /**< \brief (DACC_WPSR) Write Protection Error Address */
#define DACC_WPSR_WPROTADDR_Msk     (_U_(0xFF) << DACC_WPSR_WPROTADDR_Pos)
#define DACC_WPSR_WPROTADDR(value)  (DACC_WPSR_WPROTADDR_Msk & ((value) << DACC_WPSR_WPROTADDR_Pos))
#define DACC_WPSR_MASK              _U_(0x0000FF01) /**< \brief (DACC_WPSR) MASK Register */

/* -------- DACC_VERSION : (DACC Offset: 0xFC) (R/  32) Version Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t VERSION:12;       /*!< bit:  0..11  Version Number                     */
    uint32_t :4;               /*!< bit: 12..15  Reserved                           */
    uint32_t VARIANT:3;        /*!< bit: 16..18  Variant Number                     */
    uint32_t :13;              /*!< bit: 19..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} DACC_VERSION_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define DACC_VERSION_OFFSET         0xFC         /**< \brief (DACC_VERSION offset) Version Register */
#define DACC_VERSION_RESETVALUE     _U_(0x00000111); /**< \brief (DACC_VERSION reset_value) Version Register */

#define DACC_VERSION_VERSION_Pos    0            /**< \brief (DACC_VERSION) Version Number */
#define DACC_VERSION_VERSION_Msk    (_U_(0xFFF) << DACC_VERSION_VERSION_Pos)
#define DACC_VERSION_VERSION(value) (DACC_VERSION_VERSION_Msk & ((value) << DACC_VERSION_VERSION_Pos))
#define DACC_VERSION_VARIANT_Pos    16           /**< \brief (DACC_VERSION) Variant Number */
#define DACC_VERSION_VARIANT_Msk    (_U_(0x7) << DACC_VERSION_VARIANT_Pos)
#define DACC_VERSION_VARIANT(value) (DACC_VERSION_VARIANT_Msk & ((value) << DACC_VERSION_VARIANT_Pos))
#define DACC_VERSION_MASK           _U_(0x00070FFF) /**< \brief (DACC_VERSION) MASK Register */

/** \brief DACC hardware registers */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef struct {
  __O  uint32_t CR;          /**< \brief Offset: 0x00 ( /W 32) Control Register */
  __IO uint32_t MR;          /**< \brief Offset: 0x04 (R/W 32) Mode Register */
  __O  uint32_t CDR;         /**< \brief Offset: 0x08 ( /W 32) Conversion Data Register */
  __O  uint32_t IER;         /**< \brief Offset: 0x0C ( /W 32) Interrupt Enable Register */
  __O  uint32_t IDR;         /**< \brief Offset: 0x10 ( /W 32) Interrupt Disable Register */
  __I  uint32_t IMR;         /**< \brief Offset: 0x14 (R/  32) Interrupt Mask Register */
  __I  uint32_t ISR;         /**< \brief Offset: 0x18 (R/  32) Interrupt Status Register */
       RoReg8   Reserved1[0xC8];
  __IO uint32_t WPMR;        /**< \brief Offset: 0xE4 (R/W 32) Write Protect Mode Register */
  __I  uint32_t WPSR;        /**< \brief Offset: 0xE8 (R/  32) Write Protect Status Register */
       RoReg8   Reserved2[0x10];
  __I  uint32_t VERSION;     /**< \brief Offset: 0xFC (R/  32) Version Register */
} Dacc;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

/*@}*/

#endif /* _SAM4L_DACC_COMPONENT_ */
