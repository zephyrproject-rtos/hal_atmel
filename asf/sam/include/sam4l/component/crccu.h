/**
 * \file
 *
 * \brief Component description for CRCCU
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

#ifndef _SAM4L_CRCCU_COMPONENT_
#define _SAM4L_CRCCU_COMPONENT_

/* ========================================================================== */
/**  SOFTWARE API DEFINITION FOR CRCCU */
/* ========================================================================== */
/** \addtogroup SAM4L_CRCCU CRC Calculation Unit */
/*@{*/

#define CRCCU_I7644
#define REV_CRCCU                   0x202

/* -------- CRCCU_DSCR : (CRCCU Offset: 0x00) (R/W 32) Descriptor Base Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t :9;               /*!< bit:  0.. 8  Reserved                           */
    uint32_t DSCR:23;          /*!< bit:  9..31  Description Base Address           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} CRCCU_DSCR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define CRCCU_DSCR_OFFSET           0x00         /**< \brief (CRCCU_DSCR offset) Descriptor Base Register */
#define CRCCU_DSCR_RESETVALUE       _U_(0x00000000); /**< \brief (CRCCU_DSCR reset_value) Descriptor Base Register */

#define CRCCU_DSCR_DSCR_Pos         9            /**< \brief (CRCCU_DSCR) Description Base Address */
#define CRCCU_DSCR_DSCR_Msk         (_U_(0x7FFFFF) << CRCCU_DSCR_DSCR_Pos)
#define CRCCU_DSCR_DSCR(value)      (CRCCU_DSCR_DSCR_Msk & ((value) << CRCCU_DSCR_DSCR_Pos))
#define CRCCU_DSCR_MASK             _U_(0xFFFFFE00) /**< \brief (CRCCU_DSCR) MASK Register */

/* -------- CRCCU_DMAEN : (CRCCU Offset: 0x08) ( /W 32) DMA Enable Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t DMAEN:1;          /*!< bit:      0  DMA Enable                         */
    uint32_t :31;              /*!< bit:  1..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} CRCCU_DMAEN_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define CRCCU_DMAEN_OFFSET          0x08         /**< \brief (CRCCU_DMAEN offset) DMA Enable Register */
#define CRCCU_DMAEN_RESETVALUE      _U_(0x00000000); /**< \brief (CRCCU_DMAEN reset_value) DMA Enable Register */

#define CRCCU_DMAEN_DMAEN_Pos       0            /**< \brief (CRCCU_DMAEN) DMA Enable */
#define CRCCU_DMAEN_DMAEN           (_U_(0x1) << CRCCU_DMAEN_DMAEN_Pos)
#define CRCCU_DMAEN_MASK            _U_(0x00000001) /**< \brief (CRCCU_DMAEN) MASK Register */

/* -------- CRCCU_DMADIS : (CRCCU Offset: 0x0C) ( /W 32) DMA Disable Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t DMADIS:1;         /*!< bit:      0  DMA Disable                        */
    uint32_t :31;              /*!< bit:  1..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} CRCCU_DMADIS_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define CRCCU_DMADIS_OFFSET         0x0C         /**< \brief (CRCCU_DMADIS offset) DMA Disable Register */
#define CRCCU_DMADIS_RESETVALUE     _U_(0x00000000); /**< \brief (CRCCU_DMADIS reset_value) DMA Disable Register */

#define CRCCU_DMADIS_DMADIS_Pos     0            /**< \brief (CRCCU_DMADIS) DMA Disable */
#define CRCCU_DMADIS_DMADIS         (_U_(0x1) << CRCCU_DMADIS_DMADIS_Pos)
#define CRCCU_DMADIS_MASK           _U_(0x00000001) /**< \brief (CRCCU_DMADIS) MASK Register */

/* -------- CRCCU_DMASR : (CRCCU Offset: 0x10) (R/  32) DMA Status Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t DMASR:1;          /*!< bit:      0  DMA Channel Status                 */
    uint32_t :31;              /*!< bit:  1..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} CRCCU_DMASR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define CRCCU_DMASR_OFFSET          0x10         /**< \brief (CRCCU_DMASR offset) DMA Status Register */
#define CRCCU_DMASR_RESETVALUE      _U_(0x00000000); /**< \brief (CRCCU_DMASR reset_value) DMA Status Register */

