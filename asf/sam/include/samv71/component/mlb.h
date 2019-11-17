/**
 * \file
 *
 * \brief Component description for MLB
 *
 * Copyright (c) 2019 Microchip Technology Inc.
 *
 * \license_start
 *
 * \page License
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 * \license_stop
 *
 */

/* file generated from device description version 2017-01-08T14:00:00Z */
#ifndef _SAMV71_MLB_COMPONENT_H_
#define _SAMV71_MLB_COMPONENT_H_
#define _SAMV71_MLB_COMPONENT_         /**< \deprecated  Backward compatibility for ASF */

/** \addtogroup SAMV_SAMV71 MediaLB
 *  @{
 */
/* ========================================================================== */
/**  SOFTWARE API DEFINITION FOR MLB */
/* ========================================================================== */
#ifndef COMPONENT_TYPEDEF_STYLE
  #define COMPONENT_TYPEDEF_STYLE 'R'  /**< Defines default style of typedefs for the component header files ('R' = RFO, 'N' = NTO)*/
#endif

#define MLB_11287                      /**< (MLB) Module ID */
#define REV_MLB C                      /**< (MLB) Module revision */

/* -------- MLB_MLBC0 : (MLB Offset: 0x00) (R/W 32) MediaLB Control 0 Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t MLBEN:1;                   /**< bit:      0  MediaLB Enable                           */
    uint32_t :1;                        /**< bit:      1  Reserved */
    uint32_t MLBCLK:3;                  /**< bit:   2..4  MLBCLK (MediaLB clock) speed select      */
    uint32_t ZERO:1;                    /**< bit:      5  Must be Written to 0                     */
    uint32_t :1;                        /**< bit:      6  Reserved */
    uint32_t MLBLK:1;                   /**< bit:      7  MediaLB Lock Status (read-only)          */
    uint32_t :4;                        /**< bit:  8..11  Reserved */
    uint32_t ASYRETRY:1;                /**< bit:     12  Asynchronous Tx Packet Retry             */
    uint32_t :1;                        /**< bit:     13  Reserved */
    uint32_t CTLRETRY:1;                /**< bit:     14  Control Tx Packet Retry                  */
    uint32_t FCNT:3;                    /**< bit: 15..17  The number of frames per sub-buffer for synchronous channels */
    uint32_t :14;                       /**< bit: 18..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} MLB_MLBC0_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define MLB_MLBC0_OFFSET                    (0x00)                                        /**<  (MLB_MLBC0) MediaLB Control 0 Register  Offset */

#define MLB_MLBC0_MLBEN_Pos                 0                                              /**< (MLB_MLBC0) MediaLB Enable Position */
#define MLB_MLBC0_MLBEN_Msk                 (_U_(0x1) << MLB_MLBC0_MLBEN_Pos)              /**< (MLB_MLBC0) MediaLB Enable Mask */
#define MLB_MLBC0_MLBEN                     MLB_MLBC0_MLBEN_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use MLB_MLBC0_MLBEN_Msk instead */
#define MLB_MLBC0_MLBCLK_Pos                2                                              /**< (MLB_MLBC0) MLBCLK (MediaLB clock) speed select Position */
#define MLB_MLBC0_MLBCLK_Msk                (_U_(0x7) << MLB_MLBC0_MLBCLK_Pos)             /**< (MLB_MLBC0) MLBCLK (MediaLB clock) speed select Mask */
#define MLB_MLBC0_MLBCLK(value)             (MLB_MLBC0_MLBCLK_Msk & ((value) << MLB_MLBC0_MLBCLK_Pos))
#define   MLB_MLBC0_MLBCLK_256_FS_Val       _U_(0x0)                                       /**< (MLB_MLBC0) 256xFs (for MLBPEN = 0)  */
#define   MLB_MLBC0_MLBCLK_512_FS_Val       _U_(0x1)                                       /**< (MLB_MLBC0) 512xFs (for MLBPEN = 0)  */
#define   MLB_MLBC0_MLBCLK_1024_FS_Val      _U_(0x2)                                       /**< (MLB_MLBC0) 1024xFs (for MLBPEN = 0)  */
#define MLB_MLBC0_MLBCLK_256_FS             (MLB_MLBC0_MLBCLK_256_FS_Val << MLB_MLBC0_MLBCLK_Pos)  /**< (MLB_MLBC0) 256xFs (for MLBPEN = 0) Position  */
#define MLB_MLBC0_MLBCLK_512_FS             (MLB_MLBC0_MLBCLK_512_FS_Val << MLB_MLBC0_MLBCLK_Pos)  /**< (MLB_MLBC0) 512xFs (for MLBPEN = 0) Position  */
#define MLB_MLBC0_MLBCLK_1024_FS            (MLB_MLBC0_MLBCLK_1024_FS_Val << MLB_MLBC0_MLBCLK_Pos)  /**< (MLB_MLBC0) 1024xFs (for MLBPEN = 0) Position  */
#define MLB_MLBC0_ZERO_Pos                  5                                              /**< (MLB_MLBC0) Must be Written to 0 Position */
#define MLB_MLBC0_ZERO_Msk                  (_U_(0x1) << MLB_MLBC0_ZERO_Pos)               /**< (MLB_MLBC0) Must be Written to 0 Mask */
#define MLB_MLBC0_ZERO                      MLB_MLBC0_ZERO_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use MLB_MLBC0_ZERO_Msk instead */
#define MLB_MLBC0_MLBLK_Pos                 7                                              /**< (MLB_MLBC0) MediaLB Lock Status (read-only) Position */
#define MLB_MLBC0_MLBLK_Msk                 (_U_(0x1) << MLB_MLBC0_MLBLK_Pos)              /**< (MLB_MLBC0) MediaLB Lock Status (read-only) Mask */
#define MLB_MLBC0_MLBLK                     MLB_MLBC0_MLBLK_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use MLB_MLBC0_MLBLK_Msk instead */
#define MLB_MLBC0_ASYRETRY_Pos              12                                             /**< (MLB_MLBC0) Asynchronous Tx Packet Retry Position */
#define MLB_MLBC0_ASYRETRY_Msk              (_U_(0x1) << MLB_MLBC0_ASYRETRY_Pos)           /**< (MLB_MLBC0) Asynchronous Tx Packet Retry Mask */
#define MLB_MLBC0_ASYRETRY                  MLB_MLBC0_ASYRETRY_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use MLB_MLBC0_ASYRETRY_Msk instead */
#define MLB_MLBC0_CTLRETRY_Pos              14                                             /**< (MLB_MLBC0) Control Tx Packet Retry Position */
#define MLB_MLBC0_CTLRETRY_Msk              (_U_(0x1) << MLB_MLBC0_CTLRETRY_Pos)           /**< (MLB_MLBC0) Control Tx Packet Retry Mask */
#define MLB_MLBC0_CTLRETRY                  MLB_MLBC0_CTLRETRY_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use MLB_MLBC0_CTLRETRY_Msk instead */
#define MLB_MLBC0_FCNT_Pos                  15                                             /**< (MLB_MLBC0) The number of frames per sub-buffer for synchronous channels Position */
#define MLB_MLBC0_FCNT_Msk                  (_U_(0x7) << MLB_MLBC0_FCNT_Pos)               /**< (MLB_MLBC0) The number of frames per sub-buffer for synchronous channels Mask */
#define MLB_MLBC0_FCNT(value)               (MLB_MLBC0_FCNT_Msk & ((value) << MLB_MLBC0_FCNT_Pos))
#define   MLB_MLBC0_FCNT_1_FRAME_Val        _U_(0x0)                                       /**< (MLB_MLBC0) 1 frame per sub-buffer (Operation is the same as Standard mode.)  */
#define   MLB_MLBC0_FCNT_2_FRAMES_Val       _U_(0x1)                                       /**< (MLB_MLBC0) 2 frames per sub-buffer  */
#define   MLB_MLBC0_FCNT_4_FRAMES_Val       _U_(0x2)                                       /**< (MLB_MLBC0) 4 frames per sub-buffer  */
#define   MLB_MLBC0_FCNT_8_FRAMES_Val       _U_(0x3)                                       /**< (MLB_MLBC0) 8 frames per sub-buffer  */
#define   MLB_MLBC0_FCNT_16_FRAMES_Val      _U_(0x4)                                       /**< (MLB_MLBC0) 16 frames per sub-buffer  */
#define   MLB_MLBC0_FCNT_32_FRAMES_Val      _U_(0x5)                                       /**< (MLB_MLBC0) 32 frames per sub-buffer  */
#define   MLB_MLBC0_FCNT_64_FRAMES_Val      _U_(0x6)                                       /**< (MLB_MLBC0) 64 frames per sub-buffer  */
#define MLB_MLBC0_FCNT_1_FRAME              (MLB_MLBC0_FCNT_1_FRAME_Val << MLB_MLBC0_FCNT_Pos)  /**< (MLB_MLBC0) 1 frame per sub-buffer (Operation is the same as Standard mode.) Position  */
#define MLB_MLBC0_FCNT_2_FRAMES             (MLB_MLBC0_FCNT_2_FRAMES_Val << MLB_MLBC0_FCNT_Pos)  /**< (MLB_MLBC0) 2 frames per sub-buffer Position  */
#define MLB_MLBC0_FCNT_4_FRAMES             (MLB_MLBC0_FCNT_4_FRAMES_Val << MLB_MLBC0_FCNT_Pos)  /**< (MLB_MLBC0) 4 frames per sub-buffer Position  */
#define MLB_MLBC0_FCNT_8_FRAMES             (MLB_MLBC0_FCNT_8_FRAMES_Val << MLB_MLBC0_FCNT_Pos)  /**< (MLB_MLBC0) 8 frames per sub-buffer Position  */
#define MLB_MLBC0_FCNT_16_FRAMES            (MLB_MLBC0_FCNT_16_FRAMES_Val << MLB_MLBC0_FCNT_Pos)  /**< (MLB_MLBC0) 16 frames per sub-buffer Position  */
#define MLB_MLBC0_FCNT_32_FRAMES            (MLB_MLBC0_FCNT_32_FRAMES_Val << MLB_MLBC0_FCNT_Pos)  /**< (MLB_MLBC0) 32 frames per sub-buffer Position  */
#define MLB_MLBC0_FCNT_64_FRAMES            (MLB_MLBC0_FCNT_64_FRAMES_Val << MLB_MLBC0_FCNT_Pos)  /**< (MLB_MLBC0) 64 frames per sub-buffer Position  */
#define MLB_MLBC0_MASK                      _U_(0x3D0BD)                                   /**< \deprecated (MLB_MLBC0) Register MASK  (Use MLB_MLBC0_Msk instead)  */
#define MLB_MLBC0_Msk                       _U_(0x3D0BD)                                   /**< (MLB_MLBC0) Register Mask  */


