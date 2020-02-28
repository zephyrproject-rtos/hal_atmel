/**
 * \file
 *
 * \brief Component description for WDT
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

#ifndef _SAM4L_WDT_COMPONENT_
#define _SAM4L_WDT_COMPONENT_

/* ========================================================================== */
/**  SOFTWARE API DEFINITION FOR WDT */
/* ========================================================================== */
/** \addtogroup SAM4L_WDT Watchdog Timer */
/*@{*/

#define WDT_I7528
#define REV_WDT                     0x501

/* -------- WDT_CTRL : (WDT Offset: 0x000) (R/W 32) Control Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t EN:1;             /*!< bit:      0  WDT Enable                         */
    uint32_t DAR:1;            /*!< bit:      1  WDT Disable After Reset            */
    uint32_t MODE:1;           /*!< bit:      2  WDT Mode                           */
    uint32_t SFV:1;            /*!< bit:      3  WDT Store Final Value              */
    uint32_t IM:1;             /*!< bit:      4  WDT Interruput Mode                */
    uint32_t :2;               /*!< bit:  5.. 6  Reserved                           */
    uint32_t FCD:1;            /*!< bit:      7  WDT Fuse Calibration Done          */
    uint32_t PSEL:5;           /*!< bit:  8..12  Timeout Prescale Select            */
    uint32_t :1;               /*!< bit:     13  Reserved                           */
    uint32_t CSSEL1:1;         /*!< bit:     14  Clock Source Selection1            */
    uint32_t :1;               /*!< bit:     15  Reserved                           */
    uint32_t CEN:1;            /*!< bit:     16  Clock Enable                       */
    uint32_t CSSEL:1;          /*!< bit:     17  Clock Source Selection0            */
    uint32_t TBAN:5;           /*!< bit: 18..22  TBAN Prescale Select               */
    uint32_t :1;               /*!< bit:     23  Reserved                           */
    uint32_t KEY:8;            /*!< bit: 24..31  Key                                */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} WDT_CTRL_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define WDT_CTRL_OFFSET             0x000        /**< \brief (WDT_CTRL offset) Control Register */
#define WDT_CTRL_RESETVALUE         _U_(0x00010080); /**< \brief (WDT_CTRL reset_value) Control Register */

