/**
 * \file
 *
 * \brief Component description for PEVC
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

#ifndef _SAM4L_PEVC_COMPONENT_
#define _SAM4L_PEVC_COMPONENT_

/* ========================================================================== */
/**  SOFTWARE API DEFINITION FOR PEVC */
/* ========================================================================== */
/** \addtogroup SAM4L_PEVC Peripheral Event Controller */
/*@{*/

#define PEVC_I7533
#define REV_PEVC                    0x200

/* -------- PEVC_CHSR : (PEVC Offset: 0x000) (R/  32) Channel Status Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t CHS:32;           /*!< bit:  0..31  Channel Status                     */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} PEVC_CHSR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PEVC_CHSR_OFFSET            0x000        /**< \brief (PEVC_CHSR offset) Channel Status Register */
#define PEVC_CHSR_RESETVALUE        _U_(0x00000000); /**< \brief (PEVC_CHSR reset_value) Channel Status Register */

#define PEVC_CHSR_CHS_Pos           0            /**< \brief (PEVC_CHSR) Channel Status */
#define PEVC_CHSR_CHS_Msk           (_U_(0xFFFFFFFF) << PEVC_CHSR_CHS_Pos)
#define PEVC_CHSR_CHS(value)        (PEVC_CHSR_CHS_Msk & ((value) << PEVC_CHSR_CHS_Pos))
#define   PEVC_CHSR_CHS_0_Val             _U_(0x0)   /**< \brief (PEVC_CHSR) Channel j Disabled */
#define   PEVC_CHSR_CHS_1_Val             _U_(0x1)   /**< \brief (PEVC_CHSR) Channel j Enabled */
#define PEVC_CHSR_CHS_0             (PEVC_CHSR_CHS_0_Val           << PEVC_CHSR_CHS_Pos)
#define PEVC_CHSR_CHS_1             (PEVC_CHSR_CHS_1_Val           << PEVC_CHSR_CHS_Pos)
#define PEVC_CHSR_MASK              _U_(0xFFFFFFFF) /**< \brief (PEVC_CHSR) MASK Register */

/* -------- PEVC_CHER : (PEVC Offset: 0x004) ( /W 32) Channel Enable Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t CHE:32;           /*!< bit:  0..31  Channel Enable                     */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} PEVC_CHER_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PEVC_CHER_OFFSET            0x004        /**< \brief (PEVC_CHER offset) Channel Enable Register */
#define PEVC_CHER_RESETVALUE        _U_(0x00000000); /**< \brief (PEVC_CHER reset_value) Channel Enable Register */

#define PEVC_CHER_CHE_Pos           0            /**< \brief (PEVC_CHER) Channel Enable */
#define PEVC_CHER_CHE_Msk           (_U_(0xFFFFFFFF) << PEVC_CHER_CHE_Pos)
#define PEVC_CHER_CHE(value)        (PEVC_CHER_CHE_Msk & ((value) << PEVC_CHER_CHE_Pos))
#define   PEVC_CHER_CHE_0_Val             _U_(0x0)   /**< \brief (PEVC_CHER) No Action */
#define   PEVC_CHER_CHE_1_Val             _U_(0x1)   /**< \brief (PEVC_CHER) Enable Channel j */
#define PEVC_CHER_CHE_0             (PEVC_CHER_CHE_0_Val           << PEVC_CHER_CHE_Pos)
#define PEVC_CHER_CHE_1             (PEVC_CHER_CHE_1_Val           << PEVC_CHER_CHE_Pos)
#define PEVC_CHER_MASK              _U_(0xFFFFFFFF) /**< \brief (PEVC_CHER) MASK Register */

/* -------- PEVC_CHDR : (PEVC Offset: 0x008) ( /W 32) Channel Disable Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t CHD:32;           /*!< bit:  0..31  Channel Disable                    */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} PEVC_CHDR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PEVC_CHDR_OFFSET            0x008        /**< \brief (PEVC_CHDR offset) Channel Disable Register */
#define PEVC_CHDR_RESETVALUE        _U_(0x00000000); /**< \brief (PEVC_CHDR reset_value) Channel Disable Register */

#define PEVC_CHDR_CHD_Pos           0            /**< \brief (PEVC_CHDR) Channel Disable */
#define PEVC_CHDR_CHD_Msk           (_U_(0xFFFFFFFF) << PEVC_CHDR_CHD_Pos)
#define PEVC_CHDR_CHD(value)        (PEVC_CHDR_CHD_Msk & ((value) << PEVC_CHDR_CHD_Pos))
#define   PEVC_CHDR_CHD_0_Val             _U_(0x0)   /**< \brief (PEVC_CHDR) No Action */
#define   PEVC_CHDR_CHD_1_Val             _U_(0x1)   /**< \brief (PEVC_CHDR) Disable Channel j */
#define PEVC_CHDR_CHD_0             (PEVC_CHDR_CHD_0_Val           << PEVC_CHDR_CHD_Pos)
#define PEVC_CHDR_CHD_1             (PEVC_CHDR_CHD_1_Val           << PEVC_CHDR_CHD_Pos)
#define PEVC_CHDR_MASK              _U_(0xFFFFFFFF) /**< \brief (PEVC_CHDR) MASK Register */

