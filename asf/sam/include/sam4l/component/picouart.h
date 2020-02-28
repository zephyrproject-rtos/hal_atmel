/**
 * \file
 *
 * \brief Component description for PICOUART
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

#ifndef _SAM4L_PICOUART_COMPONENT_
#define _SAM4L_PICOUART_COMPONENT_

/* ========================================================================== */
/**  SOFTWARE API DEFINITION FOR PICOUART */
/* ========================================================================== */
/** \addtogroup SAM4L_PICOUART Pico UART */
/*@{*/

#define PICOUART_I8403
#define REV_PICOUART                0x101

/* -------- PICOUART_CR : (PICOUART Offset: 0x00) ( /W 32) Control Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t EN:1;             /*!< bit:      0  Enable                             */
    uint32_t DIS:1;            /*!< bit:      1  Disable                            */
    uint32_t :30;              /*!< bit:  2..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} PICOUART_CR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PICOUART_CR_OFFSET          0x00         /**< \brief (PICOUART_CR offset) Control Register */
#define PICOUART_CR_RESETVALUE      _U_(0x00000000); /**< \brief (PICOUART_CR reset_value) Control Register */

#define PICOUART_CR_EN_Pos          0            /**< \brief (PICOUART_CR) Enable */
#define PICOUART_CR_EN              (_U_(0x1) << PICOUART_CR_EN_Pos)
#define PICOUART_CR_DIS_Pos         1            /**< \brief (PICOUART_CR) Disable */
#define PICOUART_CR_DIS             (_U_(0x1) << PICOUART_CR_DIS_Pos)
#define PICOUART_CR_MASK            _U_(0x00000003) /**< \brief (PICOUART_CR) MASK Register */

/* -------- PICOUART_CFG : (PICOUART Offset: 0x04) (R/W 32) Configuration Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t SOURCE:2;         /*!< bit:  0.. 1  Source Enable Mode                 */
    uint32_t ACTION:1;         /*!< bit:      2  Action to perform                  */
    uint32_t :5;               /*!< bit:  3.. 7  Reserved                           */
    uint32_t MATCH:8;          /*!< bit:  8..15  Data Match                         */
    uint32_t :16;              /*!< bit: 16..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} PICOUART_CFG_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PICOUART_CFG_OFFSET         0x04         /**< \brief (PICOUART_CFG offset) Configuration Register */
#define PICOUART_CFG_RESETVALUE     _U_(0x00000000); /**< \brief (PICOUART_CFG reset_value) Configuration Register */

#define PICOUART_CFG_SOURCE_Pos     0            /**< \brief (PICOUART_CFG) Source Enable Mode */
#define PICOUART_CFG_SOURCE_Msk     (_U_(0x3) << PICOUART_CFG_SOURCE_Pos)
#define PICOUART_CFG_SOURCE(value)  (PICOUART_CFG_SOURCE_Msk & ((value) << PICOUART_CFG_SOURCE_Pos))
#define PICOUART_CFG_ACTION_Pos     2            /**< \brief (PICOUART_CFG) Action to perform */
#define PICOUART_CFG_ACTION         (_U_(0x1) << PICOUART_CFG_ACTION_Pos)
#define PICOUART_CFG_MATCH_Pos      8            /**< \brief (PICOUART_CFG) Data Match */
#define PICOUART_CFG_MATCH_Msk      (_U_(0xFF) << PICOUART_CFG_MATCH_Pos)
#define PICOUART_CFG_MATCH(value)   (PICOUART_CFG_MATCH_Msk & ((value) << PICOUART_CFG_MATCH_Pos))
#define PICOUART_CFG_MASK           _U_(0x0000FF07) /**< \brief (PICOUART_CFG) MASK Register */

/* -------- PICOUART_SR : (PICOUART Offset: 0x08) (R/  32) Status Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t EN:1;             /*!< bit:      0  Enable Interrupt Status            */
    uint32_t DRDY:1;           /*!< bit:      1  Data Ready Interrupt Status        */
    uint32_t :30;              /*!< bit:  2..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} PICOUART_SR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PICOUART_SR_OFFSET          0x08         /**< \brief (PICOUART_SR offset) Status Register */
