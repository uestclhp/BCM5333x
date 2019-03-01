/*
 * $Id: config_loader.h,v 1.21 Broadcom SDK $
 *
 * $Copyright: Copyright 2016 Broadcom Corporation.
 * This program is the proprietary software of Broadcom Corporation
 * and/or its licensors, and may only be used, duplicated, modified
 * or distributed pursuant to the terms and conditions of a separate,
 * written license agreement executed between you and Broadcom
 * (an "Authorized License").  Except as set forth in an Authorized
 * License, Broadcom grants no license (express or implied), right
 * to use, or waiver of any kind with respect to the Software, and
 * Broadcom expressly reserves all rights in and to the Software
 * and all intellectual property rights therein.  IF YOU HAVE
 * NO AUTHORIZED LICENSE, THEN YOU HAVE NO RIGHT TO USE THIS SOFTWARE
 * IN ANY WAY, AND SHOULD IMMEDIATELY NOTIFY BROADCOM AND DISCONTINUE
 * ALL USE OF THE SOFTWARE.  
 *  
 * Except as expressly set forth in the Authorized License,
 *  
 * 1.     This program, including its structure, sequence and organization,
 * constitutes the valuable trade secrets of Broadcom, and you shall use
 * all reasonable efforts to protect the confidentiality thereof,
 * and to use this information only in connection with your use of
 * Broadcom integrated circuit products.
 *  
 * 2.     TO THE MAXIMUM EXTENT PERMITTED BY LAW, THE SOFTWARE IS
 * PROVIDED "AS IS" AND WITH ALL FAULTS AND BROADCOM MAKES NO PROMISES,
 * REPRESENTATIONS OR WARRANTIES, EITHER EXPRESS, IMPLIED, STATUTORY,
 * OR OTHERWISE, WITH RESPECT TO THE SOFTWARE.  BROADCOM SPECIFICALLY
 * DISCLAIMS ANY AND ALL IMPLIED WARRANTIES OF TITLE, MERCHANTABILITY,
 * NONINFRINGEMENT, FITNESS FOR A PARTICULAR PURPOSE, LACK OF VIRUSES,
 * ACCURACY OR COMPLETENESS, QUIET ENJOYMENT, QUIET POSSESSION OR
 * CORRESPONDENCE TO DESCRIPTION. YOU ASSUME THE ENTIRE RISK ARISING
 * OUT OF USE OR PERFORMANCE OF THE SOFTWARE.
 * 
 * 3.     TO THE MAXIMUM EXTENT PERMITTED BY LAW, IN NO EVENT SHALL
 * BROADCOM OR ITS LICENSORS BE LIABLE FOR (i) CONSEQUENTIAL,
 * INCIDENTAL, SPECIAL, INDIRECT, OR EXEMPLARY DAMAGES WHATSOEVER
 * ARISING OUT OF OR IN ANY WAY RELATING TO YOUR USE OF OR INABILITY
 * TO USE THE SOFTWARE EVEN IF BROADCOM HAS BEEN ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGES; OR (ii) ANY AMOUNT IN EXCESS OF
 * THE AMOUNT ACTUALLY PAID FOR THE SOFTWARE ITSELF OR USD 1.00,
 * WHICHEVER IS GREATER. THESE LIMITATIONS SHALL APPLY NOTWITHSTANDING
 * ANY FAILURE OF ESSENTIAL PURPOSE OF ANY LIMITED REMEDY.$
 *
 */

#ifndef _CONFIG_H_
#define _CONFIG_H_
#define __BOOTLOADER__
/* Chip type */
#define CFG_XGS_CHIP                        (1)
#define CFG_ROBO_CHIP                       (!CFG_XGS_CHIP)

/* ROM code related */
#define CONFIG_GREYHOUND_ROMCODE            (0)

#define CONFIG_GREYHOUND_EMULATION          (0)

/* Enable console output */
#define CFG_CONSOLE_ENABLED                 (1)

/* Enable debug output */
#define CFG_DEBUGGING_ENABLED               (0)

/* Enable assertion */
#define CFG_ASSERTION_ENABLED               (0)

/* Enhanced power saving */
#define CFG_ENHANCED_POWER_SAVING           (0)

/* Enable packet RX/TX support */
#define CFG_RXTX_SUPPORT_ENABLED            (1)