/* -------- PEVC_SEV : (PEVC Offset: 0x010) ( /W 32) Software Event -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t SEV:32;           /*!< bit:  0..31  Software Event                     */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} PEVC_SEV_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PEVC_SEV_OFFSET             0x010        /**< \brief (PEVC_SEV offset) Software Event */
#define PEVC_SEV_RESETVALUE         _U_(0x00000000); /**< \brief (PEVC_SEV reset_value) Software Event */

#define PEVC_SEV_SEV_Pos            0            /**< \brief (PEVC_SEV) Software Event */
#define PEVC_SEV_SEV_Msk            (_U_(0xFFFFFFFF) << PEVC_SEV_SEV_Pos)
#define PEVC_SEV_SEV(value)         (PEVC_SEV_SEV_Msk & ((value) << PEVC_SEV_SEV_Pos))
#define   PEVC_SEV_SEV_0_Val              _U_(0x0)   /**< \brief (PEVC_SEV) No Action */
#define   PEVC_SEV_SEV_1_Val              _U_(0x1)   /**< \brief (PEVC_SEV) CPU forces software event to channel j */
#define PEVC_SEV_SEV_0              (PEVC_SEV_SEV_0_Val            << PEVC_SEV_SEV_Pos)
#define PEVC_SEV_SEV_1              (PEVC_SEV_SEV_1_Val            << PEVC_SEV_SEV_Pos)
#define PEVC_SEV_MASK               _U_(0xFFFFFFFF) /**< \brief (PEVC_SEV) MASK Register */

/* -------- PEVC_BUSY : (PEVC Offset: 0x014) (R/  32) Channel / User Busy -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t BUSY:32;          /*!< bit:  0..31  Channel Status                     */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} PEVC_BUSY_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PEVC_BUSY_OFFSET            0x014        /**< \brief (PEVC_BUSY offset) Channel / User Busy */
#define PEVC_BUSY_RESETVALUE        _U_(0x00000000); /**< \brief (PEVC_BUSY reset_value) Channel / User Busy */

#define PEVC_BUSY_BUSY_Pos          0            /**< \brief (PEVC_BUSY) Channel Status */
#define PEVC_BUSY_BUSY_Msk          (_U_(0xFFFFFFFF) << PEVC_BUSY_BUSY_Pos)
#define PEVC_BUSY_BUSY(value)       (PEVC_BUSY_BUSY_Msk & ((value) << PEVC_BUSY_BUSY_Pos))
#define   PEVC_BUSY_BUSY_0_Val            _U_(0x0)   /**< \brief (PEVC_BUSY) No Action */
#define   PEVC_BUSY_BUSY_1_Val            _U_(0x1)   /**< \brief (PEVC_BUSY) Channel j or User j is Busy */
#define PEVC_BUSY_BUSY_0            (PEVC_BUSY_BUSY_0_Val          << PEVC_BUSY_BUSY_Pos)
#define PEVC_BUSY_BUSY_1            (PEVC_BUSY_BUSY_1_Val          << PEVC_BUSY_BUSY_Pos)
#define PEVC_BUSY_MASK              _U_(0xFFFFFFFF) /**< \brief (PEVC_BUSY) MASK Register */

/* -------- PEVC_TRIER : (PEVC Offset: 0x020) ( /W 32) Trigger Interrupt Mask Enable Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t TRIE:32;          /*!< bit:  0..31  Trigger Interrupt Enable           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} PEVC_TRIER_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PEVC_TRIER_OFFSET           0x020        /**< \brief (PEVC_TRIER offset) Trigger Interrupt Mask Enable Register */
#define PEVC_TRIER_RESETVALUE       _U_(0x00000000); /**< \brief (PEVC_TRIER reset_value) Trigger Interrupt Mask Enable Register */

#define PEVC_TRIER_TRIE_Pos         0            /**< \brief (PEVC_TRIER) Trigger Interrupt Enable */
#define PEVC_TRIER_TRIE_Msk         (_U_(0xFFFFFFFF) << PEVC_TRIER_TRIE_Pos)
#define PEVC_TRIER_TRIE(value)      (PEVC_TRIER_TRIE_Msk & ((value) << PEVC_TRIER_TRIE_Pos))
#define   PEVC_TRIER_TRIE_0_Val           _U_(0x0)   /**< \brief (PEVC_TRIER) No Action */
#define   PEVC_TRIER_TRIE_1_Val           _U_(0x1)   /**< \brief (PEVC_TRIER) Enable Trigger j Interrupt */
#define PEVC_TRIER_TRIE_0           (PEVC_TRIER_TRIE_0_Val         << PEVC_TRIER_TRIE_Pos)
#define PEVC_TRIER_TRIE_1           (PEVC_TRIER_TRIE_1_Val         << PEVC_TRIER_TRIE_Pos)
#define PEVC_TRIER_MASK             _U_(0xFFFFFFFF) /**< \brief (PEVC_TRIER) MASK Register */

/* -------- PEVC_TRIDR : (PEVC Offset: 0x024) ( /W 32) Trigger Interrupt Mask Disable Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t TRID:32;          /*!< bit:  0..31  Trigger Interrupt Disable          */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} PEVC_TRIDR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PEVC_TRIDR_OFFSET           0x024        /**< \brief (PEVC_TRIDR offset) Trigger Interrupt Mask Disable Register */
#define PEVC_TRIDR_RESETVALUE       _U_(0x00000000); /**< \brief (PEVC_TRIDR reset_value) Trigger Interrupt Mask Disable Register */

