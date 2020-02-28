/**
 * \file
 *
 * \brief Component description for ADCIFE
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

#ifndef _SAM4L_ADCIFE_COMPONENT_
#define _SAM4L_ADCIFE_COMPONENT_

/* ========================================================================== */
/**  SOFTWARE API DEFINITION FOR ADCIFE */
/* ========================================================================== */
/** \addtogroup SAM4L_ADCIFE ADC controller interface */
/*@{*/

#define ADCIFE_I7569
#define REV_ADCIFE                  0x100

/* -------- ADCIFE_CR : (ADCIFE Offset: 0x00) ( /W 32) Control Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t SWRST:1;          /*!< bit:      0  Software reset                     */
    uint32_t TSTOP:1;          /*!< bit:      1  Internal timer stop bit            */
    uint32_t TSTART:1;         /*!< bit:      2  Internal timer start bit           */
    uint32_t STRIG:1;          /*!< bit:      3  Sequencer trigger                  */
    uint32_t REFBUFEN:1;       /*!< bit:      4  Reference buffer enable            */
    uint32_t REFBUFDIS:1;      /*!< bit:      5  Reference buffer disable           */
    uint32_t :2;               /*!< bit:  6.. 7  Reserved                           */
    uint32_t EN:1;             /*!< bit:      8  ADCIFD enable                      */
    uint32_t DIS:1;            /*!< bit:      9  ADCIFD disable                     */
    uint32_t BGREQEN:1;        /*!< bit:     10  Bandgap buffer request enable      */
    uint32_t BGREQDIS:1;       /*!< bit:     11  Bandgap buffer request disable     */
    uint32_t :20;              /*!< bit: 12..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} ADCIFE_CR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define ADCIFE_CR_OFFSET            0x00         /**< \brief (ADCIFE_CR offset) Control Register */
#define ADCIFE_CR_RESETVALUE        _U_(0x00000000); /**< \brief (ADCIFE_CR reset_value) Control Register */

#define ADCIFE_CR_SWRST_Pos         0            /**< \brief (ADCIFE_CR) Software reset */
#define ADCIFE_CR_SWRST             (_U_(0x1) << ADCIFE_CR_SWRST_Pos)
#define ADCIFE_CR_TSTOP_Pos         1            /**< \brief (ADCIFE_CR) Internal timer stop bit */
#define ADCIFE_CR_TSTOP             (_U_(0x1) << ADCIFE_CR_TSTOP_Pos)
#define ADCIFE_CR_TSTART_Pos        2            /**< \brief (ADCIFE_CR) Internal timer start bit */
#define ADCIFE_CR_TSTART            (_U_(0x1) << ADCIFE_CR_TSTART_Pos)
#define ADCIFE_CR_STRIG_Pos         3            /**< \brief (ADCIFE_CR) Sequencer trigger */
#define ADCIFE_CR_STRIG             (_U_(0x1) << ADCIFE_CR_STRIG_Pos)
#define ADCIFE_CR_REFBUFEN_Pos      4            /**< \brief (ADCIFE_CR) Reference buffer enable */
#define ADCIFE_CR_REFBUFEN          (_U_(0x1) << ADCIFE_CR_REFBUFEN_Pos)
#define ADCIFE_CR_REFBUFDIS_Pos     5            /**< \brief (ADCIFE_CR) Reference buffer disable */
#define ADCIFE_CR_REFBUFDIS         (_U_(0x1) << ADCIFE_CR_REFBUFDIS_Pos)
#define ADCIFE_CR_EN_Pos            8            /**< \brief (ADCIFE_CR) ADCIFD enable */
#define ADCIFE_CR_EN                (_U_(0x1) << ADCIFE_CR_EN_Pos)
#define ADCIFE_CR_DIS_Pos           9            /**< \brief (ADCIFE_CR) ADCIFD disable */
#define ADCIFE_CR_DIS               (_U_(0x1) << ADCIFE_CR_DIS_Pos)
#define ADCIFE_CR_BGREQEN_Pos       10           /**< \brief (ADCIFE_CR) Bandgap buffer request enable */
#define ADCIFE_CR_BGREQEN           (_U_(0x1) << ADCIFE_CR_BGREQEN_Pos)
#define ADCIFE_CR_BGREQDIS_Pos      11           /**< \brief (ADCIFE_CR) Bandgap buffer request disable */
#define ADCIFE_CR_BGREQDIS          (_U_(0x1) << ADCIFE_CR_BGREQDIS_Pos)
#define ADCIFE_CR_MASK              _U_(0x00000F3F) /**< \brief (ADCIFE_CR) MASK Register */

/* -------- ADCIFE_CFG : (ADCIFE Offset: 0x04) (R/W 32) Configuration Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t :1;               /*!< bit:      0  Reserved                           */
    uint32_t REFSEL:3;         /*!< bit:  1.. 3  ADC Reference Selection            */
    uint32_t SPEED:2;          /*!< bit:  4.. 5  ADC current reduction              */
    uint32_t CLKSEL:1;         /*!< bit:      6  Clock Selection for sequencer/ADC cell */
    uint32_t :1;               /*!< bit:      7  Reserved                           */
    uint32_t PRESCAL:3;        /*!< bit:  8..10  Prescaler Rate Selection           */
    uint32_t :21;              /*!< bit: 11..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} ADCIFE_CFG_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define ADCIFE_CFG_OFFSET           0x04         /**< \brief (ADCIFE_CFG offset) Configuration Register */
#define ADCIFE_CFG_RESETVALUE       _U_(0x00000000); /**< \brief (ADCIFE_CFG reset_value) Configuration Register */

#define ADCIFE_CFG_REFSEL_Pos       1            /**< \brief (ADCIFE_CFG) ADC Reference Selection */
#define ADCIFE_CFG_REFSEL_Msk       (_U_(0x7) << ADCIFE_CFG_REFSEL_Pos)
#define ADCIFE_CFG_REFSEL(value)    (ADCIFE_CFG_REFSEL_Msk & ((value) << ADCIFE_CFG_REFSEL_Pos))
#define ADCIFE_CFG_SPEED_Pos        4            /**< \brief (ADCIFE_CFG) ADC current reduction */
#define ADCIFE_CFG_SPEED_Msk        (_U_(0x3) << ADCIFE_CFG_SPEED_Pos)
#define ADCIFE_CFG_SPEED(value)     (ADCIFE_CFG_SPEED_Msk & ((value) << ADCIFE_CFG_SPEED_Pos))
#define ADCIFE_CFG_CLKSEL_Pos       6            /**< \brief (ADCIFE_CFG) Clock Selection for sequencer/ADC cell */
#define ADCIFE_CFG_CLKSEL           (_U_(0x1) << ADCIFE_CFG_CLKSEL_Pos)
#define ADCIFE_CFG_PRESCAL_Pos      8            /**< \brief (ADCIFE_CFG) Prescaler Rate Selection */
#define ADCIFE_CFG_PRESCAL_Msk      (_U_(0x7) << ADCIFE_CFG_PRESCAL_Pos)
#define ADCIFE_CFG_PRESCAL(value)   (ADCIFE_CFG_PRESCAL_Msk & ((value) << ADCIFE_CFG_PRESCAL_Pos))
#define ADCIFE_CFG_MASK             _U_(0x0000077E) /**< \brief (ADCIFE_CFG) MASK Register */