/* -------- MLB_MS0 : (MLB Offset: 0x0c) (R/W 32) MediaLB Channel Status 0 Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t MCS:32;                    /**< bit:  0..31  MediaLB Channel Status [31:0] (cleared by writing a 0) */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} MLB_MS0_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define MLB_MS0_OFFSET                      (0x0C)                                        /**<  (MLB_MS0) MediaLB Channel Status 0 Register  Offset */

#define MLB_MS0_MCS_Pos                     0                                              /**< (MLB_MS0) MediaLB Channel Status [31:0] (cleared by writing a 0) Position */
#define MLB_MS0_MCS_Msk                     (_U_(0xFFFFFFFF) << MLB_MS0_MCS_Pos)           /**< (MLB_MS0) MediaLB Channel Status [31:0] (cleared by writing a 0) Mask */
#define MLB_MS0_MCS(value)                  (MLB_MS0_MCS_Msk & ((value) << MLB_MS0_MCS_Pos))
#define MLB_MS0_MASK                        _U_(0xFFFFFFFF)                                /**< \deprecated (MLB_MS0) Register MASK  (Use MLB_MS0_Msk instead)  */
#define MLB_MS0_Msk                         _U_(0xFFFFFFFF)                                /**< (MLB_MS0) Register Mask  */


/* -------- MLB_MS1 : (MLB Offset: 0x14) (R/W 32) MediaLB Channel Status1 Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t MCS:32;                    /**< bit:  0..31  MediaLB Channel Status [63:32] (cleared by writing a 0) */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} MLB_MS1_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define MLB_MS1_OFFSET                      (0x14)                                        /**<  (MLB_MS1) MediaLB Channel Status1 Register  Offset */

#define MLB_MS1_MCS_Pos                     0                                              /**< (MLB_MS1) MediaLB Channel Status [63:32] (cleared by writing a 0) Position */
#define MLB_MS1_MCS_Msk                     (_U_(0xFFFFFFFF) << MLB_MS1_MCS_Pos)           /**< (MLB_MS1) MediaLB Channel Status [63:32] (cleared by writing a 0) Mask */
#define MLB_MS1_MCS(value)                  (MLB_MS1_MCS_Msk & ((value) << MLB_MS1_MCS_Pos))
#define MLB_MS1_MASK                        _U_(0xFFFFFFFF)                                /**< \deprecated (MLB_MS1) Register MASK  (Use MLB_MS1_Msk instead)  */
#define MLB_MS1_Msk                         _U_(0xFFFFFFFF)                                /**< (MLB_MS1) Register Mask  */


/* -------- MLB_MSS : (MLB Offset: 0x20) (R/W 32) MediaLB System Status Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t RSTSYSCMD:1;               /**< bit:      0  Reset System Command Detected in the System Quadlet (cleared by writing a 0) */
    uint32_t LKSYSCMD:1;                /**< bit:      1  Network Lock System Command Detected in the System Quadlet (cleared by writing a 0) */
    uint32_t ULKSYSCMD:1;               /**< bit:      2  Network Unlock System Command Detected in the System Quadlet (cleared by writing a 0) */
    uint32_t CSSYSCMD:1;                /**< bit:      3  Channel Scan System Command Detected in the System Quadlet (cleared by writing a 0) */
    uint32_t SWSYSCMD:1;                /**< bit:      4  Software System Command Detected in the System Quadlet (cleared by writing a 0) */
    uint32_t SERVREQ:1;                 /**< bit:      5  Service Request Enabled                  */
    uint32_t :26;                       /**< bit:  6..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} MLB_MSS_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define MLB_MSS_OFFSET                      (0x20)                                        /**<  (MLB_MSS) MediaLB System Status Register  Offset */