#define CRCCU_DMASR_DMASR_Pos       0            /**< \brief (CRCCU_DMASR) DMA Channel Status */
#define CRCCU_DMASR_DMASR           (_U_(0x1) << CRCCU_DMASR_DMASR_Pos)
#define CRCCU_DMASR_MASK            _U_(0x00000001) /**< \brief (CRCCU_DMASR) MASK Register */

/* -------- CRCCU_DMAIER : (CRCCU Offset: 0x14) ( /W 32) DMA Interrupt Enable Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t DMAIER:1;         /*!< bit:      0  DMA Interrupt Enable               */
    uint32_t :31;              /*!< bit:  1..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} CRCCU_DMAIER_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define CRCCU_DMAIER_OFFSET         0x14         /**< \brief (CRCCU_DMAIER offset) DMA Interrupt Enable Register */
#define CRCCU_DMAIER_RESETVALUE     _U_(0x00000000); /**< \brief (CRCCU_DMAIER reset_value) DMA Interrupt Enable Register */

#define CRCCU_DMAIER_DMAIER_Pos     0            /**< \brief (CRCCU_DMAIER) DMA Interrupt Enable */
#define CRCCU_DMAIER_DMAIER         (_U_(0x1) << CRCCU_DMAIER_DMAIER_Pos)
#define CRCCU_DMAIER_MASK           _U_(0x00000001) /**< \brief (CRCCU_DMAIER) MASK Register */

/* -------- CRCCU_DMAIDR : (CRCCU Offset: 0x18) ( /W 32) DMA Interrupt Disable Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t DMAIDR:1;         /*!< bit:      0  DMA Interrupt Disable              */
    uint32_t :31;              /*!< bit:  1..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} CRCCU_DMAIDR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define CRCCU_DMAIDR_OFFSET         0x18         /**< \brief (CRCCU_DMAIDR offset) DMA Interrupt Disable Register */
#define CRCCU_DMAIDR_RESETVALUE     _U_(0x00000000); /**< \brief (CRCCU_DMAIDR reset_value) DMA Interrupt Disable Register */

#define CRCCU_DMAIDR_DMAIDR_Pos     0            /**< \brief (CRCCU_DMAIDR) DMA Interrupt Disable */
#define CRCCU_DMAIDR_DMAIDR         (_U_(0x1) << CRCCU_DMAIDR_DMAIDR_Pos)
#define CRCCU_DMAIDR_MASK           _U_(0x00000001) /**< \brief (CRCCU_DMAIDR) MASK Register */

/* -------- CRCCU_DMAIMR : (CRCCU Offset: 0x1C) (R/  32) DMA Interrupt Mask Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t DMAIMR:1;         /*!< bit:      0  DMA Interrupt Mask                 */
    uint32_t :31;              /*!< bit:  1..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} CRCCU_DMAIMR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define CRCCU_DMAIMR_OFFSET         0x1C         /**< \brief (CRCCU_DMAIMR offset) DMA Interrupt Mask Register */
#define CRCCU_DMAIMR_RESETVALUE     _U_(0x00000000); /**< \brief (CRCCU_DMAIMR reset_value) DMA Interrupt Mask Register */

#define CRCCU_DMAIMR_DMAIMR_Pos     0            /**< \brief (CRCCU_DMAIMR) DMA Interrupt Mask */
#define CRCCU_DMAIMR_DMAIMR         (_U_(0x1) << CRCCU_DMAIMR_DMAIMR_Pos)
#define CRCCU_DMAIMR_MASK           _U_(0x00000001) /**< \brief (CRCCU_DMAIMR) MASK Register */

/* -------- CRCCU_DMAISR : (CRCCU Offset: 0x20) (R/  32) DMA Interrupt Status Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t DMAISR:1;         /*!< bit:      0  DMA Interrupt Status               */
    uint32_t :31;              /*!< bit:  1..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} CRCCU_DMAISR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define CRCCU_DMAISR_OFFSET         0x20         /**< \brief (CRCCU_DMAISR offset) DMA Interrupt Status Register */
#define CRCCU_DMAISR_RESETVALUE     _U_(0x00000000); /**< \brief (CRCCU_DMAISR reset_value) DMA Interrupt Status Register */

#define CRCCU_DMAISR_DMAISR_Pos     0            /**< \brief (CRCCU_DMAISR) DMA Interrupt Status */
#define CRCCU_DMAISR_DMAISR         (_U_(0x1) << CRCCU_DMAISR_DMAISR_Pos)
#define CRCCU_DMAISR_MASK           _U_(0x00000001) /**< \brief (CRCCU_DMAISR) MASK Register */