#define PEVC_TRIDR_TRID_Pos         0            /**< \brief (PEVC_TRIDR) Trigger Interrupt Disable */
#define PEVC_TRIDR_TRID_Msk         (_U_(0xFFFFFFFF) << PEVC_TRIDR_TRID_Pos)
#define PEVC_TRIDR_TRID(value)      (PEVC_TRIDR_TRID_Msk & ((value) << PEVC_TRIDR_TRID_Pos))
#define   PEVC_TRIDR_TRID_0_Val           _U_(0x0)   /**< \brief (PEVC_TRIDR) No Action */
#define   PEVC_TRIDR_TRID_1_Val           _U_(0x1)   /**< \brief (PEVC_TRIDR) Disable Trigger j Interrupt */
#define PEVC_TRIDR_TRID_0           (PEVC_TRIDR_TRID_0_Val         << PEVC_TRIDR_TRID_Pos)
#define PEVC_TRIDR_TRID_1           (PEVC_TRIDR_TRID_1_Val         << PEVC_TRIDR_TRID_Pos)
#define PEVC_TRIDR_MASK             _U_(0xFFFFFFFF) /**< \brief (PEVC_TRIDR) MASK Register */

/* -------- PEVC_TRIMR : (PEVC Offset: 0x028) (R/  32) Trigger Interrupt Mask Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t TRIM:32;          /*!< bit:  0..31  Trigger Interrupt Mask             */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} PEVC_TRIMR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PEVC_TRIMR_OFFSET           0x028        /**< \brief (PEVC_TRIMR offset) Trigger Interrupt Mask Register */
#define PEVC_TRIMR_RESETVALUE       _U_(0x00000000); /**< \brief (PEVC_TRIMR reset_value) Trigger Interrupt Mask Register */

#define PEVC_TRIMR_TRIM_Pos         0            /**< \brief (PEVC_TRIMR) Trigger Interrupt Mask */
#define PEVC_TRIMR_TRIM_Msk         (_U_(0xFFFFFFFF) << PEVC_TRIMR_TRIM_Pos)
#define PEVC_TRIMR_TRIM(value)      (PEVC_TRIMR_TRIM_Msk & ((value) << PEVC_TRIMR_TRIM_Pos))
#define   PEVC_TRIMR_TRIM_0_Val           _U_(0x0)   /**< \brief (PEVC_TRIMR) Trigger j Interrupt Disabled */
#define   PEVC_TRIMR_TRIM_1_Val           _U_(0x1)   /**< \brief (PEVC_TRIMR) Trigger j Interrupt Enabled */
#define PEVC_TRIMR_TRIM_0           (PEVC_TRIMR_TRIM_0_Val         << PEVC_TRIMR_TRIM_Pos)
#define PEVC_TRIMR_TRIM_1           (PEVC_TRIMR_TRIM_1_Val         << PEVC_TRIMR_TRIM_Pos)
#define PEVC_TRIMR_MASK             _U_(0xFFFFFFFF) /**< \brief (PEVC_TRIMR) MASK Register */

/* -------- PEVC_TRSR : (PEVC Offset: 0x030) (R/  32) Trigger Status Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t TRS:32;           /*!< bit:  0..31  Trigger Interrupt Status           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} PEVC_TRSR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PEVC_TRSR_OFFSET            0x030        /**< \brief (PEVC_TRSR offset) Trigger Status Register */
#define PEVC_TRSR_RESETVALUE        _U_(0x00000000); /**< \brief (PEVC_TRSR reset_value) Trigger Status Register */

#define PEVC_TRSR_TRS_Pos           0            /**< \brief (PEVC_TRSR) Trigger Interrupt Status */
#define PEVC_TRSR_TRS_Msk           (_U_(0xFFFFFFFF) << PEVC_TRSR_TRS_Pos)
#define PEVC_TRSR_TRS(value)        (PEVC_TRSR_TRS_Msk & ((value) << PEVC_TRSR_TRS_Pos))
#define   PEVC_TRSR_TRS_0_Val             _U_(0x0)   /**< \brief (PEVC_TRSR) Channel j did not send out an Event in the past */
#define   PEVC_TRSR_TRS_1_Val             _U_(0x1)   /**< \brief (PEVC_TRSR) Channel j did send out an Event in the past */
#define PEVC_TRSR_TRS_0             (PEVC_TRSR_TRS_0_Val           << PEVC_TRSR_TRS_Pos)
#define PEVC_TRSR_TRS_1             (PEVC_TRSR_TRS_1_Val           << PEVC_TRSR_TRS_Pos)
#define PEVC_TRSR_MASK              _U_(0xFFFFFFFF) /**< \brief (PEVC_TRSR) MASK Register */

/* -------- PEVC_TRSCR : (PEVC Offset: 0x034) ( /W 32) Trigger Status Clear Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t TRSC:32;          /*!< bit:  0..31  Trigger Interrupt Status Clear     */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} PEVC_TRSCR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PEVC_TRSCR_OFFSET           0x034        /**< \brief (PEVC_TRSCR offset) Trigger Status Clear Register */
#define PEVC_TRSCR_RESETVALUE       _U_(0x00000000); /**< \brief (PEVC_TRSCR reset_value) Trigger Status Clear Register */

