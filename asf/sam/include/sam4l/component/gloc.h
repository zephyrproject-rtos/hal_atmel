/**
 * \file
 *
 * \brief Component description for GLOC
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

#ifndef _SAM4L_GLOC_COMPONENT_
#define _SAM4L_GLOC_COMPONENT_

/* ========================================================================== */
/**  SOFTWARE API DEFINITION FOR GLOC */
/* ========================================================================== */
/** \addtogroup SAM4L_GLOC Glue Logic Controller */
/*@{*/

#define GLOC_I7551
#define REV_GLOC                    0x102

/* -------- GLOC_CR : (GLOC Offset: 0x00) (R/W 32) LUT Control Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t AEN:4;            /*!< bit:  0.. 3  Input mask                         */
    uint32_t :27;              /*!< bit:  4..30  Reserved                           */
    uint32_t FILTEN:1;         /*!< bit:     31  Filter enable                      */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} GLOC_CR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define GLOC_CR_OFFSET              0x00         /**< \brief (GLOC_CR offset) Control Register */
#define GLOC_CR_RESETVALUE          _U_(0x00000000); /**< \brief (GLOC_CR reset_value) Control Register */

#define GLOC_CR_AEN_Pos             0            /**< \brief (GLOC_CR) Input mask */
#define GLOC_CR_AEN_Msk             (_U_(0xF) << GLOC_CR_AEN_Pos)
#define GLOC_CR_AEN(value)          (GLOC_CR_AEN_Msk & ((value) << GLOC_CR_AEN_Pos))
#define GLOC_CR_FILTEN_Pos          31           /**< \brief (GLOC_CR) Filter enable */
#define GLOC_CR_FILTEN              (_U_(0x1) << GLOC_CR_FILTEN_Pos)
#define GLOC_CR_MASK                _U_(0x8000000F) /**< \brief (GLOC_CR) MASK Register */

/* -------- GLOC_TRUTH : (GLOC Offset: 0x04) (R/W 32) LUT Truth Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t TRUTH:16;         /*!< bit:  0..15  Truth                              */
    uint32_t :16;              /*!< bit: 16..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} GLOC_TRUTH_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define GLOC_TRUTH_OFFSET           0x04         /**< \brief (GLOC_TRUTH offset) Truth Register */
#define GLOC_TRUTH_RESETVALUE       _U_(0x00000000); /**< \brief (GLOC_TRUTH reset_value) Truth Register */

#define GLOC_TRUTH_TRUTH_Pos        0            /**< \brief (GLOC_TRUTH) Truth */
#define GLOC_TRUTH_TRUTH_Msk        (_U_(0xFFFF) << GLOC_TRUTH_TRUTH_Pos)
#define GLOC_TRUTH_TRUTH(value)     (GLOC_TRUTH_TRUTH_Msk & ((value) << GLOC_TRUTH_TRUTH_Pos))
#define GLOC_TRUTH_MASK             _U_(0x0000FFFF) /**< \brief (GLOC_TRUTH) MASK Register */

/* -------- GLOC_PARAMETER : (GLOC Offset: 0x38) (R/  32) Parameter Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t LUTS:8;           /*!< bit:  0.. 7  LUTs                               */
    uint32_t :24;              /*!< bit:  8..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} GLOC_PARAMETER_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define GLOC_PARAMETER_OFFSET       0x38         /**< \brief (GLOC_PARAMETER offset) Parameter Register */

#define GLOC_PARAMETER_LUTS_Pos     0            /**< \brief (GLOC_PARAMETER) LUTs */
#define GLOC_PARAMETER_LUTS_Msk     (_U_(0xFF) << GLOC_PARAMETER_LUTS_Pos)
#define GLOC_PARAMETER_LUTS(value)  (GLOC_PARAMETER_LUTS_Msk & ((value) << GLOC_PARAMETER_LUTS_Pos))
#define GLOC_PARAMETER_MASK         _U_(0x000000FF) /**< \brief (GLOC_PARAMETER) MASK Register */

/* -------- GLOC_VERSION : (GLOC Offset: 0x3C) (R/  32) Version Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t VERSION:12;       /*!< bit:  0..11  Version                            */
    uint32_t :4;               /*!< bit: 12..15  Reserved                           */
    uint32_t VARIANT:4;        /*!< bit: 16..19  Variant                            */
    uint32_t :12;              /*!< bit: 20..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} GLOC_VERSION_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define GLOC_VERSION_OFFSET         0x3C         /**< \brief (GLOC_VERSION offset) Version Register */
#define GLOC_VERSION_RESETVALUE     _U_(0x00000102); /**< \brief (GLOC_VERSION reset_value) Version Register */

#define GLOC_VERSION_VERSION_Pos    0            /**< \brief (GLOC_VERSION) Version */
#define GLOC_VERSION_VERSION_Msk    (_U_(0xFFF) << GLOC_VERSION_VERSION_Pos)
#define GLOC_VERSION_VERSION(value) (GLOC_VERSION_VERSION_Msk & ((value) << GLOC_VERSION_VERSION_Pos))
#define GLOC_VERSION_VARIANT_Pos    16           /**< \brief (GLOC_VERSION) Variant */
#define GLOC_VERSION_VARIANT_Msk    (_U_(0xF) << GLOC_VERSION_VARIANT_Pos)
#define GLOC_VERSION_VARIANT(value) (GLOC_VERSION_VARIANT_Msk & ((value) << GLOC_VERSION_VARIANT_Pos))
#define GLOC_VERSION_MASK           _U_(0x000F0FFF) /**< \brief (GLOC_VERSION) MASK Register */

/** \brief GlocLut hardware registers */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
 struct {
  __IO GLOC_CR_Type              CR;          /**< \brief Offset: 0x00 (R/W 32) Control Register */
  __IO GLOC_TRUTH_Type           TRUTH;       /**< \brief Offset: 0x04 (R/W 32) Truth Register */
 } bf;
 struct {
  RwReg   GLOC_CR;            /**< \brief (GLOC Offset: 0x00) Control Register */
  RwReg   GLOC_TRUTH;         /**< \brief (GLOC Offset: 0x04) Truth Register */
 } reg;
} GlocLut;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

/** \brief GLOC hardware registers */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef struct {
  __IO uint32_t Lut[2];      /**< \brief Offset: 0x00 GlocLut groups [LUTS] */
       RoReg8   Reserved1[0x28];
  __I  uint32_t PARAMETER;   /**< \brief Offset: 0x38 (R/  32) Parameter Register */
  __I  uint32_t VERSION;     /**< \brief Offset: 0x3C (R/  32) Version Register */
} Gloc;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

/*@}*/

#endif /* _SAM4L_GLOC_COMPONENT_ */
