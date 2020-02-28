/**
 * \file
 *
 * \brief Component description for SMAP
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

#ifndef _SAM4L_SMAP_COMPONENT_
#define _SAM4L_SMAP_COMPONENT_

/* ========================================================================== */
/**  SOFTWARE API DEFINITION FOR SMAP */
/* ========================================================================== */
/** \addtogroup SAM4L_SMAP System Manager Access Port */
/*@{*/

#define SMAP_I8321
#define REV_SMAP                    0x100

/* -------- SMAP_CR : (SMAP Offset: 0x00) ( /W 32) Control Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t EN:1;             /*!< bit:      0  Enable                             */
    uint32_t DIS:1;            /*!< bit:      1  Disable                            */
    uint32_t CRC:1;            /*!< bit:      2  User Page Read                     */
    uint32_t FSPR:1;           /*!< bit:      3  Flash Supplementary Page Read      */
    uint32_t CE:1;             /*!< bit:      4  Chip Erase                         */
    uint32_t :27;              /*!< bit:  5..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} SMAP_CR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SMAP_CR_OFFSET              0x00         /**< \brief (SMAP_CR offset) Control Register */
#define SMAP_CR_RESETVALUE          _U_(0x00000000); /**< \brief (SMAP_CR reset_value) Control Register */

#define SMAP_CR_EN_Pos              0            /**< \brief (SMAP_CR) Enable */
#define SMAP_CR_EN                  (_U_(0x1) << SMAP_CR_EN_Pos)
#define SMAP_CR_DIS_Pos             1            /**< \brief (SMAP_CR) Disable */
#define SMAP_CR_DIS                 (_U_(0x1) << SMAP_CR_DIS_Pos)
#define SMAP_CR_CRC_Pos             2            /**< \brief (SMAP_CR) User Page Read */
#define SMAP_CR_CRC                 (_U_(0x1) << SMAP_CR_CRC_Pos)
#define SMAP_CR_FSPR_Pos            3            /**< \brief (SMAP_CR) Flash Supplementary Page Read */
#define SMAP_CR_FSPR                (_U_(0x1) << SMAP_CR_FSPR_Pos)
#define SMAP_CR_CE_Pos              4            /**< \brief (SMAP_CR) Chip Erase */
#define SMAP_CR_CE                  (_U_(0x1) << SMAP_CR_CE_Pos)
#define SMAP_CR_MASK                _U_(0x0000001F) /**< \brief (SMAP_CR) MASK Register */

/* -------- SMAP_SR : (SMAP Offset: 0x04) (R/  32) Status Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t DONE:1;           /*!< bit:      0  Operation done                     */
    uint32_t HCR:1;            /*!< bit:      1  Hold Core reset                    */
    uint32_t BERR:1;           /*!< bit:      2  Bus error                          */
    uint32_t FAIL:1;           /*!< bit:      3  Failure                            */
    uint32_t LCK:1;            /*!< bit:      4  Lock                               */
    uint32_t :3;               /*!< bit:  5.. 7  Reserved                           */
    uint32_t EN:1;             /*!< bit:      8  Enabled                            */
    uint32_t PROT:1;           /*!< bit:      9  Protected                          */
    uint32_t DBGP:1;           /*!< bit:     10  Debugger Present                   */
    uint32_t :13;              /*!< bit: 11..23  Reserved                           */
    uint32_t STATE:3;          /*!< bit: 24..26  State                              */
    uint32_t :5;               /*!< bit: 27..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} SMAP_SR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SMAP_SR_OFFSET              0x04         /**< \brief (SMAP_SR offset) Status Register */
#define SMAP_SR_RESETVALUE          _U_(0x00000000); /**< \brief (SMAP_SR reset_value) Status Register */

