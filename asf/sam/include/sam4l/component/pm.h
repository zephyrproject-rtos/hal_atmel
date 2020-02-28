/**
 * \file
 *
 * \brief Component description for PM
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

#ifndef _SAM4L_PM_COMPONENT_
#define _SAM4L_PM_COMPONENT_

/* ========================================================================== */
/**  SOFTWARE API DEFINITION FOR PM */
/* ========================================================================== */
/** \addtogroup SAM4L_PM Power Manager */
/*@{*/

#define PM_I7146
#define REV_PM                      0x441

/* -------- PM_MCCTRL : (PM Offset: 0x000) (R/W 32) Main Clock Control -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t MCSEL:3;          /*!< bit:  0.. 2  Main Clock Select                  */
    uint32_t :29;              /*!< bit:  3..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} PM_MCCTRL_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PM_MCCTRL_OFFSET            0x000        /**< \brief (PM_MCCTRL offset) Main Clock Control */
#define PM_MCCTRL_RESETVALUE        _U_(0x00000000); /**< \brief (PM_MCCTRL reset_value) Main Clock Control */

#define PM_MCCTRL_MCSEL_Pos         0            /**< \brief (PM_MCCTRL) Main Clock Select */
#define PM_MCCTRL_MCSEL_Msk         (_U_(0x7) << PM_MCCTRL_MCSEL_Pos)
#define PM_MCCTRL_MCSEL(value)      (PM_MCCTRL_MCSEL_Msk & ((value) << PM_MCCTRL_MCSEL_Pos))
#define PM_MCCTRL_MASK              _U_(0x00000007) /**< \brief (PM_MCCTRL) MASK Register */

/* -------- PM_CPUSEL : (PM Offset: 0x004) (R/W 32) CPU Clock Select -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t CPUSEL:3;         /*!< bit:  0.. 2  CPU Clock Select                   */
    uint32_t :4;               /*!< bit:  3.. 6  Reserved                           */
    uint32_t CPUDIV:1;         /*!< bit:      7  CPU Division                       */
    uint32_t :24;              /*!< bit:  8..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} PM_CPUSEL_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PM_CPUSEL_OFFSET            0x004        /**< \brief (PM_CPUSEL offset) CPU Clock Select */
#define PM_CPUSEL_RESETVALUE        _U_(0x00000000); /**< \brief (PM_CPUSEL reset_value) CPU Clock Select */

#define PM_CPUSEL_CPUSEL_Pos        0            /**< \brief (PM_CPUSEL) CPU Clock Select */
#define PM_CPUSEL_CPUSEL_Msk        (_U_(0x7) << PM_CPUSEL_CPUSEL_Pos)
#define PM_CPUSEL_CPUSEL(value)     (PM_CPUSEL_CPUSEL_Msk & ((value) << PM_CPUSEL_CPUSEL_Pos))
#define   PM_CPUSEL_CPUSEL_0_Val          _U_(0x0)   /**< \brief (PM_CPUSEL) fCPU:fmain. CPUDIV: */
#define   PM_CPUSEL_CPUSEL_1_Val          _U_(0x1)   /**< \brief (PM_CPUSEL) fCPU:fmain / 2^(CPUSEL+1) */
#define PM_CPUSEL_CPUSEL_0          (PM_CPUSEL_CPUSEL_0_Val        << PM_CPUSEL_CPUSEL_Pos)
#define PM_CPUSEL_CPUSEL_1          (PM_CPUSEL_CPUSEL_1_Val        << PM_CPUSEL_CPUSEL_Pos)
#define PM_CPUSEL_CPUDIV_Pos        7            /**< \brief (PM_CPUSEL) CPU Division */
#define PM_CPUSEL_CPUDIV            (_U_(0x1) << PM_CPUSEL_CPUDIV_Pos)
#define PM_CPUSEL_MASK              _U_(0x00000087) /**< \brief (PM_CPUSEL) MASK Register */

/* -------- PM_PBASEL : (PM Offset: 0x00C) (R/W 32) PBA Clock Select -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t PBSEL:3;          /*!< bit:  0.. 2  PBA Clock Select                   */
    uint32_t :4;               /*!< bit:  3.. 6  Reserved                           */
    uint32_t PBDIV:1;          /*!< bit:      7  PBA Division Select                */
    uint32_t :24;              /*!< bit:  8..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} PM_PBASEL_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PM_PBASEL_OFFSET            0x00C        /**< \brief (PM_PBASEL offset) PBA Clock Select */
#define PM_PBASEL_RESETVALUE        _U_(0x00000000); /**< \brief (PM_PBASEL reset_value) PBA Clock Select */

#define PM_PBASEL_PBSEL_Pos         0            /**< \brief (PM_PBASEL) PBA Clock Select */
#define PM_PBASEL_PBSEL_Msk         (_U_(0x7) << PM_PBASEL_PBSEL_Pos)
#define PM_PBASEL_PBSEL(value)      (PM_PBASEL_PBSEL_Msk & ((value) << PM_PBASEL_PBSEL_Pos))
#define PM_PBASEL_PBDIV_Pos         7            /**< \brief (PM_PBASEL) PBA Division Select */
#define PM_PBASEL_PBDIV             (_U_(0x1) << PM_PBASEL_PBDIV_Pos)
#define PM_PBASEL_MASK              _U_(0x00000087) /**< \brief (PM_PBASEL) MASK Register */

/* -------- PM_PBBSEL : (PM Offset: 0x010) (R/W 32) PBB Clock Select -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t PBSEL:3;          /*!< bit:  0.. 2  PBB Clock Select                   */
    uint32_t :4;               /*!< bit:  3.. 6  Reserved                           */
    uint32_t PBDIV:1;          /*!< bit:      7  PBB Division Select                */
    uint32_t :24;              /*!< bit:  8..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} PM_PBBSEL_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PM_PBBSEL_OFFSET            0x010        /**< \brief (PM_PBBSEL offset) PBB Clock Select */
#define PM_PBBSEL_RESETVALUE        _U_(0x00000000); /**< \brief (PM_PBBSEL reset_value) PBB Clock Select */

#define PM_PBBSEL_PBSEL_Pos         0            /**< \brief (PM_PBBSEL) PBB Clock Select */
#define PM_PBBSEL_PBSEL_Msk         (_U_(0x7) << PM_PBBSEL_PBSEL_Pos)
#define PM_PBBSEL_PBSEL(value)      (PM_PBBSEL_PBSEL_Msk & ((value) << PM_PBBSEL_PBSEL_Pos))
#define PM_PBBSEL_PBDIV_Pos         7            /**< \brief (PM_PBBSEL) PBB Division Select */
#define PM_PBBSEL_PBDIV             (_U_(0x1) << PM_PBBSEL_PBDIV_Pos)
#define PM_PBBSEL_MASK              _U_(0x00000087) /**< \brief (PM_PBBSEL) MASK Register */

/* -------- PM_PBCSEL : (PM Offset: 0x014) (R/W 32) PBC Clock Select -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t PBSEL:3;          /*!< bit:  0.. 2  PBC Clock Select                   */
    uint32_t :4;               /*!< bit:  3.. 6  Reserved                           */
    uint32_t PBDIV:1;          /*!< bit:      7  PBC Division Select                */
    uint32_t :24;              /*!< bit:  8..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} PM_PBCSEL_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PM_PBCSEL_OFFSET            0x014        /**< \brief (PM_PBCSEL offset) PBC Clock Select */
#define PM_PBCSEL_RESETVALUE        _U_(0x00000000); /**< \brief (PM_PBCSEL reset_value) PBC Clock Select */

#define PM_PBCSEL_PBSEL_Pos         0            /**< \brief (PM_PBCSEL) PBC Clock Select */
#define PM_PBCSEL_PBSEL_Msk         (_U_(0x7) << PM_PBCSEL_PBSEL_Pos)
#define PM_PBCSEL_PBSEL(value)      (PM_PBCSEL_PBSEL_Msk & ((value) << PM_PBCSEL_PBSEL_Pos))
#define PM_PBCSEL_PBDIV_Pos         7            /**< \brief (PM_PBCSEL) PBC Division Select */
#define PM_PBCSEL_PBDIV             (_U_(0x1) << PM_PBCSEL_PBDIV_Pos)
#define PM_PBCSEL_MASK              _U_(0x00000087) /**< \brief (PM_PBCSEL) MASK Register */

/* -------- PM_PBDSEL : (PM Offset: 0x018) (R/W 32) PBD Clock Select -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t PBSEL:3;          /*!< bit:  0.. 2  PBD Clock Select                   */
    uint32_t :4;               /*!< bit:  3.. 6  Reserved                           */
    uint32_t PBDIV:1;          /*!< bit:      7  PBD Division Select                */
    uint32_t :24;              /*!< bit:  8..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} PM_PBDSEL_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PM_PBDSEL_OFFSET            0x018        /**< \brief (PM_PBDSEL offset) PBD Clock Select */
#define PM_PBDSEL_RESETVALUE        _U_(0x00000000); /**< \brief (PM_PBDSEL reset_value) PBD Clock Select */