#define WDT_CTRL_EN_Pos             0            /**< \brief (WDT_CTRL) WDT Enable */
#define WDT_CTRL_EN                 (_U_(0x1) << WDT_CTRL_EN_Pos)
#define   WDT_CTRL_EN_0_Val               _U_(0x0)   /**< \brief (WDT_CTRL) WDT is disabled. */
#define   WDT_CTRL_EN_1_Val               _U_(0x1)   /**< \brief (WDT_CTRL) WDT is enabled */
#define WDT_CTRL_EN_0               (WDT_CTRL_EN_0_Val             << WDT_CTRL_EN_Pos)
#define WDT_CTRL_EN_1               (WDT_CTRL_EN_1_Val             << WDT_CTRL_EN_Pos)
#define WDT_CTRL_DAR_Pos            1            /**< \brief (WDT_CTRL) WDT Disable After Reset */
#define WDT_CTRL_DAR                (_U_(0x1) << WDT_CTRL_DAR_Pos)
#define WDT_CTRL_MODE_Pos           2            /**< \brief (WDT_CTRL) WDT Mode */
#define WDT_CTRL_MODE               (_U_(0x1) << WDT_CTRL_MODE_Pos)
#define WDT_CTRL_SFV_Pos            3            /**< \brief (WDT_CTRL) WDT Store Final Value */
#define WDT_CTRL_SFV                (_U_(0x1) << WDT_CTRL_SFV_Pos)
#define WDT_CTRL_IM_Pos             4            /**< \brief (WDT_CTRL) WDT Interruput Mode */
#define WDT_CTRL_IM                 (_U_(0x1) << WDT_CTRL_IM_Pos)
#define WDT_CTRL_FCD_Pos            7            /**< \brief (WDT_CTRL) WDT Fuse Calibration Done */
#define WDT_CTRL_FCD                (_U_(0x1) << WDT_CTRL_FCD_Pos)
#define WDT_CTRL_PSEL_Pos           8            /**< \brief (WDT_CTRL) Timeout Prescale Select */
#define WDT_CTRL_PSEL_Msk           (_U_(0x1F) << WDT_CTRL_PSEL_Pos)
#define WDT_CTRL_PSEL(value)        (WDT_CTRL_PSEL_Msk & ((value) << WDT_CTRL_PSEL_Pos))
#define WDT_CTRL_CSSEL1_Pos         14           /**< \brief (WDT_CTRL) Clock Source Selection1 */
#define WDT_CTRL_CSSEL1             (_U_(0x1) << WDT_CTRL_CSSEL1_Pos)
#define WDT_CTRL_CEN_Pos            16           /**< \brief (WDT_CTRL) Clock Enable */
#define WDT_CTRL_CEN                (_U_(0x1) << WDT_CTRL_CEN_Pos)
#define WDT_CTRL_CSSEL_Pos          17           /**< \brief (WDT_CTRL) Clock Source Selection0 */
#define WDT_CTRL_CSSEL              (_U_(0x1) << WDT_CTRL_CSSEL_Pos)
#define WDT_CTRL_TBAN_Pos           18           /**< \brief (WDT_CTRL) TBAN Prescale Select */
#define WDT_CTRL_TBAN_Msk           (_U_(0x1F) << WDT_CTRL_TBAN_Pos)
#define WDT_CTRL_TBAN(value)        (WDT_CTRL_TBAN_Msk & ((value) << WDT_CTRL_TBAN_Pos))
#define WDT_CTRL_KEY_Pos            24           /**< \brief (WDT_CTRL) Key */
#define WDT_CTRL_KEY_Msk            (_U_(0xFF) << WDT_CTRL_KEY_Pos)
#define WDT_CTRL_KEY(value)         (WDT_CTRL_KEY_Msk & ((value) << WDT_CTRL_KEY_Pos))
#define WDT_CTRL_MASK               _U_(0xFF7F5F9F) /**< \brief (WDT_CTRL) MASK Register */

/* -------- WDT_CLR : (WDT Offset: 0x004) ( /W 32) Clear Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t WDTCLR:1;         /*!< bit:      0  Clear WDT counter                  */
    uint32_t :23;              /*!< bit:  1..23  Reserved                           */
    uint32_t KEY:8;            /*!< bit: 24..31  Key                                */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} WDT_CLR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define WDT_CLR_OFFSET              0x004        /**< \brief (WDT_CLR offset) Clear Register */
#define WDT_CLR_RESETVALUE          _U_(0x00000000); /**< \brief (WDT_CLR reset_value) Clear Register */

#define WDT_CLR_WDTCLR_Pos          0            /**< \brief (WDT_CLR) Clear WDT counter */
#define WDT_CLR_WDTCLR              (_U_(0x1) << WDT_CLR_WDTCLR_Pos)
#define WDT_CLR_KEY_Pos             24           /**< \brief (WDT_CLR) Key */
#define WDT_CLR_KEY_Msk             (_U_(0xFF) << WDT_CLR_KEY_Pos)
#define WDT_CLR_KEY(value)          (WDT_CLR_KEY_Msk & ((value) << WDT_CLR_KEY_Pos))
#define WDT_CLR_MASK                _U_(0xFF000001) /**< \brief (WDT_CLR) MASK Register */

/* -------- WDT_SR : (WDT Offset: 0x008) (R/  32) Status Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t WINDOW:1;         /*!< bit:      0  WDT in window                      */
    uint32_t CLEARED:1;        /*!< bit:      1  WDT cleared                        */
    uint32_t :30;              /*!< bit:  2..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} WDT_SR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define WDT_SR_OFFSET               0x008        /**< \brief (WDT_SR offset) Status Register */
#define WDT_SR_RESETVALUE           _U_(0x00000003); /**< \brief (WDT_SR reset_value) Status Register */