/* -------- ADCIFE_SR : (ADCIFE Offset: 0x08) (R/  32) Status Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t SEOC:1;           /*!< bit:      0  Sequencer end of conversion        */
    uint32_t LOVR:1;           /*!< bit:      1  Sequencer last converted value overrun */
    uint32_t WM:1;             /*!< bit:      2  Window monitor                     */
    uint32_t SMTRG:1;          /*!< bit:      3  Sequencer missed trigger event     */
    uint32_t SUTD:1;           /*!< bit:      4  Start-up time done                 */
    uint32_t TTO:1;            /*!< bit:      5  Timer time-out                     */
    uint32_t :18;              /*!< bit:  6..23  Reserved                           */
    uint32_t EN:1;             /*!< bit:     24  Enable Status                      */
    uint32_t TBUSY:1;          /*!< bit:     25  Timer busy                         */
    uint32_t SBUSY:1;          /*!< bit:     26  Sequencer busy                     */
    uint32_t CBUSY:1;          /*!< bit:     27  Conversion busy                    */
    uint32_t REFBUF:1;         /*!< bit:     28  Reference buffer status            */
    uint32_t :3;               /*!< bit: 29..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} ADCIFE_SR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define ADCIFE_SR_OFFSET            0x08         /**< \brief (ADCIFE_SR offset) Status Register */
#define ADCIFE_SR_RESETVALUE        _U_(0x00000000); /**< \brief (ADCIFE_SR reset_value) Status Register */

#define ADCIFE_SR_SEOC_Pos          0            /**< \brief (ADCIFE_SR) Sequencer end of conversion */
#define ADCIFE_SR_SEOC              (_U_(0x1) << ADCIFE_SR_SEOC_Pos)
#define ADCIFE_SR_LOVR_Pos          1            /**< \brief (ADCIFE_SR) Sequencer last converted value overrun */
#define ADCIFE_SR_LOVR              (_U_(0x1) << ADCIFE_SR_LOVR_Pos)
#define ADCIFE_SR_WM_Pos            2            /**< \brief (ADCIFE_SR) Window monitor */
#define ADCIFE_SR_WM                (_U_(0x1) << ADCIFE_SR_WM_Pos)
#define ADCIFE_SR_SMTRG_Pos         3            /**< \brief (ADCIFE_SR) Sequencer missed trigger event */
#define ADCIFE_SR_SMTRG             (_U_(0x1) << ADCIFE_SR_SMTRG_Pos)
#define ADCIFE_SR_SUTD_Pos          4            /**< \brief (ADCIFE_SR) Start-up time done */
#define ADCIFE_SR_SUTD              (_U_(0x1) << ADCIFE_SR_SUTD_Pos)
#define ADCIFE_SR_TTO_Pos           5            /**< \brief (ADCIFE_SR) Timer time-out */
#define ADCIFE_SR_TTO               (_U_(0x1) << ADCIFE_SR_TTO_Pos)
#define ADCIFE_SR_EN_Pos            24           /**< \brief (ADCIFE_SR) Enable Status */
#define ADCIFE_SR_EN                (_U_(0x1) << ADCIFE_SR_EN_Pos)
#define ADCIFE_SR_TBUSY_Pos         25           /**< \brief (ADCIFE_SR) Timer busy */
#define ADCIFE_SR_TBUSY             (_U_(0x1) << ADCIFE_SR_TBUSY_Pos)
#define ADCIFE_SR_SBUSY_Pos         26           /**< \brief (ADCIFE_SR) Sequencer busy */
#define ADCIFE_SR_SBUSY             (_U_(0x1) << ADCIFE_SR_SBUSY_Pos)
#define ADCIFE_SR_CBUSY_Pos         27           /**< \brief (ADCIFE_SR) Conversion busy */
#define ADCIFE_SR_CBUSY             (_U_(0x1) << ADCIFE_SR_CBUSY_Pos)
#define ADCIFE_SR_REFBUF_Pos        28           /**< \brief (ADCIFE_SR) Reference buffer status */
#define ADCIFE_SR_REFBUF            (_U_(0x1) << ADCIFE_SR_REFBUF_Pos)
#define ADCIFE_SR_MASK              _U_(0x1F00003F) /**< \brief (ADCIFE_SR) MASK Register */

/* -------- ADCIFE_SCR : (ADCIFE Offset: 0x0C) ( /W 32) Status Clear Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t SEOC:1;           /*!< bit:      0  Sequencer end of conversion        */
    uint32_t LOVR:1;           /*!< bit:      1  Sequencer last converted value overrun */
    uint32_t WM:1;             /*!< bit:      2  Window monitor                     */
    uint32_t SMTRG:1;          /*!< bit:      3  Sequencer missed trigger event     */
    uint32_t SUTD:1;           /*!< bit:      4  Start-up time done                 */
    uint32_t TTO:1;            /*!< bit:      5  Timer time-out                     */
    uint32_t :26;              /*!< bit:  6..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} ADCIFE_SCR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define ADCIFE_SCR_OFFSET           0x0C         /**< \brief (ADCIFE_SCR offset) Status Clear Register */
#define ADCIFE_SCR_RESETVALUE       _U_(0x00000000); /**< \brief (ADCIFE_SCR reset_value) Status Clear Register */

#define ADCIFE_SCR_SEOC_Pos         0            /**< \brief (ADCIFE_SCR) Sequencer end of conversion */
#define ADCIFE_SCR_SEOC             (_U_(0x1) << ADCIFE_SCR_SEOC_Pos)
#define ADCIFE_SCR_LOVR_Pos         1            /**< \brief (ADCIFE_SCR) Sequencer last converted value overrun */
#define ADCIFE_SCR_LOVR             (_U_(0x1) << ADCIFE_SCR_LOVR_Pos)
#define ADCIFE_SCR_WM_Pos           2            /**< \brief (ADCIFE_SCR) Window monitor */
#define ADCIFE_SCR_WM               (_U_(0x1) << ADCIFE_SCR_WM_Pos)
#define ADCIFE_SCR_SMTRG_Pos        3            /**< \brief (ADCIFE_SCR) Sequencer missed trigger event */
#define ADCIFE_SCR_SMTRG            (_U_(0x1) << ADCIFE_SCR_SMTRG_Pos)
#define ADCIFE_SCR_SUTD_Pos         4            /**< \brief (ADCIFE_SCR) Start-up time done */
#define ADCIFE_SCR_SUTD             (_U_(0x1) << ADCIFE_SCR_SUTD_Pos)
#define ADCIFE_SCR_TTO_Pos          5            /**< \brief (ADCIFE_SCR) Timer time-out */
#define ADCIFE_SCR_TTO              (_U_(0x1) << ADCIFE_SCR_TTO_Pos)
#define ADCIFE_SCR_MASK             _U_(0x0000003F) /**< \brief (ADCIFE_SCR) MASK Register */

/* -------- ADCIFE_RTS : (ADCIFE Offset: 0x10) (R/W 32) Resistive Touch Screen Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  uint32_t reg;                /*!< Type      used for register access              */
} ADCIFE_RTS_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define ADCIFE_RTS_OFFSET           0x10         /**< \brief (ADCIFE_RTS offset) Resistive Touch Screen Register */
#define ADCIFE_RTS_RESETVALUE       _U_(0x00000000); /**< \brief (ADCIFE_RTS reset_value) Resistive Touch Screen Register */

#define ADCIFE_RTS_MASK             _U_(0x00000000) /**< \brief (ADCIFE_RTS) MASK Register */