#define PM_PBDSEL_PBSEL_Pos         0            /**< \brief (PM_PBDSEL) PBD Clock Select */
#define PM_PBDSEL_PBSEL_Msk         (_U_(0x7) << PM_PBDSEL_PBSEL_Pos)
#define PM_PBDSEL_PBSEL(value)      (PM_PBDSEL_PBSEL_Msk & ((value) << PM_PBDSEL_PBSEL_Pos))
#define PM_PBDSEL_PBDIV_Pos         7            /**< \brief (PM_PBDSEL) PBD Division Select */
#define PM_PBDSEL_PBDIV             (_U_(0x1) << PM_PBDSEL_PBDIV_Pos)
#define PM_PBDSEL_MASK              _U_(0x00000087) /**< \brief (PM_PBDSEL) MASK Register */

/* -------- PM_CPUMASK : (PM Offset: 0x020) (R/W 32) CPU Mask -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t OCD:1;            /*!< bit:      0  OCD CPU Clock Mask                 */
    uint32_t :31;              /*!< bit:  1..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} PM_CPUMASK_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PM_CPUMASK_OFFSET           0x020        /**< \brief (PM_CPUMASK offset) CPU Mask */
#define PM_CPUMASK_RESETVALUE       _U_(0x00000001); /**< \brief (PM_CPUMASK reset_value) CPU Mask */

#define PM_CPUMASK_OCD_Pos          0            /**< \brief (PM_CPUMASK) OCD CPU Clock Mask */
#define PM_CPUMASK_OCD              (_U_(0x1) << PM_CPUMASK_OCD_Pos)
#define PM_CPUMASK_MASK             _U_(0x00000001) /**< \brief (PM_CPUMASK) MASK Register */

/* -------- PM_HSBMASK : (PM Offset: 0x024) (R/W 32) HSB Mask -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t PDCA_:1;          /*!< bit:      0  PDCA HSB Clock Mask                */
    uint32_t HFLASHC_:1;       /*!< bit:      1  HFLASHC HSB Clock Mask             */
    uint32_t HRAMC1_:1;        /*!< bit:      2  HRAMC1 HSB Clock Mask              */
    uint32_t USBC_:1;          /*!< bit:      3  USBC HSB Clock Mask                */
    uint32_t CRCCU_:1;         /*!< bit:      4  CRCCU HSB Clock Mask               */
    uint32_t HTOP0_:1;         /*!< bit:      5  HTOP0 HSB Clock Mask               */
    uint32_t HTOP1_:1;         /*!< bit:      6  HTOP1 HSB Clock Mask               */
    uint32_t HTOP2_:1;         /*!< bit:      7  HTOP2 HSB Clock Mask               */
    uint32_t HTOP3_:1;         /*!< bit:      8  HTOP3 HSB Clock Mask               */
    uint32_t AESA_:1;          /*!< bit:      9  AESA HSB Clock Mask                */
    uint32_t :22;              /*!< bit: 10..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} PM_HSBMASK_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PM_HSBMASK_OFFSET           0x024        /**< \brief (PM_HSBMASK offset) HSB Mask */
#define PM_HSBMASK_RESETVALUE       _U_(0x000001E2); /**< \brief (PM_HSBMASK reset_value) HSB Mask */

#define PM_HSBMASK_PDCA_Pos         0            /**< \brief (PM_HSBMASK) PDCA HSB Clock Mask */
#define PM_HSBMASK_PDCA             (_U_(0x1) << PM_HSBMASK_PDCA_Pos)
#define PM_HSBMASK_HFLASHC_Pos      1            /**< \brief (PM_HSBMASK) HFLASHC HSB Clock Mask */
#define PM_HSBMASK_HFLASHC          (_U_(0x1) << PM_HSBMASK_HFLASHC_Pos)
#define PM_HSBMASK_HRAMC1_Pos       2            /**< \brief (PM_HSBMASK) HRAMC1 HSB Clock Mask */
#define PM_HSBMASK_HRAMC1           (_U_(0x1) << PM_HSBMASK_HRAMC1_Pos)
#define PM_HSBMASK_USBC_Pos         3            /**< \brief (PM_HSBMASK) USBC HSB Clock Mask */
#define PM_HSBMASK_USBC             (_U_(0x1) << PM_HSBMASK_USBC_Pos)
#define PM_HSBMASK_CRCCU_Pos        4            /**< \brief (PM_HSBMASK) CRCCU HSB Clock Mask */
#define PM_HSBMASK_CRCCU            (_U_(0x1) << PM_HSBMASK_CRCCU_Pos)
#define PM_HSBMASK_HTOP0_Pos        5            /**< \brief (PM_HSBMASK) HTOP0 HSB Clock Mask */
#define PM_HSBMASK_HTOP0            (_U_(0x1) << PM_HSBMASK_HTOP0_Pos)
#define PM_HSBMASK_HTOP1_Pos        6            /**< \brief (PM_HSBMASK) HTOP1 HSB Clock Mask */
#define PM_HSBMASK_HTOP1            (_U_(0x1) << PM_HSBMASK_HTOP1_Pos)
#define PM_HSBMASK_HTOP2_Pos        7            /**< \brief (PM_HSBMASK) HTOP2 HSB Clock Mask */
#define PM_HSBMASK_HTOP2            (_U_(0x1) << PM_HSBMASK_HTOP2_Pos)
#define PM_HSBMASK_HTOP3_Pos        8            /**< \brief (PM_HSBMASK) HTOP3 HSB Clock Mask */
#define PM_HSBMASK_HTOP3            (_U_(0x1) << PM_HSBMASK_HTOP3_Pos)
#define PM_HSBMASK_AESA_Pos         9            /**< \brief (PM_HSBMASK) AESA HSB Clock Mask */
#define PM_HSBMASK_AESA             (_U_(0x1) << PM_HSBMASK_AESA_Pos)
#define PM_HSBMASK_MASK             _U_(0x000003FF) /**< \brief (PM_HSBMASK) MASK Register */

/* -------- PM_PBAMASK : (PM Offset: 0x028) (R/W 32) PBA Mask -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t IISC_:1;          /*!< bit:      0  IISC APB Clock Enable              */
    uint32_t SPI_:1;           /*!< bit:      1  SPI APB Clock Enable               */
    uint32_t TC0_:1;           /*!< bit:      2  TC0 APB Clock Enable               */
    uint32_t TC1_:1;           /*!< bit:      3  TC1 APB Clock Enable               */
    uint32_t TWIM0_:1;         /*!< bit:      4  TWIM0 APB Clock Enable             */
    uint32_t TWIS0_:1;         /*!< bit:      5  TWIS0 APB Clock Enable             */
    uint32_t TWIM1_:1;         /*!< bit:      6  TWIM1 APB Clock Enable             */
    uint32_t TWIS1_:1;         /*!< bit:      7  TWIS1 APB Clock Enable             */
    uint32_t USART0_:1;        /*!< bit:      8  USART0 APB Clock Enable            */
    uint32_t USART1_:1;        /*!< bit:      9  USART1 APB Clock Enable            */
    uint32_t USART2_:1;        /*!< bit:     10  USART2 APB Clock Enable            */
    uint32_t USART3_:1;        /*!< bit:     11  USART3 APB Clock Enable            */
    uint32_t ADCIFE_:1;        /*!< bit:     12  ADCIFE APB Clock Enable            */
    uint32_t DACC_:1;          /*!< bit:     13  DACC APB Clock Enable              */
    uint32_t ACIFC_:1;         /*!< bit:     14  ACIFC APB Clock Enable             */
    uint32_t GLOC_:1;          /*!< bit:     15  GLOC APB Clock Enable              */
    uint32_t ABDACB_:1;        /*!< bit:     16  ABDACB APB Clock Enable            */
    uint32_t TRNG_:1;          /*!< bit:     17  TRNG APB Clock Enable              */
    uint32_t PARC_:1;          /*!< bit:     18  PARC APB Clock Enable              */
    uint32_t CATB_:1;          /*!< bit:     19  CATB APB Clock Enable              */
    uint32_t :1;               /*!< bit:     20  Reserved                           */
    uint32_t TWIM2_:1;         /*!< bit:     21  TWIM2 APB Clock Enable             */
    uint32_t TWIM3_:1;         /*!< bit:     22  TWIM3 APB Clock Enable             */
    uint32_t LCDCA_:1;         /*!< bit:     23  LCDCA APB Clock Enable             */
    uint32_t :8;               /*!< bit: 24..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} PM_PBAMASK_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PM_PBAMASK_OFFSET           0x028        /**< \brief (PM_PBAMASK offset) PBA Mask */
#define PM_PBAMASK_RESETVALUE       _U_(0x00000000); /**< \brief (PM_PBAMASK reset_value) PBA Mask */