#define SMAP_SR_DONE_Pos            0            /**< \brief (SMAP_SR) Operation done */
#define SMAP_SR_DONE                (_U_(0x1) << SMAP_SR_DONE_Pos)
#define SMAP_SR_HCR_Pos             1            /**< \brief (SMAP_SR) Hold Core reset */
#define SMAP_SR_HCR                 (_U_(0x1) << SMAP_SR_HCR_Pos)
#define SMAP_SR_BERR_Pos            2            /**< \brief (SMAP_SR) Bus error */
#define SMAP_SR_BERR                (_U_(0x1) << SMAP_SR_BERR_Pos)
#define SMAP_SR_FAIL_Pos            3            /**< \brief (SMAP_SR) Failure */
#define SMAP_SR_FAIL                (_U_(0x1) << SMAP_SR_FAIL_Pos)
#define SMAP_SR_LCK_Pos             4            /**< \brief (SMAP_SR) Lock */
#define SMAP_SR_LCK                 (_U_(0x1) << SMAP_SR_LCK_Pos)
#define SMAP_SR_EN_Pos              8            /**< \brief (SMAP_SR) Enabled */
#define SMAP_SR_EN                  (_U_(0x1) << SMAP_SR_EN_Pos)
#define SMAP_SR_PROT_Pos            9            /**< \brief (SMAP_SR) Protected */
#define SMAP_SR_PROT                (_U_(0x1) << SMAP_SR_PROT_Pos)
#define SMAP_SR_DBGP_Pos            10           /**< \brief (SMAP_SR) Debugger Present */
#define SMAP_SR_DBGP                (_U_(0x1) << SMAP_SR_DBGP_Pos)
#define SMAP_SR_STATE_Pos           24           /**< \brief (SMAP_SR) State */
#define SMAP_SR_STATE_Msk           (_U_(0x7) << SMAP_SR_STATE_Pos)
#define SMAP_SR_STATE(value)        (SMAP_SR_STATE_Msk & ((value) << SMAP_SR_STATE_Pos))
#define SMAP_SR_MASK                _U_(0x0700071F) /**< \brief (SMAP_SR) MASK Register */

/* -------- SMAP_SCR : (SMAP Offset: 0x08) ( /W 32) Status Clear Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t DONE:1;           /*!< bit:      0  Done                               */
    uint32_t HCR:1;            /*!< bit:      1  Hold Core Register                 */
    uint32_t BERR:1;           /*!< bit:      2  Bus error                          */
    uint32_t FAIL:1;           /*!< bit:      3  Failure                            */
    uint32_t LCK:1;            /*!< bit:      4  Lock error                         */
    uint32_t :27;              /*!< bit:  5..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} SMAP_SCR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SMAP_SCR_OFFSET             0x08         /**< \brief (SMAP_SCR offset) Status Clear Register */
#define SMAP_SCR_RESETVALUE         _U_(0x00000000); /**< \brief (SMAP_SCR reset_value) Status Clear Register */

#define SMAP_SCR_DONE_Pos           0            /**< \brief (SMAP_SCR) Done */
#define SMAP_SCR_DONE               (_U_(0x1) << SMAP_SCR_DONE_Pos)
#define SMAP_SCR_HCR_Pos            1            /**< \brief (SMAP_SCR) Hold Core Register */
#define SMAP_SCR_HCR                (_U_(0x1) << SMAP_SCR_HCR_Pos)
#define SMAP_SCR_BERR_Pos           2            /**< \brief (SMAP_SCR) Bus error */
#define SMAP_SCR_BERR               (_U_(0x1) << SMAP_SCR_BERR_Pos)
#define SMAP_SCR_FAIL_Pos           3            /**< \brief (SMAP_SCR) Failure */
#define SMAP_SCR_FAIL               (_U_(0x1) << SMAP_SCR_FAIL_Pos)
#define SMAP_SCR_LCK_Pos            4            /**< \brief (SMAP_SCR) Lock error */
#define SMAP_SCR_LCK                (_U_(0x1) << SMAP_SCR_LCK_Pos)
#define SMAP_SCR_MASK               _U_(0x0000001F) /**< \brief (SMAP_SCR) MASK Register */

/* -------- SMAP_ADDR : (SMAP Offset: 0x0C) (R/W 32) Address Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t :2;               /*!< bit:  0.. 1  Reserved                           */
    uint32_t ADDR:30;          /*!< bit:  2..31  Address Value                      */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} SMAP_ADDR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SMAP_ADDR_OFFSET            0x0C         /**< \brief (SMAP_ADDR offset) Address Register */
#define SMAP_ADDR_RESETVALUE        _U_(0x00000000); /**< \brief (SMAP_ADDR reset_value) Address Register */

#define SMAP_ADDR_ADDR_Pos          2            /**< \brief (SMAP_ADDR) Address Value */
#define SMAP_ADDR_ADDR_Msk          (_U_(0x3FFFFFFF) << SMAP_ADDR_ADDR_Pos)
#define SMAP_ADDR_ADDR(value)       (SMAP_ADDR_ADDR_Msk & ((value) << SMAP_ADDR_ADDR_Pos))
#define SMAP_ADDR_MASK              _U_(0xFFFFFFFC) /**< \brief (SMAP_ADDR) MASK Register */