#define PEVC_TRSCR_TRSC_Pos         0            /**< \brief (PEVC_TRSCR) Trigger Interrupt Status Clear */
#define PEVC_TRSCR_TRSC_Msk         (_U_(0xFFFFFFFF) << PEVC_TRSCR_TRSC_Pos)
#define PEVC_TRSCR_TRSC(value)      (PEVC_TRSCR_TRSC_Msk & ((value) << PEVC_TRSCR_TRSC_Pos))
#define   PEVC_TRSCR_TRSC_0_Val           _U_(0x0)   /**< \brief (PEVC_TRSCR) No Action */
#define   PEVC_TRSCR_TRSC_1_Val           _U_(0x1)   /**< \brief (PEVC_TRSCR) Clear TRSR[j] */
#define PEVC_TRSCR_TRSC_0           (PEVC_TRSCR_TRSC_0_Val         << PEVC_TRSCR_TRSC_Pos)
#define PEVC_TRSCR_TRSC_1           (PEVC_TRSCR_TRSC_1_Val         << PEVC_TRSCR_TRSC_Pos)
#define PEVC_TRSCR_MASK             _U_(0xFFFFFFFF) /**< \brief (PEVC_TRSCR) MASK Register */

/* -------- PEVC_OVIER : (PEVC Offset: 0x040) ( /W 32) Overrun Interrupt Mask Enable Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t OVIE:32;          /*!< bit:  0..31  Overrun Interrupt Enable           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} PEVC_OVIER_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PEVC_OVIER_OFFSET           0x040        /**< \brief (PEVC_OVIER offset) Overrun Interrupt Mask Enable Register */
#define PEVC_OVIER_RESETVALUE       _U_(0x00000000); /**< \brief (PEVC_OVIER reset_value) Overrun Interrupt Mask Enable Register */

#define PEVC_OVIER_OVIE_Pos         0            /**< \brief (PEVC_OVIER) Overrun Interrupt Enable */
#define PEVC_OVIER_OVIE_Msk         (_U_(0xFFFFFFFF) << PEVC_OVIER_OVIE_Pos)
#define PEVC_OVIER_OVIE(value)      (PEVC_OVIER_OVIE_Msk & ((value) << PEVC_OVIER_OVIE_Pos))
#define   PEVC_OVIER_OVIE_0_Val           _U_(0x0)   /**< \brief (PEVC_OVIER) No Action */
#define   PEVC_OVIER_OVIE_1_Val           _U_(0x1)   /**< \brief (PEVC_OVIER) Enable Overrun Interrupt for Channel j */
#define PEVC_OVIER_OVIE_0           (PEVC_OVIER_OVIE_0_Val         << PEVC_OVIER_OVIE_Pos)
#define PEVC_OVIER_OVIE_1           (PEVC_OVIER_OVIE_1_Val         << PEVC_OVIER_OVIE_Pos)
#define PEVC_OVIER_MASK             _U_(0xFFFFFFFF) /**< \brief (PEVC_OVIER) MASK Register */

/* -------- PEVC_OVIDR : (PEVC Offset: 0x044) ( /W 32) Overrun Interrupt Mask Disable Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t OVID:32;          /*!< bit:  0..31  Overrun Interrupt Disable          */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} PEVC_OVIDR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PEVC_OVIDR_OFFSET           0x044        /**< \brief (PEVC_OVIDR offset) Overrun Interrupt Mask Disable Register */
#define PEVC_OVIDR_RESETVALUE       _U_(0x00000000); /**< \brief (PEVC_OVIDR reset_value) Overrun Interrupt Mask Disable Register */

#define PEVC_OVIDR_OVID_Pos         0            /**< \brief (PEVC_OVIDR) Overrun Interrupt Disable */
#define PEVC_OVIDR_OVID_Msk         (_U_(0xFFFFFFFF) << PEVC_OVIDR_OVID_Pos)
#define PEVC_OVIDR_OVID(value)      (PEVC_OVIDR_OVID_Msk & ((value) << PEVC_OVIDR_OVID_Pos))
#define   PEVC_OVIDR_OVID_0_Val           _U_(0x0)   /**< \brief (PEVC_OVIDR) No Action */
#define   PEVC_OVIDR_OVID_1_Val           _U_(0x1)   /**< \brief (PEVC_OVIDR) Enable Overrun Interrupt for Channel j */
#define PEVC_OVIDR_OVID_0           (PEVC_OVIDR_OVID_0_Val         << PEVC_OVIDR_OVID_Pos)
#define PEVC_OVIDR_OVID_1           (PEVC_OVIDR_OVID_1_Val         << PEVC_OVIDR_OVID_Pos)
#define PEVC_OVIDR_MASK             _U_(0xFFFFFFFF) /**< \brief (PEVC_OVIDR) MASK Register */

/* -------- PEVC_OVIMR : (PEVC Offset: 0x048) (R/  32) Overrun Interrupt Mask Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t OVIM:32;          /*!< bit:  0..31  Overrun Interrupt Mask             */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} PEVC_OVIMR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PEVC_OVIMR_OFFSET           0x048        /**< \brief (PEVC_OVIMR offset) Overrun Interrupt Mask Register */
#define PEVC_OVIMR_RESETVALUE       _U_(0x00000000); /**< \brief (PEVC_OVIMR reset_value) Overrun Interrupt Mask Register */