#define PM_PBAMASK_IISC_Pos         0            /**< \brief (PM_PBAMASK) IISC APB Clock Enable */
#define PM_PBAMASK_IISC             (_U_(0x1) << PM_PBAMASK_IISC_Pos)
#define PM_PBAMASK_SPI_Pos          1            /**< \brief (PM_PBAMASK) SPI APB Clock Enable */
#define PM_PBAMASK_SPI              (_U_(0x1) << PM_PBAMASK_SPI_Pos)
#define PM_PBAMASK_TC0_Pos          2            /**< \brief (PM_PBAMASK) TC0 APB Clock Enable */
#define PM_PBAMASK_TC0              (_U_(0x1) << PM_PBAMASK_TC0_Pos)
#define PM_PBAMASK_TC1_Pos          3            /**< \brief (PM_PBAMASK) TC1 APB Clock Enable */
#define PM_PBAMASK_TC1              (_U_(0x1) << PM_PBAMASK_TC1_Pos)
#define PM_PBAMASK_TWIM0_Pos        4            /**< \brief (PM_PBAMASK) TWIM0 APB Clock Enable */
#define PM_PBAMASK_TWIM0            (_U_(0x1) << PM_PBAMASK_TWIM0_Pos)
#define PM_PBAMASK_TWIS0_Pos        5            /**< \brief (PM_PBAMASK) TWIS0 APB Clock Enable */
#define PM_PBAMASK_TWIS0            (_U_(0x1) << PM_PBAMASK_TWIS0_Pos)
#define PM_PBAMASK_TWIM1_Pos        6            /**< \brief (PM_PBAMASK) TWIM1 APB Clock Enable */
#define PM_PBAMASK_TWIM1            (_U_(0x1) << PM_PBAMASK_TWIM1_Pos)
#define PM_PBAMASK_TWIS1_Pos        7            /**< \brief (PM_PBAMASK) TWIS1 APB Clock Enable */
#define PM_PBAMASK_TWIS1            (_U_(0x1) << PM_PBAMASK_TWIS1_Pos)
#define PM_PBAMASK_USART0_Pos       8            /**< \brief (PM_PBAMASK) USART0 APB Clock Enable */
#define PM_PBAMASK_USART0           (_U_(0x1) << PM_PBAMASK_USART0_Pos)
#define PM_PBAMASK_USART1_Pos       9            /**< \brief (PM_PBAMASK) USART1 APB Clock Enable */
#define PM_PBAMASK_USART1           (_U_(0x1) << PM_PBAMASK_USART1_Pos)
#define PM_PBAMASK_USART2_Pos       10           /**< \brief (PM_PBAMASK) USART2 APB Clock Enable */
#define PM_PBAMASK_USART2           (_U_(0x1) << PM_PBAMASK_USART2_Pos)
#define PM_PBAMASK_USART3_Pos       11           /**< \brief (PM_PBAMASK) USART3 APB Clock Enable */
#define PM_PBAMASK_USART3           (_U_(0x1) << PM_PBAMASK_USART3_Pos)
#define PM_PBAMASK_ADCIFE_Pos       12           /**< \brief (PM_PBAMASK) ADCIFE APB Clock Enable */
#define PM_PBAMASK_ADCIFE           (_U_(0x1) << PM_PBAMASK_ADCIFE_Pos)
#define PM_PBAMASK_DACC_Pos         13           /**< \brief (PM_PBAMASK) DACC APB Clock Enable */
#define PM_PBAMASK_DACC             (_U_(0x1) << PM_PBAMASK_DACC_Pos)
#define PM_PBAMASK_ACIFC_Pos        14           /**< \brief (PM_PBAMASK) ACIFC APB Clock Enable */
#define PM_PBAMASK_ACIFC            (_U_(0x1) << PM_PBAMASK_ACIFC_Pos)
#define PM_PBAMASK_GLOC_Pos         15           /**< \brief (PM_PBAMASK) GLOC APB Clock Enable */
#define PM_PBAMASK_GLOC             (_U_(0x1) << PM_PBAMASK_GLOC_Pos)
#define PM_PBAMASK_ABDACB_Pos       16           /**< \brief (PM_PBAMASK) ABDACB APB Clock Enable */
#define PM_PBAMASK_ABDACB           (_U_(0x1) << PM_PBAMASK_ABDACB_Pos)
#define PM_PBAMASK_TRNG_Pos         17           /**< \brief (PM_PBAMASK) TRNG APB Clock Enable */
#define PM_PBAMASK_TRNG             (_U_(0x1) << PM_PBAMASK_TRNG_Pos)
#define PM_PBAMASK_PARC_Pos         18           /**< \brief (PM_PBAMASK) PARC APB Clock Enable */
#define PM_PBAMASK_PARC             (_U_(0x1) << PM_PBAMASK_PARC_Pos)
#define PM_PBAMASK_CATB_Pos         19           /**< \brief (PM_PBAMASK) CATB APB Clock Enable */
#define PM_PBAMASK_CATB             (_U_(0x1) << PM_PBAMASK_CATB_Pos)
#define PM_PBAMASK_TWIM2_Pos        21           /**< \brief (PM_PBAMASK) TWIM2 APB Clock Enable */
#define PM_PBAMASK_TWIM2            (_U_(0x1) << PM_PBAMASK_TWIM2_Pos)
#define PM_PBAMASK_TWIM3_Pos        22           /**< \brief (PM_PBAMASK) TWIM3 APB Clock Enable */
#define PM_PBAMASK_TWIM3            (_U_(0x1) << PM_PBAMASK_TWIM3_Pos)
#define PM_PBAMASK_LCDCA_Pos        23           /**< \brief (PM_PBAMASK) LCDCA APB Clock Enable */
#define PM_PBAMASK_LCDCA            (_U_(0x1) << PM_PBAMASK_LCDCA_Pos)
#define PM_PBAMASK_MASK             _U_(0x00EFFFFF) /**< \brief (PM_PBAMASK) MASK Register */

/* -------- PM_PBBMASK : (PM Offset: 0x02C) (R/W 32) PBB Mask -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t HFLASHC_:1;       /*!< bit:      0  HFLASHC APB Clock Enable           */
    uint32_t HCACHE_:1;        /*!< bit:      1  HCACHE APB Clock Enable            */
    uint32_t HMATRIX_:1;       /*!< bit:      2  HMATRIX APB Clock Enable           */
    uint32_t PDCA_:1;          /*!< bit:      3  PDCA APB Clock Enable              */
    uint32_t CRCCU_:1;         /*!< bit:      4  CRCCU APB Clock Enable             */
    uint32_t USBC_:1;          /*!< bit:      5  USBC APB Clock Enable              */
    uint32_t PEVC_:1;          /*!< bit:      6  PEVC APB Clock Enable              */
    uint32_t :25;              /*!< bit:  7..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} PM_PBBMASK_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PM_PBBMASK_OFFSET           0x02C        /**< \brief (PM_PBBMASK offset) PBB Mask */
#define PM_PBBMASK_RESETVALUE       _U_(0x00000001); /**< \brief (PM_PBBMASK reset_value) PBB Mask */

#define PM_PBBMASK_HFLASHC_Pos      0            /**< \brief (PM_PBBMASK) HFLASHC APB Clock Enable */
#define PM_PBBMASK_HFLASHC          (_U_(0x1) << PM_PBBMASK_HFLASHC_Pos)
#define PM_PBBMASK_HCACHE_Pos       1            /**< \brief (PM_PBBMASK) HCACHE APB Clock Enable */
#define PM_PBBMASK_HCACHE           (_U_(0x1) << PM_PBBMASK_HCACHE_Pos)
#define PM_PBBMASK_HMATRIX_Pos      2            /**< \brief (PM_PBBMASK) HMATRIX APB Clock Enable */
#define PM_PBBMASK_HMATRIX          (_U_(0x1) << PM_PBBMASK_HMATRIX_Pos)
#define PM_PBBMASK_PDCA_Pos         3            /**< \brief (PM_PBBMASK) PDCA APB Clock Enable */
#define PM_PBBMASK_PDCA             (_U_(0x1) << PM_PBBMASK_PDCA_Pos)
#define PM_PBBMASK_CRCCU_Pos        4            /**< \brief (PM_PBBMASK) CRCCU APB Clock Enable */
#define PM_PBBMASK_CRCCU            (_U_(0x1) << PM_PBBMASK_CRCCU_Pos)
#define PM_PBBMASK_USBC_Pos         5            /**< \brief (PM_PBBMASK) USBC APB Clock Enable */
#define PM_PBBMASK_USBC             (_U_(0x1) << PM_PBBMASK_USBC_Pos)
#define PM_PBBMASK_PEVC_Pos         6            /**< \brief (PM_PBBMASK) PEVC APB Clock Enable */
#define PM_PBBMASK_PEVC             (_U_(0x1) << PM_PBBMASK_PEVC_Pos)
#define PM_PBBMASK_MASK             _U_(0x0000007F) /**< \brief (PM_PBBMASK) MASK Register */

/* -------- PM_PBCMASK : (PM Offset: 0x030) (R/W 32) PBC Mask -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t PM_:1;            /*!< bit:      0  PM APB Clock Enable                */
    uint32_t CHIPID_:1;        /*!< bit:      1  CHIPID APB Clock Enable            */
    uint32_t SCIF_:1;          /*!< bit:      2  SCIF APB Clock Enable              */
    uint32_t FREQM_:1;         /*!< bit:      3  FREQM APB Clock Enable             */
    uint32_t GPIO_:1;          /*!< bit:      4  GPIO APB Clock Enable              */
    uint32_t :27;              /*!< bit:  5..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} PM_PBCMASK_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PM_PBCMASK_OFFSET           0x030        /**< \brief (PM_PBCMASK offset) PBC Mask */
