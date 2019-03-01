/*
 * $Id: mirror_help_htm.c,v 1.4 Broadcom SDK $
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

/***** GENERATED FILE; DO NOT EDIT. *****/

#include "appl/ssp.h"

static RES_CONST_DECL unsigned char CODE _text0000[] = {
    0x3c, 0x21, 0x44, 0x4f, 0x43, 0x54, 0x59, 0x50,      /* <!DOCTYP */
    0x45, 0x20, 0x48, 0x54, 0x4d, 0x4c, 0x20, 0x50,      /* E HTML P */
    0x55, 0x42, 0x4c, 0x49, 0x43, 0x20, 0x22, 0x2d,      /* UBLIC "- */
    0x2f, 0x2f, 0x57, 0x33, 0x43, 0x2f, 0x2f, 0x44,      /* //W3C//D */
    0x54, 0x44, 0x20, 0x48, 0x54, 0x4d, 0x4c, 0x20,      /* TD HTML  */
    0x34, 0x2e, 0x30, 0x31, 0x20, 0x54, 0x72, 0x61,      /* 4.01 Tra */
    0x6e, 0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x61,      /* nsitiona */
    0x6c, 0x2f, 0x2f, 0x45, 0x4e, 0x22, 0x3e, 0x0a,      /* l//EN">. */
    0x3c, 0x48, 0x54, 0x4d, 0x4c, 0x3e, 0x3c, 0x48,      /* <HTML><H */
    0x45, 0x41, 0x44, 0x3e, 0x3c, 0x54, 0x49, 0x54,      /* EAD><TIT */
    0x4c, 0x45, 0x3e, 0x3c, 0x2f, 0x54, 0x49, 0x54,      /* LE></TIT */
    0x4c, 0x45, 0x3e, 0x0a, 0x3c, 0x4d, 0x45, 0x54,      /* LE>.<MET */
    0x41, 0x20, 0x68, 0x74, 0x74, 0x70, 0x2d, 0x65,      /* A http-e */
    0x71, 0x75, 0x69, 0x76, 0x3d, 0x43, 0x6f, 0x6e,      /* quiv=Con */
    0x74, 0x65, 0x6e, 0x74, 0x2d, 0x54, 0x79, 0x70,      /* tent-Typ */
    0x65, 0x20, 0x63, 0x6f, 0x6e, 0x74, 0x65, 0x6e,      /* e conten */
    0x74, 0x3d, 0x22, 0x74, 0x65, 0x78, 0x74, 0x2f,      /* t="text/ */
    0x68, 0x74, 0x6d, 0x6c, 0x3b, 0x20, 0x63, 0x68,      /* html; ch */
    0x61, 0x72, 0x73, 0x65, 0x74, 0x3d, 0x55, 0x54,      /* arset=UT */
    0x46, 0x2d, 0x38, 0x22, 0x3e, 0x0a, 0x3c, 0x4c,      /* F-8">.<L */
    0x49, 0x4e, 0x4b, 0x20, 0x68, 0x72, 0x65, 0x66,      /* INK href */
    0x3d, 0x22, 0x66, 0x6f, 0x72, 0x6d, 0x2e, 0x63,      /* ="form.c */
    0x73, 0x73, 0x22, 0x20, 0x72, 0x65, 0x6c, 0x3d,      /* ss" rel= */
    0x73, 0x74, 0x79, 0x6c, 0x65, 0x73, 0x68, 0x65,      /* styleshe */
    0x65, 0x74, 0x20, 0x74, 0x79, 0x70, 0x65, 0x3d,      /* et type= */
    0x22, 0x74, 0x65, 0x78, 0x74, 0x2f, 0x63, 0x73,      /* "text/cs */
    0x73, 0x22, 0x3e, 0x0a, 0x0a, 0x3c, 0x2f, 0x48,      /* s">..</H */
    0x45, 0x41, 0x44, 0x3e, 0x0a, 0x3c, 0x42, 0x4f,      /* EAD>.<BO */
    0x44, 0x59, 0x3e, 0x0a, 0x0a, 0x3c, 0x66, 0x6f,      /* DY>..<fo */
    0x6e, 0x74, 0x20, 0x73, 0x69, 0x7a, 0x65, 0x3d,      /* nt size= */
    0x34, 0x3e, 0x3c, 0x42, 0x3e, 0x47, 0x65, 0x74,      /* 4><B>Get */
    0x74, 0x69, 0x6e, 0x67, 0x20, 0x73, 0x74, 0x61,      /* ting sta */
    0x72, 0x74, 0x65, 0x64, 0x20, 0x77, 0x69, 0x74,      /* rted wit */
    0x68, 0x20, 0x4d, 0x69, 0x72, 0x72, 0x6f, 0x72,      /* h Mirror */
    0x3c, 0x2f, 0x42, 0x3e, 0x3c, 0x2f, 0x66, 0x6f,      /* </B></fo */
    0x6e, 0x74, 0x3e, 0x0a, 0x3c, 0x42, 0x52, 0x3e,      /* nt>.<BR> */
    0x3c, 0x42, 0x52, 0x3e, 0x0a, 0x0a, 0x50, 0x6f,      /* <BR>..Po */
    0x72, 0x74, 0x20, 0x6d, 0x69, 0x72, 0x72, 0x6f,      /* rt mirro */
    0x72, 0x69, 0x6e, 0x67, 0x20, 0x6d, 0x6f, 0x6e,      /* ring mon */
    0x69, 0x74, 0x6f, 0x72, 0x73, 0x20, 0x74, 0x72,      /* itors tr */
    0x61, 0x66, 0x66, 0x69, 0x63, 0x20, 0x66, 0x72,      /* affic fr */
    0x6f, 0x6d, 0x20, 0x73, 0x70, 0x65, 0x63, 0x69,      /* om speci */
    0x66, 0x69, 0x63, 0x20, 0x70, 0x6f, 0x72, 0x74,      /* fic port */
    0x73, 0x20, 0x74, 0x6f, 0x20, 0x61, 0x20, 0x73,      /* s to a s */
    0x69, 0x6e, 0x67, 0x6c, 0x65, 0x20, 0x6d, 0x6f,      /* ingle mo */
    0x6e, 0x69, 0x74, 0x6f, 0x72, 0x2d, 0x74, 0x6f,      /* nitor-to */
    0x20, 0x70, 0x6f, 0x72, 0x74, 0x2e, 0x20, 0x49,      /*  port. I */
    0x6e, 0x67, 0x72, 0x65, 0x73, 0x73, 0x20, 0x61,      /* ngress a */
    0x6e, 0x64, 0x2f, 0x6f, 0x72, 0x20, 0x65, 0x67,      /* nd/or eg */
    0x72, 0x65, 0x73, 0x73, 0x20, 0x74, 0x72, 0x61,      /* ress tra */
    0x66, 0x66, 0x69, 0x63, 0x20, 0x69, 0x73, 0x20,      /* ffic is  */
    0x63, 0x6f, 0x70, 0x69, 0x65, 0x64, 0x20, 0x66,      /* copied f */
    0x72, 0x6f, 0x6d, 0x20, 0x74, 0x68, 0x65, 0x0a,      /* rom the. */
    0x6d, 0x69, 0x72, 0x72, 0x6f, 0x72, 0x69, 0x6e,      /* mirrorin */
    0x67, 0x20, 0x70, 0x6f, 0x72, 0x74, 0x20, 0x74,      /* g port t */
    0x6f, 0x20, 0x74, 0x68, 0x65, 0x20, 0x6d, 0x69,      /* o the mi */
    0x72, 0x72, 0x6f, 0x72, 0x2d, 0x74, 0x6f, 0x20,      /* rror-to  */
    0x70, 0x6f, 0x72, 0x74, 0x2e, 0x0a, 0x0a, 0x3c,      /* port...< */
    0x42, 0x52, 0x3e, 0x3c, 0x42, 0x52, 0x3e, 0x0a,      /* BR><BR>. */
    0x0a, 0x3c, 0x42, 0x3e, 0x4d, 0x6f, 0x64, 0x65,      /* .<B>Mode */
    0x3c, 0x2f, 0x42, 0x3e, 0x20, 0x65, 0x6e, 0x61,      /* </B> ena */
    0x62, 0x6c, 0x65, 0x73, 0x20, 0x6f, 0x72, 0x20,      /* bles or  */
    0x64, 0x69, 0x73, 0x61, 0x62, 0x6c, 0x65, 0x73,      /* disables */
    0x20, 0x6d, 0x69, 0x72, 0x72, 0x6f, 0x72, 0x69,      /*  mirrori */
    0x6e, 0x67, 0x2e, 0x0a, 0x3c, 0x42, 0x52, 0x3e,      /* ng..<BR> */
    0x3c, 0x42, 0x52, 0x3e, 0x0a, 0x3c, 0x42, 0x3e,      /* <BR>.<B> */
    0x4d, 0x69, 0x72, 0x72, 0x6f, 0x72, 0x3c, 0x2f,      /* Mirror</ */
    0x42, 0x3e, 0x20, 0x73, 0x70, 0x65, 0x63, 0x69,      /* B> speci */
    0x66, 0x69, 0x65, 0x73, 0x20, 0x61, 0x6e, 0x20,      /* fies an  */
    0x49, 0x6e, 0x67, 0x72, 0x65, 0x73, 0x73, 0x2f,      /* Ingress/ */
    0x45, 0x67, 0x72, 0x65, 0x73, 0x73, 0x20, 0x4d,      /* Egress M */
    0x69, 0x72, 0x72, 0x6f, 0x72, 0x20, 0x70, 0x6f,      /* irror po */
    0x72, 0x74, 0x20, 0x74, 0x6f, 0x20, 0x77, 0x68,      /* rt to wh */
    0x69, 0x63, 0x68, 0x20, 0x69, 0x6e, 0x67, 0x72,      /* ich ingr */
    0x65, 0x73, 0x73, 0x2f, 0x65, 0x67, 0x72, 0x65,      /* ess/egre */
    0x73, 0x73, 0x20, 0x74, 0x72, 0x61, 0x66, 0x66,      /* ss traff */
    0x69, 0x63, 0x20, 0x77, 0x69, 0x6c, 0x6c, 0x20,      /* ic will  */
    0x62, 0x65, 0x20, 0x6d, 0x69, 0x72, 0x72, 0x6f,      /* be mirro */
    0x72, 0x65, 0x64, 0x2e, 0x0a, 0x3c, 0x42, 0x52,      /* red..<BR */
    0x3e, 0x3c, 0x42, 0x52, 0x3e, 0x0a, 0x3c, 0x42,      /* ><BR>.<B */
    0x3e, 0x4d, 0x69, 0x72, 0x72, 0x6f, 0x72, 0x20,      /* >Mirror  */
    0x54, 0x6f, 0x3c, 0x2f, 0x42, 0x3e, 0x20, 0x73,      /* To</B> s */
    0x70, 0x65, 0x63, 0x69, 0x66, 0x69, 0x65, 0x73,      /* pecifies */
    0x20, 0x74, 0x68, 0x65, 0x20, 0x6d, 0x69, 0x72,      /*  the mir */
    0x72, 0x6f, 0x72, 0x65, 0x64, 0x2d, 0x74, 0x6f,      /* rored-to */
    0x20, 0x70, 0x6f, 0x72, 0x74, 0x2e, 0x0a, 0x0a,      /*  port... */
    0x3c, 0x42, 0x52, 0x3e, 0x3c, 0x42, 0x52, 0x3e,      /* <BR><BR> */
    0x0a, 0x3c, 0x42, 0x3e, 0x41, 0x70, 0x70, 0x6c,      /* .<B>Appl */
    0x79, 0x3c, 0x2f, 0x42, 0x3e, 0x20, 0x61, 0x70,      /* y</B> ap */
    0x70, 0x6c, 0x69, 0x65, 0x73, 0x20, 0x74, 0x68,      /* plies th */
    0x65, 0x20, 0x6d, 0x69, 0x72, 0x72, 0x6f, 0x72,      /* e mirror */
    0x20, 0x73, 0x65, 0x74, 0x74, 0x69, 0x6e, 0x67,      /*  setting */
    0x20, 0x74, 0x6f, 0x20, 0x74, 0x68, 0x65, 0x20,      /*  to the  */
    0x73, 0x79, 0x73, 0x74, 0x65, 0x6d, 0x2e, 0x0a,      /* system.. */
    0x0a, 0x3c, 0x2f, 0x42, 0x4f, 0x44, 0x59, 0x3e,      /* .</BODY> */
    0x3c, 0x2f, 0x48, 0x54, 0x4d, 0x4c, 0x3e, 0x0a,      /* </HTML>. */
    0x0a,                                                /* .        */
};


RES_CONST_DECL SSP_DATA_ENTRY CODE sspfile_mirror_help_htm[] = {
    { 0x80, 0, 769, 0, 0, _text0000 },
};