#define PEVC_OVIMR_OVIM_Pos         0            /**< \brief (PEVC_OVIMR) Overrun Interrupt Mask */
#define PEVC_OVIMR_OVIM_Msk         (_U_(0xFFFFFFFF) << PEVC_OVIMR_OVIM_Pos)
#define PEVC_OVIMR_OVIM(value)      (PEVC_OVIMR_OVIM_Msk & ((value) << PEVC_OVIMR_OVIM_Pos))
#define   PEVC_OVIMR_OVIM_0_Val           _U_(0x0)   /**< \brief (PEVC_OVIMR) Overrun Interrupt for Channel j Disabled */
#define   PEVC_OVIMR_OVIM_1_Val           _U_(0x1)   /**< \brief (PEVC_OVIMR) Overrun Interrupt for Channel j Enabled */
#define PEVC_OVIMR_OVIM_0           (PEVC_OVIMR_OVIM_0_Val         << PEVC_OVIMR_OVIM_Pos)
#define PEVC_OVIMR_OVIM_1           (PEVC_OVIMR_OVIM_1_Val         << PEVC_OVIMR_OVIM_Pos)
#define PEVC_OVIMR_MASK             _U_(0xFFFFFFFF) /**< \brief (PEVC_OVIMR) MASK Register */

/* -------- PEVC_OVSR : (PEVC Offset: 0x050) (R/  32) Overrun Status Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t OVS:32;           /*!< bit:  0..31  Overrun Interrupt Status           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} PEVC_OVSR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PEVC_OVSR_OFFSET            0x050        /**< \brief (PEVC_OVSR offset) Overrun Status Register */
#define PEVC_OVSR_RESETVALUE        _U_(0x00000000); /**< \brief (PEVC_OVSR reset_value) Overrun Status Register */

#define PEVC_OVSR_OVS_Pos           0            /**< \brief (PEVC_OVSR) Overrun Interrupt Status */
#define PEVC_OVSR_OVS_Msk           (_U_(0xFFFFFFFF) << PEVC_OVSR_OVS_Pos)
#define PEVC_OVSR_OVS(value)        (PEVC_OVSR_OVS_Msk & ((value) << PEVC_OVSR_OVS_Pos))
#define   PEVC_OVSR_OVS_0_Val             _U_(0x0)   /**< \brief (PEVC_OVSR) No Overrun occured on Channel j */
#define   PEVC_OVSR_OVS_1_Val             _U_(0x1)   /**< \brief (PEVC_OVSR) Overrun occured on Channel j */
#define PEVC_OVSR_OVS_0             (PEVC_OVSR_OVS_0_Val           << PEVC_OVSR_OVS_Pos)
#define PEVC_OVSR_OVS_1             (PEVC_OVSR_OVS_1_Val           << PEVC_OVSR_OVS_Pos)
#define PEVC_OVSR_MASK              _U_(0xFFFFFFFF) /**< \brief (PEVC_OVSR) MASK Register */

/* -------- PEVC_OVSCR : (PEVC Offset: 0x054) ( /W 32) Overrun Status Clear Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t OVSC:32;          /*!< bit:  0..31  Overrun Interrupt Status Clear     */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} PEVC_OVSCR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PEVC_OVSCR_OFFSET           0x054        /**< \brief (PEVC_OVSCR offset) Overrun Status Clear Register */
#define PEVC_OVSCR_RESETVALUE       _U_(0x00000000); /**< \brief (PEVC_OVSCR reset_value) Overrun Status Clear Register */

#define PEVC_OVSCR_OVSC_Pos         0            /**< \brief (PEVC_OVSCR) Overrun Interrupt Status Clear */
#define PEVC_OVSCR_OVSC_Msk         (_U_(0xFFFFFFFF) << PEVC_OVSCR_OVSC_Pos)
#define PEVC_OVSCR_OVSC(value)      (PEVC_OVSCR_OVSC_Msk & ((value) << PEVC_OVSCR_OVSC_Pos))
#define   PEVC_OVSCR_OVSC_0_Val           _U_(0x0)   /**< \brief (PEVC_OVSCR) No Action */
#define   PEVC_OVSCR_OVSC_1_Val           _U_(0x1)   /**< \brief (PEVC_OVSCR) Clear Overrun Status Bit j */
#define PEVC_OVSCR_OVSC_0           (PEVC_OVSCR_OVSC_0_Val         << PEVC_OVSCR_OVSC_Pos)
#define PEVC_OVSCR_OVSC_1           (PEVC_OVSCR_OVSC_1_Val         << PEVC_OVSCR_OVSC_Pos)
#define PEVC_OVSCR_MASK             _U_(0xFFFFFFFF) /**< \brief (PEVC_OVSCR) MASK Register */

/* -------- PEVC_CHMX : (PEVC Offset: 0x100) (R/W 32) CHMX Channel Multiplexer -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t EVMX:6;           /*!< bit:  0.. 5  Event Multiplexer                  */
    uint32_t :2;               /*!< bit:  6.. 7  Reserved                           */
    uint32_t SMX:1;            /*!< bit:      8  Software Event Multiplexer         */
    uint32_t :23;              /*!< bit:  9..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} PEVC_CHMX_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PEVC_CHMX_OFFSET            0x100        /**< \brief (PEVC_CHMX offset) Channel Multiplexer */