#define WDT_SR_WINDOW_Pos           0            /**< \brief (WDT_SR) WDT in window */
#define WDT_SR_WINDOW               (_U_(0x1) << WDT_SR_WINDOW_Pos)
#define WDT_SR_CLEARED_Pos          1            /**< \brief (WDT_SR) WDT cleared */
#define WDT_SR_CLEARED              (_U_(0x1) << WDT_SR_CLEARED_Pos)
#define WDT_SR_MASK                 _U_(0x00000003) /**< \brief (WDT_SR) MASK Register */

/* -------- WDT_IER : (WDT Offset: 0x00C) ( /W 32) Interrupt Enable Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t :2;               /*!< bit:  0.. 1  Reserved                           */
    uint32_t WINT:1;           /*!< bit:      2  Watchdog Interrupt                 */
    uint32_t :29;              /*!< bit:  3..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} WDT_IER_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define WDT_IER_OFFSET              0x00C        /**< \brief (WDT_IER offset) Interrupt Enable Register */
#define WDT_IER_RESETVALUE          _U_(0x00000000); /**< \brief (WDT_IER reset_value) Interrupt Enable Register */

#define WDT_IER_WINT_Pos            2            /**< \brief (WDT_IER) Watchdog Interrupt */
#define WDT_IER_WINT                (_U_(0x1) << WDT_IER_WINT_Pos)
#define WDT_IER_MASK                _U_(0x00000004) /**< \brief (WDT_IER) MASK Register */

/* -------- WDT_IDR : (WDT Offset: 0x010) ( /W 32) Interrupt Disable Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t :2;               /*!< bit:  0.. 1  Reserved                           */
    uint32_t WINT:1;           /*!< bit:      2  Watchdog Interrupt                 */
    uint32_t :29;              /*!< bit:  3..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} WDT_IDR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define WDT_IDR_OFFSET              0x010        /**< \brief (WDT_IDR offset) Interrupt Disable Register */
#define WDT_IDR_RESETVALUE          _U_(0x00000000); /**< \brief (WDT_IDR reset_value) Interrupt Disable Register */

#define WDT_IDR_WINT_Pos            2            /**< \brief (WDT_IDR) Watchdog Interrupt */
#define WDT_IDR_WINT                (_U_(0x1) << WDT_IDR_WINT_Pos)
#define WDT_IDR_MASK                _U_(0x00000004) /**< \brief (WDT_IDR) MASK Register */

/* -------- WDT_IMR : (WDT Offset: 0x014) (R/  32) Interrupt Mask Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t :2;               /*!< bit:  0.. 1  Reserved                           */
    uint32_t WINT:1;           /*!< bit:      2  Watchdog Interrupt                 */
    uint32_t :29;              /*!< bit:  3..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} WDT_IMR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define WDT_IMR_OFFSET              0x014        /**< \brief (WDT_IMR offset) Interrupt Mask Register */
#define WDT_IMR_RESETVALUE          _U_(0x00000000); /**< \brief (WDT_IMR reset_value) Interrupt Mask Register */

#define WDT_IMR_WINT_Pos            2            /**< \brief (WDT_IMR) Watchdog Interrupt */
#define WDT_IMR_WINT                (_U_(0x1) << WDT_IMR_WINT_Pos)
#define WDT_IMR_MASK                _U_(0x00000004) /**< \brief (WDT_IMR) MASK Register */

/* -------- WDT_ISR : (WDT Offset: 0x018) (R/  32) Interrupt Status Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t :2;               /*!< bit:  0.. 1  Reserved                           */
    uint32_t WINT:1;           /*!< bit:      2  Watchdog Interrupt                 */
    uint32_t :29;              /*!< bit:  3..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} WDT_ISR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define WDT_ISR_OFFSET              0x018        /**< \brief (WDT_ISR offset) Interrupt Status Register */
#define WDT_ISR_RESETVALUE          _U_(0x00000000); /**< \brief (WDT_ISR reset_value) Interrupt Status Register */

