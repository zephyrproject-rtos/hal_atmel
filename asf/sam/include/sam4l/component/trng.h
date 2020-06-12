/**
 * \file
 *
 * \brief Component description for TRNG
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

#ifndef _SAM4L_TRNG_COMPONENT_
#define _SAM4L_TRNG_COMPONENT_

/* ========================================================================== */
/**  SOFTWARE API DEFINITION FOR TRNG */
/* ========================================================================== */
/** \addtogroup SAM4L_TRNG True Random Number Generator */
/*@{*/

#define TRNG_I7643
#define REV_TRNG                    0x103

/* -------- TRNG_CR : (TRNG Offset: 0x00) ( /W 32) Control Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t ENABLE:1;         /*!< bit:      0  Enables the TRNG to provide random values */
    uint32_t :7;               /*!< bit:  1.. 7  Reserved                           */
    uint32_t KEY:24;           /*!< bit:  8..31  Security Key                       */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} TRNG_CR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define TRNG_CR_OFFSET              0x00             /**< \brief (TRNG_CR offset) Control Register */
#define TRNG_CR_RESETVALUE          _U_(0x00000000); /**< \brief (TRNG_CR reset_value) Control Register */

#define TRNG_CR_ENABLE_Pos          0                /**< \brief (TRNG_CR) Enables the TRNG to provide random values */
#define TRNG_CR_ENABLE              (_U_(0x1) << TRNG_CR_ENABLE_Pos)
#define TRNG_CR_KEY_Pos             8                /**< \brief (TRNG_CR) Security Key */
#define TRNG_CR_KEY_Msk             (_U_(0xFFFFFF) << TRNG_CR_KEY_Pos)
#define TRNG_CR_KEY(value)          (TRNG_CR_KEY_Msk & ((value) << TRNG_CR_KEY_Pos))
#define   TRNG_CR_KEY_PASSWD_Val    _U_(0x524E47)    /**< (TRNG_CR) Writing any other value in this field aborts the write operation.  */
#define TRNG_CR_KEY_PASSWD          (TRNG_CR_KEY_PASSWD_Val << TRNG_CR_KEY_Pos) /**< (TRNG_CR) Writing any other value in this field aborts the write operation. Position  */
#define TRNG_CR_MASK                _U_(0xFFFFFF01)  /**< \deprecated (TRNG_CR) Register MASK  (Use TRNG_CR_Msk instead)  */
#define TRNG_CR_Msk                 _U_(0xFFFFFF01)  /**< (TRNG_CR) Register Mask  */

/* -------- TRNG_IER : (TRNG Offset: 0x10) ( /W 32) Interrupt Enable Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t DATRDY:1;         /*!< bit:      0  Data Ready Interrupt Enable        */
    uint32_t :31;              /*!< bit:  1..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} TRNG_IER_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define TRNG_IER_OFFSET             0x10         /**< \brief (TRNG_IER offset) Interrupt Enable Register */
#define TRNG_IER_RESETVALUE         _U_(0x00000000); /**< \brief (TRNG_IER reset_value) Interrupt Enable Register */

#define TRNG_IER_DATRDY_Pos         0            /**< \brief (TRNG_IER) Data Ready Interrupt Enable */
#define TRNG_IER_DATRDY             (_U_(0x1) << TRNG_IER_DATRDY_Pos)
#define TRNG_IER_MASK               _U_(0x00000001) /**< \brief (TRNG_IER) MASK Register */

/* -------- TRNG_IDR : (TRNG Offset: 0x14) ( /W 32) Interrupt Disable Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t DATRDY:1;         /*!< bit:      0  Data Ready Interrupt Disable       */
    uint32_t :31;              /*!< bit:  1..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} TRNG_IDR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define TRNG_IDR_OFFSET             0x14         /**< \brief (TRNG_IDR offset) Interrupt Disable Register */
#define TRNG_IDR_RESETVALUE         _U_(0x00000000); /**< \brief (TRNG_IDR reset_value) Interrupt Disable Register */

#define TRNG_IDR_DATRDY_Pos         0            /**< \brief (TRNG_IDR) Data Ready Interrupt Disable */
#define TRNG_IDR_DATRDY             (_U_(0x1) << TRNG_IDR_DATRDY_Pos)
#define TRNG_IDR_MASK               _U_(0x00000001) /**< \brief (TRNG_IDR) MASK Register */

/* -------- TRNG_IMR : (TRNG Offset: 0x18) (R/  32) Interrupt Mask Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t DATRDY:1;         /*!< bit:      0  Data Ready Interrupt Mask          */
    uint32_t :31;              /*!< bit:  1..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} TRNG_IMR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define TRNG_IMR_OFFSET             0x18         /**< \brief (TRNG_IMR offset) Interrupt Mask Register */
#define TRNG_IMR_RESETVALUE         _U_(0x00000000); /**< \brief (TRNG_IMR reset_value) Interrupt Mask Register */