/* Enable SAL LIB_support */
#define CFG_SAL_LIB_SUPPORT_ENABLED         (1)

/* CLI support */
#define CFG_CLI_ENABLED                     (1 && CFG_CONSOLE_ENABLED)

/* CLI prompt */
#define CFG_CLI_PROMPT                      "CMD> "

/* CLI system commands support */
#define CFG_CLI_SYSTEM_CMD_ENABLED          (1)

/* CLI switch commands support */
#define CFG_CLI_SWITCH_CMD_ENABLED          (1)

/* CLI power commands support */
#define CFG_CLI_POWER_CMD_ENABLED           (0)

/* CLI RX commands support */
#define CFG_CLI_RX_CMD_ENABLED              (0)

/* CLI TX commands support */
#define CFG_CLI_TX_CMD_ENABLED              (0)

/* CLI RX monitor */
#define CFG_CLI_RX_MON_PRIORITY             (1)

/* uIP main control RX priority */
#define CFG_UIP_RX_PRIORITY                 (10)

/* CLI TX packet configurations */
#define CFG_CLI_TX_MAX_PKTCFGS              (8)

/* UART baudrate */
#define CFG_UART_BAUDRATE                (9600)

/* PCIe serdes powerdown */
#define CFG_PCIE_SERDES_POWERDOWN_ENABLED   (1)

/* Max background tasks */
#define CFG_MAX_BACKGROUND_TASKS            (8)

/* Enable timer callback mechanism */
#define CFG_TIMER_CALLBACK_SUPPORT          (1)

/* Max registered timer (callback) */
#define CFG_MAX_REGISTERED_TIMERS           (16)

/* Enable linkchange callback mechanism */
#define CFG_LINKCHANGE_CALLBACK_SUPPORT     (1)

/* Max registered link change callback */
#define CFG_MAX_REGISTERED_LINKCHANGE       (16)

/* Interval for checking link change (in us) */
#define CFG_LINKCHANGE_CHECK_INTERVAL       (600000UL)

/* Max registered RX callback functions */
#define CFG_MAX_REGISTERED_RX_CBKS          (16)

/* Whether RX uses interrupt for receiving notification */
#define CFG_RX_USE_INTERRUPT                (0)

/* Packet length (excluding CRC) */
#define MIN_PACKET_LENGTH                   (60)
#define MAX_PACKET_LENGTH                   (1514)

/* FP */
#define ENTRIES_PER_SLICE                   (256)

/* Critical region protection with antoher processor*/
#define CFG_SOC_SEMAPHORE_INCLUDED

/* chip type */
#define CFG_SWITCH_XGS_NEW_SBUS_FORMAT_INCLUDED

/* Stoarge related */
#define CFG_FLASH_SUPPORT_ENABLED           (1)
#define CFG_CLI_FLASH_CMD_ENABLED           (1)

/* A factory data management engine*/
#define CFG_FACTORY_CONFIG_INCLUDED

/* A binary storage management engine, named serializer */
#define CFG_PERSISTENCE_SUPPORT_ENABLED     (0)

/* IP above layer related  setting*/
#define CFG_UIP_STACK_ENABLED               (1 && CFG_RXTX_SUPPORT_ENABLED)
#define MAX_IP_TOTAL_LENGTH                 (1500)
#define CFG_UIP_IPV6_ENABLED                (1 && CFG_UIP_STACK_ENABLED)
#define CFG_NET_LINKCHANGE_NOTIFY_INCLUDED
#define CFG_NET_MAX_LINKCHANGE_HANDLER      (8)

/* HTTP server */
#define CFG_HTTPD_ENABLED                   (1)

/* Zero Configuration Networking */
/* Auto config of IPv4 Link-Local Addresses */
#define CFG_ZEROCONF_AUTOIP_INCLUDED    

/* Multicast DNS and DNS-SD (Bonjour) */
#define CFG_ZEROCONF_MDNS_INCLUDED      

#ifdef CFG_ZEROCONF_MDNS_INCLUDED
/* End with dot symbol */
#define CFG_MDNS_DEFAULT_HTTP_INSTANCE "UM-BCM95340x."
/* TXT record information */
#define CFG_MDNS_MODEL_NAME "BCM95340xR"
#define CFG_MDNS_MODEL_DESC "BCM95340x Reference Board"
#endif /* CFG_ZEROCONF_MDNS_INCLUDED */