#define PEVC_CHMX_RESETVALUE        _U_(0x00000000); /**< \brief (PEVC_CHMX reset_value) Channel Multiplexer */

#define PEVC_CHMX_EVMX_Pos          0            /**< \brief (PEVC_CHMX) Event Multiplexer */
#define PEVC_CHMX_EVMX_Msk          (_U_(0x3F) << PEVC_CHMX_EVMX_Pos)
#define PEVC_CHMX_EVMX(value)       (PEVC_CHMX_EVMX_Msk & ((value) << PEVC_CHMX_EVMX_Pos))
#define   PEVC_CHMX_EVMX_0_Val            _U_(0x0)   /**< \brief (PEVC_CHMX) Event 0 */
#define   PEVC_CHMX_EVMX_1_Val            _U_(0x1)   /**< \brief (PEVC_CHMX) Event 1 */
#define PEVC_CHMX_EVMX_0            (PEVC_CHMX_EVMX_0_Val          << PEVC_CHMX_EVMX_Pos)
#define PEVC_CHMX_EVMX_1            (PEVC_CHMX_EVMX_1_Val          << PEVC_CHMX_EVMX_Pos)
#define PEVC_CHMX_SMX_Pos           8            /**< \brief (PEVC_CHMX) Software Event Multiplexer */
#define PEVC_CHMX_SMX               (_U_(0x1) << PEVC_CHMX_SMX_Pos)
#define   PEVC_CHMX_SMX_0_Val             _U_(0x0)   /**< \brief (PEVC_CHMX) Hardware events */
#define   PEVC_CHMX_SMX_1_Val             _U_(0x1)   /**< \brief (PEVC_CHMX) Software event */
#define PEVC_CHMX_SMX_0             (PEVC_CHMX_SMX_0_Val           << PEVC_CHMX_SMX_Pos)
#define PEVC_CHMX_SMX_1             (PEVC_CHMX_SMX_1_Val           << PEVC_CHMX_SMX_Pos)
#define PEVC_CHMX_MASK              _U_(0x0000013F) /**< \brief (PEVC_CHMX) MASK Register */

/* -------- PEVC_EVS : (PEVC Offset: 0x200) (R/W 32) EVS Event Shaper -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t EN:1;             /*!< bit:      0  Event Shaper Enable                */
    uint32_t :15;              /*!< bit:  1..15  Reserved                           */
    uint32_t IGFR:1;           /*!< bit:     16  Input Glitch Filter Rise           */
    uint32_t IGFF:1;           /*!< bit:     17  Input Glitch Filter Fall           */
    uint32_t IGFON:1;          /*!< bit:     18  Input Glitch Filter Status         */
    uint32_t :13;              /*!< bit: 19..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} PEVC_EVS_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PEVC_EVS_OFFSET             0x200        /**< \brief (PEVC_EVS offset) Event Shaper */
#define PEVC_EVS_RESETVALUE         _U_(0x00000000); /**< \brief (PEVC_EVS reset_value) Event Shaper */

#define PEVC_EVS_EN_Pos             0            /**< \brief (PEVC_EVS) Event Shaper Enable */
#define PEVC_EVS_EN                 (_U_(0x1) << PEVC_EVS_EN_Pos)
#define   PEVC_EVS_EN_0_Val               _U_(0x0)   /**< \brief (PEVC_EVS) No Action */
#define   PEVC_EVS_EN_1_Val               _U_(0x1)   /**< \brief (PEVC_EVS) Event Shaper enable */
#define PEVC_EVS_EN_0               (PEVC_EVS_EN_0_Val             << PEVC_EVS_EN_Pos)
#define PEVC_EVS_EN_1               (PEVC_EVS_EN_1_Val             << PEVC_EVS_EN_Pos)
#define PEVC_EVS_IGFR_Pos           16           /**< \brief (PEVC_EVS) Input Glitch Filter Rise */
#define PEVC_EVS_IGFR               (_U_(0x1) << PEVC_EVS_IGFR_Pos)
#define   PEVC_EVS_IGFR_0_Val             _U_(0x0)   /**< \brief (PEVC_EVS) No Action */
#define   PEVC_EVS_IGFR_1_Val             _U_(0x1)   /**< \brief (PEVC_EVS) Input Glitch Filter : a rising edge on event input will raise trigger output */
#define PEVC_EVS_IGFR_0             (PEVC_EVS_IGFR_0_Val           << PEVC_EVS_IGFR_Pos)
#define PEVC_EVS_IGFR_1             (PEVC_EVS_IGFR_1_Val           << PEVC_EVS_IGFR_Pos)
#define PEVC_EVS_IGFF_Pos           17           /**< \brief (PEVC_EVS) Input Glitch Filter Fall */
#define PEVC_EVS_IGFF               (_U_(0x1) << PEVC_EVS_IGFF_Pos)
#define   PEVC_EVS_IGFF_0_Val             _U_(0x0)   /**< \brief (PEVC_EVS) No Action */
#define   PEVC_EVS_IGFF_1_Val             _U_(0x1)   /**< \brief (PEVC_EVS) Input Glitch Filter : a falling edge on event input will raise trigger output */
#define PEVC_EVS_IGFF_0             (PEVC_EVS_IGFF_0_Val           << PEVC_EVS_IGFF_Pos)
#define PEVC_EVS_IGFF_1             (PEVC_EVS_IGFF_1_Val           << PEVC_EVS_IGFF_Pos)
#define PEVC_EVS_IGFON_Pos          18           /**< \brief (PEVC_EVS) Input Glitch Filter Status */
#define PEVC_EVS_IGFON              (_U_(0x1) << PEVC_EVS_IGFON_Pos)
#define PEVC_EVS_MASK               _U_(0x00070001) /**< \brief (PEVC_EVS) MASK Register */