#define MLB_MSS_RSTSYSCMD_Pos               0                                              /**< (MLB_MSS) Reset System Command Detected in the System Quadlet (cleared by writing a 0) Position */
#define MLB_MSS_RSTSYSCMD_Msk               (_U_(0x1) << MLB_MSS_RSTSYSCMD_Pos)            /**< (MLB_MSS) Reset System Command Detected in the System Quadlet (cleared by writing a 0) Mask */
#define MLB_MSS_RSTSYSCMD                   MLB_MSS_RSTSYSCMD_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use MLB_MSS_RSTSYSCMD_Msk instead */
#define MLB_MSS_LKSYSCMD_Pos                1                                              /**< (MLB_MSS) Network Lock System Command Detected in the System Quadlet (cleared by writing a 0) Position */
#define MLB_MSS_LKSYSCMD_Msk                (_U_(0x1) << MLB_MSS_LKSYSCMD_Pos)             /**< (MLB_MSS) Network Lock System Command Detected in the System Quadlet (cleared by writing a 0) Mask */
#define MLB_MSS_LKSYSCMD                    MLB_MSS_LKSYSCMD_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use MLB_MSS_LKSYSCMD_Msk instead */
#define MLB_MSS_ULKSYSCMD_Pos               2                                              /**< (MLB_MSS) Network Unlock System Command Detected in the System Quadlet (cleared by writing a 0) Position */
#define MLB_MSS_ULKSYSCMD_Msk               (_U_(0x1) << MLB_MSS_ULKSYSCMD_Pos)            /**< (MLB_MSS) Network Unlock System Command Detected in the System Quadlet (cleared by writing a 0) Mask */
#define MLB_MSS_ULKSYSCMD                   MLB_MSS_ULKSYSCMD_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use MLB_MSS_ULKSYSCMD_Msk instead */
#define MLB_MSS_CSSYSCMD_Pos                3                                              /**< (MLB_MSS) Channel Scan System Command Detected in the System Quadlet (cleared by writing a 0) Position */
#define MLB_MSS_CSSYSCMD_Msk                (_U_(0x1) << MLB_MSS_CSSYSCMD_Pos)             /**< (MLB_MSS) Channel Scan System Command Detected in the System Quadlet (cleared by writing a 0) Mask */
#define MLB_MSS_CSSYSCMD                    MLB_MSS_CSSYSCMD_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use MLB_MSS_CSSYSCMD_Msk instead */
#define MLB_MSS_SWSYSCMD_Pos                4                                              /**< (MLB_MSS) Software System Command Detected in the System Quadlet (cleared by writing a 0) Position */
#define MLB_MSS_SWSYSCMD_Msk                (_U_(0x1) << MLB_MSS_SWSYSCMD_Pos)             /**< (MLB_MSS) Software System Command Detected in the System Quadlet (cleared by writing a 0) Mask */
#define MLB_MSS_SWSYSCMD                    MLB_MSS_SWSYSCMD_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use MLB_MSS_SWSYSCMD_Msk instead */
#define MLB_MSS_SERVREQ_Pos                 5                                              /**< (MLB_MSS) Service Request Enabled Position */
#define MLB_MSS_SERVREQ_Msk                 (_U_(0x1) << MLB_MSS_SERVREQ_Pos)              /**< (MLB_MSS) Service Request Enabled Mask */
#define MLB_MSS_SERVREQ                     MLB_MSS_SERVREQ_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use MLB_MSS_SERVREQ_Msk instead */
#define MLB_MSS_MASK                        _U_(0x3F)                                      /**< \deprecated (MLB_MSS) Register MASK  (Use MLB_MSS_Msk instead)  */
#define MLB_MSS_Msk                         _U_(0x3F)                                      /**< (MLB_MSS) Register Mask  */


/* -------- MLB_MSD : (MLB Offset: 0x24) (R/ 32) MediaLB System Data Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t SD0:8;                     /**< bit:   0..7  System Data (Byte 0)                     */
    uint32_t SD1:8;                     /**< bit:  8..15  System Data (Byte 1)                     */
    uint32_t SD2:8;                     /**< bit: 16..23  System Data (Byte 2)                     */
    uint32_t SD3:8;                     /**< bit: 24..31  System Data (Byte 3)                     */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} MLB_MSD_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define MLB_MSD_OFFSET                      (0x24)                                        /**<  (MLB_MSD) MediaLB System Data Register  Offset */

#define MLB_MSD_SD0_Pos                     0                                              /**< (MLB_MSD) System Data (Byte 0) Position */
#define MLB_MSD_SD0_Msk                     (_U_(0xFF) << MLB_MSD_SD0_Pos)                 /**< (MLB_MSD) System Data (Byte 0) Mask */
#define MLB_MSD_SD0(value)                  (MLB_MSD_SD0_Msk & ((value) << MLB_MSD_SD0_Pos))
#define MLB_MSD_SD1_Pos                     8                                              /**< (MLB_MSD) System Data (Byte 1) Position */
#define MLB_MSD_SD1_Msk                     (_U_(0xFF) << MLB_MSD_SD1_Pos)                 /**< (MLB_MSD) System Data (Byte 1) Mask */
#define MLB_MSD_SD1(value)                  (MLB_MSD_SD1_Msk & ((value) << MLB_MSD_SD1_Pos))
#define MLB_MSD_SD2_Pos                     16                                             /**< (MLB_MSD) System Data (Byte 2) Position */
#define MLB_MSD_SD2_Msk                     (_U_(0xFF) << MLB_MSD_SD2_Pos)                 /**< (MLB_MSD) System Data (Byte 2) Mask */
#define MLB_MSD_SD2(value)                  (MLB_MSD_SD2_Msk & ((value) << MLB_MSD_SD2_Pos))
#define MLB_MSD_SD3_Pos                     24                                             /**< (MLB_MSD) System Data (Byte 3) Position */
#define MLB_MSD_SD3_Msk                     (_U_(0xFF) << MLB_MSD_SD3_Pos)                 /**< (MLB_MSD) System Data (Byte 3) Mask */
#define MLB_MSD_SD3(value)                  (MLB_MSD_SD3_Msk & ((value) << MLB_MSD_SD3_Pos))
#define MLB_MSD_MASK                        _U_(0xFFFFFFFF)                                /**< \deprecated (MLB_MSD) Register MASK  (Use MLB_MSD_Msk instead)  */
#define MLB_MSD_Msk                         _U_(0xFFFFFFFF)                                /**< (MLB_MSD) Register Mask  */


/* -------- MLB_MIEN : (MLB Offset: 0x2c) (R/W 32) MediaLB Interrupt Enable Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t ISOC_PE:1;                 /**< bit:      0  Isochronous Rx Protocol Error Enable     */
    uint32_t ISOC_BUFO:1;               /**< bit:      1  Isochronous Rx Buffer Overflow Enable    */
    uint32_t :14;                       /**< bit:  2..15  Reserved */
    uint32_t SYNC_PE:1;                 /**< bit:     16  Synchronous Protocol Error Enable        */
    uint32_t ARX_DONE:1;                /**< bit:     17  Asynchronous Rx Done Enable              */
    uint32_t ARX_PE:1;                  /**< bit:     18  Asynchronous Rx Protocol Error Enable    */
    uint32_t ARX_BREAK:1;               /**< bit:     19  Asynchronous Rx Break Enable             */
    uint32_t ATX_DONE:1;                /**< bit:     20  Asynchronous Tx Packet Done Enable       */
    uint32_t ATX_PE:1;                  /**< bit:     21  Asynchronous Tx Protocol Error Enable    */
    uint32_t ATX_BREAK:1;               /**< bit:     22  Asynchronous Tx Break Enable             */
    uint32_t :1;                        /**< bit:     23  Reserved */
    uint32_t CRX_DONE:1;                /**< bit:     24  Control Rx Packet Done Enable            */
    uint32_t CRX_PE:1;                  /**< bit:     25  Control Rx Protocol Error Enable         */
    uint32_t CRX_BREAK:1;               /**< bit:     26  Control Rx Break Enable                  */
    uint32_t CTX_DONE:1;                /**< bit:     27  Control Tx Packet Done Enable            */
    uint32_t CTX_PE:1;                  /**< bit:     28  Control Tx Protocol Error Enable         */
    uint32_t CTX_BREAK:1;               /**< bit:     29  Control Tx Break Enable                  */
    uint32_t :2;                        /**< bit: 30..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} MLB_MIEN_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define MLB_MIEN_OFFSET                     (0x2C)                                        /**<  (MLB_MIEN) MediaLB Interrupt Enable Register  Offset */