/* -------- ADCIFE_SEQCFG : (ADCIFE Offset: 0x14) (R/W 32) Sequencer Configuration Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t HWLA:1;           /*!< bit:      0  Half word left adjust              */
    uint32_t :1;               /*!< bit:      1  Reserved                           */
    uint32_t BIPOLAR:1;        /*!< bit:      2  Bipolar Mode                       */
    uint32_t :1;               /*!< bit:      3  Reserved                           */
    uint32_t GAIN:3;           /*!< bit:  4.. 6  Gain factor                        */
    uint32_t GCOMP:1;          /*!< bit:      7  Gain Compensation                  */
    uint32_t TRGSEL:3;         /*!< bit:  8..10  Trigger selection                  */
    uint32_t :1;               /*!< bit:     11  Reserved                           */
    uint32_t RES:1;            /*!< bit:     12  Resolution                         */
    uint32_t :1;               /*!< bit:     13  Reserved                           */
    uint32_t INTERNAL:2;       /*!< bit: 14..15  Internal Voltage Source Selection  */
    uint32_t MUXPOS:4;         /*!< bit: 16..19  MUX selection on Positive ADC input channel */
    uint32_t MUXNEG:3;         /*!< bit: 20..22  MUX selection on Negative ADC input channel */
    uint32_t :5;               /*!< bit: 23..27  Reserved                           */
    uint32_t ZOOMRANGE:3;      /*!< bit: 28..30  Zoom shift/unipolar reference source selection */
    uint32_t :1;               /*!< bit:     31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} ADCIFE_SEQCFG_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define ADCIFE_SEQCFG_OFFSET        0x14         /**< \brief (ADCIFE_SEQCFG offset) Sequencer Configuration Register */
#define ADCIFE_SEQCFG_RESETVALUE    _U_(0x00000000); /**< \brief (ADCIFE_SEQCFG reset_value) Sequencer Configuration Register */

#define ADCIFE_SEQCFG_HWLA_Pos      0            /**< \brief (ADCIFE_SEQCFG) Half word left adjust */
#define ADCIFE_SEQCFG_HWLA          (_U_(0x1) << ADCIFE_SEQCFG_HWLA_Pos)
#define ADCIFE_SEQCFG_BIPOLAR_Pos   2            /**< \brief (ADCIFE_SEQCFG) Bipolar Mode */
#define ADCIFE_SEQCFG_BIPOLAR       (_U_(0x1) << ADCIFE_SEQCFG_BIPOLAR_Pos)
#define ADCIFE_SEQCFG_GAIN_Pos      4            /**< \brief (ADCIFE_SEQCFG) Gain factor */
#define ADCIFE_SEQCFG_GAIN_Msk      (_U_(0x7) << ADCIFE_SEQCFG_GAIN_Pos)
#define ADCIFE_SEQCFG_GAIN(value)   (ADCIFE_SEQCFG_GAIN_Msk & ((value) << ADCIFE_SEQCFG_GAIN_Pos))
#define ADCIFE_SEQCFG_GCOMP_Pos     7            /**< \brief (ADCIFE_SEQCFG) Gain Compensation */
#define ADCIFE_SEQCFG_GCOMP         (_U_(0x1) << ADCIFE_SEQCFG_GCOMP_Pos)
#define ADCIFE_SEQCFG_TRGSEL_Pos    8            /**< \brief (ADCIFE_SEQCFG) Trigger selection */
#define ADCIFE_SEQCFG_TRGSEL_Msk    (_U_(0x7) << ADCIFE_SEQCFG_TRGSEL_Pos)
#define ADCIFE_SEQCFG_TRGSEL(value) (ADCIFE_SEQCFG_TRGSEL_Msk & ((value) << ADCIFE_SEQCFG_TRGSEL_Pos))
#define ADCIFE_SEQCFG_RES_Pos       12           /**< \brief (ADCIFE_SEQCFG) Resolution */
#define ADCIFE_SEQCFG_RES           (_U_(0x1) << ADCIFE_SEQCFG_RES_Pos)
#define ADCIFE_SEQCFG_INTERNAL_Pos  14           /**< \brief (ADCIFE_SEQCFG) Internal Voltage Source Selection */
#define ADCIFE_SEQCFG_INTERNAL_Msk  (_U_(0x3) << ADCIFE_SEQCFG_INTERNAL_Pos)
#define ADCIFE_SEQCFG_INTERNAL(value) (ADCIFE_SEQCFG_INTERNAL_Msk & ((value) << ADCIFE_SEQCFG_INTERNAL_Pos))
#define ADCIFE_SEQCFG_MUXPOS_Pos    16           /**< \brief (ADCIFE_SEQCFG) MUX selection on Positive ADC input channel */
#define ADCIFE_SEQCFG_MUXPOS_Msk    (_U_(0xF) << ADCIFE_SEQCFG_MUXPOS_Pos)
#define ADCIFE_SEQCFG_MUXPOS(value) (ADCIFE_SEQCFG_MUXPOS_Msk & ((value) << ADCIFE_SEQCFG_MUXPOS_Pos))
#define ADCIFE_SEQCFG_MUXNEG_Pos    20           /**< \brief (ADCIFE_SEQCFG) MUX selection on Negative ADC input channel */
#define ADCIFE_SEQCFG_MUXNEG_Msk    (_U_(0x7) << ADCIFE_SEQCFG_MUXNEG_Pos)
#define ADCIFE_SEQCFG_MUXNEG(value) (ADCIFE_SEQCFG_MUXNEG_Msk & ((value) << ADCIFE_SEQCFG_MUXNEG_Pos))
#define ADCIFE_SEQCFG_ZOOMRANGE_Pos 28           /**< \brief (ADCIFE_SEQCFG) Zoom shift/unipolar reference source selection */
#define ADCIFE_SEQCFG_ZOOMRANGE_Msk (_U_(0x7) << ADCIFE_SEQCFG_ZOOMRANGE_Pos)
#define ADCIFE_SEQCFG_ZOOMRANGE(value) (ADCIFE_SEQCFG_ZOOMRANGE_Msk & ((value) << ADCIFE_SEQCFG_ZOOMRANGE_Pos))
#define ADCIFE_SEQCFG_MASK          _U_(0x707FD7F5) /**< \brief (ADCIFE_SEQCFG) MASK Register */

/* -------- ADCIFE_CDMA : (ADCIFE Offset: 0x18) ( /W 32) Configuration Direct Memory Access Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct { // FIRST_DMA_WORD mode
    uint32_t HWLA:1;           /*!< bit:      0  Half word left adjust              */
    uint32_t :1;               /*!< bit:      1  Reserved                           */
    uint32_t BIPOLAR:1;        /*!< bit:      2  Bipolar Mode                       */
    uint32_t STRIG:1;          /*!< bit:      3  Sequencer Trigger Event            */
    uint32_t GAIN:3;           /*!< bit:  4.. 6  Gain factor                        */
    uint32_t GCOMP:1;          /*!< bit:      7  Gain Compensation                  */
    uint32_t ENSTUP:1;         /*!< bit:      8  Enable Start-Up Time               */
    uint32_t :3;               /*!< bit:  9..11  Reserved                           */
    uint32_t RES:1;            /*!< bit:     12  Resolution                         */
    uint32_t TSS:1;            /*!< bit:     13  Internal timer start or stop bit   */
    uint32_t INTERNAL:2;       /*!< bit: 14..15  Internal Voltage Source Selection  */
    uint32_t MUXPOS:4;         /*!< bit: 16..19  MUX selection on Positive ADC input channel */
    uint32_t MUXNEG:3;         /*!< bit: 20..22  MUX selection on Negative ADC input channel */
    uint32_t :5;               /*!< bit: 23..27  Reserved                           */
    uint32_t ZOOMRANGE:3;      /*!< bit: 28..30  Zoom shift/unipolar reference source selection */
    uint32_t DW:1;             /*!< bit:     31  Double Word transmitting           */
  } FIRST_DMA_WORD;            /*!< Structure used for FIRST_DMA_WORD               */
  struct { // SECOND_DMA_WORD mode
    uint32_t LT:12;            /*!< bit:  0..11  Low Threshold                      */
    uint32_t WM:3;             /*!< bit: 12..14  Window Monitor Mode                */
    uint32_t :1;               /*!< bit:     15  Reserved                           */
    uint32_t HT:12;            /*!< bit: 16..27  High Threshold                     */
    uint32_t :3;               /*!< bit: 28..30  Reserved                           */
    uint32_t DW:1;             /*!< bit:     31  Double Word transmitting           */
  } SECOND_DMA_WORD;           /*!< Structure used for SECOND_DMA_WORD              */
  uint32_t reg;                /*!< Type      used for register access              */
} ADCIFE_CDMA_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define ADCIFE_CDMA_OFFSET          0x18         /**< \brief (ADCIFE_CDMA offset) Configuration Direct Memory Access Register */
#define ADCIFE_CDMA_RESETVALUE      _U_(0x00000000); /**< \brief (ADCIFE_CDMA reset_value) Configuration Direct Memory Access Register */