/* -------- SMAP_LENGTH : (SMAP Offset: 0x10) (R/W 32) Length Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t :2;               /*!< bit:  0.. 1  Reserved                           */
    uint32_t LENGTH:30;        /*!< bit:  2..31  Length Register                    */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} SMAP_LENGTH_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SMAP_LENGTH_OFFSET          0x10         /**< \brief (SMAP_LENGTH offset) Length Register */
#define SMAP_LENGTH_RESETVALUE      _U_(0x00000000); /**< \brief (SMAP_LENGTH reset_value) Length Register */

#define SMAP_LENGTH_LENGTH_Pos      2            /**< \brief (SMAP_LENGTH) Length Register */
#define SMAP_LENGTH_LENGTH_Msk      (_U_(0x3FFFFFFF) << SMAP_LENGTH_LENGTH_Pos)
#define SMAP_LENGTH_LENGTH(value)   (SMAP_LENGTH_LENGTH_Msk & ((value) << SMAP_LENGTH_LENGTH_Pos))
#define SMAP_LENGTH_MASK            _U_(0xFFFFFFFC) /**< \brief (SMAP_LENGTH) MASK Register */

/* -------- SMAP_DATA : (SMAP Offset: 0x14) (R/W 32) Data Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t DATA:32;          /*!< bit:  0..31  Generic data register              */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} SMAP_DATA_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SMAP_DATA_OFFSET            0x14         /**< \brief (SMAP_DATA offset) Data Register */
#define SMAP_DATA_RESETVALUE        _U_(0x00000000); /**< \brief (SMAP_DATA reset_value) Data Register */

#define SMAP_DATA_DATA_Pos          0            /**< \brief (SMAP_DATA) Generic data register */
#define SMAP_DATA_DATA_Msk          (_U_(0xFFFFFFFF) << SMAP_DATA_DATA_Pos)
#define SMAP_DATA_DATA(value)       (SMAP_DATA_DATA_Msk & ((value) << SMAP_DATA_DATA_Pos))
#define SMAP_DATA_MASK              _U_(0xFFFFFFFF) /**< \brief (SMAP_DATA) MASK Register */

/* -------- SMAP_VERSION : (SMAP Offset: 0x28) (R/  32) VERSION register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t VERSION:12;       /*!< bit:  0..11  Version number                     */
    uint32_t :4;               /*!< bit: 12..15  Reserved                           */
    uint32_t VARIANT:4;        /*!< bit: 16..19  Variant number                     */
    uint32_t :12;              /*!< bit: 20..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} SMAP_VERSION_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SMAP_VERSION_OFFSET         0x28         /**< \brief (SMAP_VERSION offset) VERSION register */
#define SMAP_VERSION_RESETVALUE     _U_(0x00000100); /**< \brief (SMAP_VERSION reset_value) VERSION register */

#define SMAP_VERSION_VERSION_Pos    0            /**< \brief (SMAP_VERSION) Version number */
#define SMAP_VERSION_VERSION_Msk    (_U_(0xFFF) << SMAP_VERSION_VERSION_Pos)
#define SMAP_VERSION_VERSION(value) (SMAP_VERSION_VERSION_Msk & ((value) << SMAP_VERSION_VERSION_Pos))
#define SMAP_VERSION_VARIANT_Pos    16           /**< \brief (SMAP_VERSION) Variant number */
#define SMAP_VERSION_VARIANT_Msk    (_U_(0xF) << SMAP_VERSION_VARIANT_Pos)
#define SMAP_VERSION_VARIANT(value) (SMAP_VERSION_VARIANT_Msk & ((value) << SMAP_VERSION_VARIANT_Pos))
#define SMAP_VERSION_MASK           _U_(0x000F0FFF) /**< \brief (SMAP_VERSION) MASK Register */

/* -------- SMAP_CIDR : (SMAP Offset: 0xF0) (R/  32) Chip ID Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t VERSION:5;        /*!< bit:  0.. 4  Version of the Device              */
    uint32_t EPROC:3;          /*!< bit:  5.. 7  Embedded Processor                 */
    uint32_t NVPSIZ:4;         /*!< bit:  8..11  Nonvolatile Program Memory Size    */
    uint32_t NVPSIZ2:4;        /*!< bit: 12..15  Second Nonvolatile Program Memory Size */
    uint32_t SRAMSIZ:5;        /*!< bit: 16..20  Internal SRAM Size                 */
    uint32_t ARCH:7;           /*!< bit: 21..27  Architecture Identifier            */
    uint32_t NVPTYP:3;         /*!< bit: 28..30  Nonvolatile Program Memory Type    */
    uint32_t EXT:1;            /*!< bit:     31  Extension Flag                     */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} SMAP_CIDR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SMAP_CIDR_OFFSET            0xF0         /**< \brief (SMAP_CIDR offset) Chip ID Register */

