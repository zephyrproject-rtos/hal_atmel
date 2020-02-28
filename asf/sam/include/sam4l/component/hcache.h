/**
 * \file
 *
 * \brief Component description for HCACHE
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

#ifndef _SAM4L_HCACHE_COMPONENT_
#define _SAM4L_HCACHE_COMPONENT_

/* ========================================================================== */
/**  SOFTWARE API DEFINITION FOR HCACHE */
/* ========================================================================== */
/** \addtogroup SAM4L_HCACHE Cortex M I&D Cache Controller */
/*@{*/

#define HCACHE_I8323
#define REV_HCACHE                  0x101

/* -------- HCACHE_CTRL : (HCACHE Offset: 0x08) ( /W 32) Control Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t CEN:1;            /*!< bit:      0  Cache Enable                       */
    uint32_t :31;              /*!< bit:  1..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} HCACHE_CTRL_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define HCACHE_CTRL_OFFSET          0x08         /**< \brief (HCACHE_CTRL offset) Control Register */

#define HCACHE_CTRL_CEN_Pos         0            /**< \brief (HCACHE_CTRL) Cache Enable */
#define HCACHE_CTRL_CEN             (_U_(0x1) << HCACHE_CTRL_CEN_Pos)
#define   HCACHE_CTRL_CEN_NO_Val          _U_(0x0)   /**< \brief (HCACHE_CTRL) Disable Cache Controller */
#define   HCACHE_CTRL_CEN_YES_Val         _U_(0x1)   /**< \brief (HCACHE_CTRL) Enable Cache Controller */
#define HCACHE_CTRL_CEN_NO          (HCACHE_CTRL_CEN_NO_Val        << HCACHE_CTRL_CEN_Pos)
#define HCACHE_CTRL_CEN_YES         (HCACHE_CTRL_CEN_YES_Val       << HCACHE_CTRL_CEN_Pos)
#define HCACHE_CTRL_MASK            _U_(0x00000001) /**< \brief (HCACHE_CTRL) MASK Register */

/* -------- HCACHE_SR : (HCACHE Offset: 0x0C) (R/W 32) Status Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t CSTS:1;           /*!< bit:      0  Cache Controller Status            */
    uint32_t :31;              /*!< bit:  1..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} HCACHE_SR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define HCACHE_SR_OFFSET            0x0C         /**< \brief (HCACHE_SR offset) Status Register */

#define HCACHE_SR_CSTS_Pos          0            /**< \brief (HCACHE_SR) Cache Controller Status */
#define HCACHE_SR_CSTS              (_U_(0x1) << HCACHE_SR_CSTS_Pos)
#define   HCACHE_SR_CSTS_DIS_Val          _U_(0x0)   /**< \brief (HCACHE_SR) Cache Controller Disabled */
#define   HCACHE_SR_CSTS_EN_Val           _U_(0x1)   /**< \brief (HCACHE_SR) Cache Controller Enabled */
#define HCACHE_SR_CSTS_DIS          (HCACHE_SR_CSTS_DIS_Val        << HCACHE_SR_CSTS_Pos)
#define HCACHE_SR_CSTS_EN           (HCACHE_SR_CSTS_EN_Val         << HCACHE_SR_CSTS_Pos)
#define HCACHE_SR_MASK              _U_(0x00000001) /**< \brief (HCACHE_SR) MASK Register */

/* -------- HCACHE_MAINT0 : (HCACHE Offset: 0x20) ( /W 32) Maintenance Register 0 -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t INVALL:1;         /*!< bit:      0  Cache Controller Invalidate All    */
    uint32_t :31;              /*!< bit:  1..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} HCACHE_MAINT0_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define HCACHE_MAINT0_OFFSET        0x20         /**< \brief (HCACHE_MAINT0 offset) Maintenance Register 0 */

#define HCACHE_MAINT0_INVALL_Pos    0            /**< \brief (HCACHE_MAINT0) Cache Controller Invalidate All */
#define HCACHE_MAINT0_INVALL        (_U_(0x1) << HCACHE_MAINT0_INVALL_Pos)
#define   HCACHE_MAINT0_INVALL_NO_Val     _U_(0x0)   /**< \brief (HCACHE_MAINT0) No effect */
#define   HCACHE_MAINT0_INVALL_YES_Val    _U_(0x1)   /**< \brief (HCACHE_MAINT0) Invalidate all cache entries */
#define HCACHE_MAINT0_INVALL_NO     (HCACHE_MAINT0_INVALL_NO_Val   << HCACHE_MAINT0_INVALL_Pos)
#define HCACHE_MAINT0_INVALL_YES    (HCACHE_MAINT0_INVALL_YES_Val  << HCACHE_MAINT0_INVALL_Pos)
#define HCACHE_MAINT0_MASK          _U_(0x00000001) /**< \brief (HCACHE_MAINT0) MASK Register */

