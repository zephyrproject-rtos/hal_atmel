/**
 * \file
 *
 * \brief Component description for PARC
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

#ifndef _SAM4L_PARC_COMPONENT_
#define _SAM4L_PARC_COMPONENT_

/* ========================================================================== */
/**  SOFTWARE API DEFINITION FOR PARC */
/* ========================================================================== */
/** \addtogroup SAM4L_PARC Parallel Capture */
/*@{*/

#define PARC_I7570
#define REV_PARC                    0x100

/* -------- PARC_CFG : (PARC Offset: 0x00) (R/W 32) Configuration Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t DSIZE:2;          /*!< bit:  0.. 1  Data Size                          */
    uint32_t SMODE:2;          /*!< bit:  2.. 3  Sampling Mode                      */
    uint32_t EMODE:1;          /*!< bit:      4  Events Mode                        */
    uint32_t EDGE:1;           /*!< bit:      5  Sampling Edge Select               */
    uint32_t HALF:1;           /*!< bit:      6  Half Capture                       */
    uint32_t ODD:1;            /*!< bit:      7  Odd Capture                        */
    uint32_t :24;              /*!< bit:  8..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} PARC_CFG_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PARC_CFG_OFFSET             0x00         /**< \brief (PARC_CFG offset) Configuration Register */
#define PARC_CFG_RESETVALUE         _U_(0x00000000); /**< \brief (PARC_CFG reset_value) Configuration Register */

#define PARC_CFG_DSIZE_Pos          0            /**< \brief (PARC_CFG) Data Size */
#define PARC_CFG_DSIZE_Msk          (_U_(0x3) << PARC_CFG_DSIZE_Pos)
#define PARC_CFG_DSIZE(value)       (PARC_CFG_DSIZE_Msk & ((value) << PARC_CFG_DSIZE_Pos))
#define PARC_CFG_SMODE_Pos          2            /**< \brief (PARC_CFG) Sampling Mode */
#define PARC_CFG_SMODE_Msk          (_U_(0x3) << PARC_CFG_SMODE_Pos)
#define PARC_CFG_SMODE(value)       (PARC_CFG_SMODE_Msk & ((value) << PARC_CFG_SMODE_Pos))
#define PARC_CFG_EMODE_Pos          4            /**< \brief (PARC_CFG) Events Mode */
#define PARC_CFG_EMODE              (_U_(0x1) << PARC_CFG_EMODE_Pos)
#define PARC_CFG_EDGE_Pos           5            /**< \brief (PARC_CFG) Sampling Edge Select */
#define PARC_CFG_EDGE               (_U_(0x1) << PARC_CFG_EDGE_Pos)
#define PARC_CFG_HALF_Pos           6            /**< \brief (PARC_CFG) Half Capture */
#define PARC_CFG_HALF               (_U_(0x1) << PARC_CFG_HALF_Pos)
#define PARC_CFG_ODD_Pos            7            /**< \brief (PARC_CFG) Odd Capture */
#define PARC_CFG_ODD                (_U_(0x1) << PARC_CFG_ODD_Pos)
#define PARC_CFG_MASK               _U_(0x000000FF) /**< \brief (PARC_CFG) MASK Register */

/* -------- PARC_CR : (PARC Offset: 0x04) (R/W 32) Control Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t EN:1;             /*!< bit:      0  Enable                             */
    uint32_t DIS:1;            /*!< bit:      1  Disable                            */
    uint32_t START:1;          /*!< bit:      2  Start Capture                      */
    uint32_t STOP:1;           /*!< bit:      3  Stop Capture                       */
    uint32_t :28;              /*!< bit:  4..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} PARC_CR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PARC_CR_OFFSET              0x04         /**< \brief (PARC_CR offset) Control Register */
#define PARC_CR_RESETVALUE          _U_(0x00000000); /**< \brief (PARC_CR reset_value) Control Register */

#define PARC_CR_EN_Pos              0            /**< \brief (PARC_CR) Enable */
#define PARC_CR_EN                  (_U_(0x1) << PARC_CR_EN_Pos)
#define PARC_CR_DIS_Pos             1            /**< \brief (PARC_CR) Disable */
#define PARC_CR_DIS                 (_U_(0x1) << PARC_CR_DIS_Pos)
#define PARC_CR_START_Pos           2            /**< \brief (PARC_CR) Start Capture */
#define PARC_CR_START               (_U_(0x1) << PARC_CR_START_Pos)
#define PARC_CR_STOP_Pos            3            /**< \brief (PARC_CR) Stop Capture */
#define PARC_CR_STOP                (_U_(0x1) << PARC_CR_STOP_Pos)
#define PARC_CR_MASK                _U_(0x0000000F) /**< \brief (PARC_CR) MASK Register */

/* -------- PARC_IER : (PARC Offset: 0x08) ( /W 32) Interrupt Enable Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t :2;               /*!< bit:  0.. 1  Reserved                           */
    uint32_t DRDY:1;           /*!< bit:      2  Data Ready Interrupt Enable        */
    uint32_t OVR:1;            /*!< bit:      3  Overrun Interrupt Enable           */
    uint32_t :28;              /*!< bit:  4..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} PARC_IER_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PARC_IER_OFFSET             0x08         /**< \brief (PARC_IER offset) Interrupt Enable Register */