#define PM_PBCMASK_RESETVALUE       _U_(0x0000001F); /**< \brief (PM_PBCMASK reset_value) PBC Mask */

#define PM_PBCMASK_PM_Pos           0            /**< \brief (PM_PBCMASK) PM APB Clock Enable */
#define PM_PBCMASK_PM               (_U_(0x1) << PM_PBCMASK_PM_Pos)
#define PM_PBCMASK_CHIPID_Pos       1            /**< \brief (PM_PBCMASK) CHIPID APB Clock Enable */
#define PM_PBCMASK_CHIPID           (_U_(0x1) << PM_PBCMASK_CHIPID_Pos)
#define PM_PBCMASK_SCIF_Pos         2            /**< \brief (PM_PBCMASK) SCIF APB Clock Enable */
#define PM_PBCMASK_SCIF             (_U_(0x1) << PM_PBCMASK_SCIF_Pos)
#define PM_PBCMASK_FREQM_Pos        3            /**< \brief (PM_PBCMASK) FREQM APB Clock Enable */
#define PM_PBCMASK_FREQM            (_U_(0x1) << PM_PBCMASK_FREQM_Pos)
#define PM_PBCMASK_GPIO_Pos         4            /**< \brief (PM_PBCMASK) GPIO APB Clock Enable */
#define PM_PBCMASK_GPIO             (_U_(0x1) << PM_PBCMASK_GPIO_Pos)
#define PM_PBCMASK_MASK             _U_(0x0000001F) /**< \brief (PM_PBCMASK) MASK Register */

/* -------- PM_PBDMASK : (PM Offset: 0x034) (R/W 32) PBD Mask -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t BPM_:1;           /*!< bit:      0  BPM APB Clock Enable               */
    uint32_t BSCIF_:1;         /*!< bit:      1  BSCIF APB Clock Enable             */
    uint32_t AST_:1;           /*!< bit:      2  AST APB Clock Enable               */
    uint32_t WDT_:1;           /*!< bit:      3  WDT APB Clock Enable               */
    uint32_t EIC_:1;           /*!< bit:      4  EIC APB Clock Enable               */
    uint32_t PICOUART_:1;      /*!< bit:      5  PICOUART APB Clock Enable          */
    uint32_t :26;              /*!< bit:  6..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} PM_PBDMASK_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PM_PBDMASK_OFFSET           0x034        /**< \brief (PM_PBDMASK offset) PBD Mask */
#define PM_PBDMASK_RESETVALUE       _U_(0x0000003F); /**< \brief (PM_PBDMASK reset_value) PBD Mask */

#define PM_PBDMASK_BPM_Pos          0            /**< \brief (PM_PBDMASK) BPM APB Clock Enable */
#define PM_PBDMASK_BPM              (_U_(0x1) << PM_PBDMASK_BPM_Pos)
#define PM_PBDMASK_BSCIF_Pos        1            /**< \brief (PM_PBDMASK) BSCIF APB Clock Enable */
#define PM_PBDMASK_BSCIF            (_U_(0x1) << PM_PBDMASK_BSCIF_Pos)
#define PM_PBDMASK_AST_Pos          2            /**< \brief (PM_PBDMASK) AST APB Clock Enable */
#define PM_PBDMASK_AST              (_U_(0x1) << PM_PBDMASK_AST_Pos)
#define PM_PBDMASK_WDT_Pos          3            /**< \brief (PM_PBDMASK) WDT APB Clock Enable */
#define PM_PBDMASK_WDT              (_U_(0x1) << PM_PBDMASK_WDT_Pos)
#define PM_PBDMASK_EIC_Pos          4            /**< \brief (PM_PBDMASK) EIC APB Clock Enable */
#define PM_PBDMASK_EIC              (_U_(0x1) << PM_PBDMASK_EIC_Pos)
#define PM_PBDMASK_PICOUART_Pos     5            /**< \brief (PM_PBDMASK) PICOUART APB Clock Enable */
#define PM_PBDMASK_PICOUART         (_U_(0x1) << PM_PBDMASK_PICOUART_Pos)
#define PM_PBDMASK_MASK             _U_(0x0000003F) /**< \brief (PM_PBDMASK) MASK Register */

/* -------- PM_PBADIVMASK : (PM Offset: 0x040) (R/W 32) PBA Divided Clock Mask -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  uint32_t reg;                /*!< Type      used for register access              */
} PM_PBADIVMASK_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PM_PBADIVMASK_OFFSET        0x040        /**< \brief (PM_PBADIVMASK offset) PBA Divided Clock Mask */
#define PM_PBADIVMASK_RESETVALUE    _U_(0x00000000); /**< \brief (PM_PBADIVMASK reset_value) PBA Divided Clock Mask */
#define PM_PBADIVMASK_MASK          _U_(0xFFFFFFFF) /**< \brief (PM_PBADIVMASK) MASK Register */

/* -------- PM_CFDCTRL : (PM Offset: 0x054) (R/W 32) Clock Failure Detector Control -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t CFDEN:1;          /*!< bit:      0  Clock Failure Detection Enable     */
    uint32_t :30;              /*!< bit:  1..30  Reserved                           */
    uint32_t SFV:1;            /*!< bit:     31  Store Final Value                  */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} PM_CFDCTRL_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PM_CFDCTRL_OFFSET           0x054        /**< \brief (PM_CFDCTRL offset) Clock Failure Detector Control */
#define PM_CFDCTRL_RESETVALUE       _U_(0x00000000); /**< \brief (PM_CFDCTRL reset_value) Clock Failure Detector Control */

#define PM_CFDCTRL_CFDEN_Pos        0            /**< \brief (PM_CFDCTRL) Clock Failure Detection Enable */
#define PM_CFDCTRL_CFDEN            (_U_(0x1) << PM_CFDCTRL_CFDEN_Pos)
#define PM_CFDCTRL_SFV_Pos          31           /**< \brief (PM_CFDCTRL) Store Final Value */
#define PM_CFDCTRL_SFV              (_U_(0x1) << PM_CFDCTRL_SFV_Pos)
#define PM_CFDCTRL_MASK             _U_(0x80000001) /**< \brief (PM_CFDCTRL) MASK Register */

/* -------- PM_UNLOCK : (PM Offset: 0x058) ( /W 32) Unlock Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t ADDR:10;          /*!< bit:  0.. 9  Unlock Address                     */
    uint32_t :14;              /*!< bit: 10..23  Reserved                           */
    uint32_t KEY:8;            /*!< bit: 24..31  Unlock Key                         */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} PM_UNLOCK_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PM_UNLOCK_OFFSET            0x058        /**< \brief (PM_UNLOCK offset) Unlock Register */
#define PM_UNLOCK_RESETVALUE        _U_(0x00000000); /**< \brief (PM_UNLOCK reset_value) Unlock Register */

#define PM_UNLOCK_ADDR_Pos          0            /**< \brief (PM_UNLOCK) Unlock Address */
#define PM_UNLOCK_ADDR_Msk          (_U_(0x3FF) << PM_UNLOCK_ADDR_Pos)
#define PM_UNLOCK_ADDR(value)       (PM_UNLOCK_ADDR_Msk & ((value) << PM_UNLOCK_ADDR_Pos))
#define PM_UNLOCK_KEY_Pos           24           /**< \brief (PM_UNLOCK) Unlock Key */
#define PM_UNLOCK_KEY_Msk           (_U_(0xFF) << PM_UNLOCK_KEY_Pos)
#define PM_UNLOCK_KEY(value)        (PM_UNLOCK_KEY_Msk & ((value) << PM_UNLOCK_KEY_Pos))
#define PM_UNLOCK_MASK              _U_(0xFF0003FF) /**< \brief (PM_UNLOCK) MASK Register */

/* -------- PM_IER : (PM Offset: 0x0C0) ( /W 32) Interrupt Enable Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t CFD:1;            /*!< bit:      0  Clock Failure Detected Interrupt Enable */
    uint32_t :4;               /*!< bit:  1.. 4  Reserved                           */
    uint32_t CKRDY:1;          /*!< bit:      5  Clock Ready Interrupt Enable       */
    uint32_t :2;               /*!< bit:  6.. 7  Reserved                           */
    uint32_t WAKE:1;           /*!< bit:      8  Wake up Interrupt Enable           */
    uint32_t :22;              /*!< bit:  9..30  Reserved                           */
    uint32_t AE:1;             /*!< bit:     31  Access Error Interrupt Enable      */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} PM_IER_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PM_IER_OFFSET               0x0C0        /**< \brief (PM_IER offset) Interrupt Enable Register */
#define PM_IER_RESETVALUE           _U_(0x00000000); /**< \brief (PM_IER reset_value) Interrupt Enable Register */