// FIRST_DMA_WORD mode
#define ADCIFE_CDMA_FIRST_DMA_WORD_HWLA_Pos 0            /**< \brief (ADCIFE_CDMA_FIRST_DMA_WORD) Half word left adjust */
#define ADCIFE_CDMA_FIRST_DMA_WORD_HWLA (_U_(0x1) << ADCIFE_CDMA_FIRST_DMA_WORD_HWLA_Pos)
#define ADCIFE_CDMA_FIRST_DMA_WORD_BIPOLAR_Pos 2            /**< \brief (ADCIFE_CDMA_FIRST_DMA_WORD) Bipolar Mode */
#define ADCIFE_CDMA_FIRST_DMA_WORD_BIPOLAR (_U_(0x1) << ADCIFE_CDMA_FIRST_DMA_WORD_BIPOLAR_Pos)
#define ADCIFE_CDMA_FIRST_DMA_WORD_STRIG_Pos 3            /**< \brief (ADCIFE_CDMA_FIRST_DMA_WORD) Sequencer Trigger Event */
#define ADCIFE_CDMA_FIRST_DMA_WORD_STRIG (_U_(0x1) << ADCIFE_CDMA_FIRST_DMA_WORD_STRIG_Pos)
#define ADCIFE_CDMA_FIRST_DMA_WORD_GAIN_Pos 4            /**< \brief (ADCIFE_CDMA_FIRST_DMA_WORD) Gain factor */
#define ADCIFE_CDMA_FIRST_DMA_WORD_GAIN_Msk (_U_(0x7) << ADCIFE_CDMA_FIRST_DMA_WORD_GAIN_Pos)
#define ADCIFE_CDMA_FIRST_DMA_WORD_GAIN(value) (ADCIFE_CDMA_FIRST_DMA_WORD_GAIN_Msk & ((value) << ADCIFE_CDMA_FIRST_DMA_WORD_GAIN_Pos))
#define ADCIFE_CDMA_FIRST_DMA_WORD_GCOMP_Pos 7            /**< \brief (ADCIFE_CDMA_FIRST_DMA_WORD) Gain Compensation */
#define ADCIFE_CDMA_FIRST_DMA_WORD_GCOMP (_U_(0x1) << ADCIFE_CDMA_FIRST_DMA_WORD_GCOMP_Pos)
#define ADCIFE_CDMA_FIRST_DMA_WORD_ENSTUP_Pos 8            /**< \brief (ADCIFE_CDMA_FIRST_DMA_WORD) Enable Start-Up Time */
#define ADCIFE_CDMA_FIRST_DMA_WORD_ENSTUP (_U_(0x1) << ADCIFE_CDMA_FIRST_DMA_WORD_ENSTUP_Pos)
#define ADCIFE_CDMA_FIRST_DMA_WORD_RES_Pos 12           /**< \brief (ADCIFE_CDMA_FIRST_DMA_WORD) Resolution */
#define ADCIFE_CDMA_FIRST_DMA_WORD_RES (_U_(0x1) << ADCIFE_CDMA_FIRST_DMA_WORD_RES_Pos)
#define ADCIFE_CDMA_FIRST_DMA_WORD_TSS_Pos 13           /**< \brief (ADCIFE_CDMA_FIRST_DMA_WORD) Internal timer start or stop bit */
#define ADCIFE_CDMA_FIRST_DMA_WORD_TSS (_U_(0x1) << ADCIFE_CDMA_FIRST_DMA_WORD_TSS_Pos)
#define ADCIFE_CDMA_FIRST_DMA_WORD_INTERNAL_Pos 14           /**< \brief (ADCIFE_CDMA_FIRST_DMA_WORD) Internal Voltage Source Selection */
#define ADCIFE_CDMA_FIRST_DMA_WORD_INTERNAL_Msk (_U_(0x3) << ADCIFE_CDMA_FIRST_DMA_WORD_INTERNAL_Pos)
#define ADCIFE_CDMA_FIRST_DMA_WORD_INTERNAL(value) (ADCIFE_CDMA_FIRST_DMA_WORD_INTERNAL_Msk & ((value) << ADCIFE_CDMA_FIRST_DMA_WORD_INTERNAL_Pos))
#define ADCIFE_CDMA_FIRST_DMA_WORD_MUXPOS_Pos 16           /**< \brief (ADCIFE_CDMA_FIRST_DMA_WORD) MUX selection on Positive ADC input channel */
#define ADCIFE_CDMA_FIRST_DMA_WORD_MUXPOS_Msk (_U_(0xF) << ADCIFE_CDMA_FIRST_DMA_WORD_MUXPOS_Pos)
#define ADCIFE_CDMA_FIRST_DMA_WORD_MUXPOS(value) (ADCIFE_CDMA_FIRST_DMA_WORD_MUXPOS_Msk & ((value) << ADCIFE_CDMA_FIRST_DMA_WORD_MUXPOS_Pos))
#define ADCIFE_CDMA_FIRST_DMA_WORD_MUXNEG_Pos 20           /**< \brief (ADCIFE_CDMA_FIRST_DMA_WORD) MUX selection on Negative ADC input channel */
#define ADCIFE_CDMA_FIRST_DMA_WORD_MUXNEG_Msk (_U_(0x7) << ADCIFE_CDMA_FIRST_DMA_WORD_MUXNEG_Pos)
#define ADCIFE_CDMA_FIRST_DMA_WORD_MUXNEG(value) (ADCIFE_CDMA_FIRST_DMA_WORD_MUXNEG_Msk & ((value) << ADCIFE_CDMA_FIRST_DMA_WORD_MUXNEG_Pos))
#define ADCIFE_CDMA_FIRST_DMA_WORD_ZOOMRANGE_Pos 28           /**< \brief (ADCIFE_CDMA_FIRST_DMA_WORD) Zoom shift/unipolar reference source selection */
#define ADCIFE_CDMA_FIRST_DMA_WORD_ZOOMRANGE_Msk (_U_(0x7) << ADCIFE_CDMA_FIRST_DMA_WORD_ZOOMRANGE_Pos)
#define ADCIFE_CDMA_FIRST_DMA_WORD_ZOOMRANGE(value) (ADCIFE_CDMA_FIRST_DMA_WORD_ZOOMRANGE_Msk & ((value) << ADCIFE_CDMA_FIRST_DMA_WORD_ZOOMRANGE_Pos))
#define ADCIFE_CDMA_FIRST_DMA_WORD_DW_Pos 31           /**< \brief (ADCIFE_CDMA_FIRST_DMA_WORD) Double Word transmitting */
#define ADCIFE_CDMA_FIRST_DMA_WORD_DW (_U_(0x1) << ADCIFE_CDMA_FIRST_DMA_WORD_DW_Pos)
#define ADCIFE_CDMA_FIRST_DMA_WORD_MASK _U_(0xF07FF1FD) /**< \brief (ADCIFE_CDMA_FIRST_DMA_WORD) MASK Register */