#define MLB_MIEN_ISOC_PE_Pos                0                                              /**< (MLB_MIEN) Isochronous Rx Protocol Error Enable Position */
#define MLB_MIEN_ISOC_PE_Msk                (_U_(0x1) << MLB_MIEN_ISOC_PE_Pos)             /**< (MLB_MIEN) Isochronous Rx Protocol Error Enable Mask */
#define MLB_MIEN_ISOC_PE                    MLB_MIEN_ISOC_PE_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use MLB_MIEN_ISOC_PE_Msk instead */
#define MLB_MIEN_ISOC_BUFO_Pos              1                                              /**< (MLB_MIEN) Isochronous Rx Buffer Overflow Enable Position */
#define MLB_MIEN_ISOC_BUFO_Msk              (_U_(0x1) << MLB_MIEN_ISOC_BUFO_Pos)           /**< (MLB_MIEN) Isochronous Rx Buffer Overflow Enable Mask */
#define MLB_MIEN_ISOC_BUFO                  MLB_MIEN_ISOC_BUFO_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use MLB_MIEN_ISOC_BUFO_Msk instead */
#define MLB_MIEN_SYNC_PE_Pos                16                                             /**< (MLB_MIEN) Synchronous Protocol Error Enable Position */
#define MLB_MIEN_SYNC_PE_Msk                (_U_(0x1) << MLB_MIEN_SYNC_PE_Pos)             /**< (MLB_MIEN) Synchronous Protocol Error Enable Mask */
#define MLB_MIEN_SYNC_PE                    MLB_MIEN_SYNC_PE_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use MLB_MIEN_SYNC_PE_Msk instead */
#define MLB_MIEN_ARX_DONE_Pos               17                                             /**< (MLB_MIEN) Asynchronous Rx Done Enable Position */
#define MLB_MIEN_ARX_DONE_Msk               (_U_(0x1) << MLB_MIEN_ARX_DONE_Pos)            /**< (MLB_MIEN) Asynchronous Rx Done Enable Mask */
#define MLB_MIEN_ARX_DONE                   MLB_MIEN_ARX_DONE_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use MLB_MIEN_ARX_DONE_Msk instead */
#define MLB_MIEN_ARX_PE_Pos                 18                                             /**< (MLB_MIEN) Asynchronous Rx Protocol Error Enable Position */
#define MLB_MIEN_ARX_PE_Msk                 (_U_(0x1) << MLB_MIEN_ARX_PE_Pos)              /**< (MLB_MIEN) Asynchronous Rx Protocol Error Enable Mask */
#define MLB_MIEN_ARX_PE                     MLB_MIEN_ARX_PE_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use MLB_MIEN_ARX_PE_Msk instead */
#define MLB_MIEN_ARX_BREAK_Pos              19                                             /**< (MLB_MIEN) Asynchronous Rx Break Enable Position */
#define MLB_MIEN_ARX_BREAK_Msk              (_U_(0x1) << MLB_MIEN_ARX_BREAK_Pos)           /**< (MLB_MIEN) Asynchronous Rx Break Enable Mask */
#define MLB_MIEN_ARX_BREAK                  MLB_MIEN_ARX_BREAK_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use MLB_MIEN_ARX_BREAK_Msk instead */
#define MLB_MIEN_ATX_DONE_Pos               20                                             /**< (MLB_MIEN) Asynchronous Tx Packet Done Enable Position */
#define MLB_MIEN_ATX_DONE_Msk               (_U_(0x1) << MLB_MIEN_ATX_DONE_Pos)            /**< (MLB_MIEN) Asynchronous Tx Packet Done Enable Mask */
#define MLB_MIEN_ATX_DONE                   MLB_MIEN_ATX_DONE_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use MLB_MIEN_ATX_DONE_Msk instead */
#define MLB_MIEN_ATX_PE_Pos                 21                                             /**< (MLB_MIEN) Asynchronous Tx Protocol Error Enable Position */
#define MLB_MIEN_ATX_PE_Msk                 (_U_(0x1) << MLB_MIEN_ATX_PE_Pos)              /**< (MLB_MIEN) Asynchronous Tx Protocol Error Enable Mask */
#define MLB_MIEN_ATX_PE                     MLB_MIEN_ATX_PE_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use MLB_MIEN_ATX_PE_Msk instead */
#define MLB_MIEN_ATX_BREAK_Pos              22                                             /**< (MLB_MIEN) Asynchronous Tx Break Enable Position */
#define MLB_MIEN_ATX_BREAK_Msk              (_U_(0x1) << MLB_MIEN_ATX_BREAK_Pos)           /**< (MLB_MIEN) Asynchronous Tx Break Enable Mask */
#define MLB_MIEN_ATX_BREAK                  MLB_MIEN_ATX_BREAK_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use MLB_MIEN_ATX_BREAK_Msk instead */
#define MLB_MIEN_CRX_DONE_Pos               24                                             /**< (MLB_MIEN) Control Rx Packet Done Enable Position */
#define MLB_MIEN_CRX_DONE_Msk               (_U_(0x1) << MLB_MIEN_CRX_DONE_Pos)            /**< (MLB_MIEN) Control Rx Packet Done Enable Mask */
#define MLB_MIEN_CRX_DONE                   MLB_MIEN_CRX_DONE_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use MLB_MIEN_CRX_DONE_Msk instead */
#define MLB_MIEN_CRX_PE_Pos                 25                                             /**< (MLB_MIEN) Control Rx Protocol Error Enable Position */
#define MLB_MIEN_CRX_PE_Msk                 (_U_(0x1) << MLB_MIEN_CRX_PE_Pos)              /**< (MLB_MIEN) Control Rx Protocol Error Enable Mask */
#define MLB_MIEN_CRX_PE                     MLB_MIEN_CRX_PE_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use MLB_MIEN_CRX_PE_Msk instead */
#define MLB_MIEN_CRX_BREAK_Pos              26                                             /**< (MLB_MIEN) Control Rx Break Enable Position */
#define MLB_MIEN_CRX_BREAK_Msk              (_U_(0x1) << MLB_MIEN_CRX_BREAK_Pos)           /**< (MLB_MIEN) Control Rx Break Enable Mask */
#define MLB_MIEN_CRX_BREAK                  MLB_MIEN_CRX_BREAK_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use MLB_MIEN_CRX_BREAK_Msk instead */
#define MLB_MIEN_CTX_DONE_Pos               27                                             /**< (MLB_MIEN) Control Tx Packet Done Enable Position */
#define MLB_MIEN_CTX_DONE_Msk               (_U_(0x1) << MLB_MIEN_CTX_DONE_Pos)            /**< (MLB_MIEN) Control Tx Packet Done Enable Mask */
#define MLB_MIEN_CTX_DONE                   MLB_MIEN_CTX_DONE_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use MLB_MIEN_CTX_DONE_Msk instead */
#define MLB_MIEN_CTX_PE_Pos                 28                                             /**< (MLB_MIEN) Control Tx Protocol Error Enable Position */
#define MLB_MIEN_CTX_PE_Msk                 (_U_(0x1) << MLB_MIEN_CTX_PE_Pos)              /**< (MLB_MIEN) Control Tx Protocol Error Enable Mask */
#define MLB_MIEN_CTX_PE                     MLB_MIEN_CTX_PE_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use MLB_MIEN_CTX_PE_Msk instead */
#define MLB_MIEN_CTX_BREAK_Pos              29                                             /**< (MLB_MIEN) Control Tx Break Enable Position */
#define MLB_MIEN_CTX_BREAK_Msk              (_U_(0x1) << MLB_MIEN_CTX_BREAK_Pos)           /**< (MLB_MIEN) Control Tx Break Enable Mask */
#define MLB_MIEN_CTX_BREAK                  MLB_MIEN_CTX_BREAK_Msk                         /**< \deprecated Old style mask definition for 1 bit bitfield. Use MLB_MIEN_CTX_BREAK_Msk instead */
#define MLB_MIEN_MASK                       _U_(0x3F7F0003)                                /**< \deprecated (MLB_MIEN) Register MASK  (Use MLB_MIEN_Msk instead)  */
#define MLB_MIEN_Msk                        _U_(0x3F7F0003)                                /**< (MLB_MIEN) Register Mask  */