/* -------- CRCCU_CR : (CRCCU Offset: 0x34) ( /W 32) Control Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t RESET:1;          /*!< bit:      0  Reset CRCComputation               */
    uint32_t :31;              /*!< bit:  1..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} CRCCU_CR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define CRCCU_CR_OFFSET             0x34         /**< \brief (CRCCU_CR offset) Control Register */
#define CRCCU_CR_RESETVALUE         _U_(0x00000000); /**< \brief (CRCCU_CR reset_value) Control Register */

#define CRCCU_CR_RESET_Pos          0            /**< \brief (CRCCU_CR) Reset CRCComputation */
#define CRCCU_CR_RESET              (_U_(0x1) << CRCCU_CR_RESET_Pos)
#define CRCCU_CR_MASK               _U_(0x00000001) /**< \brief (CRCCU_CR) MASK Register */

/* -------- CRCCU_MR : (CRCCU Offset: 0x38) (R/W 32) Mode Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t ENABLE:1;         /*!< bit:      0  CRC Computation Enable             */
    uint32_t COMPARE:1;        /*!< bit:      1  CRC Compare                        */
    uint32_t PTYPE:2;          /*!< bit:  2.. 3  Polynomial Type                    */
    uint32_t DIVIDER:4;        /*!< bit:  4.. 7  Bandwidth Divider                  */
    uint32_t :24;              /*!< bit:  8..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} CRCCU_MR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define CRCCU_MR_OFFSET             0x38         /**< \brief (CRCCU_MR offset) Mode Register */
#define CRCCU_MR_RESETVALUE         _U_(0x00000000); /**< \brief (CRCCU_MR reset_value) Mode Register */

#define CRCCU_MR_ENABLE_Pos         0            /**< \brief (CRCCU_MR) CRC Computation Enable */
#define CRCCU_MR_ENABLE             (_U_(0x1) << CRCCU_MR_ENABLE_Pos)
#define CRCCU_MR_COMPARE_Pos        1            /**< \brief (CRCCU_MR) CRC Compare */
#define CRCCU_MR_COMPARE            (_U_(0x1) << CRCCU_MR_COMPARE_Pos)
#define CRCCU_MR_PTYPE_Pos          2            /**< \brief (CRCCU_MR) Polynomial Type */
#define CRCCU_MR_PTYPE_Msk          (_U_(0x3) << CRCCU_MR_PTYPE_Pos)
#define CRCCU_MR_PTYPE(value)       (CRCCU_MR_PTYPE_Msk & ((value) << CRCCU_MR_PTYPE_Pos))
#define   CRCCU_MR_PTYPE_CCITT8023_Val    _U_(0x0)   /**< \brief (CRCCU_MR)  */
#define   CRCCU_MR_PTYPE_CASTAGNOLI_Val   _U_(0x1)   /**< \brief (CRCCU_MR)  */
#define   CRCCU_MR_PTYPE_CCITT16_Val      _U_(0x2)   /**< \brief (CRCCU_MR)  */
#define CRCCU_MR_PTYPE_CCITT8023    (CRCCU_MR_PTYPE_CCITT8023_Val  << CRCCU_MR_PTYPE_Pos)
#define CRCCU_MR_PTYPE_CASTAGNOLI   (CRCCU_MR_PTYPE_CASTAGNOLI_Val << CRCCU_MR_PTYPE_Pos)
#define CRCCU_MR_PTYPE_CCITT16      (CRCCU_MR_PTYPE_CCITT16_Val    << CRCCU_MR_PTYPE_Pos)
#define CRCCU_MR_DIVIDER_Pos        4            /**< \brief (CRCCU_MR) Bandwidth Divider */
#define CRCCU_MR_DIVIDER_Msk        (_U_(0xF) << CRCCU_MR_DIVIDER_Pos)
#define CRCCU_MR_DIVIDER(value)     (CRCCU_MR_DIVIDER_Msk & ((value) << CRCCU_MR_DIVIDER_Pos))
#define CRCCU_MR_MASK               _U_(0x000000FF) /**< \brief (CRCCU_MR) MASK Register */