/* -------- HCACHE_MAINT1 : (HCACHE Offset: 0x24) ( /W 32) Maintenance Register 1 -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t :4;               /*!< bit:  0.. 3  Reserved                           */
    uint32_t INDEX:4;          /*!< bit:  4.. 7  Invalidate Index                   */
    uint32_t :24;              /*!< bit:  8..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} HCACHE_MAINT1_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define HCACHE_MAINT1_OFFSET        0x24         /**< \brief (HCACHE_MAINT1 offset) Maintenance Register 1 */

#define HCACHE_MAINT1_INDEX_Pos     4            /**< \brief (HCACHE_MAINT1) Invalidate Index */
#define HCACHE_MAINT1_INDEX_Msk     (_U_(0xF) << HCACHE_MAINT1_INDEX_Pos)
#define HCACHE_MAINT1_INDEX(value)  (HCACHE_MAINT1_INDEX_Msk & ((value) << HCACHE_MAINT1_INDEX_Pos))
#define HCACHE_MAINT1_MASK          _U_(0x000000F0) /**< \brief (HCACHE_MAINT1) MASK Register */

/* -------- HCACHE_MCFG : (HCACHE Offset: 0x28) (R/W 32) Monitor Configuration Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t MODE:2;           /*!< bit:  0.. 1  Cache Controller Monitor Counter Mode */
    uint32_t :30;              /*!< bit:  2..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} HCACHE_MCFG_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define HCACHE_MCFG_OFFSET          0x28         /**< \brief (HCACHE_MCFG offset) Monitor Configuration Register */

#define HCACHE_MCFG_MODE_Pos        0            /**< \brief (HCACHE_MCFG) Cache Controller Monitor Counter Mode */
#define HCACHE_MCFG_MODE_Msk        (_U_(0x3) << HCACHE_MCFG_MODE_Pos)
#define HCACHE_MCFG_MODE(value)     (HCACHE_MCFG_MODE_Msk & ((value) << HCACHE_MCFG_MODE_Pos))
#define   HCACHE_MCFG_MODE_CYCLE_Val      _U_(0x0)   /**< \brief (HCACHE_MCFG) Cycle Counter */
#define   HCACHE_MCFG_MODE_IHIT_Val       _U_(0x1)   /**< \brief (HCACHE_MCFG) Instruction Hit Counter */
#define   HCACHE_MCFG_MODE_DHIT_Val       _U_(0x2)   /**< \brief (HCACHE_MCFG) Data Hit Counter */
#define HCACHE_MCFG_MODE_CYCLE      (HCACHE_MCFG_MODE_CYCLE_Val    << HCACHE_MCFG_MODE_Pos)
#define HCACHE_MCFG_MODE_IHIT       (HCACHE_MCFG_MODE_IHIT_Val     << HCACHE_MCFG_MODE_Pos)
#define HCACHE_MCFG_MODE_DHIT       (HCACHE_MCFG_MODE_DHIT_Val     << HCACHE_MCFG_MODE_Pos)
#define HCACHE_MCFG_MASK            _U_(0x00000003) /**< \brief (HCACHE_MCFG) MASK Register */

/* -------- HCACHE_MEN : (HCACHE Offset: 0x2C) (R/W 32) Monitor Enable Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t MENABLE:1;        /*!< bit:      0  Monitor Enable                     */
    uint32_t :31;              /*!< bit:  1..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} HCACHE_MEN_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define HCACHE_MEN_OFFSET           0x2C         /**< \brief (HCACHE_MEN offset) Monitor Enable Register */

#define HCACHE_MEN_MENABLE_Pos      0            /**< \brief (HCACHE_MEN) Monitor Enable */
#define HCACHE_MEN_MENABLE          (_U_(0x1) << HCACHE_MEN_MENABLE_Pos)
#define   HCACHE_MEN_MENABLE_DIS_Val      _U_(0x0)   /**< \brief (HCACHE_MEN) Disable Monitor Counter */
#define   HCACHE_MEN_MENABLE_EN_Val       _U_(0x1)   /**< \brief (HCACHE_MEN) Enable Monitor Counter */
#define HCACHE_MEN_MENABLE_DIS      (HCACHE_MEN_MENABLE_DIS_Val    << HCACHE_MEN_MENABLE_Pos)
#define HCACHE_MEN_MENABLE_EN       (HCACHE_MEN_MENABLE_EN_Val     << HCACHE_MEN_MENABLE_Pos)
#define HCACHE_MEN_MASK             _U_(0x00000001) /**< \brief (HCACHE_MEN) MASK Register */

/* -------- HCACHE_MCTRL : (HCACHE Offset: 0x30) ( /W 32) Monitor Control Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t SWRST:1;          /*!< bit:      0  Monitor Software Reset             */
    uint32_t :31;              /*!< bit:  1..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} HCACHE_MCTRL_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define HCACHE_MCTRL_OFFSET         0x30         /**< \brief (HCACHE_MCTRL offset) Monitor Control Register */