#define PARC_IER_RESETVALUE         _U_(0x00000000); /**< \brief (PARC_IER reset_value) Interrupt Enable Register */

#define PARC_IER_DRDY_Pos           2            /**< \brief (PARC_IER) Data Ready Interrupt Enable */
#define PARC_IER_DRDY               (_U_(0x1) << PARC_IER_DRDY_Pos)
#define PARC_IER_OVR_Pos            3            /**< \brief (PARC_IER) Overrun Interrupt Enable */
#define PARC_IER_OVR                (_U_(0x1) << PARC_IER_OVR_Pos)
#define PARC_IER_MASK               _U_(0x0000000C) /**< \brief (PARC_IER) MASK Register */

/* -------- PARC_IDR : (PARC Offset: 0x0C) ( /W 32) Interrupt Disable Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t :2;               /*!< bit:  0.. 1  Reserved                           */
    uint32_t DRDY:1;           /*!< bit:      2  Data Ready Interrupt Disable       */
    uint32_t OVR:1;            /*!< bit:      3  Overrun Interrupt Disable          */
    uint32_t :28;              /*!< bit:  4..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} PARC_IDR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PARC_IDR_OFFSET             0x0C         /**< \brief (PARC_IDR offset) Interrupt Disable Register */
#define PARC_IDR_RESETVALUE         _U_(0x00000000); /**< \brief (PARC_IDR reset_value) Interrupt Disable Register */

#define PARC_IDR_DRDY_Pos           2            /**< \brief (PARC_IDR) Data Ready Interrupt Disable */
#define PARC_IDR_DRDY               (_U_(0x1) << PARC_IDR_DRDY_Pos)
#define PARC_IDR_OVR_Pos            3            /**< \brief (PARC_IDR) Overrun Interrupt Disable */
#define PARC_IDR_OVR                (_U_(0x1) << PARC_IDR_OVR_Pos)
#define PARC_IDR_MASK               _U_(0x0000000C) /**< \brief (PARC_IDR) MASK Register */

/* -------- PARC_IMR : (PARC Offset: 0x10) (R/  32) Interrupt Mask Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t :2;               /*!< bit:  0.. 1  Reserved                           */
    uint32_t DRDY:1;           /*!< bit:      2  Data Ready Interrupt Mask          */
    uint32_t OVR:1;            /*!< bit:      3  Overrun Interrupt Mask             */
    uint32_t :28;              /*!< bit:  4..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} PARC_IMR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PARC_IMR_OFFSET             0x10         /**< \brief (PARC_IMR offset) Interrupt Mask Register */
#define PARC_IMR_RESETVALUE         _U_(0x00000000); /**< \brief (PARC_IMR reset_value) Interrupt Mask Register */

#define PARC_IMR_DRDY_Pos           2            /**< \brief (PARC_IMR) Data Ready Interrupt Mask */
#define PARC_IMR_DRDY               (_U_(0x1) << PARC_IMR_DRDY_Pos)
#define PARC_IMR_OVR_Pos            3            /**< \brief (PARC_IMR) Overrun Interrupt Mask */
#define PARC_IMR_OVR                (_U_(0x1) << PARC_IMR_OVR_Pos)
#define PARC_IMR_MASK               _U_(0x0000000C) /**< \brief (PARC_IMR) MASK Register */

/* -------- PARC_SR : (PARC Offset: 0x14) (R/  32) Status Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t EN:1;             /*!< bit:      0  Enable Status                      */
    uint32_t CS:1;             /*!< bit:      1  Capture Status                     */
    uint32_t DRDY:1;           /*!< bit:      2  Data Ready Interrupt Status        */
    uint32_t OVR:1;            /*!< bit:      3  Overrun Interrupt Status           */
    uint32_t :28;              /*!< bit:  4..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} PARC_SR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PARC_SR_OFFSET              0x14         /**< \brief (PARC_SR offset) Status Register */
#define PARC_SR_RESETVALUE          _U_(0x00000000); /**< \brief (PARC_SR reset_value) Status Register */

#define PARC_SR_EN_Pos              0            /**< \brief (PARC_SR) Enable Status */
#define PARC_SR_EN                  (_U_(0x1) << PARC_SR_EN_Pos)
#define PARC_SR_CS_Pos              1            /**< \brief (PARC_SR) Capture Status */
#define PARC_SR_CS                  (_U_(0x1) << PARC_SR_CS_Pos)
#define PARC_SR_DRDY_Pos            2            /**< \brief (PARC_SR) Data Ready Interrupt Status */
#define PARC_SR_DRDY                (_U_(0x1) << PARC_SR_DRDY_Pos)
#define PARC_SR_OVR_Pos             3            /**< \brief (PARC_SR) Overrun Interrupt Status */
#define PARC_SR_OVR                 (_U_(0x1) << PARC_SR_OVR_Pos)
#define PARC_SR_MASK                _U_(0x0000000F) /**< \brief (PARC_SR) MASK Register */