/* -------- PEVC_IGFDR : (PEVC Offset: 0x300) (R/W 32) Input Glitch Filter Divider Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t IGFDR:4;          /*!< bit:  0.. 3  Input Glitch Filter Divider Register */
    uint32_t :28;              /*!< bit:  4..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} PEVC_IGFDR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PEVC_IGFDR_OFFSET           0x300        /**< \brief (PEVC_IGFDR offset) Input Glitch Filter Divider Register */
#define PEVC_IGFDR_RESETVALUE       _U_(0x00000000); /**< \brief (PEVC_IGFDR reset_value) Input Glitch Filter Divider Register */

#define PEVC_IGFDR_IGFDR_Pos        0            /**< \brief (PEVC_IGFDR) Input Glitch Filter Divider Register */
#define PEVC_IGFDR_IGFDR_Msk        (_U_(0xF) << PEVC_IGFDR_IGFDR_Pos)
#define PEVC_IGFDR_IGFDR(value)     (PEVC_IGFDR_IGFDR_Msk & ((value) << PEVC_IGFDR_IGFDR_Pos))
#define PEVC_IGFDR_MASK             _U_(0x0000000F) /**< \brief (PEVC_IGFDR) MASK Register */

/* -------- PEVC_PARAMETER : (PEVC Offset: 0x3F8) (R/  32) Parameter -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t IGF_COUNT:8;      /*!< bit:  0.. 7  Number of Input Glitch Filters     */
    uint32_t EVS_COUNT:8;      /*!< bit:  8..15  Number of Event Shapers            */
    uint32_t EVIN:8;           /*!< bit: 16..23  Number of Event Inputs / Generators */
    uint32_t TRIGOUT:8;        /*!< bit: 24..31  Number of Trigger Outputs / Channels / Users */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} PEVC_PARAMETER_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PEVC_PARAMETER_OFFSET       0x3F8        /**< \brief (PEVC_PARAMETER offset) Parameter */
#define PEVC_PARAMETER_RESETVALUE   _U_(0x14061824); /**< \brief (PEVC_PARAMETER reset_value) Parameter */

#define PEVC_PARAMETER_IGF_COUNT_Pos 0            /**< \brief (PEVC_PARAMETER) Number of Input Glitch Filters */
#define PEVC_PARAMETER_IGF_COUNT_Msk (_U_(0xFF) << PEVC_PARAMETER_IGF_COUNT_Pos)
#define PEVC_PARAMETER_IGF_COUNT(value) (PEVC_PARAMETER_IGF_COUNT_Msk & ((value) << PEVC_PARAMETER_IGF_COUNT_Pos))
#define PEVC_PARAMETER_EVS_COUNT_Pos 8            /**< \brief (PEVC_PARAMETER) Number of Event Shapers */
#define PEVC_PARAMETER_EVS_COUNT_Msk (_U_(0xFF) << PEVC_PARAMETER_EVS_COUNT_Pos)
#define PEVC_PARAMETER_EVS_COUNT(value) (PEVC_PARAMETER_EVS_COUNT_Msk & ((value) << PEVC_PARAMETER_EVS_COUNT_Pos))
#define PEVC_PARAMETER_EVIN_Pos     16           /**< \brief (PEVC_PARAMETER) Number of Event Inputs / Generators */
#define PEVC_PARAMETER_EVIN_Msk     (_U_(0xFF) << PEVC_PARAMETER_EVIN_Pos)
#define PEVC_PARAMETER_EVIN(value)  (PEVC_PARAMETER_EVIN_Msk & ((value) << PEVC_PARAMETER_EVIN_Pos))
#define PEVC_PARAMETER_TRIGOUT_Pos  24           /**< \brief (PEVC_PARAMETER) Number of Trigger Outputs / Channels / Users */
#define PEVC_PARAMETER_TRIGOUT_Msk  (_U_(0xFF) << PEVC_PARAMETER_TRIGOUT_Pos)
#define PEVC_PARAMETER_TRIGOUT(value) (PEVC_PARAMETER_TRIGOUT_Msk & ((value) << PEVC_PARAMETER_TRIGOUT_Pos))
#define PEVC_PARAMETER_MASK         _U_(0xFFFFFFFF) /**< \brief (PEVC_PARAMETER) MASK Register */