#define PICOUART_SR_RESETVALUE      _U_(0x00000000); /**< \brief (PICOUART_SR reset_value) Status Register */

#define PICOUART_SR_EN_Pos          0            /**< \brief (PICOUART_SR) Enable Interrupt Status */
#define PICOUART_SR_EN              (_U_(0x1) << PICOUART_SR_EN_Pos)
#define PICOUART_SR_DRDY_Pos        1            /**< \brief (PICOUART_SR) Data Ready Interrupt Status */
#define PICOUART_SR_DRDY            (_U_(0x1) << PICOUART_SR_DRDY_Pos)
#define PICOUART_SR_MASK            _U_(0x00000003) /**< \brief (PICOUART_SR) MASK Register */

/* -------- PICOUART_RHR : (PICOUART Offset: 0x0C) (R/  32) Receive Holding Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t CDATA:32;         /*!< bit:  0..31  Received Data                      */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} PICOUART_RHR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PICOUART_RHR_OFFSET         0x0C         /**< \brief (PICOUART_RHR offset) Receive Holding Register */
#define PICOUART_RHR_RESETVALUE     _U_(0x00000000); /**< \brief (PICOUART_RHR reset_value) Receive Holding Register */

#define PICOUART_RHR_CDATA_Pos      0            /**< \brief (PICOUART_RHR) Received Data */
#define PICOUART_RHR_CDATA_Msk      (_U_(0xFFFFFFFF) << PICOUART_RHR_CDATA_Pos)
#define PICOUART_RHR_CDATA(value)   (PICOUART_RHR_CDATA_Msk & ((value) << PICOUART_RHR_CDATA_Pos))
#define PICOUART_RHR_MASK           _U_(0xFFFFFFFF) /**< \brief (PICOUART_RHR) MASK Register */

/* -------- PICOUART_VERSION : (PICOUART Offset: 0x20) (R/  32) Version Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t VERSION:12;       /*!< bit:  0..11  Version Number                     */
    uint32_t :4;               /*!< bit: 12..15  Reserved                           */
    uint32_t VARIANT:4;        /*!< bit: 16..19  Variant Number                     */
    uint32_t :12;              /*!< bit: 20..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} PICOUART_VERSION_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PICOUART_VERSION_OFFSET     0x20         /**< \brief (PICOUART_VERSION offset) Version Register */
#define PICOUART_VERSION_RESETVALUE _U_(0x00000101); /**< \brief (PICOUART_VERSION reset_value) Version Register */

#define PICOUART_VERSION_VERSION_Pos 0            /**< \brief (PICOUART_VERSION) Version Number */
#define PICOUART_VERSION_VERSION_Msk (_U_(0xFFF) << PICOUART_VERSION_VERSION_Pos)
#define PICOUART_VERSION_VERSION(value) (PICOUART_VERSION_VERSION_Msk & ((value) << PICOUART_VERSION_VERSION_Pos))
#define PICOUART_VERSION_VARIANT_Pos 16           /**< \brief (PICOUART_VERSION) Variant Number */
#define PICOUART_VERSION_VARIANT_Msk (_U_(0xF) << PICOUART_VERSION_VARIANT_Pos)
#define PICOUART_VERSION_VARIANT(value) (PICOUART_VERSION_VARIANT_Msk & ((value) << PICOUART_VERSION_VARIANT_Pos))
#define PICOUART_VERSION_MASK       _U_(0x000F0FFF) /**< \brief (PICOUART_VERSION) MASK Register */

/** \brief PICOUART hardware registers */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef struct {
  __O  uint32_t CR;          /**< \brief Offset: 0x00 ( /W 32) Control Register */
  __IO uint32_t CFG;         /**< \brief Offset: 0x04 (R/W 32) Configuration Register */
  __I  uint32_t SR;          /**< \brief Offset: 0x08 (R/  32) Status Register */
  __I  uint32_t RHR;         /**< \brief Offset: 0x0C (R/  32) Receive Holding Register */
       RoReg8   Reserved1[0x10];
  __I  uint32_t VERSION;     /**< \brief Offset: 0x20 (R/  32) Version Register */
} Picouart;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

/*@}*/

#endif /* _SAM4L_PICOUART_COMPONENT_ */