/* -------- MLB_MLBC1 : (MLB Offset: 0x3c) (R/W 32) MediaLB Control 1 Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t :6;                        /**< bit:   0..5  Reserved */
    uint32_t LOCK:1;                    /**< bit:      6  MediaLB Lock Error Status (cleared by writing a 0) */
    uint32_t CLKM:1;                    /**< bit:      7  MediaLB Clock Missing Status (cleared by writing a 0) */
    uint32_t NDA:8;                     /**< bit:  8..15  Node Device Address                      */
    uint32_t :16;                       /**< bit: 16..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} MLB_MLBC1_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define MLB_MLBC1_OFFSET                    (0x3C)                                        /**<  (MLB_MLBC1) MediaLB Control 1 Register  Offset */

#define MLB_MLBC1_LOCK_Pos                  6                                              /**< (MLB_MLBC1) MediaLB Lock Error Status (cleared by writing a 0) Position */
#define MLB_MLBC1_LOCK_Msk                  (_U_(0x1) << MLB_MLBC1_LOCK_Pos)               /**< (MLB_MLBC1) MediaLB Lock Error Status (cleared by writing a 0) Mask */
#define MLB_MLBC1_LOCK                      MLB_MLBC1_LOCK_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use MLB_MLBC1_LOCK_Msk instead */
#define MLB_MLBC1_CLKM_Pos                  7                                              /**< (MLB_MLBC1) MediaLB Clock Missing Status (cleared by writing a 0) Position */
#define MLB_MLBC1_CLKM_Msk                  (_U_(0x1) << MLB_MLBC1_CLKM_Pos)               /**< (MLB_MLBC1) MediaLB Clock Missing Status (cleared by writing a 0) Mask */
#define MLB_MLBC1_CLKM                      MLB_MLBC1_CLKM_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use MLB_MLBC1_CLKM_Msk instead */
#define MLB_MLBC1_NDA_Pos                   8                                              /**< (MLB_MLBC1) Node Device Address Position */
#define MLB_MLBC1_NDA_Msk                   (_U_(0xFF) << MLB_MLBC1_NDA_Pos)               /**< (MLB_MLBC1) Node Device Address Mask */
#define MLB_MLBC1_NDA(value)                (MLB_MLBC1_NDA_Msk & ((value) << MLB_MLBC1_NDA_Pos))
#define MLB_MLBC1_MASK                      _U_(0xFFC0)                                    /**< \deprecated (MLB_MLBC1) Register MASK  (Use MLB_MLBC1_Msk instead)  */
#define MLB_MLBC1_Msk                       _U_(0xFFC0)                                    /**< (MLB_MLBC1) Register Mask  */


/* -------- MLB_HCTL : (MLB Offset: 0x80) (R/W 32) HBI Control Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t RST0:1;                    /**< bit:      0  Address Generation Unit 0 Software Reset */
    uint32_t RST1:1;                    /**< bit:      1  Address Generation Unit 1 Software Reset */
    uint32_t :13;                       /**< bit:  2..14  Reserved */
    uint32_t EN:1;                      /**< bit:     15  HBI Enable                               */
    uint32_t :16;                       /**< bit: 16..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  struct {
    uint32_t RST:2;                     /**< bit:   0..1  Address Generation Unit x Software Reset */
    uint32_t :30;                       /**< bit:  2..31 Reserved */
  } vec;                                /**< Structure used for vec  access  */
  uint32_t reg;                         /**< Type used for register access */
} MLB_HCTL_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define MLB_HCTL_OFFSET                     (0x80)                                        /**<  (MLB_HCTL) HBI Control Register  Offset */

#define MLB_HCTL_RST0_Pos                   0                                              /**< (MLB_HCTL) Address Generation Unit 0 Software Reset Position */
#define MLB_HCTL_RST0_Msk                   (_U_(0x1) << MLB_HCTL_RST0_Pos)                /**< (MLB_HCTL) Address Generation Unit 0 Software Reset Mask */
#define MLB_HCTL_RST0                       MLB_HCTL_RST0_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use MLB_HCTL_RST0_Msk instead */
#define MLB_HCTL_RST1_Pos                   1                                              /**< (MLB_HCTL) Address Generation Unit 1 Software Reset Position */
#define MLB_HCTL_RST1_Msk                   (_U_(0x1) << MLB_HCTL_RST1_Pos)                /**< (MLB_HCTL) Address Generation Unit 1 Software Reset Mask */
#define MLB_HCTL_RST1                       MLB_HCTL_RST1_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use MLB_HCTL_RST1_Msk instead */
#define MLB_HCTL_EN_Pos                     15                                             /**< (MLB_HCTL) HBI Enable Position */
#define MLB_HCTL_EN_Msk                     (_U_(0x1) << MLB_HCTL_EN_Pos)                  /**< (MLB_HCTL) HBI Enable Mask */
#define MLB_HCTL_EN                         MLB_HCTL_EN_Msk                                /**< \deprecated Old style mask definition for 1 bit bitfield. Use MLB_HCTL_EN_Msk instead */
#define MLB_HCTL_MASK                       _U_(0x8003)                                    /**< \deprecated (MLB_HCTL) Register MASK  (Use MLB_HCTL_Msk instead)  */
#define MLB_HCTL_Msk                        _U_(0x8003)                                    /**< (MLB_HCTL) Register Mask  */

#define MLB_HCTL_RST_Pos                    0                                              /**< (MLB_HCTL Position) Address Generation Unit x Software Reset */
#define MLB_HCTL_RST_Msk                    (_U_(0x3) << MLB_HCTL_RST_Pos)                 /**< (MLB_HCTL Mask) RST */
#define MLB_HCTL_RST(value)                 (MLB_HCTL_RST_Msk & ((value) << MLB_HCTL_RST_Pos))  

/* -------- MLB_HCMR : (MLB Offset: 0x88) (R/W 32) HBI Channel Mask 0 Register 0 -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t CHM:32;                    /**< bit:  0..31  Bitwise Channel Mask Bit [31:0]          */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} MLB_HCMR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define MLB_HCMR_OFFSET                     (0x88)                                        /**<  (MLB_HCMR) HBI Channel Mask 0 Register 0  Offset */