#define TRNG_IMR_DATRDY_Pos         0            /**< \brief (TRNG_IMR) Data Ready Interrupt Mask */
#define TRNG_IMR_DATRDY             (_U_(0x1) << TRNG_IMR_DATRDY_Pos)
#define TRNG_IMR_MASK               _U_(0x00000001) /**< \brief (TRNG_IMR) MASK Register */

/* -------- TRNG_ISR : (TRNG Offset: 0x1C) (R/  32) Interrupt Status Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t DATRDY:1;         /*!< bit:      0  Data Ready Interrupt Status        */
    uint32_t :31;              /*!< bit:  1..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} TRNG_ISR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define TRNG_ISR_OFFSET             0x1C         /**< \brief (TRNG_ISR offset) Interrupt Status Register */
#define TRNG_ISR_RESETVALUE         _U_(0x00000000); /**< \brief (TRNG_ISR reset_value) Interrupt Status Register */

#define TRNG_ISR_DATRDY_Pos         0            /**< \brief (TRNG_ISR) Data Ready Interrupt Status */
#define TRNG_ISR_DATRDY             (_U_(0x1) << TRNG_ISR_DATRDY_Pos)
#define TRNG_ISR_MASK               _U_(0x00000001) /**< \brief (TRNG_ISR) MASK Register */

/* -------- TRNG_ODATA : (TRNG Offset: 0x50) (R/  32) Output Data Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t ODATA:1;          /*!< bit:      0  Output Data                        */
    uint32_t :31;              /*!< bit:  1..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} TRNG_ODATA_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define TRNG_ODATA_OFFSET           0x50         /**< \brief (TRNG_ODATA offset) Output Data Register */
#define TRNG_ODATA_RESETVALUE       _U_(0x00000000); /**< \brief (TRNG_ODATA reset_value) Output Data Register */

#define TRNG_ODATA_ODATA_Pos        0            /**< \brief (TRNG_ODATA) Output Data */
#define TRNG_ODATA_ODATA            (_U_(0x1) << TRNG_ODATA_ODATA_Pos)
#define TRNG_ODATA_MASK             _U_(0x00000001) /**< \brief (TRNG_ODATA) MASK Register */

/* -------- TRNG_VERSION : (TRNG Offset: 0xFC) (R/  32) Version Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t VERSION:12;       /*!< bit:  0..11  Version Number                     */
    uint32_t :4;               /*!< bit: 12..15  Reserved                           */
    uint32_t VARIANT:3;        /*!< bit: 16..18  Variant Number                     */
    uint32_t :13;              /*!< bit: 19..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} TRNG_VERSION_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define TRNG_VERSION_OFFSET         0xFC         /**< \brief (TRNG_VERSION offset) Version Register */
#define TRNG_VERSION_RESETVALUE     _U_(0x00000103); /**< \brief (TRNG_VERSION reset_value) Version Register */

#define TRNG_VERSION_VERSION_Pos    0            /**< \brief (TRNG_VERSION) Version Number */
#define TRNG_VERSION_VERSION_Msk    (_U_(0xFFF) << TRNG_VERSION_VERSION_Pos)
#define TRNG_VERSION_VERSION(value) (TRNG_VERSION_VERSION_Msk & ((value) << TRNG_VERSION_VERSION_Pos))
#define TRNG_VERSION_VARIANT_Pos    16           /**< \brief (TRNG_VERSION) Variant Number */
#define TRNG_VERSION_VARIANT_Msk    (_U_(0x7) << TRNG_VERSION_VARIANT_Pos)
#define TRNG_VERSION_VARIANT(value) (TRNG_VERSION_VARIANT_Msk & ((value) << TRNG_VERSION_VARIANT_Pos))
#define TRNG_VERSION_MASK           _U_(0x00070FFF) /**< \brief (TRNG_VERSION) MASK Register */

/** \brief TRNG hardware registers */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef struct {
  __O  uint32_t TRNG_CR;          /**< \brief Offset: 0x00 ( /W 32) Control Register */
       RoReg8   Reserved1[0xC];
  __O  uint32_t TRNG_IER;         /**< \brief Offset: 0x10 ( /W 32) Interrupt Enable Register */
  __O  uint32_t TRNG_IDR;         /**< \brief Offset: 0x14 ( /W 32) Interrupt Disable Register */
  __I  uint32_t TRNG_IMR;         /**< \brief Offset: 0x18 (R/  32) Interrupt Mask Register */
  __I  uint32_t TRNG_ISR;         /**< \brief Offset: 0x1C (R/  32) Interrupt Status Register */
       RoReg8   Reserved2[0x30];
  __I  uint32_t TRNG_ODATA;       /**< \brief Offset: 0x50 (R/  32) Output Data Register */
       RoReg8   Reserved3[0xA8];
  __I  uint32_t TRNG_VERSION;     /**< \brief Offset: 0xFC (R/  32) Version Register */
} Trng;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

/*@}*/

#endif /* _SAM4L_TRNG_COMPONENT_ */