/* -------- CRCCU_SR : (CRCCU Offset: 0x3C) (R/  32) Status Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t CRC:32;           /*!< bit:  0..31  Cyclic Redundancy Check Value      */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} CRCCU_SR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define CRCCU_SR_OFFSET             0x3C         /**< \brief (CRCCU_SR offset) Status Register */
#define CRCCU_SR_RESETVALUE         _U_(0xFFFFFFFF); /**< \brief (CRCCU_SR reset_value) Status Register */

#define CRCCU_SR_CRC_Pos            0            /**< \brief (CRCCU_SR) Cyclic Redundancy Check Value */
#define CRCCU_SR_CRC_Msk            (_U_(0xFFFFFFFF) << CRCCU_SR_CRC_Pos)
#define CRCCU_SR_CRC(value)         (CRCCU_SR_CRC_Msk & ((value) << CRCCU_SR_CRC_Pos))
#define CRCCU_SR_MASK               _U_(0xFFFFFFFF) /**< \brief (CRCCU_SR) MASK Register */

/* -------- CRCCU_IER : (CRCCU Offset: 0x40) ( /W 32) Interrupt Enable Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t ERRIER:1;         /*!< bit:      0  CRC Error Interrupt Enable         */
    uint32_t :31;              /*!< bit:  1..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} CRCCU_IER_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define CRCCU_IER_OFFSET            0x40         /**< \brief (CRCCU_IER offset) Interrupt Enable Register */
#define CRCCU_IER_RESETVALUE        _U_(0x00000000); /**< \brief (CRCCU_IER reset_value) Interrupt Enable Register */

#define CRCCU_IER_ERRIER_Pos        0            /**< \brief (CRCCU_IER) CRC Error Interrupt Enable */
#define CRCCU_IER_ERRIER            (_U_(0x1) << CRCCU_IER_ERRIER_Pos)
#define CRCCU_IER_MASK              _U_(0x00000001) /**< \brief (CRCCU_IER) MASK Register */

/* -------- CRCCU_IDR : (CRCCU Offset: 0x44) ( /W 32) Interrupt Disable Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t ERRIDR:1;         /*!< bit:      0  CRC Error Interrupt Disable        */
    uint32_t :31;              /*!< bit:  1..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} CRCCU_IDR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define CRCCU_IDR_OFFSET            0x44         /**< \brief (CRCCU_IDR offset) Interrupt Disable Register */
#define CRCCU_IDR_RESETVALUE        _U_(0x00000000); /**< \brief (CRCCU_IDR reset_value) Interrupt Disable Register */

#define CRCCU_IDR_ERRIDR_Pos        0            /**< \brief (CRCCU_IDR) CRC Error Interrupt Disable */
#define CRCCU_IDR_ERRIDR            (_U_(0x1) << CRCCU_IDR_ERRIDR_Pos)
#define CRCCU_IDR_MASK              _U_(0x00000001) /**< \brief (CRCCU_IDR) MASK Register */

/* -------- CRCCU_IMR : (CRCCU Offset: 0x48) (R/  32) Interrupt Mask Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t ERRIMR:1;         /*!< bit:      0  CRC Error Interrupt Mask           */
    uint32_t :31;              /*!< bit:  1..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} CRCCU_IMR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define CRCCU_IMR_OFFSET            0x48         /**< \brief (CRCCU_IMR offset) Interrupt Mask Register */
#define CRCCU_IMR_RESETVALUE        _U_(0x00000000); /**< \brief (CRCCU_IMR reset_value) Interrupt Mask Register */

#define CRCCU_IMR_ERRIMR_Pos        0            /**< \brief (CRCCU_IMR) CRC Error Interrupt Mask */
#define CRCCU_IMR_ERRIMR            (_U_(0x1) << CRCCU_IMR_ERRIMR_Pos)
#define CRCCU_IMR_MASK              _U_(0x00000001) /**< \brief (CRCCU_IMR) MASK Register */

/* -------- CRCCU_ISR : (CRCCU Offset: 0x4C) (R/  32) Interrupt Status Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t ERRISR:1;         /*!< bit:      0  CRC Error Interrupt Status         */
    uint32_t :31;              /*!< bit:  1..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} CRCCU_ISR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define CRCCU_ISR_OFFSET            0x4C         /**< \brief (CRCCU_ISR offset) Interrupt Status Register */
#define CRCCU_ISR_RESETVALUE        _U_(0x00000000); /**< \brief (CRCCU_ISR reset_value) Interrupt Status Register */