#define PM_IER_CFD_Pos              0            /**< \brief (PM_IER) Clock Failure Detected Interrupt Enable */
#define PM_IER_CFD                  (_U_(0x1) << PM_IER_CFD_Pos)
#define PM_IER_CKRDY_Pos            5            /**< \brief (PM_IER) Clock Ready Interrupt Enable */
#define PM_IER_CKRDY                (_U_(0x1) << PM_IER_CKRDY_Pos)
#define PM_IER_WAKE_Pos             8            /**< \brief (PM_IER) Wake up Interrupt Enable */
#define PM_IER_WAKE                 (_U_(0x1) << PM_IER_WAKE_Pos)
#define   PM_IER_WAKE_0_Val               _U_(0x0)   /**< \brief (PM_IER) No effect */
#define   PM_IER_WAKE_1_Val               _U_(0x1)   /**< \brief (PM_IER) Disable Interrupt. */
#define PM_IER_WAKE_0               (PM_IER_WAKE_0_Val             << PM_IER_WAKE_Pos)
#define PM_IER_WAKE_1               (PM_IER_WAKE_1_Val             << PM_IER_WAKE_Pos)
#define PM_IER_AE_Pos               31           /**< \brief (PM_IER) Access Error Interrupt Enable */
#define PM_IER_AE                   (_U_(0x1) << PM_IER_AE_Pos)
#define PM_IER_MASK                 _U_(0x80000121) /**< \brief (PM_IER) MASK Register */

/* -------- PM_IDR : (PM Offset: 0x0C4) ( /W 32) Interrupt Disable Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t CFD:1;            /*!< bit:      0  Clock Failure Detected Interrupt Disable */
    uint32_t :4;               /*!< bit:  1.. 4  Reserved                           */
    uint32_t CKRDY:1;          /*!< bit:      5  Clock Ready Interrupt Disable      */
    uint32_t :2;               /*!< bit:  6.. 7  Reserved                           */
    uint32_t WAKE:1;           /*!< bit:      8  Wake up Interrupt Disable          */
    uint32_t :22;              /*!< bit:  9..30  Reserved                           */
    uint32_t AE:1;             /*!< bit:     31  Access Error Interrupt Disable     */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} PM_IDR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PM_IDR_OFFSET               0x0C4        /**< \brief (PM_IDR offset) Interrupt Disable Register */
#define PM_IDR_RESETVALUE           _U_(0x00000000); /**< \brief (PM_IDR reset_value) Interrupt Disable Register */

#define PM_IDR_CFD_Pos              0            /**< \brief (PM_IDR) Clock Failure Detected Interrupt Disable */
#define PM_IDR_CFD                  (_U_(0x1) << PM_IDR_CFD_Pos)
#define PM_IDR_CKRDY_Pos            5            /**< \brief (PM_IDR) Clock Ready Interrupt Disable */
#define PM_IDR_CKRDY                (_U_(0x1) << PM_IDR_CKRDY_Pos)
#define PM_IDR_WAKE_Pos             8            /**< \brief (PM_IDR) Wake up Interrupt Disable */
#define PM_IDR_WAKE                 (_U_(0x1) << PM_IDR_WAKE_Pos)
#define   PM_IDR_WAKE_0_Val               _U_(0x0)   /**< \brief (PM_IDR) No effect */
#define   PM_IDR_WAKE_1_Val               _U_(0x1)   /**< \brief (PM_IDR) Disable Interrupt. */
#define PM_IDR_WAKE_0               (PM_IDR_WAKE_0_Val             << PM_IDR_WAKE_Pos)
#define PM_IDR_WAKE_1               (PM_IDR_WAKE_1_Val             << PM_IDR_WAKE_Pos)
#define PM_IDR_AE_Pos               31           /**< \brief (PM_IDR) Access Error Interrupt Disable */
#define PM_IDR_AE                   (_U_(0x1) << PM_IDR_AE_Pos)
#define PM_IDR_MASK                 _U_(0x80000121) /**< \brief (PM_IDR) MASK Register */

/* -------- PM_IMR : (PM Offset: 0x0C8) (R/  32) Interrupt Mask Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t CFD:1;            /*!< bit:      0  Clock Failure Detected Interrupt Mask */
    uint32_t :4;               /*!< bit:  1.. 4  Reserved                           */
    uint32_t CKRDY:1;          /*!< bit:      5  Clock Ready Interrupt Mask         */
    uint32_t :2;               /*!< bit:  6.. 7  Reserved                           */
    uint32_t WAKE:1;           /*!< bit:      8  Wake up Interrupt Mask             */
    uint32_t :22;              /*!< bit:  9..30  Reserved                           */
    uint32_t AE:1;             /*!< bit:     31  Access Error Interrupt Mask        */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} PM_IMR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PM_IMR_OFFSET               0x0C8        /**< \brief (PM_IMR offset) Interrupt Mask Register */
#define PM_IMR_RESETVALUE           _U_(0x00000000); /**< \brief (PM_IMR reset_value) Interrupt Mask Register */

#define PM_IMR_CFD_Pos              0            /**< \brief (PM_IMR) Clock Failure Detected Interrupt Mask */
#define PM_IMR_CFD                  (_U_(0x1) << PM_IMR_CFD_Pos)
#define PM_IMR_CKRDY_Pos            5            /**< \brief (PM_IMR) Clock Ready Interrupt Mask */
#define PM_IMR_CKRDY                (_U_(0x1) << PM_IMR_CKRDY_Pos)
#define PM_IMR_WAKE_Pos             8            /**< \brief (PM_IMR) Wake up Interrupt Mask */
#define PM_IMR_WAKE                 (_U_(0x1) << PM_IMR_WAKE_Pos)
#define   PM_IMR_WAKE_0_Val               _U_(0x0)   /**< \brief (PM_IMR) No effect */
#define   PM_IMR_WAKE_1_Val               _U_(0x1)   /**< \brief (PM_IMR) Disable Interrupt. */
#define PM_IMR_WAKE_0               (PM_IMR_WAKE_0_Val             << PM_IMR_WAKE_Pos)
#define PM_IMR_WAKE_1               (PM_IMR_WAKE_1_Val             << PM_IMR_WAKE_Pos)
#define PM_IMR_AE_Pos               31           /**< \brief (PM_IMR) Access Error Interrupt Mask */
#define PM_IMR_AE                   (_U_(0x1) << PM_IMR_AE_Pos)
#define PM_IMR_MASK                 _U_(0x80000121) /**< \brief (PM_IMR) MASK Register */

/* -------- PM_ISR : (PM Offset: 0x0CC) (R/  32) Interrupt Status Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t CFD:1;            /*!< bit:      0  Clock Failure Detected Interrupt Status */
    uint32_t :4;               /*!< bit:  1.. 4  Reserved                           */
    uint32_t CKRDY:1;          /*!< bit:      5  Clock Ready Interrupt Status       */
    uint32_t :2;               /*!< bit:  6.. 7  Reserved                           */
    uint32_t WAKE:1;           /*!< bit:      8  Wake up Interrupt Status           */
    uint32_t :22;              /*!< bit:  9..30  Reserved                           */
    uint32_t AE:1;             /*!< bit:     31  Access Error Interrupt Status      */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} PM_ISR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PM_ISR_OFFSET               0x0CC        /**< \brief (PM_ISR offset) Interrupt Status Register */
#define PM_ISR_RESETVALUE           _U_(0x00000000); /**< \brief (PM_ISR reset_value) Interrupt Status Register */

#define PM_ISR_CFD_Pos              0            /**< \brief (PM_ISR) Clock Failure Detected Interrupt Status */
#define PM_ISR_CFD                  (_U_(0x1) << PM_ISR_CFD_Pos)
#define PM_ISR_CKRDY_Pos            5            /**< \brief (PM_ISR) Clock Ready Interrupt Status */
#define PM_ISR_CKRDY                (_U_(0x1) << PM_ISR_CKRDY_Pos)
#define PM_ISR_WAKE_Pos             8            /**< \brief (PM_ISR) Wake up Interrupt Status */
#define PM_ISR_WAKE                 (_U_(0x1) << PM_ISR_WAKE_Pos)
#define   PM_ISR_WAKE_0_Val               _U_(0x0)   /**< \brief (PM_ISR) No effect */
#define   PM_ISR_WAKE_1_Val               _U_(0x1)   /**< \brief (PM_ISR) Disable Interrupt. */
#define PM_ISR_WAKE_0               (PM_ISR_WAKE_0_Val             << PM_ISR_WAKE_Pos)
#define PM_ISR_WAKE_1               (PM_ISR_WAKE_1_Val             << PM_ISR_WAKE_Pos)
#define PM_ISR_AE_Pos               31           /**< \brief (PM_ISR) Access Error Interrupt Status */
#define PM_ISR_AE                   (_U_(0x1) << PM_ISR_AE_Pos)
#define PM_ISR_MASK                 _U_(0x80000121) /**< \brief (PM_ISR) MASK Register */

/* -------- PM_ICR : (PM Offset: 0x0D0) ( /W 32) Interrupt Clear Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t CFD:1;            /*!< bit:      0  Clock Failure Detected Interrupt Status Clear */
    uint32_t :4;               /*!< bit:  1.. 4  Reserved                           */
    uint32_t CKRDY:1;          /*!< bit:      5  Clock Ready Interrupt Status Clear */
    uint32_t :2;               /*!< bit:  6.. 7  Reserved                           */
    uint32_t WAKE:1;           /*!< bit:      8  Wake up Interrupt Status Clear     */
    uint32_t :22;              /*!< bit:  9..30  Reserved                           */
    uint32_t AE:1;             /*!< bit:     31  Access Error Interrupt Status Clear */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} PM_ICR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PM_ICR_OFFSET               0x0D0        /**< \brief (PM_ICR offset) Interrupt Clear Register */