// SECOND_DMA_WORD mode
#define ADCIFE_CDMA_SECOND_DMA_WORD_LT_Pos 0            /**< \brief (ADCIFE_CDMA_SECOND_DMA_WORD) Low Threshold */
#define ADCIFE_CDMA_SECOND_DMA_WORD_LT_Msk (_U_(0xFFF) << ADCIFE_CDMA_SECOND_DMA_WORD_LT_Pos)
#define ADCIFE_CDMA_SECOND_DMA_WORD_LT(value) (ADCIFE_CDMA_SECOND_DMA_WORD_LT_Msk & ((value) << ADCIFE_CDMA_SECOND_DMA_WORD_LT_Pos))
#define ADCIFE_CDMA_SECOND_DMA_WORD_WM_Pos 12           /**< \brief (ADCIFE_CDMA_SECOND_DMA_WORD) Window Monitor Mode */
#define ADCIFE_CDMA_SECOND_DMA_WORD_WM_Msk (_U_(0x7) << ADCIFE_CDMA_SECOND_DMA_WORD_WM_Pos)
#define ADCIFE_CDMA_SECOND_DMA_WORD_WM(value) (ADCIFE_CDMA_SECOND_DMA_WORD_WM_Msk & ((value) << ADCIFE_CDMA_SECOND_DMA_WORD_WM_Pos))
#define ADCIFE_CDMA_SECOND_DMA_WORD_HT_Pos 16           /**< \brief (ADCIFE_CDMA_SECOND_DMA_WORD) High Threshold */
#define ADCIFE_CDMA_SECOND_DMA_WORD_HT_Msk (_U_(0xFFF) << ADCIFE_CDMA_SECOND_DMA_WORD_HT_Pos)
#define ADCIFE_CDMA_SECOND_DMA_WORD_HT(value) (ADCIFE_CDMA_SECOND_DMA_WORD_HT_Msk & ((value) << ADCIFE_CDMA_SECOND_DMA_WORD_HT_Pos))
#define ADCIFE_CDMA_SECOND_DMA_WORD_DW_Pos 31           /**< \brief (ADCIFE_CDMA_SECOND_DMA_WORD) Double Word transmitting */
#define ADCIFE_CDMA_SECOND_DMA_WORD_DW (_U_(0x1) << ADCIFE_CDMA_SECOND_DMA_WORD_DW_Pos)
#define ADCIFE_CDMA_SECOND_DMA_WORD_MASK _U_(0x8FFF7FFF) /**< \brief (ADCIFE_CDMA_SECOND_DMA_WORD) MASK Register */

// Any mode
#define ADCIFE_CDMA_HWLA_Pos        0            /**< \brief (ADCIFE_CDMA) Half word left adjust */
#define ADCIFE_CDMA_HWLA            (_U_(0x1) << ADCIFE_CDMA_HWLA_Pos)
#define ADCIFE_CDMA_LT_Pos          0            /**< \brief (ADCIFE_CDMA) Low Threshold */
#define ADCIFE_CDMA_LT_Msk          (_U_(0xFFF) << ADCIFE_CDMA_LT_Pos)
#define ADCIFE_CDMA_LT(value)       (ADCIFE_CDMA_LT_Msk & ((value) << ADCIFE_CDMA_LT_Pos))
#define ADCIFE_CDMA_BIPOLAR_Pos     2            /**< \brief (ADCIFE_CDMA) Bipolar Mode */
#define ADCIFE_CDMA_BIPOLAR         (_U_(0x1) << ADCIFE_CDMA_BIPOLAR_Pos)
#define ADCIFE_CDMA_STRIG_Pos       3            /**< \brief (ADCIFE_CDMA) Sequencer Trigger Event */
#define ADCIFE_CDMA_STRIG           (_U_(0x1) << ADCIFE_CDMA_STRIG_Pos)
#define ADCIFE_CDMA_GAIN_Pos        4            /**< \brief (ADCIFE_CDMA) Gain factor */
#define ADCIFE_CDMA_GAIN_Msk        (_U_(0x7) << ADCIFE_CDMA_GAIN_Pos)
#define ADCIFE_CDMA_GAIN(value)     (ADCIFE_CDMA_GAIN_Msk & ((value) << ADCIFE_CDMA_GAIN_Pos))
#define ADCIFE_CDMA_GCOMP_Pos       7            /**< \brief (ADCIFE_CDMA) Gain Compensation */
#define ADCIFE_CDMA_GCOMP           (_U_(0x1) << ADCIFE_CDMA_GCOMP_Pos)
#define ADCIFE_CDMA_ENSTUP_Pos      8            /**< \brief (ADCIFE_CDMA) Enable Start-Up Time */
#define ADCIFE_CDMA_ENSTUP          (_U_(0x1) << ADCIFE_CDMA_ENSTUP_Pos)
#define ADCIFE_CDMA_RES_Pos         12           /**< \brief (ADCIFE_CDMA) Resolution */
#define ADCIFE_CDMA_RES             (_U_(0x1) << ADCIFE_CDMA_RES_Pos)
#define ADCIFE_CDMA_WM_Pos          12           /**< \brief (ADCIFE_CDMA) Window Monitor Mode */
#define ADCIFE_CDMA_WM_Msk          (_U_(0x7) << ADCIFE_CDMA_WM_Pos)
#define ADCIFE_CDMA_WM(value)       (ADCIFE_CDMA_WM_Msk & ((value) << ADCIFE_CDMA_WM_Pos))
#define ADCIFE_CDMA_TSS_Pos         13           /**< \brief (ADCIFE_CDMA) Internal timer start or stop bit */
#define ADCIFE_CDMA_TSS             (_U_(0x1) << ADCIFE_CDMA_TSS_Pos)
#define ADCIFE_CDMA_INTERNAL_Pos    14           /**< \brief (ADCIFE_CDMA) Internal Voltage Source Selection */
#define ADCIFE_CDMA_INTERNAL_Msk    (_U_(0x3) << ADCIFE_CDMA_INTERNAL_Pos)
#define ADCIFE_CDMA_INTERNAL(value) (ADCIFE_CDMA_INTERNAL_Msk & ((value) << ADCIFE_CDMA_INTERNAL_Pos))
#define ADCIFE_CDMA_MUXPOS_Pos      16           /**< \brief (ADCIFE_CDMA) MUX selection on Positive ADC input channel */
#define ADCIFE_CDMA_MUXPOS_Msk      (_U_(0xF) << ADCIFE_CDMA_MUXPOS_Pos)
#define ADCIFE_CDMA_MUXPOS(value)   (ADCIFE_CDMA_MUXPOS_Msk & ((value) << ADCIFE_CDMA_MUXPOS_Pos))
#define ADCIFE_CDMA_HT_Pos          16           /**< \brief (ADCIFE_CDMA) High Threshold */
#define ADCIFE_CDMA_HT_Msk          (_U_(0xFFF) << ADCIFE_CDMA_HT_Pos)
#define ADCIFE_CDMA_HT(value)       (ADCIFE_CDMA_HT_Msk & ((value) << ADCIFE_CDMA_HT_Pos))
#define ADCIFE_CDMA_MUXNEG_Pos      20           /**< \brief (ADCIFE_CDMA) MUX selection on Negative ADC input channel */
#define ADCIFE_CDMA_MUXNEG_Msk      (_U_(0x7) << ADCIFE_CDMA_MUXNEG_Pos)
#define ADCIFE_CDMA_MUXNEG(value)   (ADCIFE_CDMA_MUXNEG_Msk & ((value) << ADCIFE_CDMA_MUXNEG_Pos))
#define ADCIFE_CDMA_ZOOMRANGE_Pos   28           /**< \brief (ADCIFE_CDMA) Zoom shift/unipolar reference source selection */
#define ADCIFE_CDMA_ZOOMRANGE_Msk   (_U_(0x7) << ADCIFE_CDMA_ZOOMRANGE_Pos)
#define ADCIFE_CDMA_ZOOMRANGE(value) (ADCIFE_CDMA_ZOOMRANGE_Msk & ((value) << ADCIFE_CDMA_ZOOMRANGE_Pos))
#define ADCIFE_CDMA_DW_Pos          31           /**< \brief (ADCIFE_CDMA) Double Word transmitting */
#define ADCIFE_CDMA_DW              (_U_(0x1) << ADCIFE_CDMA_DW_Pos)
#define ADCIFE_CDMA_MASK            _U_(0xFFFFFFFF) /**< \brief (ADCIFE_CDMA) MASK Register */