#define HCACHE_MCTRL_SWRST_Pos      0            /**< \brief (HCACHE_MCTRL) Monitor Software Reset */
#define HCACHE_MCTRL_SWRST          (_U_(0x1) << HCACHE_MCTRL_SWRST_Pos)
#define   HCACHE_MCTRL_SWRST_NO_Val       _U_(0x0)   /**< \brief (HCACHE_MCTRL) No effect */
#define   HCACHE_MCTRL_SWRST_YES_Val      _U_(0x1)   /**< \brief (HCACHE_MCTRL) Reset event counter register */
#define HCACHE_MCTRL_SWRST_NO       (HCACHE_MCTRL_SWRST_NO_Val     << HCACHE_MCTRL_SWRST_Pos)
#define HCACHE_MCTRL_SWRST_YES      (HCACHE_MCTRL_SWRST_YES_Val    << HCACHE_MCTRL_SWRST_Pos)
#define HCACHE_MCTRL_MASK           _U_(0x00000001) /**< \brief (HCACHE_MCTRL) MASK Register */

/* -------- HCACHE_MSR : (HCACHE Offset: 0x34) (R/  32) Monitor Status Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t EVENTCNT:32;      /*!< bit:  0..31  Monitor Event Counter              */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} HCACHE_MSR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define HCACHE_MSR_OFFSET           0x34         /**< \brief (HCACHE_MSR offset) Monitor Status Register */

#define HCACHE_MSR_EVENTCNT_Pos     0            /**< \brief (HCACHE_MSR) Monitor Event Counter */
#define HCACHE_MSR_EVENTCNT_Msk     (_U_(0xFFFFFFFF) << HCACHE_MSR_EVENTCNT_Pos)
#define HCACHE_MSR_EVENTCNT(value)  (HCACHE_MSR_EVENTCNT_Msk & ((value) << HCACHE_MSR_EVENTCNT_Pos))
#define HCACHE_MSR_MASK             _U_(0xFFFFFFFF) /**< \brief (HCACHE_MSR) MASK Register */

/* -------- HCACHE_VERSION : (HCACHE Offset: 0xFC) (R/  32) Version Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t VERSION:12;       /*!< bit:  0..11  VERSION                            */
    uint32_t :4;               /*!< bit: 12..15  Reserved                           */
    uint32_t MFN:4;            /*!< bit: 16..19  MFN                                */
    uint32_t :12;              /*!< bit: 20..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} HCACHE_VERSION_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define HCACHE_VERSION_OFFSET       0xFC         /**< \brief (HCACHE_VERSION offset) Version Register */
#define HCACHE_VERSION_RESETVALUE   _U_(0x00000101); /**< \brief (HCACHE_VERSION reset_value) Version Register */

#define HCACHE_VERSION_VERSION_Pos  0            /**< \brief (HCACHE_VERSION) VERSION */
#define HCACHE_VERSION_VERSION_Msk  (_U_(0xFFF) << HCACHE_VERSION_VERSION_Pos)
#define HCACHE_VERSION_VERSION(value) (HCACHE_VERSION_VERSION_Msk & ((value) << HCACHE_VERSION_VERSION_Pos))
#define HCACHE_VERSION_MFN_Pos      16           /**< \brief (HCACHE_VERSION) MFN */
#define HCACHE_VERSION_MFN_Msk      (_U_(0xF) << HCACHE_VERSION_MFN_Pos)
#define HCACHE_VERSION_MFN(value)   (HCACHE_VERSION_MFN_Msk & ((value) << HCACHE_VERSION_MFN_Pos))
#define HCACHE_VERSION_MASK         _U_(0x000F0FFF) /**< \brief (HCACHE_VERSION) MASK Register */

/** \brief HCACHE hardware registers */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef struct {
       RoReg8   Reserved1[0x8];
  __O  uint32_t CTRL;        /**< \brief Offset: 0x08 ( /W 32) Control Register */
  __IO uint32_t SR;          /**< \brief Offset: 0x0C (R/W 32) Status Register */
       RoReg8   Reserved2[0x10];
  __O  uint32_t MAINT0;      /**< \brief Offset: 0x20 ( /W 32) Maintenance Register 0 */
  __O  uint32_t MAINT1;      /**< \brief Offset: 0x24 ( /W 32) Maintenance Register 1 */
  __IO uint32_t MCFG;        /**< \brief Offset: 0x28 (R/W 32) Monitor Configuration Register */
  __IO uint32_t MEN;         /**< \brief Offset: 0x2C (R/W 32) Monitor Enable Register */
  __O  uint32_t MCTRL;       /**< \brief Offset: 0x30 ( /W 32) Monitor Control Register */
  __I  uint32_t MSR;         /**< \brief Offset: 0x34 (R/  32) Monitor Status Register */
       RoReg8   Reserved3[0xC4];
  __I  uint32_t VERSION;     /**< \brief Offset: 0xFC (R/  32) Version Register */
} Hcache;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

/*@}*/

#endif /* _SAM4L_HCACHE_COMPONENT_ */