#define PM_ICR_RESETVALUE           _U_(0x00000000); /**< \brief (PM_ICR reset_value) Interrupt Clear Register */

#define PM_ICR_CFD_Pos              0            /**< \brief (PM_ICR) Clock Failure Detected Interrupt Status Clear */
#define PM_ICR_CFD                  (_U_(0x1) << PM_ICR_CFD_Pos)
#define PM_ICR_CKRDY_Pos            5            /**< \brief (PM_ICR) Clock Ready Interrupt Status Clear */
#define PM_ICR_CKRDY                (_U_(0x1) << PM_ICR_CKRDY_Pos)
#define PM_ICR_WAKE_Pos             8            /**< \brief (PM_ICR) Wake up Interrupt Status Clear */
#define PM_ICR_WAKE                 (_U_(0x1) << PM_ICR_WAKE_Pos)
#define PM_ICR_AE_Pos               31           /**< \brief (PM_ICR) Access Error Interrupt Status Clear */
#define PM_ICR_AE                   (_U_(0x1) << PM_ICR_AE_Pos)
#define PM_ICR_MASK                 _U_(0x80000121) /**< \brief (PM_ICR) MASK Register */

/* -------- PM_SR : (PM Offset: 0x0D4) (R/  32) Status Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t CFD:1;            /*!< bit:      0  Clock Failure Detected             */
    uint32_t OCP:1;            /*!< bit:      1  Over Clock Detected                */
    uint32_t :3;               /*!< bit:  2.. 4  Reserved                           */
    uint32_t CKRDY:1;          /*!< bit:      5  Clock Ready                        */
    uint32_t :2;               /*!< bit:  6.. 7  Reserved                           */
    uint32_t WAKE:1;           /*!< bit:      8  Wake up                            */
    uint32_t :19;              /*!< bit:  9..27  Reserved                           */
    uint32_t PERRDY:1;         /*!< bit:     28  Peripheral Ready                   */
    uint32_t :2;               /*!< bit: 29..30  Reserved                           */
    uint32_t AE:1;             /*!< bit:     31  Access Error                       */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} PM_SR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PM_SR_OFFSET                0x0D4        /**< \brief (PM_SR offset) Status Register */
#define PM_SR_RESETVALUE            _U_(0x00000000); /**< \brief (PM_SR reset_value) Status Register */

#define PM_SR_CFD_Pos               0            /**< \brief (PM_SR) Clock Failure Detected */
#define PM_SR_CFD                   (_U_(0x1) << PM_SR_CFD_Pos)
#define PM_SR_OCP_Pos               1            /**< \brief (PM_SR) Over Clock Detected */
#define PM_SR_OCP                   (_U_(0x1) << PM_SR_OCP_Pos)
#define PM_SR_CKRDY_Pos             5            /**< \brief (PM_SR) Clock Ready */
#define PM_SR_CKRDY                 (_U_(0x1) << PM_SR_CKRDY_Pos)
#define PM_SR_WAKE_Pos              8            /**< \brief (PM_SR) Wake up */
#define PM_SR_WAKE                  (_U_(0x1) << PM_SR_WAKE_Pos)
#define   PM_SR_WAKE_0_Val                _U_(0x0)   /**< \brief (PM_SR) No effect */
#define   PM_SR_WAKE_1_Val                _U_(0x1)   /**< \brief (PM_SR) Disable Interrupt. */
#define PM_SR_WAKE_0                (PM_SR_WAKE_0_Val              << PM_SR_WAKE_Pos)
#define PM_SR_WAKE_1                (PM_SR_WAKE_1_Val              << PM_SR_WAKE_Pos)
#define PM_SR_PERRDY_Pos            28           /**< \brief (PM_SR) Peripheral Ready */
#define PM_SR_PERRDY                (_U_(0x1) << PM_SR_PERRDY_Pos)
#define PM_SR_AE_Pos                31           /**< \brief (PM_SR) Access Error */
#define PM_SR_AE                    (_U_(0x1) << PM_SR_AE_Pos)
#define PM_SR_MASK                  _U_(0x90000123) /**< \brief (PM_SR) MASK Register */

/* -------- PM_PPCR : (PM Offset: 0x160) (R/W 32) Peripheral Power Control Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t RSTPUN:1;         /*!< bit:      0  Reset Pullup                       */
    uint32_t CATBRCMASK:1;     /*!< bit:      1  CAT Request Clock Mask             */
    uint32_t ACIFCRCMASK:1;    /*!< bit:      2  ACIFC Request Clock Mask           */
    uint32_t ASTRCMASK:1;      /*!< bit:      3  AST Request Clock Mask             */
    uint32_t TWIS0RCMASK:1;    /*!< bit:      4  TWIS0 Request Clock Mask           */
    uint32_t TWIS1RCMASK:1;    /*!< bit:      5  TWIS1 Request Clock Mask           */
    uint32_t PEVCRCMASK:1;     /*!< bit:      6  PEVC Request Clock Mask            */
    uint32_t ADCIFERCMASK:1;   /*!< bit:      7  ADCIFE Request Clock Mask          */
    uint32_t VREGRCMASK:1;     /*!< bit:      8  VREG Request Clock Mask            */
    uint32_t FWBGREF:1;        /*!< bit:      9  Flash Wait BGREF                   */
    uint32_t FWBOD18:1;        /*!< bit:     10  Flash Wait BOD18                   */
    uint32_t :21;              /*!< bit: 11..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} PM_PPCR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PM_PPCR_OFFSET              0x160        /**< \brief (PM_PPCR offset) Peripheral Power Control Register */
#define PM_PPCR_RESETVALUE          _U_(0x000001FE); /**< \brief (PM_PPCR reset_value) Peripheral Power Control Register */

#define PM_PPCR_RSTPUN_Pos          0            /**< \brief (PM_PPCR) Reset Pullup */
#define PM_PPCR_RSTPUN              (_U_(0x1) << PM_PPCR_RSTPUN_Pos)
#define PM_PPCR_CATBRCMASK_Pos      1            /**< \brief (PM_PPCR) CAT Request Clock Mask */
#define PM_PPCR_CATBRCMASK          (_U_(0x1) << PM_PPCR_CATBRCMASK_Pos)
#define PM_PPCR_ACIFCRCMASK_Pos     2            /**< \brief (PM_PPCR) ACIFC Request Clock Mask */
#define PM_PPCR_ACIFCRCMASK         (_U_(0x1) << PM_PPCR_ACIFCRCMASK_Pos)
#define PM_PPCR_ASTRCMASK_Pos       3            /**< \brief (PM_PPCR) AST Request Clock Mask */
#define PM_PPCR_ASTRCMASK           (_U_(0x1) << PM_PPCR_ASTRCMASK_Pos)
#define PM_PPCR_TWIS0RCMASK_Pos     4            /**< \brief (PM_PPCR) TWIS0 Request Clock Mask */
#define PM_PPCR_TWIS0RCMASK         (_U_(0x1) << PM_PPCR_TWIS0RCMASK_Pos)
#define PM_PPCR_TWIS1RCMASK_Pos     5            /**< \brief (PM_PPCR) TWIS1 Request Clock Mask */
#define PM_PPCR_TWIS1RCMASK         (_U_(0x1) << PM_PPCR_TWIS1RCMASK_Pos)
#define PM_PPCR_PEVCRCMASK_Pos      6            /**< \brief (PM_PPCR) PEVC Request Clock Mask */
#define PM_PPCR_PEVCRCMASK          (_U_(0x1) << PM_PPCR_PEVCRCMASK_Pos)
#define PM_PPCR_ADCIFERCMASK_Pos    7            /**< \brief (PM_PPCR) ADCIFE Request Clock Mask */
#define PM_PPCR_ADCIFERCMASK        (_U_(0x1) << PM_PPCR_ADCIFERCMASK_Pos)
#define PM_PPCR_VREGRCMASK_Pos      8            /**< \brief (PM_PPCR) VREG Request Clock Mask */
#define PM_PPCR_VREGRCMASK          (_U_(0x1) << PM_PPCR_VREGRCMASK_Pos)
#define PM_PPCR_FWBGREF_Pos         9            /**< \brief (PM_PPCR) Flash Wait BGREF */
#define PM_PPCR_FWBGREF             (_U_(0x1) << PM_PPCR_FWBGREF_Pos)
#define PM_PPCR_FWBOD18_Pos         10           /**< \brief (PM_PPCR) Flash Wait BOD18 */
#define PM_PPCR_FWBOD18             (_U_(0x1) << PM_PPCR_FWBOD18_Pos)
#define PM_PPCR_MASK                _U_(0x000007FF) /**< \brief (PM_PPCR) MASK Register */