#define WDT_ISR_WINT_Pos            2            /**< \brief (WDT_ISR) Watchdog Interrupt */
#define WDT_ISR_WINT                (_U_(0x1) << WDT_ISR_WINT_Pos)
#define WDT_ISR_MASK                _U_(0x00000004) /**< \brief (WDT_ISR) MASK Register */

/* -------- WDT_ICR : (WDT Offset: 0x01C) ( /W 32) Interrupt Clear Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t :2;               /*!< bit:  0.. 1  Reserved                           */
    uint32_t WINT:1;           /*!< bit:      2  Watchdog Interrupt                 */
    uint32_t :29;              /*!< bit:  3..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} WDT_ICR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define WDT_ICR_OFFSET              0x01C        /**< \brief (WDT_ICR offset) Interrupt Clear Register */
#define WDT_ICR_RESETVALUE          _U_(0x00000000); /**< \brief (WDT_ICR reset_value) Interrupt Clear Register */

#define WDT_ICR_WINT_Pos            2            /**< \brief (WDT_ICR) Watchdog Interrupt */
#define WDT_ICR_WINT                (_U_(0x1) << WDT_ICR_WINT_Pos)
#define WDT_ICR_MASK                _U_(0x00000004) /**< \brief (WDT_ICR) MASK Register */

/* -------- WDT_VERSION : (WDT Offset: 0x3FC) (R/  32) Version Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t VERSION:12;       /*!< bit:  0..11  Version number                     */
    uint32_t :4;               /*!< bit: 12..15  Reserved                           */
    uint32_t VARIANT:4;        /*!< bit: 16..19  Variant number                     */
    uint32_t :12;              /*!< bit: 20..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} WDT_VERSION_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define WDT_VERSION_OFFSET          0x3FC        /**< \brief (WDT_VERSION offset) Version Register */
#define WDT_VERSION_RESETVALUE      _U_(0x00000501); /**< \brief (WDT_VERSION reset_value) Version Register */

#define WDT_VERSION_VERSION_Pos     0            /**< \brief (WDT_VERSION) Version number */
#define WDT_VERSION_VERSION_Msk     (_U_(0xFFF) << WDT_VERSION_VERSION_Pos)
#define WDT_VERSION_VERSION(value)  (WDT_VERSION_VERSION_Msk & ((value) << WDT_VERSION_VERSION_Pos))
#define WDT_VERSION_VARIANT_Pos     16           /**< \brief (WDT_VERSION) Variant number */
#define WDT_VERSION_VARIANT_Msk     (_U_(0xF) << WDT_VERSION_VARIANT_Pos)
#define WDT_VERSION_VARIANT(value)  (WDT_VERSION_VARIANT_Msk & ((value) << WDT_VERSION_VARIANT_Pos))
#define WDT_VERSION_MASK            _U_(0x000F0FFF) /**< \brief (WDT_VERSION) MASK Register */

/** \brief WDT hardware registers */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef struct {
  __IO uint32_t CTRL;        /**< \brief Offset: 0x000 (R/W 32) Control Register */
  __O  uint32_t CLR;         /**< \brief Offset: 0x004 ( /W 32) Clear Register */
  __I  uint32_t SR;          /**< \brief Offset: 0x008 (R/  32) Status Register */
  __O  uint32_t IER;         /**< \brief Offset: 0x00C ( /W 32) Interrupt Enable Register */
  __O  uint32_t IDR;         /**< \brief Offset: 0x010 ( /W 32) Interrupt Disable Register */
  __I  uint32_t IMR;         /**< \brief Offset: 0x014 (R/  32) Interrupt Mask Register */
  __I  uint32_t ISR;         /**< \brief Offset: 0x018 (R/  32) Interrupt Status Register */
  __O  uint32_t ICR;         /**< \brief Offset: 0x01C ( /W 32) Interrupt Clear Register */
       RoReg8   Reserved1[0x3DC];
  __I  uint32_t VERSION;     /**< \brief Offset: 0x3FC (R/  32) Version Register */
} Wdt;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

/*@}*/

#endif /* _SAM4L_WDT_COMPONENT_ */