/* -------- PEVC_VERSION : (PEVC Offset: 0x3FC) (R/  32) Version -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t VERSION:12;       /*!< bit:  0..11  Version Number                     */
    uint32_t :4;               /*!< bit: 12..15  Reserved                           */
    uint32_t VARIANT:4;        /*!< bit: 16..19  Variant Number                     */
    uint32_t :12;              /*!< bit: 20..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} PEVC_VERSION_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PEVC_VERSION_OFFSET         0x3FC        /**< \brief (PEVC_VERSION offset) Version */
#define PEVC_VERSION_RESETVALUE     _U_(0x00000200); /**< \brief (PEVC_VERSION reset_value) Version */

#define PEVC_VERSION_VERSION_Pos    0            /**< \brief (PEVC_VERSION) Version Number */
#define PEVC_VERSION_VERSION_Msk    (_U_(0xFFF) << PEVC_VERSION_VERSION_Pos)
#define PEVC_VERSION_VERSION(value) (PEVC_VERSION_VERSION_Msk & ((value) << PEVC_VERSION_VERSION_Pos))
#define PEVC_VERSION_VARIANT_Pos    16           /**< \brief (PEVC_VERSION) Variant Number */
#define PEVC_VERSION_VARIANT_Msk    (_U_(0xF) << PEVC_VERSION_VARIANT_Pos)
#define PEVC_VERSION_VARIANT(value) (PEVC_VERSION_VARIANT_Msk & ((value) << PEVC_VERSION_VARIANT_Pos))
#define PEVC_VERSION_MASK           _U_(0x000F0FFF) /**< \brief (PEVC_VERSION) MASK Register */

/** \brief PevcChmx hardware registers */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
 struct {
  __IO PEVC_CHMX_Type            CHMX;        /**< \brief Offset: 0x000 (R/W 32) Channel Multiplexer */
 } bf;
 struct {
  RwReg   PEVC_CHMX;          /**< \brief (PEVC Offset: 0x000) Channel Multiplexer */
 } reg;
} PevcChmx;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

/** \brief PevcEvs hardware registers */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
 struct {
  __IO PEVC_EVS_Type             EVS;         /**< \brief Offset: 0x000 (R/W 32) Event Shaper */
 } bf;
 struct {
  RwReg   PEVC_EVS;           /**< \brief (PEVC Offset: 0x000) Event Shaper */
 } reg;
} PevcEvs;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

/** \brief PEVC hardware registers */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef struct {
  __I  uint32_t CHSR;        /**< \brief Offset: 0x000 (R/  32) Channel Status Register */
  __O  uint32_t CHER;        /**< \brief Offset: 0x004 ( /W 32) Channel Enable Register */
  __O  uint32_t CHDR;        /**< \brief Offset: 0x008 ( /W 32) Channel Disable Register */
       RoReg8   Reserved1[0x4];
  __O  uint32_t SEV;         /**< \brief Offset: 0x010 ( /W 32) Software Event */
  __I  uint32_t BUSY;        /**< \brief Offset: 0x014 (R/  32) Channel / User Busy */
       RoReg8   Reserved2[0x8];
  __O  uint32_t TRIER;       /**< \brief Offset: 0x020 ( /W 32) Trigger Interrupt Mask Enable Register */
  __O  uint32_t TRIDR;       /**< \brief Offset: 0x024 ( /W 32) Trigger Interrupt Mask Disable Register */
  __I  uint32_t TRIMR;       /**< \brief Offset: 0x028 (R/  32) Trigger Interrupt Mask Register */
       RoReg8   Reserved3[0x4];
  __I  uint32_t TRSR;        /**< \brief Offset: 0x030 (R/  32) Trigger Status Register */
  __O  uint32_t TRSCR;       /**< \brief Offset: 0x034 ( /W 32) Trigger Status Clear Register */
       RoReg8   Reserved4[0x8];
  __O  uint32_t OVIER;       /**< \brief Offset: 0x040 ( /W 32) Overrun Interrupt Mask Enable Register */
  __O  uint32_t OVIDR;       /**< \brief Offset: 0x044 ( /W 32) Overrun Interrupt Mask Disable Register */
  __I  uint32_t OVIMR;       /**< \brief Offset: 0x048 (R/  32) Overrun Interrupt Mask Register */
       RoReg8   Reserved5[0x4];
  __I  uint32_t OVSR;        /**< \brief Offset: 0x050 (R/  32) Overrun Status Register */
  __O  uint32_t OVSCR;       /**< \brief Offset: 0x054 ( /W 32) Overrun Status Clear Register */
       RoReg8   Reserved6[0xA8];
  __IO uint32_t Chmx[19];    /**< \brief Offset: 0x100 PevcChmx groups [TRIGOUT_BITS] */
       RoReg8   Reserved7[0xB4];
  __IO uint32_t Evs[31];     /**< \brief Offset: 0x200 PevcEvs groups [EVIN_BITS] */
       RoReg8   Reserved8[0x84];
  __IO uint32_t IGFDR;       /**< \brief Offset: 0x300 (R/W 32) Input Glitch Filter Divider Register */
       RoReg8   Reserved9[0xF4];
  __I  uint32_t PARAMETER;   /**< \brief Offset: 0x3F8 (R/  32) Parameter */
  __I  uint32_t VERSION;     /**< \brief Offset: 0x3FC (R/  32) Version */
} Pevc;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

/*@}*/

#endif /* _SAM4L_PEVC_COMPONENT_ */