/* -------- PM_RCAUSE : (PM Offset: 0x180) (R/  32) Reset Cause Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t POR:1;            /*!< bit:      0  Power-on Reset                     */
    uint32_t BOD:1;            /*!< bit:      1  Brown-out Reset                    */
    uint32_t EXT:1;            /*!< bit:      2  External Reset Pin                 */
    uint32_t WDT:1;            /*!< bit:      3  Watchdog Reset                     */
    uint32_t :4;               /*!< bit:  4.. 7  Reserved                           */
    uint32_t OCDRST:1;         /*!< bit:      8  OCD Reset                          */
    uint32_t :1;               /*!< bit:      9  Reserved                           */
    uint32_t POR33:1;          /*!< bit:     10  Power-on Reset                     */
    uint32_t :2;               /*!< bit: 11..12  Reserved                           */
    uint32_t BOD33:1;          /*!< bit:     13  Brown-out 3.3V Reset               */
    uint32_t :18;              /*!< bit: 14..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} PM_RCAUSE_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PM_RCAUSE_OFFSET            0x180        /**< \brief (PM_RCAUSE offset) Reset Cause Register */
#define PM_RCAUSE_RESETVALUE        _U_(0x00000000); /**< \brief (PM_RCAUSE reset_value) Reset Cause Register */

#define PM_RCAUSE_POR_Pos           0            /**< \brief (PM_RCAUSE) Power-on Reset */
#define PM_RCAUSE_POR               (_U_(0x1) << PM_RCAUSE_POR_Pos)
#define PM_RCAUSE_BOD_Pos           1            /**< \brief (PM_RCAUSE) Brown-out Reset */
#define PM_RCAUSE_BOD               (_U_(0x1) << PM_RCAUSE_BOD_Pos)
#define PM_RCAUSE_EXT_Pos           2            /**< \brief (PM_RCAUSE) External Reset Pin */
#define PM_RCAUSE_EXT               (_U_(0x1) << PM_RCAUSE_EXT_Pos)
#define PM_RCAUSE_WDT_Pos           3            /**< \brief (PM_RCAUSE) Watchdog Reset */
#define PM_RCAUSE_WDT               (_U_(0x1) << PM_RCAUSE_WDT_Pos)
#define PM_RCAUSE_OCDRST_Pos        8            /**< \brief (PM_RCAUSE) OCD Reset */
#define PM_RCAUSE_OCDRST            (_U_(0x1) << PM_RCAUSE_OCDRST_Pos)
#define PM_RCAUSE_POR33_Pos         10           /**< \brief (PM_RCAUSE) Power-on Reset */
#define PM_RCAUSE_POR33             (_U_(0x1) << PM_RCAUSE_POR33_Pos)
#define PM_RCAUSE_BOD33_Pos         13           /**< \brief (PM_RCAUSE) Brown-out 3.3V Reset */
#define PM_RCAUSE_BOD33             (_U_(0x1) << PM_RCAUSE_BOD33_Pos)
#define PM_RCAUSE_MASK              _U_(0x0000250F) /**< \brief (PM_RCAUSE) MASK Register */

/* -------- PM_WCAUSE : (PM Offset: 0x184) (R/  32) Wake Cause Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t TWI_SLAVE_0:1;    /*!< bit:      0  Two-wire Slave Interface 0         */
    uint32_t TWI_SLAVE_1:1;    /*!< bit:      1  Two-wire Slave Interface 1         */
    uint32_t USBC:1;           /*!< bit:      2  USB Device and Embedded Host Interface */
    uint32_t PSOK:1;           /*!< bit:      3  Power Scaling OK                   */
    uint32_t BOD18_IRQ:1;      /*!< bit:      4  BOD18 Interrupt                    */
    uint32_t BOD33_IRQ:1;      /*!< bit:      5  BOD33 Interrupt                    */
    uint32_t PICOUART:1;       /*!< bit:      6  Picopower UART                     */
    uint32_t LCDCA:1;          /*!< bit:      7  LCD Controller                     */
    uint32_t :8;               /*!< bit:  8..15  Reserved                           */
    uint32_t EIC:1;            /*!< bit:     16  External Interrupt Controller      */
    uint32_t AST:1;            /*!< bit:     17  Asynchronous Timer                 */
    uint32_t :14;              /*!< bit: 18..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} PM_WCAUSE_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PM_WCAUSE_OFFSET            0x184        /**< \brief (PM_WCAUSE offset) Wake Cause Register */
#define PM_WCAUSE_RESETVALUE        _U_(0x00000000); /**< \brief (PM_WCAUSE reset_value) Wake Cause Register */

#define PM_WCAUSE_TWI_SLAVE_0_Pos   0            /**< \brief (PM_WCAUSE) Two-wire Slave Interface 0 */
#define PM_WCAUSE_TWI_SLAVE_0       (_U_(0x1) << PM_WCAUSE_TWI_SLAVE_0_Pos)
#define PM_WCAUSE_TWI_SLAVE_1_Pos   1            /**< \brief (PM_WCAUSE) Two-wire Slave Interface 1 */
#define PM_WCAUSE_TWI_SLAVE_1       (_U_(0x1) << PM_WCAUSE_TWI_SLAVE_1_Pos)
#define PM_WCAUSE_USBC_Pos          2            /**< \brief (PM_WCAUSE) USB Device and Embedded Host Interface */
#define PM_WCAUSE_USBC              (_U_(0x1) << PM_WCAUSE_USBC_Pos)
#define PM_WCAUSE_PSOK_Pos          3            /**< \brief (PM_WCAUSE) Power Scaling OK */
#define PM_WCAUSE_PSOK              (_U_(0x1) << PM_WCAUSE_PSOK_Pos)
#define PM_WCAUSE_BOD18_IRQ_Pos     4            /**< \brief (PM_WCAUSE) BOD18 Interrupt */
#define PM_WCAUSE_BOD18_IRQ         (_U_(0x1) << PM_WCAUSE_BOD18_IRQ_Pos)
#define PM_WCAUSE_BOD33_IRQ_Pos     5            /**< \brief (PM_WCAUSE) BOD33 Interrupt */
#define PM_WCAUSE_BOD33_IRQ         (_U_(0x1) << PM_WCAUSE_BOD33_IRQ_Pos)
#define PM_WCAUSE_PICOUART_Pos      6            /**< \brief (PM_WCAUSE) Picopower UART */
#define PM_WCAUSE_PICOUART          (_U_(0x1) << PM_WCAUSE_PICOUART_Pos)
#define PM_WCAUSE_LCDCA_Pos         7            /**< \brief (PM_WCAUSE) LCD Controller */
#define PM_WCAUSE_LCDCA             (_U_(0x1) << PM_WCAUSE_LCDCA_Pos)
#define PM_WCAUSE_EIC_Pos           16           /**< \brief (PM_WCAUSE) External Interrupt Controller */
#define PM_WCAUSE_EIC               (_U_(0x1) << PM_WCAUSE_EIC_Pos)
#define PM_WCAUSE_AST_Pos           17           /**< \brief (PM_WCAUSE) Asynchronous Timer */
#define PM_WCAUSE_AST               (_U_(0x1) << PM_WCAUSE_AST_Pos)
#define PM_WCAUSE_MASK              _U_(0x000300FF) /**< \brief (PM_WCAUSE) MASK Register */

/* -------- PM_AWEN : (PM Offset: 0x188) (R/W 32) Asynchronous Wake Enable -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t AWEN:32;          /*!< bit:  0..31  Asynchronous Wake Up               */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} PM_AWEN_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PM_AWEN_OFFSET              0x188        /**< \brief (PM_AWEN offset) Asynchronous Wake Enable */
#define PM_AWEN_RESETVALUE          _U_(0x00000000); /**< \brief (PM_AWEN reset_value) Asynchronous Wake Enable */

#define PM_AWEN_AWEN_Pos            0            /**< \brief (PM_AWEN) Asynchronous Wake Up */
#define PM_AWEN_AWEN_Msk            (_U_(0xFFFFFFFF) << PM_AWEN_AWEN_Pos)
#define PM_AWEN_AWEN(value)         (PM_AWEN_AWEN_Msk & ((value) << PM_AWEN_AWEN_Pos))
#define PM_AWEN_MASK                _U_(0xFFFFFFFF) /**< \brief (PM_AWEN) MASK Register */

/* -------- PM_OBS : (PM Offset: 0x190) (R/W 32) Obsvervability -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  uint32_t reg;                /*!< Type      used for register access              */
} PM_OBS_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PM_OBS_OFFSET               0x190        /**< \brief (PM_OBS offset) Obsvervability */
#define PM_OBS_RESETVALUE           _U_(0x00000000); /**< \brief (PM_OBS reset_value) Obsvervability */

#define PM_OBS_MASK                 _U_(0x00000000) /**< \brief (PM_OBS) MASK Register */

/* -------- PM_FASTSLEEP : (PM Offset: 0x194) (R/W 32) Fast Sleep Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t OSC:1;            /*!< bit:      0  Oscillator                         */
    uint32_t :7;               /*!< bit:  1.. 7  Reserved                           */
    uint32_t PLL:1;            /*!< bit:      8  PLL                                */
    uint32_t :7;               /*!< bit:  9..15  Reserved                           */
    uint32_t FASTRCOSC:5;      /*!< bit: 16..20  RC80 or FLO                        */
    uint32_t :3;               /*!< bit: 21..23  Reserved                           */
    uint32_t DFLL:1;           /*!< bit:     24  DFLL                               */
    uint32_t :7;               /*!< bit: 25..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} PM_FASTSLEEP_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PM_FASTSLEEP_OFFSET         0x194        /**< \brief (PM_FASTSLEEP offset) Fast Sleep Register */