#define MLB_HCMR_CHM_Pos                    0                                              /**< (MLB_HCMR) Bitwise Channel Mask Bit [31:0] Position */
#define MLB_HCMR_CHM_Msk                    (_U_(0xFFFFFFFF) << MLB_HCMR_CHM_Pos)          /**< (MLB_HCMR) Bitwise Channel Mask Bit [31:0] Mask */
#define MLB_HCMR_CHM(value)                 (MLB_HCMR_CHM_Msk & ((value) << MLB_HCMR_CHM_Pos))
#define MLB_HCMR_MASK                       _U_(0xFFFFFFFF)                                /**< \deprecated (MLB_HCMR) Register MASK  (Use MLB_HCMR_Msk instead)  */
#define MLB_HCMR_Msk                        _U_(0xFFFFFFFF)                                /**< (MLB_HCMR) Register Mask  */


/* -------- MLB_HCER : (MLB Offset: 0x90) (R/ 32) HBI Channel Error 0 Register 0 -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t CERR:32;                   /**< bit:  0..31  Bitwise Channel Error Bit [31:0]         */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} MLB_HCER_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define MLB_HCER_OFFSET                     (0x90)                                        /**<  (MLB_HCER) HBI Channel Error 0 Register 0  Offset */

#define MLB_HCER_CERR_Pos                   0                                              /**< (MLB_HCER) Bitwise Channel Error Bit [31:0] Position */
#define MLB_HCER_CERR_Msk                   (_U_(0xFFFFFFFF) << MLB_HCER_CERR_Pos)         /**< (MLB_HCER) Bitwise Channel Error Bit [31:0] Mask */
#define MLB_HCER_CERR(value)                (MLB_HCER_CERR_Msk & ((value) << MLB_HCER_CERR_Pos))
#define MLB_HCER_MASK                       _U_(0xFFFFFFFF)                                /**< \deprecated (MLB_HCER) Register MASK  (Use MLB_HCER_Msk instead)  */
#define MLB_HCER_Msk                        _U_(0xFFFFFFFF)                                /**< (MLB_HCER) Register Mask  */


/* -------- MLB_HCBR : (MLB Offset: 0x98) (R/ 32) HBI Channel Busy 0 Register 0 -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t CHB:32;                    /**< bit:  0..31  Bitwise Channel Busy Bit [31:0]          */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} MLB_HCBR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define MLB_HCBR_OFFSET                     (0x98)                                        /**<  (MLB_HCBR) HBI Channel Busy 0 Register 0  Offset */

#define MLB_HCBR_CHB_Pos                    0                                              /**< (MLB_HCBR) Bitwise Channel Busy Bit [31:0] Position */
#define MLB_HCBR_CHB_Msk                    (_U_(0xFFFFFFFF) << MLB_HCBR_CHB_Pos)          /**< (MLB_HCBR) Bitwise Channel Busy Bit [31:0] Mask */
#define MLB_HCBR_CHB(value)                 (MLB_HCBR_CHB_Msk & ((value) << MLB_HCBR_CHB_Pos))
#define MLB_HCBR_MASK                       _U_(0xFFFFFFFF)                                /**< \deprecated (MLB_HCBR) Register MASK  (Use MLB_HCBR_Msk instead)  */
#define MLB_HCBR_Msk                        _U_(0xFFFFFFFF)                                /**< (MLB_HCBR) Register Mask  */


/* -------- MLB_MDAT : (MLB Offset: 0xc0) (R/W 32) MIF Data 0 Register 0 -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t DATA:32;                   /**< bit:  0..31  CRT or DBR Data                          */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} MLB_MDAT_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define MLB_MDAT_OFFSET                     (0xC0)                                        /**<  (MLB_MDAT) MIF Data 0 Register 0  Offset */

#define MLB_MDAT_DATA_Pos                   0                                              /**< (MLB_MDAT) CRT or DBR Data Position */
#define MLB_MDAT_DATA_Msk                   (_U_(0xFFFFFFFF) << MLB_MDAT_DATA_Pos)         /**< (MLB_MDAT) CRT or DBR Data Mask */
#define MLB_MDAT_DATA(value)                (MLB_MDAT_DATA_Msk & ((value) << MLB_MDAT_DATA_Pos))
#define MLB_MDAT_MASK                       _U_(0xFFFFFFFF)                                /**< \deprecated (MLB_MDAT) Register MASK  (Use MLB_MDAT_Msk instead)  */
#define MLB_MDAT_Msk                        _U_(0xFFFFFFFF)                                /**< (MLB_MDAT) Register Mask  */


/* -------- MLB_MDWE : (MLB Offset: 0xd0) (R/W 32) MIF Data Write Enable 0 Register 0 -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t MASK:32;                   /**< bit:  0..31  Bitwise Write Enable for CTR Data - bits[31:0] */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} MLB_MDWE_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define MLB_MDWE_OFFSET                     (0xD0)                                        /**<  (MLB_MDWE) MIF Data Write Enable 0 Register 0  Offset */

#define MLB_MDWE_MASK_Pos                   0                                              /**< (MLB_MDWE) Bitwise Write Enable for CTR Data - bits[31:0] Position */
#define MLB_MDWE_MASK_Msk                   (_U_(0xFFFFFFFF) << MLB_MDWE_MASK_Pos)         /**< (MLB_MDWE) Bitwise Write Enable for CTR Data - bits[31:0] Mask */
#define MLB_MDWE_MASK(value)                (MLB_MDWE_MASK_Msk & ((value) << MLB_MDWE_MASK_Pos))
#define MLB_MDWE_Msk                        _U_(0xFFFFFFFF)                                /**< (MLB_MDWE) Register Mask  */


/* -------- MLB_MCTL : (MLB Offset: 0xe0) (R/W 32) MIF Control Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t XCMP:1;                    /**< bit:      0  Transfer Complete (Write 0 to Clear)     */
    uint32_t :31;                       /**< bit:  1..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} MLB_MCTL_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define MLB_MCTL_OFFSET                     (0xE0)                                        /**<  (MLB_MCTL) MIF Control Register  Offset */

#define MLB_MCTL_XCMP_Pos                   0                                              /**< (MLB_MCTL) Transfer Complete (Write 0 to Clear) Position */
#define MLB_MCTL_XCMP_Msk                   (_U_(0x1) << MLB_MCTL_XCMP_Pos)                /**< (MLB_MCTL) Transfer Complete (Write 0 to Clear) Mask */
#define MLB_MCTL_XCMP                       MLB_MCTL_XCMP_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use MLB_MCTL_XCMP_Msk instead */
#define MLB_MCTL_MASK                       _U_(0x01)                                      /**< \deprecated (MLB_MCTL) Register MASK  (Use MLB_MCTL_Msk instead)  */
#define MLB_MCTL_Msk                        _U_(0x01)                                      /**< (MLB_MCTL) Register Mask  */


/* -------- MLB_MADR : (MLB Offset: 0xe4) (R/W 32) MIF Address Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t ADDR:14;                   /**< bit:  0..13  CTR or DBR Address                       */
    uint32_t :16;                       /**< bit: 14..29  Reserved */
    uint32_t TB:1;                      /**< bit:     30  Target Location Bit                      */
    uint32_t WNR:1;                     /**< bit:     31  Write-Not-Read Selection                 */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} MLB_MADR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define MLB_MADR_OFFSET                     (0xE4)                                        /**<  (MLB_MADR) MIF Address Register  Offset */