/* -------- ADCIFE_TIM : (ADCIFE Offset: 0x1C) (R/W 32) Timing Configuration Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t STARTUP:5;        /*!< bit:  0.. 4  Startup time                       */
    uint32_t :3;               /*!< bit:  5.. 7  Reserved                           */
    uint32_t ENSTUP:1;         /*!< bit:      8  Enable Startup                     */
    uint32_t :23;              /*!< bit:  9..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} ADCIFE_TIM_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define ADCIFE_TIM_OFFSET           0x1C         /**< \brief (ADCIFE_TIM offset) Timing Configuration Register */
#define ADCIFE_TIM_RESETVALUE       _U_(0x00000000); /**< \brief (ADCIFE_TIM reset_value) Timing Configuration Register */

#define ADCIFE_TIM_STARTUP_Pos      0            /**< \brief (ADCIFE_TIM) Startup time */
#define ADCIFE_TIM_STARTUP_Msk      (_U_(0x1F) << ADCIFE_TIM_STARTUP_Pos)
#define ADCIFE_TIM_STARTUP(value)   (ADCIFE_TIM_STARTUP_Msk & ((value) << ADCIFE_TIM_STARTUP_Pos))
#define ADCIFE_TIM_ENSTUP_Pos       8            /**< \brief (ADCIFE_TIM) Enable Startup */
#define ADCIFE_TIM_ENSTUP           (_U_(0x1) << ADCIFE_TIM_ENSTUP_Pos)
#define ADCIFE_TIM_MASK             _U_(0x0000011F) /**< \brief (ADCIFE_TIM) MASK Register */

/* -------- ADCIFE_ITIMER : (ADCIFE Offset: 0x20) (R/W 32) Internal Timer Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t ITMC:16;          /*!< bit:  0..15  Internal timer max counter         */
    uint32_t :16;              /*!< bit: 16..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} ADCIFE_ITIMER_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define ADCIFE_ITIMER_OFFSET        0x20         /**< \brief (ADCIFE_ITIMER offset) Internal Timer Register */
#define ADCIFE_ITIMER_RESETVALUE    _U_(0x00000000); /**< \brief (ADCIFE_ITIMER reset_value) Internal Timer Register */

#define ADCIFE_ITIMER_ITMC_Pos      0            /**< \brief (ADCIFE_ITIMER) Internal timer max counter */
#define ADCIFE_ITIMER_ITMC_Msk      (_U_(0xFFFF) << ADCIFE_ITIMER_ITMC_Pos)
#define ADCIFE_ITIMER_ITMC(value)   (ADCIFE_ITIMER_ITMC_Msk & ((value) << ADCIFE_ITIMER_ITMC_Pos))
#define ADCIFE_ITIMER_MASK          _U_(0x0000FFFF) /**< \brief (ADCIFE_ITIMER) MASK Register */

/* -------- ADCIFE_WCFG : (ADCIFE Offset: 0x24) (R/W 32) Window Monitor Configuration Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t :12;              /*!< bit:  0..11  Reserved                           */
    uint32_t WM:3;             /*!< bit: 12..14  Window Monitor Mode                */
    uint32_t :17;              /*!< bit: 15..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} ADCIFE_WCFG_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define ADCIFE_WCFG_OFFSET          0x24         /**< \brief (ADCIFE_WCFG offset) Window Monitor Configuration Register */
#define ADCIFE_WCFG_RESETVALUE      _U_(0x00000000); /**< \brief (ADCIFE_WCFG reset_value) Window Monitor Configuration Register */

#define ADCIFE_WCFG_WM_Pos          12           /**< \brief (ADCIFE_WCFG) Window Monitor Mode */
#define ADCIFE_WCFG_WM_Msk          (_U_(0x7) << ADCIFE_WCFG_WM_Pos)
#define ADCIFE_WCFG_WM(value)       (ADCIFE_WCFG_WM_Msk & ((value) << ADCIFE_WCFG_WM_Pos))
#define ADCIFE_WCFG_MASK            _U_(0x00007000) /**< \brief (ADCIFE_WCFG) MASK Register */

/* -------- ADCIFE_WTH : (ADCIFE Offset: 0x28) (R/W 32) Window Monitor Threshold Configuration Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t LT:12;            /*!< bit:  0..11  Low threshold                      */
    uint32_t :4;               /*!< bit: 12..15  Reserved                           */
    uint32_t HT:12;            /*!< bit: 16..27  High Threshold                     */
    uint32_t :4;               /*!< bit: 28..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} ADCIFE_WTH_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define ADCIFE_WTH_OFFSET           0x28         /**< \brief (ADCIFE_WTH offset) Window Monitor Threshold Configuration Register */
#define ADCIFE_WTH_RESETVALUE       _U_(0x00000000); /**< \brief (ADCIFE_WTH reset_value) Window Monitor Threshold Configuration Register */

#define ADCIFE_WTH_LT_Pos           0            /**< \brief (ADCIFE_WTH) Low threshold */
#define ADCIFE_WTH_LT_Msk           (_U_(0xFFF) << ADCIFE_WTH_LT_Pos)
#define ADCIFE_WTH_LT(value)        (ADCIFE_WTH_LT_Msk & ((value) << ADCIFE_WTH_LT_Pos))
#define ADCIFE_WTH_HT_Pos           16           /**< \brief (ADCIFE_WTH) High Threshold */
#define ADCIFE_WTH_HT_Msk           (_U_(0xFFF) << ADCIFE_WTH_HT_Pos)
#define ADCIFE_WTH_HT(value)        (ADCIFE_WTH_HT_Msk & ((value) << ADCIFE_WTH_HT_Pos))
#define ADCIFE_WTH_MASK             _U_(0x0FFF0FFF) /**< \brief (ADCIFE_WTH) MASK Register */

/* -------- ADCIFE_LCV : (ADCIFE Offset: 0x2C) (R/  32) Sequencer Last Converted Value Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t LCV:16;           /*!< bit:  0..15  Last converted value               */
    uint32_t LCPC:4;           /*!< bit: 16..19  Last converted positive channel    */
    uint32_t LCNC:3;           /*!< bit: 20..22  Last converted negative channel    */
    uint32_t :9;               /*!< bit: 23..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} ADCIFE_LCV_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define ADCIFE_LCV_OFFSET           0x2C         /**< \brief (ADCIFE_LCV offset) Sequencer Last Converted Value Register */
#define ADCIFE_LCV_RESETVALUE       _U_(0x00000000); /**< \brief (ADCIFE_LCV reset_value) Sequencer Last Converted Value Register */

#define ADCIFE_LCV_LCV_Pos          0            /**< \brief (ADCIFE_LCV) Last converted value */
#define ADCIFE_LCV_LCV_Msk          (_U_(0xFFFF) << ADCIFE_LCV_LCV_Pos)
#define ADCIFE_LCV_LCV(value)       (ADCIFE_LCV_LCV_Msk & ((value) << ADCIFE_LCV_LCV_Pos))
#define ADCIFE_LCV_LCPC_Pos         16           /**< \brief (ADCIFE_LCV) Last converted positive channel */
#define ADCIFE_LCV_LCPC_Msk         (_U_(0xF) << ADCIFE_LCV_LCPC_Pos)
#define ADCIFE_LCV_LCPC(value)      (ADCIFE_LCV_LCPC_Msk & ((value) << ADCIFE_LCV_LCPC_Pos))
#define ADCIFE_LCV_LCNC_Pos         20           /**< \brief (ADCIFE_LCV) Last converted negative channel */
#define ADCIFE_LCV_LCNC_Msk         (_U_(0x7) << ADCIFE_LCV_LCNC_Pos)
#define ADCIFE_LCV_LCNC(value)      (ADCIFE_LCV_LCNC_Msk & ((value) << ADCIFE_LCV_LCNC_Pos))
#define ADCIFE_LCV_MASK             _U_(0x007FFFFF) /**< \brief (ADCIFE_LCV) MASK Register */