/* -------- PARC_ICR : (PARC Offset: 0x18) ( /W 32) Interrupt Status Clear Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t :2;               /*!< bit:  0.. 1  Reserved                           */
    uint32_t DRDY:1;           /*!< bit:      2  Data Ready Interrupt Status Clear  */
    uint32_t OVR:1;            /*!< bit:      3  Overrun Interrupt Status Clear     */
    uint32_t :28;              /*!< bit:  4..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} PARC_ICR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PARC_ICR_OFFSET             0x18         /**< \brief (PARC_ICR offset) Interrupt Status Clear Register */
#define PARC_ICR_RESETVALUE         _U_(0x00000000); /**< \brief (PARC_ICR reset_value) Interrupt Status Clear Register */

#define PARC_ICR_DRDY_Pos           2            /**< \brief (PARC_ICR) Data Ready Interrupt Status Clear */
#define PARC_ICR_DRDY               (_U_(0x1) << PARC_ICR_DRDY_Pos)
#define PARC_ICR_OVR_Pos            3            /**< \brief (PARC_ICR) Overrun Interrupt Status Clear */
#define PARC_ICR_OVR                (_U_(0x1) << PARC_ICR_OVR_Pos)
#define PARC_ICR_MASK               _U_(0x0000000C) /**< \brief (PARC_ICR) MASK Register */

/* -------- PARC_RHR : (PARC Offset: 0x1C) (R/  32) Receive Holding Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t CDATA:32;         /*!< bit:  0..31  Captured Data                      */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} PARC_RHR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PARC_RHR_OFFSET             0x1C         /**< \brief (PARC_RHR offset) Receive Holding Register */
#define PARC_RHR_RESETVALUE         _U_(0x00000000); /**< \brief (PARC_RHR reset_value) Receive Holding Register */

#define PARC_RHR_CDATA_Pos          0            /**< \brief (PARC_RHR) Captured Data */
#define PARC_RHR_CDATA_Msk          (_U_(0xFFFFFFFF) << PARC_RHR_CDATA_Pos)
#define PARC_RHR_CDATA(value)       (PARC_RHR_CDATA_Msk & ((value) << PARC_RHR_CDATA_Pos))
#define PARC_RHR_MASK               _U_(0xFFFFFFFF) /**< \brief (PARC_RHR) MASK Register */

/* -------- PARC_VERSION : (PARC Offset: 0x20) (R/  32) Version Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t VERSION:12;       /*!< bit:  0..11  Version Number                     */
    uint32_t :4;               /*!< bit: 12..15  Reserved                           */
    uint32_t VARIANT:4;        /*!< bit: 16..19  Variant Number                     */
    uint32_t :12;              /*!< bit: 20..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} PARC_VERSION_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PARC_VERSION_OFFSET         0x20         /**< \brief (PARC_VERSION offset) Version Register */
#define PARC_VERSION_RESETVALUE     _U_(0x00000100); /**< \brief (PARC_VERSION reset_value) Version Register */

#define PARC_VERSION_VERSION_Pos    0            /**< \brief (PARC_VERSION) Version Number */
#define PARC_VERSION_VERSION_Msk    (_U_(0xFFF) << PARC_VERSION_VERSION_Pos)
#define PARC_VERSION_VERSION(value) (PARC_VERSION_VERSION_Msk & ((value) << PARC_VERSION_VERSION_Pos))
#define PARC_VERSION_VARIANT_Pos    16           /**< \brief (PARC_VERSION) Variant Number */
#define PARC_VERSION_VARIANT_Msk    (_U_(0xF) << PARC_VERSION_VARIANT_Pos)
#define PARC_VERSION_VARIANT(value) (PARC_VERSION_VARIANT_Msk & ((value) << PARC_VERSION_VARIANT_Pos))
#define PARC_VERSION_MASK           _U_(0x000F0FFF) /**< \brief (PARC_VERSION) MASK Register */

/** \brief PARC hardware registers */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef struct {
  __IO uint32_t CFG;         /**< \brief Offset: 0x00 (R/W 32) Configuration Register */
  __IO uint32_t CR;          /**< \brief Offset: 0x04 (R/W 32) Control Register */
  __O  uint32_t IER;         /**< \brief Offset: 0x08 ( /W 32) Interrupt Enable Register */
  __O  uint32_t IDR;         /**< \brief Offset: 0x0C ( /W 32) Interrupt Disable Register */
  __I  uint32_t IMR;         /**< \brief Offset: 0x10 (R/  32) Interrupt Mask Register */
  __I  uint32_t SR;          /**< \brief Offset: 0x14 (R/  32) Status Register */
  __O  uint32_t ICR;         /**< \brief Offset: 0x18 ( /W 32) Interrupt Status Clear Register */
  __I  uint32_t RHR;         /**< \brief Offset: 0x1C (R/  32) Receive Holding Register */
  __I  uint32_t VERSION;     /**< \brief Offset: 0x20 (R/  32) Version Register */
} Parc;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

/*@}*/

#endif /* _SAM4L_PARC_COMPONENT_ */