#define MLB_MADR_ADDR_Pos                   0                                              /**< (MLB_MADR) CTR or DBR Address Position */
#define MLB_MADR_ADDR_Msk                   (_U_(0x3FFF) << MLB_MADR_ADDR_Pos)             /**< (MLB_MADR) CTR or DBR Address Mask */
#define MLB_MADR_ADDR(value)                (MLB_MADR_ADDR_Msk & ((value) << MLB_MADR_ADDR_Pos))
#define MLB_MADR_TB_Pos                     30                                             /**< (MLB_MADR) Target Location Bit Position */
#define MLB_MADR_TB_Msk                     (_U_(0x1) << MLB_MADR_TB_Pos)                  /**< (MLB_MADR) Target Location Bit Mask */
#define MLB_MADR_TB                         MLB_MADR_TB_Msk                                /**< \deprecated Old style mask definition for 1 bit bitfield. Use MLB_MADR_TB_Msk instead */
#define   MLB_MADR_TB_CTR_Val               _U_(0x0)                                       /**< (MLB_MADR) Selects CTR  */
#define   MLB_MADR_TB_DBR_Val               _U_(0x1)                                       /**< (MLB_MADR) Selects DBR  */
#define MLB_MADR_TB_CTR                     (MLB_MADR_TB_CTR_Val << MLB_MADR_TB_Pos)       /**< (MLB_MADR) Selects CTR Position  */
#define MLB_MADR_TB_DBR                     (MLB_MADR_TB_DBR_Val << MLB_MADR_TB_Pos)       /**< (MLB_MADR) Selects DBR Position  */
#define MLB_MADR_WNR_Pos                    31                                             /**< (MLB_MADR) Write-Not-Read Selection Position */
#define MLB_MADR_WNR_Msk                    (_U_(0x1) << MLB_MADR_WNR_Pos)                 /**< (MLB_MADR) Write-Not-Read Selection Mask */
#define MLB_MADR_WNR                        MLB_MADR_WNR_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use MLB_MADR_WNR_Msk instead */
#define MLB_MADR_MASK                       _U_(0xC0003FFF)                                /**< \deprecated (MLB_MADR) Register MASK  (Use MLB_MADR_Msk instead)  */
#define MLB_MADR_Msk                        _U_(0xC0003FFF)                                /**< (MLB_MADR) Register Mask  */


/* -------- MLB_ACTL : (MLB Offset: 0x3c0) (R/W 32) AHB Control Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t SCE:1;                     /**< bit:      0  Software Clear Enable                    */
    uint32_t SMX:1;                     /**< bit:      1  AHB Interrupt Mux Enable                 */
    uint32_t DMA_MODE:1;                /**< bit:      2  DMA Mode                                 */
    uint32_t :1;                        /**< bit:      3  Reserved */
    uint32_t MPB:1;                     /**< bit:      4  DMA Packet Buffering Mode                */
    uint32_t :27;                       /**< bit:  5..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} MLB_ACTL_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define MLB_ACTL_OFFSET                     (0x3C0)                                       /**<  (MLB_ACTL) AHB Control Register  Offset */

#define MLB_ACTL_SCE_Pos                    0                                              /**< (MLB_ACTL) Software Clear Enable Position */
#define MLB_ACTL_SCE_Msk                    (_U_(0x1) << MLB_ACTL_SCE_Pos)                 /**< (MLB_ACTL) Software Clear Enable Mask */
#define MLB_ACTL_SCE                        MLB_ACTL_SCE_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use MLB_ACTL_SCE_Msk instead */
#define MLB_ACTL_SMX_Pos                    1                                              /**< (MLB_ACTL) AHB Interrupt Mux Enable Position */
#define MLB_ACTL_SMX_Msk                    (_U_(0x1) << MLB_ACTL_SMX_Pos)                 /**< (MLB_ACTL) AHB Interrupt Mux Enable Mask */
#define MLB_ACTL_SMX                        MLB_ACTL_SMX_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use MLB_ACTL_SMX_Msk instead */
#define MLB_ACTL_DMA_MODE_Pos               2                                              /**< (MLB_ACTL) DMA Mode Position */
#define MLB_ACTL_DMA_MODE_Msk               (_U_(0x1) << MLB_ACTL_DMA_MODE_Pos)            /**< (MLB_ACTL) DMA Mode Mask */
#define MLB_ACTL_DMA_MODE                   MLB_ACTL_DMA_MODE_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use MLB_ACTL_DMA_MODE_Msk instead */
#define MLB_ACTL_MPB_Pos                    4                                              /**< (MLB_ACTL) DMA Packet Buffering Mode Position */
#define MLB_ACTL_MPB_Msk                    (_U_(0x1) << MLB_ACTL_MPB_Pos)                 /**< (MLB_ACTL) DMA Packet Buffering Mode Mask */
#define MLB_ACTL_MPB                        MLB_ACTL_MPB_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use MLB_ACTL_MPB_Msk instead */
#define   MLB_ACTL_MPB_SINGLE_PACKET_Val    _U_(0x0)                                       /**< (MLB_ACTL) Single-packet mode  */
#define   MLB_ACTL_MPB_MULTIPLE_PACKET_Val  _U_(0x1)                                       /**< (MLB_ACTL) Multiple-packet mode  */
#define MLB_ACTL_MPB_SINGLE_PACKET          (MLB_ACTL_MPB_SINGLE_PACKET_Val << MLB_ACTL_MPB_Pos)  /**< (MLB_ACTL) Single-packet mode Position  */
#define MLB_ACTL_MPB_MULTIPLE_PACKET        (MLB_ACTL_MPB_MULTIPLE_PACKET_Val << MLB_ACTL_MPB_Pos)  /**< (MLB_ACTL) Multiple-packet mode Position  */
#define MLB_ACTL_MASK                       _U_(0x17)                                      /**< \deprecated (MLB_ACTL) Register MASK  (Use MLB_ACTL_Msk instead)  */
#define MLB_ACTL_Msk                        _U_(0x17)                                      /**< (MLB_ACTL) Register Mask  */


/* -------- MLB_ACSR : (MLB Offset: 0x3d0) (R/W 32) AHB Channel Status 0 Register 0 -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t CHS:32;                    /**< bit:  0..31  Interrupt Status for Logical Channels [31:0] (cleared by writing a 1) */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} MLB_ACSR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define MLB_ACSR_OFFSET                     (0x3D0)                                       /**<  (MLB_ACSR) AHB Channel Status 0 Register 0  Offset */

#define MLB_ACSR_CHS_Pos                    0                                              /**< (MLB_ACSR) Interrupt Status for Logical Channels [31:0] (cleared by writing a 1) Position */
#define MLB_ACSR_CHS_Msk                    (_U_(0xFFFFFFFF) << MLB_ACSR_CHS_Pos)          /**< (MLB_ACSR) Interrupt Status for Logical Channels [31:0] (cleared by writing a 1) Mask */
#define MLB_ACSR_CHS(value)                 (MLB_ACSR_CHS_Msk & ((value) << MLB_ACSR_CHS_Pos))
#define MLB_ACSR_MASK                       _U_(0xFFFFFFFF)                                /**< \deprecated (MLB_ACSR) Register MASK  (Use MLB_ACSR_Msk instead)  */
#define MLB_ACSR_Msk                        _U_(0xFFFFFFFF)                                /**< (MLB_ACSR) Register Mask  */


/* -------- MLB_ACMR : (MLB Offset: 0x3d8) (R/W 32) AHB Channel Mask 0 Register 0 -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'N'
typedef union { 
  struct {
    uint32_t CHM:32;                    /**< bit:  0..31  Bitwise Channel Mask Bits 31 to 0        */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} MLB_ACMR_Type;