#define SMAP_CIDR_VERSION_Pos       0            /**< \brief (SMAP_CIDR) Version of the Device */
#define SMAP_CIDR_VERSION_Msk       (_U_(0x1F) << SMAP_CIDR_VERSION_Pos)
#define SMAP_CIDR_VERSION(value)    (SMAP_CIDR_VERSION_Msk & ((value) << SMAP_CIDR_VERSION_Pos))
#define SMAP_CIDR_EPROC_Pos         5            /**< \brief (SMAP_CIDR) Embedded Processor */
#define SMAP_CIDR_EPROC_Msk         (_U_(0x7) << SMAP_CIDR_EPROC_Pos)
#define SMAP_CIDR_EPROC(value)      (SMAP_CIDR_EPROC_Msk & ((value) << SMAP_CIDR_EPROC_Pos))
#define SMAP_CIDR_NVPSIZ_Pos        8            /**< \brief (SMAP_CIDR) Nonvolatile Program Memory Size */
#define SMAP_CIDR_NVPSIZ_Msk        (_U_(0xF) << SMAP_CIDR_NVPSIZ_Pos)
#define SMAP_CIDR_NVPSIZ(value)     (SMAP_CIDR_NVPSIZ_Msk & ((value) << SMAP_CIDR_NVPSIZ_Pos))
#define SMAP_CIDR_NVPSIZ2_Pos       12           /**< \brief (SMAP_CIDR) Second Nonvolatile Program Memory Size */
#define SMAP_CIDR_NVPSIZ2_Msk       (_U_(0xF) << SMAP_CIDR_NVPSIZ2_Pos)
#define SMAP_CIDR_NVPSIZ2(value)    (SMAP_CIDR_NVPSIZ2_Msk & ((value) << SMAP_CIDR_NVPSIZ2_Pos))
#define SMAP_CIDR_SRAMSIZ_Pos       16           /**< \brief (SMAP_CIDR) Internal SRAM Size */
#define SMAP_CIDR_SRAMSIZ_Msk       (_U_(0x1F) << SMAP_CIDR_SRAMSIZ_Pos)
#define SMAP_CIDR_SRAMSIZ(value)    (SMAP_CIDR_SRAMSIZ_Msk & ((value) << SMAP_CIDR_SRAMSIZ_Pos))
#define SMAP_CIDR_ARCH_Pos          21           /**< \brief (SMAP_CIDR) Architecture Identifier */
#define SMAP_CIDR_ARCH_Msk          (_U_(0x7F) << SMAP_CIDR_ARCH_Pos)
#define SMAP_CIDR_ARCH(value)       (SMAP_CIDR_ARCH_Msk & ((value) << SMAP_CIDR_ARCH_Pos))
#define SMAP_CIDR_NVPTYP_Pos        28           /**< \brief (SMAP_CIDR) Nonvolatile Program Memory Type */
#define SMAP_CIDR_NVPTYP_Msk        (_U_(0x7) << SMAP_CIDR_NVPTYP_Pos)
#define SMAP_CIDR_NVPTYP(value)     (SMAP_CIDR_NVPTYP_Msk & ((value) << SMAP_CIDR_NVPTYP_Pos))
#define SMAP_CIDR_EXT_Pos           31           /**< \brief (SMAP_CIDR) Extension Flag */
#define SMAP_CIDR_EXT               (_U_(0x1) << SMAP_CIDR_EXT_Pos)
#define SMAP_CIDR_MASK              _U_(0xFFFFFFFF) /**< \brief (SMAP_CIDR) MASK Register */

/* -------- SMAP_EXID : (SMAP Offset: 0xF4) (R/  32) Chip ID Extension Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t EXID:32;          /*!< bit:  0..31  Chip ID Extension                  */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} SMAP_EXID_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SMAP_EXID_OFFSET            0xF4         /**< \brief (SMAP_EXID offset) Chip ID Extension Register */

#define SMAP_EXID_EXID_Pos          0            /**< \brief (SMAP_EXID) Chip ID Extension */
#define SMAP_EXID_EXID_Msk          (_U_(0xFFFFFFFF) << SMAP_EXID_EXID_Pos)
#define SMAP_EXID_EXID(value)       (SMAP_EXID_EXID_Msk & ((value) << SMAP_EXID_EXID_Pos))
#define SMAP_EXID_MASK              _U_(0xFFFFFFFF) /**< \brief (SMAP_EXID) MASK Register */