#define CRCCU_ISR_ERRISR_Pos        0            /**< \brief (CRCCU_ISR) CRC Error Interrupt Status */
#define CRCCU_ISR_ERRISR            (_U_(0x1) << CRCCU_ISR_ERRISR_Pos)
#define CRCCU_ISR_MASK              _U_(0x00000001) /**< \brief (CRCCU_ISR) MASK Register */

/* -------- CRCCU_VERSION : (CRCCU Offset: 0xFC) (R/  32) Version Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t VERSION:12;       /*!< bit:  0..11  Version Number                     */
    uint32_t :4;               /*!< bit: 12..15  Reserved                           */
    uint32_t VARIANT:4;        /*!< bit: 16..19  Variant Number                     */
    uint32_t :12;              /*!< bit: 20..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} CRCCU_VERSION_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define CRCCU_VERSION_OFFSET        0xFC         /**< \brief (CRCCU_VERSION offset) Version Register */
#define CRCCU_VERSION_RESETVALUE    _U_(0x00000202); /**< \brief (CRCCU_VERSION reset_value) Version Register */

#define CRCCU_VERSION_VERSION_Pos   0            /**< \brief (CRCCU_VERSION) Version Number */
#define CRCCU_VERSION_VERSION_Msk   (_U_(0xFFF) << CRCCU_VERSION_VERSION_Pos)
#define CRCCU_VERSION_VERSION(value) (CRCCU_VERSION_VERSION_Msk & ((value) << CRCCU_VERSION_VERSION_Pos))
#define CRCCU_VERSION_VARIANT_Pos   16           /**< \brief (CRCCU_VERSION) Variant Number */
#define CRCCU_VERSION_VARIANT_Msk   (_U_(0xF) << CRCCU_VERSION_VARIANT_Pos)
#define CRCCU_VERSION_VARIANT(value) (CRCCU_VERSION_VARIANT_Msk & ((value) << CRCCU_VERSION_VARIANT_Pos))
#define CRCCU_VERSION_MASK          _U_(0x000F0FFF) /**< \brief (CRCCU_VERSION) MASK Register */

/** \brief CRCCU hardware registers */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef struct {
  __IO uint32_t DSCR;        /**< \brief Offset: 0x00 (R/W 32) Descriptor Base Register */
       RoReg8   Reserved1[0x4];
  __O  uint32_t DMAEN;       /**< \brief Offset: 0x08 ( /W 32) DMA Enable Register */
  __O  uint32_t DMADIS;      /**< \brief Offset: 0x0C ( /W 32) DMA Disable Register */
  __I  uint32_t DMASR;       /**< \brief Offset: 0x10 (R/  32) DMA Status Register */
  __O  uint32_t DMAIER;      /**< \brief Offset: 0x14 ( /W 32) DMA Interrupt Enable Register */
  __O  uint32_t DMAIDR;      /**< \brief Offset: 0x18 ( /W 32) DMA Interrupt Disable Register */
  __I  uint32_t DMAIMR;      /**< \brief Offset: 0x1C (R/  32) DMA Interrupt Mask Register */
  __I  uint32_t DMAISR;      /**< \brief Offset: 0x20 (R/  32) DMA Interrupt Status Register */
       RoReg8   Reserved2[0x10];
  __O  uint32_t CR;          /**< \brief Offset: 0x34 ( /W 32) Control Register */
  __IO uint32_t MR;          /**< \brief Offset: 0x38 (R/W 32) Mode Register */
  __I  uint32_t SR;          /**< \brief Offset: 0x3C (R/  32) Status Register */
  __O  uint32_t IER;         /**< \brief Offset: 0x40 ( /W 32) Interrupt Enable Register */
  __O  uint32_t IDR;         /**< \brief Offset: 0x44 ( /W 32) Interrupt Disable Register */
  __I  uint32_t IMR;         /**< \brief Offset: 0x48 (R/  32) Interrupt Mask Register */
  __I  uint32_t ISR;         /**< \brief Offset: 0x4C (R/  32) Interrupt Status Register */
       RoReg8   Reserved3[0xAC];
  __I  uint32_t VERSION;     /**< \brief Offset: 0xFC (R/  32) Version Register */
} Crccu;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

/*@}*/

#endif /* _SAM4L_CRCCU_COMPONENT_ */