/*
  *  CFG_NVRAM_SUPPORT_INCLUDED
  *      undefined : exclude the NVRAM defined advance command line engine
  *      defined: include the NVRAM storage
  */

/* #define CFG_NVRAM_SUPPORT_INCLUDED */





/****************************************************************************
 *
 * Features defined below can be selectively add or removed before building the image
 *
 ****************************************************************************/

/*
  *  CFG_VENDOR_CONFIG_SUPPORT_INCLUDED
  *      undefined : exclude VENDOR CONFIG related code
  *      defined: will include the NVRAM ,some XCMD utils and VENDOR CONFIG code
  */

#define CFG_VENDOR_CONFIG_SUPPORT_INCLUDED

/*
  *  CFG_ETHERNET_WIRESPEED_INCLUDED
  *      undefined : exclude ethernet wirespeed feature
  *      defined: include ethernet wirespeed feature
  */
/* #define CFG_ETHERNET_WIRESPEED_INCLUDED */

#ifdef CFG_ETHERNET_WIRESPEED_INCLUDED
/*
 * Ethernet@wirespeed retry disable.
 *   defined as 0 1'b1 : downgrade after 1 failed link attemp
 *   defined as 0 1'b0 : use WIRESPEED_RETRY_LIMIT
 */
#define CFG_ETHERNET_WIRESPEED_RETRY_DIS       (0)
/*
 * Ethernet@wirespeed retry limit.
 * It is the number of auto-negotiation attemps to link-up prior to speed downgrade.
 * The ethernet@wirespeed mode must be enabled for retry limit. 
 * The retry limit can be chosen from 2-8.
 */
#define CFG_ETHERNET_WIRESPEED_RETRY_LIMIT     (5)
#endif /* CFG_ETHERNET_WIRESPEED_INCLUDED */

/*
  *  CFG_DUAL_IMAGE_INCLUDED
  *      undefined : exclude dual image feature
  *      defined: include dual image feature
  */
#define CFG_DUAL_IMAGE_INCLUDED

/*
  *  CFG_LED_MICROCODE_INCLUDED
  *      undefined : exclude serial LED feature
  *      defined as 1 : includee serial LED feature and use "direct serial out" 
  *      defined as 2 : includee serial LED feature and use "internal serial-to-parallel to chip ballout" 
  */
#define CFG_LED_MICROCODE_INCLUDED   (2)

/*
  *  CFG_CONFIG_OPTION : 
  * BCM53406: Option 1-4
  *                             1: 12x1G/2.5G/5G/10G + 12x1G/2.5G
  *                             2: 4xXAUI + 8x1G/2.5G/5G/10G
  *                             3: 4xXAUI + 4x1G/2.5G/5G/10G
  *                             4: 15x1G/2.5G/5G/10G + 9x1G
  * BCM53456: Option 1-3
  *                             1: 4xQSGMII + 8x1G/2.5G + 4x1G/2.5G/5G/10G
  *                             2: 4xQSGMII + 8x1G/2.5G + 2x10G + 2x13G
  *                             3: 2xQSGMII + 16x1G/2.5G + 4x1G/2.5G/5G/10G
  * BCM53424: Option 1-3
  *                             1: 4xQSGMII + 8x1G + 4x1G/2.5G/5G/10G
  *                             2: 4xQSGMII + 8x1G + 2x10G + 2x13G
  *                             3: 2xQSGMII + 16x1G + 4x1G/2.5G/5G/10G
  */
#define CFG_CONFIG_OPTION  (1)

/*
  *  CFG_CONFIG_1G_PORT_AN : default AN mode on ports with fiber mode and max speed is 1G 
  *      defined as 0 : disable AN
  *      defined as 1 : CL73
  *      defined as 2 : CL37
  */
#define CFG_CONFIG_1G_PORT_AN  (2)

/*
  *  CFG_CONFIG_10G_PORT_AN : default AN mode on ports with fiber mode and max speed is 10G 
  *      defined as 0 : disable AN
  *      defined as 1 : CL73
  */
#define CFG_CONFIG_10G_PORT_AN  (0)

/* CFG_TSCE_INTERFACE : TSCE_INTERFACE_SGMII/TSCE_INTERFACE_FIBER 
 */

#define CFG_TSCE_INTERFACE      (TSCE_INTERFACE_FIBER)

#endif /* _CONFIG_H_ */