/* -------- ADCIFE_IER : (ADCIFE Offset: 0x30) ( /W 32) Interrupt Enable Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t SEOC:1;           /*!< bit:      0  Sequencer end of conversion Interrupt Enable */
    uint32_t LOVR:1;           /*!< bit:      1  Sequencer last converted value overrun Interrupt Enable */
    uint32_t WM:1;             /*!< bit:      2  Window monitor Interrupt Enable    */
    uint32_t SMTRG:1;          /*!< bit:      3  Sequencer missed trigger event Interrupt Enable */
    uint32_t :1;               /*!< bit:      4  Reserved                           */
    uint32_t TTO:1;            /*!< bit:      5  Timer time-out Interrupt Enable    */
    uint32_t :26;              /*!< bit:  6..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} ADCIFE_IER_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define ADCIFE_IER_OFFSET           0x30         /**< \brief (ADCIFE_IER offset) Interrupt Enable Register */
#define ADCIFE_IER_RESETVALUE       _U_(0x00000000); /**< \brief (ADCIFE_IER reset_value) Interrupt Enable Register */

#define ADCIFE_IER_SEOC_Pos         0            /**< \brief (ADCIFE_IER) Sequencer end of conversion Interrupt Enable */
#define ADCIFE_IER_SEOC             (_U_(0x1) << ADCIFE_IER_SEOC_Pos)
#define ADCIFE_IER_LOVR_Pos         1            /**< \brief (ADCIFE_IER) Sequencer last converted value overrun Interrupt Enable */
#define ADCIFE_IER_LOVR             (_U_(0x1) << ADCIFE_IER_LOVR_Pos)
#define ADCIFE_IER_WM_Pos           2            /**< \brief (ADCIFE_IER) Window monitor Interrupt Enable */
#define ADCIFE_IER_WM               (_U_(0x1) << ADCIFE_IER_WM_Pos)
#define ADCIFE_IER_SMTRG_Pos        3            /**< \brief (ADCIFE_IER) Sequencer missed trigger event Interrupt Enable */
#define ADCIFE_IER_SMTRG            (_U_(0x1) << ADCIFE_IER_SMTRG_Pos)
#define ADCIFE_IER_TTO_Pos          5            /**< \brief (ADCIFE_IER) Timer time-out Interrupt Enable */
#define ADCIFE_IER_TTO              (_U_(0x1) << ADCIFE_IER_TTO_Pos)
#define ADCIFE_IER_MASK             _U_(0x0000002F) /**< \brief (ADCIFE_IER) MASK Register */

/* -------- ADCIFE_IDR : (ADCIFE Offset: 0x34) ( /W 32) Interrupt Disable Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t SEOC:1;           /*!< bit:      0  Sequencer end of conversion Interrupt Disable */
    uint32_t LOVR:1;           /*!< bit:      1  Sequencer last converted value overrun Interrupt Disable */
    uint32_t WM:1;             /*!< bit:      2  Window monitor Interrupt Disable   */
    uint32_t SMTRG:1;          /*!< bit:      3  Sequencer missed trigger event Interrupt Disable */
    uint32_t :1;               /*!< bit:      4  Reserved                           */
    uint32_t TTO:1;            /*!< bit:      5  Timer time-out Interrupt Disable   */
    uint32_t :26;              /*!< bit:  6..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} ADCIFE_IDR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define ADCIFE_IDR_OFFSET           0x34         /**< \brief (ADCIFE_IDR offset) Interrupt Disable Register */
#define ADCIFE_IDR_RESETVALUE       _U_(0x00000000); /**< \brief (ADCIFE_IDR reset_value) Interrupt Disable Register */

#define ADCIFE_IDR_SEOC_Pos         0            /**< \brief (ADCIFE_IDR) Sequencer end of conversion Interrupt Disable */
#define ADCIFE_IDR_SEOC             (_U_(0x1) << ADCIFE_IDR_SEOC_Pos)
#define ADCIFE_IDR_LOVR_Pos         1            /**< \brief (ADCIFE_IDR) Sequencer last converted value overrun Interrupt Disable */
#define ADCIFE_IDR_LOVR             (_U_(0x1) << ADCIFE_IDR_LOVR_Pos)
#define ADCIFE_IDR_WM_Pos           2            /**< \brief (ADCIFE_IDR) Window monitor Interrupt Disable */
#define ADCIFE_IDR_WM               (_U_(0x1) << ADCIFE_IDR_WM_Pos)
#define ADCIFE_IDR_SMTRG_Pos        3            /**< \brief (ADCIFE_IDR) Sequencer missed trigger event Interrupt Disable */
#define ADCIFE_IDR_SMTRG            (_U_(0x1) << ADCIFE_IDR_SMTRG_Pos)
#define ADCIFE_IDR_TTO_Pos          5            /**< \brief (ADCIFE_IDR) Timer time-out Interrupt Disable */
#define ADCIFE_IDR_TTO              (_U_(0x1) << ADCIFE_IDR_TTO_Pos)
#define ADCIFE_IDR_MASK             _U_(0x0000002F) /**< \brief (ADCIFE_IDR) MASK Register */

/* -------- ADCIFE_IMR : (ADCIFE Offset: 0x38) (R/  32) Interrupt Mask Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t SEOC:1;           /*!< bit:      0  Sequencer end of conversion Interrupt Mask */
    uint32_t LOVR:1;           /*!< bit:      1  Sequencer last converted value overrun Interrupt Mask */
    uint32_t WM:1;             /*!< bit:      2  Window monitor Interrupt Mask      */
    uint32_t SMTRG:1;          /*!< bit:      3  Sequencer missed trigger event Interrupt Mask */
    uint32_t :1;               /*!< bit:      4  Reserved                           */
    uint32_t TTO:1;            /*!< bit:      5  Timer time-out Interrupt Mask      */
    uint32_t :26;              /*!< bit:  6..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} ADCIFE_IMR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define ADCIFE_IMR_OFFSET           0x38         /**< \brief (ADCIFE_IMR offset) Interrupt Mask Register */
#define ADCIFE_IMR_RESETVALUE       _U_(0x00000000); /**< \brief (ADCIFE_IMR reset_value) Interrupt Mask Register */

#define ADCIFE_IMR_SEOC_Pos         0            /**< \brief (ADCIFE_IMR) Sequencer end of conversion Interrupt Mask */
#define ADCIFE_IMR_SEOC             (_U_(0x1) << ADCIFE_IMR_SEOC_Pos)
#define ADCIFE_IMR_LOVR_Pos         1            /**< \brief (ADCIFE_IMR) Sequencer last converted value overrun Interrupt Mask */
#define ADCIFE_IMR_LOVR             (_U_(0x1) << ADCIFE_IMR_LOVR_Pos)
#define ADCIFE_IMR_WM_Pos           2            /**< \brief (ADCIFE_IMR) Window monitor Interrupt Mask */
#define ADCIFE_IMR_WM               (_U_(0x1) << ADCIFE_IMR_WM_Pos)
#define ADCIFE_IMR_SMTRG_Pos        3            /**< \brief (ADCIFE_IMR) Sequencer missed trigger event Interrupt Mask */
#define ADCIFE_IMR_SMTRG            (_U_(0x1) << ADCIFE_IMR_SMTRG_Pos)
#define ADCIFE_IMR_TTO_Pos          5            /**< \brief (ADCIFE_IMR) Timer time-out Interrupt Mask */
#define ADCIFE_IMR_TTO              (_U_(0x1) << ADCIFE_IMR_TTO_Pos)
#define ADCIFE_IMR_MASK             _U_(0x0000002F) /**< \brief (ADCIFE_IMR) MASK Register */