#define PM_FASTSLEEP_RESETVALUE     _U_(0x00000000); /**< \brief (PM_FASTSLEEP reset_value) Fast Sleep Register */

#define PM_FASTSLEEP_OSC_Pos        0            /**< \brief (PM_FASTSLEEP) Oscillator */
#define PM_FASTSLEEP_OSC            (_U_(0x1) << PM_FASTSLEEP_OSC_Pos)
#define PM_FASTSLEEP_PLL_Pos        8            /**< \brief (PM_FASTSLEEP) PLL */
#define PM_FASTSLEEP_PLL            (_U_(0x1) << PM_FASTSLEEP_PLL_Pos)
#define PM_FASTSLEEP_FASTRCOSC_Pos  16           /**< \brief (PM_FASTSLEEP) RC80 or FLO */
#define PM_FASTSLEEP_FASTRCOSC_Msk  (_U_(0x1F) << PM_FASTSLEEP_FASTRCOSC_Pos)
#define PM_FASTSLEEP_FASTRCOSC(value) (PM_FASTSLEEP_FASTRCOSC_Msk & ((value) << PM_FASTSLEEP_FASTRCOSC_Pos))
#define PM_FASTSLEEP_DFLL_Pos       24           /**< \brief (PM_FASTSLEEP) DFLL */
#define PM_FASTSLEEP_DFLL           (_U_(0x1) << PM_FASTSLEEP_DFLL_Pos)
#define PM_FASTSLEEP_MASK           _U_(0x011F0101) /**< \brief (PM_FASTSLEEP) MASK Register */

/* -------- PM_CONFIG : (PM Offset: 0x3F8) (R/  32) Configuration Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t PBA:1;            /*!< bit:      0  APBA Implemented                   */
    uint32_t PBB:1;            /*!< bit:      1  APBB Implemented                   */
    uint32_t PBC:1;            /*!< bit:      2  APBC Implemented                   */
    uint32_t PBD:1;            /*!< bit:      3  APBD Implemented                   */
    uint32_t :3;               /*!< bit:  4.. 6  Reserved                           */
    uint32_t HSBPEVC:1;        /*!< bit:      7  HSB PEVC Clock Implemented         */
    uint32_t :24;              /*!< bit:  8..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} PM_CONFIG_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PM_CONFIG_OFFSET            0x3F8        /**< \brief (PM_CONFIG offset) Configuration Register */
#define PM_CONFIG_RESETVALUE        _U_(0x0000000F); /**< \brief (PM_CONFIG reset_value) Configuration Register */

#define PM_CONFIG_PBA_Pos           0            /**< \brief (PM_CONFIG) APBA Implemented */
#define PM_CONFIG_PBA               (_U_(0x1) << PM_CONFIG_PBA_Pos)
#define PM_CONFIG_PBB_Pos           1            /**< \brief (PM_CONFIG) APBB Implemented */
#define PM_CONFIG_PBB               (_U_(0x1) << PM_CONFIG_PBB_Pos)
#define PM_CONFIG_PBC_Pos           2            /**< \brief (PM_CONFIG) APBC Implemented */
#define PM_CONFIG_PBC               (_U_(0x1) << PM_CONFIG_PBC_Pos)
#define PM_CONFIG_PBD_Pos           3            /**< \brief (PM_CONFIG) APBD Implemented */
#define PM_CONFIG_PBD               (_U_(0x1) << PM_CONFIG_PBD_Pos)
#define PM_CONFIG_HSBPEVC_Pos       7            /**< \brief (PM_CONFIG) HSB PEVC Clock Implemented */
#define PM_CONFIG_HSBPEVC           (_U_(0x1) << PM_CONFIG_HSBPEVC_Pos)
#define PM_CONFIG_MASK              _U_(0x0000008F) /**< \brief (PM_CONFIG) MASK Register */

/* -------- PM_VERSION : (PM Offset: 0x3FC) (R/  32) Version Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t VERSION:12;       /*!< bit:  0..11  Version number                     */
    uint32_t :4;               /*!< bit: 12..15  Reserved                           */
    uint32_t VARIANT:4;        /*!< bit: 16..19  Variant number                     */
    uint32_t :12;              /*!< bit: 20..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} PM_VERSION_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PM_VERSION_OFFSET           0x3FC        /**< \brief (PM_VERSION offset) Version Register */
#define PM_VERSION_RESETVALUE       _U_(0x00000441); /**< \brief (PM_VERSION reset_value) Version Register */

#define PM_VERSION_VERSION_Pos      0            /**< \brief (PM_VERSION) Version number */
#define PM_VERSION_VERSION_Msk      (_U_(0xFFF) << PM_VERSION_VERSION_Pos)
#define PM_VERSION_VERSION(value)   (PM_VERSION_VERSION_Msk & ((value) << PM_VERSION_VERSION_Pos))
#define PM_VERSION_VARIANT_Pos      16           /**< \brief (PM_VERSION) Variant number */
#define PM_VERSION_VARIANT_Msk      (_U_(0xF) << PM_VERSION_VARIANT_Pos)
#define PM_VERSION_VARIANT(value)   (PM_VERSION_VARIANT_Msk & ((value) << PM_VERSION_VARIANT_Pos))
#define PM_VERSION_MASK             _U_(0x000F0FFF) /**< \brief (PM_VERSION) MASK Register */

/** \brief PM hardware registers */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef struct {
  __IO uint32_t MCCTRL;      /**< \brief Offset: 0x000 (R/W 32) Main Clock Control */
  __IO uint32_t CPUSEL;      /**< \brief Offset: 0x004 (R/W 32) CPU Clock Select */
       RoReg8   Reserved1[0x4];
  __IO uint32_t PBASEL;      /**< \brief Offset: 0x00C (R/W 32) PBA Clock Select */
  __IO uint32_t PBBSEL;      /**< \brief Offset: 0x010 (R/W 32) PBB Clock Select */
  __IO uint32_t PBCSEL;      /**< \brief Offset: 0x014 (R/W 32) PBC Clock Select */
  __IO uint32_t PBDSEL;      /**< \brief Offset: 0x018 (R/W 32) PBD Clock Select */
       RoReg8   Reserved2[0x4];
  __IO uint32_t CPUMASK;     /**< \brief Offset: 0x020 (R/W 32) CPU Mask */
  __IO uint32_t HSBMASK;     /**< \brief Offset: 0x024 (R/W 32) HSB Mask */
  __IO uint32_t PBAMASK;     /**< \brief Offset: 0x028 (R/W 32) PBA Mask */
  __IO uint32_t PBBMASK;     /**< \brief Offset: 0x02C (R/W 32) PBB Mask */
  __IO uint32_t PBCMASK;     /**< \brief Offset: 0x030 (R/W 32) PBC Mask */
  __IO uint32_t PBDMASK;     /**< \brief Offset: 0x034 (R/W 32) PBD Mask */
       RoReg8   Reserved3[0x8];
  __IO uint32_t PBADIVMASK;  /**< \brief Offset: 0x040 (R/W 32) PBA Divided Clock Mask */
       RoReg8   Reserved4[0x10];
  __IO uint32_t CFDCTRL;     /**< \brief Offset: 0x054 (R/W 32) Clock Failure Detector Control */
  __O  uint32_t UNLOCK;      /**< \brief Offset: 0x058 ( /W 32) Unlock Register */
       RoReg8   Reserved5[0x64];
  __O  uint32_t IER;         /**< \brief Offset: 0x0C0 ( /W 32) Interrupt Enable Register */
  __O  uint32_t IDR;         /**< \brief Offset: 0x0C4 ( /W 32) Interrupt Disable Register */
  __I  uint32_t IMR;         /**< \brief Offset: 0x0C8 (R/  32) Interrupt Mask Register */
  __I  uint32_t ISR;         /**< \brief Offset: 0x0CC (R/  32) Interrupt Status Register */
  __O  uint32_t ICR;         /**< \brief Offset: 0x0D0 ( /W 32) Interrupt Clear Register */
  __I  uint32_t SR;          /**< \brief Offset: 0x0D4 (R/  32) Status Register */
       RoReg8   Reserved6[0x88];
  __IO uint32_t PPCR;        /**< \brief Offset: 0x160 (R/W 32) Peripheral Power Control Register */
       RoReg8   Reserved7[0x1C];
  __I  uint32_t RCAUSE;      /**< \brief Offset: 0x180 (R/  32) Reset Cause Register */
  __I  uint32_t WCAUSE;      /**< \brief Offset: 0x184 (R/  32) Wake Cause Register */
  __IO uint32_t AWEN;        /**< \brief Offset: 0x188 (R/W 32) Asynchronous Wake Enable */
       RoReg8   Reserved8[0x4];
  __IO uint32_t OBS;         /**< \brief Offset: 0x190 (R/W 32) Obsvervability */
  __IO uint32_t FASTSLEEP;   /**< \brief Offset: 0x194 (R/W 32) Fast Sleep Register */
       RoReg8   Reserved9[0x260];
  __I  uint32_t CONFIG;      /**< \brief Offset: 0x3F8 (R/  32) Configuration Register */
  __I  uint32_t VERSION;     /**< \brief Offset: 0x3FC (R/  32) Version Register */
} Pm;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

/*@}*/

#endif /* _SAM4L_PM_COMPONENT_ */