/* -------- SMAP_IDR : (SMAP Offset: 0xFC) (R/  32) AP Identification register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t APIDV:4;          /*!< bit:  0.. 3  AP Identification Variant          */
    uint32_t APID:4;           /*!< bit:  4.. 7  AP Identification                  */
    uint32_t :8;               /*!< bit:  8..15  Reserved                           */
    uint32_t CLSS:1;           /*!< bit:     16  Class                              */
    uint32_t IC:7;             /*!< bit: 17..23  JEP-106 Identity Code              */
    uint32_t CC:4;             /*!< bit: 24..27  JEP-106 Continuation Code          */
    uint32_t REVISION:4;       /*!< bit: 28..31  Revision                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} SMAP_IDR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SMAP_IDR_OFFSET             0xFC         /**< \brief (SMAP_IDR offset) AP Identification register */
#define SMAP_IDR_RESETVALUE         _U_(0x003E0000); /**< \brief (SMAP_IDR reset_value) AP Identification register */

#define SMAP_IDR_APIDV_Pos          0            /**< \brief (SMAP_IDR) AP Identification Variant */
#define SMAP_IDR_APIDV_Msk          (_U_(0xF) << SMAP_IDR_APIDV_Pos)
#define SMAP_IDR_APIDV(value)       (SMAP_IDR_APIDV_Msk & ((value) << SMAP_IDR_APIDV_Pos))
#define SMAP_IDR_APID_Pos           4            /**< \brief (SMAP_IDR) AP Identification */
#define SMAP_IDR_APID_Msk           (_U_(0xF) << SMAP_IDR_APID_Pos)
#define SMAP_IDR_APID(value)        (SMAP_IDR_APID_Msk & ((value) << SMAP_IDR_APID_Pos))
#define SMAP_IDR_CLSS_Pos           16           /**< \brief (SMAP_IDR) Class */
#define SMAP_IDR_CLSS               (_U_(0x1) << SMAP_IDR_CLSS_Pos)
#define SMAP_IDR_IC_Pos             17           /**< \brief (SMAP_IDR) JEP-106 Identity Code */
#define SMAP_IDR_IC_Msk             (_U_(0x7F) << SMAP_IDR_IC_Pos)
#define SMAP_IDR_IC(value)          (SMAP_IDR_IC_Msk & ((value) << SMAP_IDR_IC_Pos))
#define SMAP_IDR_CC_Pos             24           /**< \brief (SMAP_IDR) JEP-106 Continuation Code */
#define SMAP_IDR_CC_Msk             (_U_(0xF) << SMAP_IDR_CC_Pos)
#define SMAP_IDR_CC(value)          (SMAP_IDR_CC_Msk & ((value) << SMAP_IDR_CC_Pos))
#define SMAP_IDR_REVISION_Pos       28           /**< \brief (SMAP_IDR) Revision */
#define SMAP_IDR_REVISION_Msk       (_U_(0xF) << SMAP_IDR_REVISION_Pos)
#define SMAP_IDR_REVISION(value)    (SMAP_IDR_REVISION_Msk & ((value) << SMAP_IDR_REVISION_Pos))
#define SMAP_IDR_MASK               _U_(0xFFFF00FF) /**< \brief (SMAP_IDR) MASK Register */

/** \brief SMAP hardware registers */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef struct {
  __O  uint32_t CR;          /**< \brief Offset: 0x00 ( /W 32) Control Register */
  __I  uint32_t SR;          /**< \brief Offset: 0x04 (R/  32) Status Register */
  __O  uint32_t SCR;         /**< \brief Offset: 0x08 ( /W 32) Status Clear Register */
  __IO uint32_t ADDR;        /**< \brief Offset: 0x0C (R/W 32) Address Register */
  __IO uint32_t LENGTH;      /**< \brief Offset: 0x10 (R/W 32) Length Register */
  __IO uint32_t DATA;        /**< \brief Offset: 0x14 (R/W 32) Data Register */
       RoReg8   Reserved1[0x10];
  __I  uint32_t VERSION;     /**< \brief Offset: 0x28 (R/  32) VERSION register */
       RoReg8   Reserved2[0xC4];
  __I  uint32_t CIDR;        /**< \brief Offset: 0xF0 (R/  32) Chip ID Register */
  __I  uint32_t EXID;        /**< \brief Offset: 0xF4 (R/  32) Chip ID Extension Register */
       RoReg8   Reserved3[0x4];
  __I  uint32_t IDR;         /**< \brief Offset: 0xFC (R/  32) AP Identification register */
} Smap;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

/*@}*/

#endif /* _SAM4L_SMAP_COMPONENT_ */