/* -------- ADCIFE_CALIB : (ADCIFE Offset: 0x3C) (R/W 32) Calibration Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t CALIB:8;          /*!< bit:  0.. 7  Calibration Value                  */
    uint32_t BIASSEL:1;        /*!< bit:      8  Select bias mode                   */
    uint32_t :3;               /*!< bit:  9..11  Reserved                           */
    uint32_t BIASCAL:4;        /*!< bit: 12..15  Bias Calibration                   */
    uint32_t FCD:1;            /*!< bit:     16  Flash Calibration Done             */
    uint32_t :15;              /*!< bit: 17..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} ADCIFE_CALIB_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define ADCIFE_CALIB_OFFSET         0x3C         /**< \brief (ADCIFE_CALIB offset) Calibration Register */
#define ADCIFE_CALIB_RESETVALUE     _U_(0x00000000); /**< \brief (ADCIFE_CALIB reset_value) Calibration Register */

#define ADCIFE_CALIB_CALIB_Pos      0            /**< \brief (ADCIFE_CALIB) Calibration Value */
#define ADCIFE_CALIB_CALIB_Msk      (_U_(0xFF) << ADCIFE_CALIB_CALIB_Pos)
#define ADCIFE_CALIB_CALIB(value)   (ADCIFE_CALIB_CALIB_Msk & ((value) << ADCIFE_CALIB_CALIB_Pos))
#define ADCIFE_CALIB_BIASSEL_Pos    8            /**< \brief (ADCIFE_CALIB) Select bias mode */
#define ADCIFE_CALIB_BIASSEL        (_U_(0x1) << ADCIFE_CALIB_BIASSEL_Pos)
#define ADCIFE_CALIB_BIASCAL_Pos    12           /**< \brief (ADCIFE_CALIB) Bias Calibration */
#define ADCIFE_CALIB_BIASCAL_Msk    (_U_(0xF) << ADCIFE_CALIB_BIASCAL_Pos)
#define ADCIFE_CALIB_BIASCAL(value) (ADCIFE_CALIB_BIASCAL_Msk & ((value) << ADCIFE_CALIB_BIASCAL_Pos))
#define ADCIFE_CALIB_FCD_Pos        16           /**< \brief (ADCIFE_CALIB) Flash Calibration Done */
#define ADCIFE_CALIB_FCD            (_U_(0x1) << ADCIFE_CALIB_FCD_Pos)
#define ADCIFE_CALIB_MASK           _U_(0x0001F1FF) /**< \brief (ADCIFE_CALIB) MASK Register */

/* -------- ADCIFE_VERSION : (ADCIFE Offset: 0x40) (R/  32) Version Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t VERSION:12;       /*!< bit:  0..11  Version number                     */
    uint32_t :4;               /*!< bit: 12..15  Reserved                           */
    uint32_t VARIANT:4;        /*!< bit: 16..19  Variant number                     */
    uint32_t :12;              /*!< bit: 20..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} ADCIFE_VERSION_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define ADCIFE_VERSION_OFFSET       0x40         /**< \brief (ADCIFE_VERSION offset) Version Register */
#define ADCIFE_VERSION_RESETVALUE   _U_(0x00000100); /**< \brief (ADCIFE_VERSION reset_value) Version Register */

#define ADCIFE_VERSION_VERSION_Pos  0            /**< \brief (ADCIFE_VERSION) Version number */
#define ADCIFE_VERSION_VERSION_Msk  (_U_(0xFFF) << ADCIFE_VERSION_VERSION_Pos)
#define ADCIFE_VERSION_VERSION(value) (ADCIFE_VERSION_VERSION_Msk & ((value) << ADCIFE_VERSION_VERSION_Pos))
#define ADCIFE_VERSION_VARIANT_Pos  16           /**< \brief (ADCIFE_VERSION) Variant number */
#define ADCIFE_VERSION_VARIANT_Msk  (_U_(0xF) << ADCIFE_VERSION_VARIANT_Pos)
#define ADCIFE_VERSION_VARIANT(value) (ADCIFE_VERSION_VARIANT_Msk & ((value) << ADCIFE_VERSION_VARIANT_Pos))
#define ADCIFE_VERSION_MASK         _U_(0x000F0FFF) /**< \brief (ADCIFE_VERSION) MASK Register */

/* -------- ADCIFE_PARAMETER : (ADCIFE Offset: 0x44) (R/  32) Parameter Register -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t N:8;              /*!< bit:  0.. 7  Number of channels                 */
    uint32_t :24;              /*!< bit:  8..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} ADCIFE_PARAMETER_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define ADCIFE_PARAMETER_OFFSET     0x44         /**< \brief (ADCIFE_PARAMETER offset) Parameter Register */

#define ADCIFE_PARAMETER_N_Pos      0            /**< \brief (ADCIFE_PARAMETER) Number of channels */
#define ADCIFE_PARAMETER_N_Msk      (_U_(0xFF) << ADCIFE_PARAMETER_N_Pos)
#define ADCIFE_PARAMETER_N(value)   (ADCIFE_PARAMETER_N_Msk & ((value) << ADCIFE_PARAMETER_N_Pos))
#define ADCIFE_PARAMETER_MASK       _U_(0x000000FF) /**< \brief (ADCIFE_PARAMETER) MASK Register */

/** \brief ADCIFE hardware registers */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef struct {
  __O  uint32_t CR;          /**< \brief Offset: 0x00 ( /W 32) Control Register */
  __IO uint32_t CFG;         /**< \brief Offset: 0x04 (R/W 32) Configuration Register */
  __I  uint32_t SR;          /**< \brief Offset: 0x08 (R/  32) Status Register */
  __O  uint32_t SCR;         /**< \brief Offset: 0x0C ( /W 32) Status Clear Register */
  __IO uint32_t RTS;         /**< \brief Offset: 0x10 (R/W 32) Resistive Touch Screen Register */
  __IO uint32_t SEQCFG;      /**< \brief Offset: 0x14 (R/W 32) Sequencer Configuration Register */
  __O  uint32_t CDMA;        /**< \brief Offset: 0x18 ( /W 32) Configuration Direct Memory Access Register */
  __IO uint32_t TIM;         /**< \brief Offset: 0x1C (R/W 32) Timing Configuration Register */
  __IO uint32_t ITIMER;      /**< \brief Offset: 0x20 (R/W 32) Internal Timer Register */
  __IO uint32_t WCFG;        /**< \brief Offset: 0x24 (R/W 32) Window Monitor Configuration Register */
  __IO uint32_t WTH;         /**< \brief Offset: 0x28 (R/W 32) Window Monitor Threshold Configuration Register */
  __I  uint32_t LCV;         /**< \brief Offset: 0x2C (R/  32) Sequencer Last Converted Value Register */
  __O  uint32_t IER;         /**< \brief Offset: 0x30 ( /W 32) Interrupt Enable Register */
  __O  uint32_t IDR;         /**< \brief Offset: 0x34 ( /W 32) Interrupt Disable Register */
  __I  uint32_t IMR;         /**< \brief Offset: 0x38 (R/  32) Interrupt Mask Register */
  __IO uint32_t CALIB;       /**< \brief Offset: 0x3C (R/W 32) Calibration Register */
  __I  uint32_t VERSION;     /**< \brief Offset: 0x40 (R/  32) Version Register */
  __I  uint32_t PARAMETER;   /**< \brief Offset: 0x44 (R/  32) Parameter Register */
} Adcife;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

/*@}*/

#endif /* _SAM4L_ADCIFE_COMPONENT_ */