#endif
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define MLB_ACMR_OFFSET                     (0x3D8)                                       /**<  (MLB_ACMR) AHB Channel Mask 0 Register 0  Offset */

#define MLB_ACMR_CHM_Pos                    0                                              /**< (MLB_ACMR) Bitwise Channel Mask Bits 31 to 0 Position */
#define MLB_ACMR_CHM_Msk                    (_U_(0xFFFFFFFF) << MLB_ACMR_CHM_Pos)          /**< (MLB_ACMR) Bitwise Channel Mask Bits 31 to 0 Mask */
#define MLB_ACMR_CHM(value)                 (MLB_ACMR_CHM_Msk & ((value) << MLB_ACMR_CHM_Pos))
#define MLB_ACMR_MASK                       _U_(0xFFFFFFFF)                                /**< \deprecated (MLB_ACMR) Register MASK  (Use MLB_ACMR_Msk instead)  */
#define MLB_ACMR_Msk                        _U_(0xFFFFFFFF)                                /**< (MLB_ACMR) Register Mask  */


#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'R'
/** \brief MLB hardware registers */
typedef struct {  
  __IO uint32_t MLB_MLBC0;      /**< (MLB Offset: 0x00) MediaLB Control 0 Register */
  __I  uint8_t                        Reserved1[8];
  __IO uint32_t MLB_MS0;        /**< (MLB Offset: 0x0C) MediaLB Channel Status 0 Register */
  __I  uint8_t                        Reserved2[4];
  __IO uint32_t MLB_MS1;        /**< (MLB Offset: 0x14) MediaLB Channel Status1 Register */
  __I  uint8_t                        Reserved3[8];
  __IO uint32_t MLB_MSS;        /**< (MLB Offset: 0x20) MediaLB System Status Register */
  __I  uint32_t MLB_MSD;        /**< (MLB Offset: 0x24) MediaLB System Data Register */
  __I  uint8_t                        Reserved4[4];
  __IO uint32_t MLB_MIEN;       /**< (MLB Offset: 0x2C) MediaLB Interrupt Enable Register */
  __I  uint8_t                        Reserved5[12];
  __IO uint32_t MLB_MLBC1;      /**< (MLB Offset: 0x3C) MediaLB Control 1 Register */
  __I  uint8_t                        Reserved6[64];
  __IO uint32_t MLB_HCTL;       /**< (MLB Offset: 0x80) HBI Control Register */
  __I  uint8_t                        Reserved7[4];
  __IO uint32_t MLB_HCMR[2];    /**< (MLB Offset: 0x88) HBI Channel Mask 0 Register 0 */
  __I  uint32_t MLB_HCER[2];    /**< (MLB Offset: 0x90) HBI Channel Error 0 Register 0 */
  __I  uint32_t MLB_HCBR[2];    /**< (MLB Offset: 0x98) HBI Channel Busy 0 Register 0 */
  __I  uint8_t                        Reserved8[32];
  __IO uint32_t MLB_MDAT[4];    /**< (MLB Offset: 0xC0) MIF Data 0 Register 0 */
  __IO uint32_t MLB_MDWE[4];    /**< (MLB Offset: 0xD0) MIF Data Write Enable 0 Register 0 */
  __IO uint32_t MLB_MCTL;       /**< (MLB Offset: 0xE0) MIF Control Register */
  __IO uint32_t MLB_MADR;       /**< (MLB Offset: 0xE4) MIF Address Register */
  __I  uint8_t                        Reserved9[728];
  __IO uint32_t MLB_ACTL;       /**< (MLB Offset: 0x3C0) AHB Control Register */
  __I  uint8_t                        Reserved10[12];
  __IO uint32_t MLB_ACSR[2];    /**< (MLB Offset: 0x3D0) AHB Channel Status 0 Register 0 */
  __IO uint32_t MLB_ACMR[2];    /**< (MLB Offset: 0x3D8) AHB Channel Mask 0 Register 0 */
} Mlb;

#elif COMPONENT_TYPEDEF_STYLE == 'N'
/** \brief MLB hardware registers */
typedef struct {  
  __IO MLB_MLBC0_Type                 MLB_MLBC0;      /**< Offset: 0x00 (R/W  32) MediaLB Control 0 Register */
  __I  uint8_t                        Reserved1[8];
  __IO MLB_MS0_Type                   MLB_MS0;        /**< Offset: 0x0C (R/W  32) MediaLB Channel Status 0 Register */
  __I  uint8_t                        Reserved2[4];
  __IO MLB_MS1_Type                   MLB_MS1;        /**< Offset: 0x14 (R/W  32) MediaLB Channel Status1 Register */
  __I  uint8_t                        Reserved3[8];
  __IO MLB_MSS_Type                   MLB_MSS;        /**< Offset: 0x20 (R/W  32) MediaLB System Status Register */
  __I  MLB_MSD_Type                   MLB_MSD;        /**< Offset: 0x24 (R/   32) MediaLB System Data Register */
  __I  uint8_t                        Reserved4[4];
  __IO MLB_MIEN_Type                  MLB_MIEN;       /**< Offset: 0x2C (R/W  32) MediaLB Interrupt Enable Register */
  __I  uint8_t                        Reserved5[12];
  __IO MLB_MLBC1_Type                 MLB_MLBC1;      /**< Offset: 0x3C (R/W  32) MediaLB Control 1 Register */
  __I  uint8_t                        Reserved6[64];
  __IO MLB_HCTL_Type                  MLB_HCTL;       /**< Offset: 0x80 (R/W  32) HBI Control Register */
  __I  uint8_t                        Reserved7[4];
  __IO MLB_HCMR_Type                  MLB_HCMR[2];    /**< Offset: 0x88 (R/W  32) HBI Channel Mask 0 Register 0 */
  __I  MLB_HCER_Type                  MLB_HCER[2];    /**< Offset: 0x90 (R/   32) HBI Channel Error 0 Register 0 */
  __I  MLB_HCBR_Type                  MLB_HCBR[2];    /**< Offset: 0x98 (R/   32) HBI Channel Busy 0 Register 0 */
  __I  uint8_t                        Reserved8[32];
  __IO MLB_MDAT_Type                  MLB_MDAT[4];    /**< Offset: 0xC0 (R/W  32) MIF Data 0 Register 0 */
  __IO MLB_MDWE_Type                  MLB_MDWE[4];    /**< Offset: 0xD0 (R/W  32) MIF Data Write Enable 0 Register 0 */
  __IO MLB_MCTL_Type                  MLB_MCTL;       /**< Offset: 0xE0 (R/W  32) MIF Control Register */
  __IO MLB_MADR_Type                  MLB_MADR;       /**< Offset: 0xE4 (R/W  32) MIF Address Register */
  __I  uint8_t                        Reserved9[728];
  __IO MLB_ACTL_Type                  MLB_ACTL;       /**< Offset: 0x3C0 (R/W  32) AHB Control Register */
  __I  uint8_t                        Reserved10[12];
  __IO MLB_ACSR_Type                  MLB_ACSR[2];    /**< Offset: 0x3D0 (R/W  32) AHB Channel Status 0 Register 0 */
  __IO MLB_ACMR_Type                  MLB_ACMR[2];    /**< Offset: 0x3D8 (R/W  32) AHB Channel Mask 0 Register 0 */
} Mlb;

#else /* COMPONENT_TYPEDEF_STYLE */
#error Unknown component typedef style
#endif /* COMPONENT_TYPEDEF_STYLE */

#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
/** @}  end of MediaLB */

#endif /* _SAMV71_MLB_COMPONENT_H_ */
