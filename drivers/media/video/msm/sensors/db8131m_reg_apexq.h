/* Copyright (c) 2011, Code Aurora Forum. All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 and
 * only version 2 as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 */

#ifndef __db8131m_REG_H
#define __db8131m_REG_H

/* =================================================================*/
/* Name     : db8131m Module                                */
/* Version  :                                               */
/* PLL mode : MCLK - 24MHz                                  */
/* fPS      :                                               */
/* PRVIEW   : 640*480                                       */
/* Made by  : Dongbu Hitek                                  */
/* date     : 12/03/23                                      */
/* date     : 12/03/06                                      */
/* Model    : Aegis2                                        */
/* ���ǻ��� : 0xDD96 ���ð��� ������ 0xDD96�� I2C write ���� ���� */
/*            150ms delay �� ���� ���ð��� I2C write�� �ָ� ��    */
/* =================================================================*/

static const u16 db8131m_common[] = {
/*
 Command Preview 7.5~15fps
*/
0xFFC0,		/*Page mode*/
0x1001,
0xDD96,		/*Wait  150*/

/*
 Format
*/
0xFFA1,		/*Page mode*/
0x7001,
0x710D,

/*==================================*/
/* SensorCon
/*==================================*/
0xFFD0,		/*Page mode*/
0x0E0A,
0x0F0D,
0x1300,
0x1500,
0x1834,
0x1921,
0x1A07,
0x200f,
0x2300,
0x2400,
0x399F,
0x511F,
0x8365,
0x8567,
0x8765,
0x8967,
0x8B27,
0x8D6c,
0x9114,
0xC509,
0xD196,
0xD740,
0xDB9F,
0xED01,
0xEE0F,
0xEF00,
0xF840,
0xF900,
0xFB4E,

/*Dgain*/
0xFF82,
0xB907,
0xBAC0,
0xBB07,
0xBCC0,
0xBD07,
0xBEC0,
0xFF83,
0x6328,
0x6410,
0x65A8,
0x6650,
0x6728,
0x6814,

/*==================================*/
/* Analog ADF */
/*==================================*/
0xFF85,
0x89C3,
0x8A0C,
0x8C07,
0x8D40,
0x8E01,
0x8F0C,
0x9101,
0x921F,
0x9378,
0x9519,
0x961A,
0x970E,
0x980F,
0x9907,
0x9A00,
0x9B00,
0x9C0C,
0x9D7E,
0x9E29,
0x9F7F,
0xA079,
0xA175,
0xA218,
0xA333,
0xA40F,
0xFE20,
0xFF86,
0x1500,
0x16FA,
0x1700,
0x1800,
0x1900,
0x1BF6,
0x1C00,
0x1D0C,
0x1F09,
0x203A,
0x2218,
0x232A,
0x240E,
0x2577,
0x2DEB,
0xFF87,
0xDDB0,
0xE120,
0xEA41,
0xF139,
0xFFB0,
0x3C81,
0x5001,
0xFFd1,
0x0700,
0x0B00,
0x0301,
0xFFb0,
0x3C81,
0x5001,




/*==================================*/
/* AE	*/
/*==================================*/
0xFF82,/*Page mode=*/
0x9555,
0x9655,
0x97F5,
0x985F,
0x99F5,
0x9A5F,
0x9B55,
0x9C55,
0x9E01,
0xA940,     /* OTarget */
0xAA40,     /* ITarget */
0x9D88,     /*AE Speed */
0x9F06,     /* AE HoldBnd */
0xA840,     /* STarget */
0xC502,     /* PeakMvStep */
0xC638,     /* PeakTgMin */
0xC724,     /* PeakRatioTh1 */
0xC810,     /* PeakRatioTh0 */
0xC905,     /* PeakLuTh */
0xD560,     /* LuxGainTB_2 */
0xA10A,     /* AnalogGainMax */
0xF309,     /* SCLK */
0xF460,
0xF900,     /* GainMax */
0xFAC0,     /* GainMax */
0xFB55,     /* Gain3Lut */
0xFC43,     /* Gain2Lut */
0xFD14,     /* Gain1Lut */
0xFE12,     /* GainMin */
0xD312,     /* LuxTBGainStep0 */
0xD448,     /* LuxTBGainStep1 */
0xD560,     /* LuxTBGainStep2 */
0xD601,     /* LuxTBTimeStep0H */
0xD700,     /* LuxTBTimeStep0L */
0xD801,     /* LuxTBTimeStep1H */
0xD990,     /* LuxTBTimeStep1L C0 */
0xDA05,     /* LuxTBTimeStep2H */
0xDB00,     /* LuxTBTimeStep2L */
0xFF83,		/*Page mode*/
0x030F,     /* TimeMax60Hz	 : 8fps */
0x0408,     /* Time3Lux60Hz : 12fps */
0x0504,     /* Time2Lut60Hz : 24fps */
0x0604,     /* Time1Lut60Hz : 24fps*/
0x0B04,
0x0C4C,     /* Frame Rate */
0x5D00,     /* lower fine time limit */
0x5E8F,     /* ower fine time limit */
0x2F04,     /*  TimeNum0 */
0x3005,     /*  TimeNum1 */
0x4F05,     /*  FrameOffset */
0xFF82,		/*Page mode*/
0x925D,

/*==================================*/
/* AWB	*/
/*================================== */
0xFF83,	 /*Page mode */
0x7983,			/* AWBCtrl*/
0x8200,			/* LockRatio*/
0x8601,			/* MinGrayCnt*/
0x8780,			/* MinGrayCnt*/
0x9005,			/* RGain*/
0x9405,			/* BGain*/
0x98D4,			/* SkinWinCntTh	*/
0xA228,			/* SkinYTh*/
0xA300,			/* SkinHoldHitCnt*/
0xA40F,			/* SkinHoldHitCnt*/
0xAD65,			/* SkinTop2*/
0xAE80,			/* SkinTop2LS1Ratio*/
0xAF20,			/* SkinTop2LS2Ratio*/
0xB410,			/* SkinTop2LSHys*/
0xB554,			 /* SkinLTx*/
0xB6BD,			 /* SkinLTy*/
0xB774,			 /* SkinLBx*/
0xB89D,			 /* SkinLBy*/
0xBA4F,			/* UniCThrY*/
0xBF0C,			/* UniCGrayCntThr_0*/
0xC080,			/* UniCGrayCntThr_1*/
0xFF84,	 /*Page mode*/
0x3D00,			/*AWB_LuxConst1_0*/
0x3E00,			/* AWB_LuxConst1_1*/
0x3F06,			/* AWB_LuxConst1_2*/
0x4020,			/* AWB_LuxConst1_3*/
0x4107,			/* AWB_LuxConst2_0*/
0x4253,			/* AWB_LuxConst2_1*/
0x4300,			/* AWB_LuxConst2_2*/
0x4400,			/* AWB_LuxConst2_3*/
0x4900,			/* Threshold_indoor*/
0x4A10,
0x4B03,			/* Threshold_outdoor*/
0x4C00,

0x5D03,
0x5E10,
0x5F08,
0x6007,
0x6120,
0x6200,
0x6308,
0x6415,

0x5501,
0x5607,
0x5714,
0x5810,
0x5910,
0x5A00,
0x5B08,
0x5C14,

0x6503,
0x6605,
0x6705,
0x6820,
0x6902,
0x6A02,
0x6B03,
0x6C15,
0xFF85,
0xE20C,
0xFF83,
0xCB04,
0xCC90,
0xCD06,
0xCEC0,
0xCF01,
0xD000,
0xD106,
0xd220,

/*==================================*/
/* AWB STE */
/*==================================*/
0xFFA1,
0x9C00,
0x9DF0,
0xA063,
0xA17A,
0xA269,
0xA36F,
0xA48C,
0xA54A,
0xA6A6,
0xA731,
0xA874,
0xA95b,
0xAA8b,
0xAB4B,
0xAC60,
0xAD63,
0xAE78,
0xAF4B,
0xB04A,
0xB168,
0xB264,
0xB34D,
0xB400,
0xB500,
0xB600,
0xB700,
0xB841,
0xB97b,
0xBA54,
0xBB6a,
0xBC3C,
0xBD90,
0xBE4C,
0xBF73,
0xC05B,
0xC185,
0xC260,
0xC37F,

/*==================================*/
/* UR
/*==================================*/
0xFF87,		/*Page mode*/
0xC922,
0xFF86,	 /*Page mode*/
0x141E,
0xFF85,	 /*Page mode*/
0x0605,
0x8640,
0x0700,

/*==================================*/
/* CCM D65*/
/*==================================*/
0xFF83,		/*Page mode*/



0xEA00,
0xEB60,
0xECFF,
0xEDe2,
0xEEff,
0xEFf4,
0xF0FF,
0xF1F3,
0xF200,
0xF348,
0xF4FF,
0xF5FA,
0xF6FF,
0xF7FF,
0xF8FF,
0xF9CC,
0xFA00,
0xFB73,

/*CWF lgiht  */
0xFC00,
0xFD61,
0xFF85,
0xE0FF,
0xE1e2,
0xFF84,
0x00FF,
0x01FB,
0x02FF,
0x03F3,
0x0400,
0x054B,
0x06FF,
0x07FA,
0x08FF,
0x09FC,
0x0AFF,
0x0BCC,
0x0C00,
0x0D6d,

/*A light Green */
0x0E00,
0x0F6d,
0x10FF,
0x11d5,
0x12ff,
0x13fe,
0x14FF,
0x15f4,
0x1600,
0x175a,
0x18ff,
0x19ef,
0x1Aff,
0x1Bfa,
0x1CFF,
0x1Dbe,
0x1E00,
0x1F86,


/*Out door CCM */
0xFF86,
0x4502,
0x4600,
0xFF85,
0xFE35,
0xEC00,
0xED75,
0xEEFF,
0xEFB9,
0xF000,
0xF112,
0xF2FF,
0xF3F3,
0xF400,
0xF550,
0xF6FF,
0xF7FD,
0xF8FF,
0xF9F4,
0xFAFF,
0xFBCC,
0xFC00,
0xFD80,


/*==================================*/
/* ADF*/
/*==================================*/
/* ISP setting*/
0xFFA0,
0x1080,
0x1109,
0x6073,
0x611F,
0x690C,
0x6A60,
0xC204,
0xD051,
0xFFA1,
0x3000,
0x3200,
0x3400,
0x3516,
0x3600,
0x3730,
0x3A00,
0x3BC0,
0x3CFF,

/* BGT*/
0xFF85,
0x1721,
0x2610,
0x3c00,

/* BGT2*/
0xFF86,
0x680A,
0x6909,
0x6a08,
0x6b07,
0x6c00,
0x6d07,

/* SAT */
0x6F09,
0x7008,
0x7102,
0x7203,
0x7303,
0x74E0,

/* CNT */
0xFF85,
0x1843,
0x2700,
0x3d02,

/* NSF */
0x12A5,
0x221D,
0x2340,
0x3814,
0x3928,
0xFF86,
0x1206,
0x1306,

/* NSF NEW thresold*/
0xFF85,
0xE822,
0xE950,
0xEA0E,
0xEB18,

/* GDC */
0xFF85,
0x15F4,
0x2D20,
0x2E30,
0x4320,
0x4420,

/* ISP  Edge*/
0x04FB,
0x14A5,
0x2808,
0x2907,
0x2A08,
0x2B05,
0x2C22,
0x3E02,
0x3F08,
0x4009,
0x4107,
0x4222,

/* Gamma Adaptive*/

0x1690,
0x4700,
0x4819,
0x4925,
0x4A37,
0x4B45,
0x4C51,
0x4D65,
0x4E77,
0x4F87,
0x5095,
0x51AF,
0x52C6,
0x53DB,
0x54E5,
0x55EE,
0x56F7,
0x57FF,

0x5800,
0x5904,
0x5a13,
0x5b30,
0x5c4A,
0x5d5D,
0x5e75,
0x5f89,
0x609A,
0x61A7,
0x62BC,
0x63D0,
0x64E0,
0x65E7,
0x66EE,
0x67F7,
0x68FF,

/* CCM Saturation Level*/
0x1A21,
0x3078,
0x0F43,
0x10E3,

/* Lens Shading  */
0xFFA0,
0x4378,
0x4480,
0x4580,
0x4680,
0x4780,
0x4880,
0x4980,
0x4A80,
0x4B80,
0x4C80,
0x4D80,
0x4E80,
0x5290,
0x5320,
0x5400,

/*Max Shading */
0xFF86,
0x51C0,
0x5230,
0x5300,
0x5480,
0x5520,
0x5600,
0x5790,
0x5820,
0x5900,

/*Min Shading*/
0x48B0,
0x4920,
0x4A00,
0x4B80,
0x4C18,
0x4D00,
0x4E90,
0x4F20,
0x5000,


/* LineLength*/
0xFF87,		/*Page mode */
0xDC05,
0xDDB0,
0xd500,		/* Flip*/
/*
 SensorCon
*/
0xFFD0,		/*Page mode*/
0x200E,		/* ABLK_Rsrv_Addr*/
0x200D,		/* ABLK_Rsrv_Addr*/

/*
 MIPI
*/
0xFFB0,		/*Page mode*/
0x5402,		/* MIPI PHY_HS_TX_CTRL*/
0x3805,		/* MIPI DPHY_CTRL_SET*/

/* SXGA PR*/
0xFF85,		/*Page mode */
0xB71E,
0xB80A,		/*gPT_u8PR_Active_SXGA_WORD_COUNT_Addr0*/
0xB900,		/*gPT_u8PR_Active_SXGA_WORD_COUNT_Addr1*/
0xBC04,		/*gPT_u8PR_Active_SXGA_DPHY_CLK_TIME_Addr3*/
0xFF87,		/*Page mode*/
0x0C00,		/* start Y*/
0x0D20,		/* start Y*/
0x1003,		/* end Y*/
0x11E0,		/* end Y*/

/* Recoding*/
0xFF86,		/*Page mode*/
0x371E,
0x3805,		/*gPT_u8PR_Active_720P_WORD_COUNT_Addr0*/
0x3900,		/*gPT_u8PR_Active_720P_WORD_COUNT_Addr1*/
0x3C04,		/*gPT_u8PR_Active_720P_DPHY_CLK_TIME_Addr3*/

0xFF87,
0x2302,		/*gPR_Active_720P_u8SensorCtrl_Addr*/
0x2501,		/*gPR_Active_720P_u8PLL_P_Addr*/
0x260F,		/*gPR_Active_720P_u8PLL_M_Addr*/
0x2700,		/*gPR_Active_720P_u8PLL_S_Addr*/
0x2800,		/*gPR_Active_720P_u8PLL_Ctrl_Addr*/
0x2901,		/*gPR_Active_720P_u8src_clk_sel_Addr*/
0x2A00,		/*gPR_Active_720P_u8output_pad_status_Addr*/
0x2B3F,		/*gPR_Active_720P_u8ablk_ctrl_10_Addr*/
0x2CFF,		/*gPR_Active_720P_u8BayerFunc_Addr*/
0x2DFF,		/*gPR_Active_720P_u8RgbYcFunc_Addr*/
0x2E00,		/*gPR_Active_720P_u8ISPMode_Addr*/
0x2F02,		/*gPR_Active_720P_u8SCLCtrl_Addr*/
0x3001,		/*gPR_Active_720P_u8SCLHorScale_Addr0*/
0x31FF,		/*gPR_Active_720P_u8SCLHorScale_Addr1*/
0x3203,		/*gPR_Active_720P_u8SCLVerScale_Addr0*/
0x33FF,		/*gPR_Active_720P_u8SCLVerScale_Addr1*/
0x3400,		/*gPR_Active_720P_u8SCLCropStartX_Addr0*/
0x3500,		/*gPR_Active_720P_u8SCLCropStartX_Addr1*/
0x3600,		/*gPR_Active_720P_u8SCLCropStartY_Addr0*/
0x3710,		/*gPR_Active_720P_u8SCLCropStartY_Addr1*/
0x3802,		/*gPR_Active_720P_u8SCLCropEndX_Addr0*/
0x3980,		/*gPR_Active_720P_u8SCLCropEndX_Addr1*/
0x3A01,		/*gPR_Active_720P_u8SCLCropEndY_Addr0*/
0x3BF0,		/*gPR_Active_720P_u8SCLCropEndY_Addr1*/
0x3C01,		/*gPR_Active_720P_u8OutForm_Addr*/
0x3D0C,		/*gPR_Active_720P_u8OutCtrl_Addr*/
0x3E04,		/*gPR_Active_720P_u8AEWinStartX_Addr*/
0x3F04,		/*gPR_Active_720P_u8AEWinStartY_Addr*/
0x4066,		/*gPR_Active_720P_u8MergedWinWidth_Addr*/
0x415E,		/*gPR_Active_720P_u8MergedWinHeight_Addr*/
0x4204,		/*gPR_Active_720P_u8AEHistWinAx_Addr*/
0x4304,		/*gPR_Active_720P_u8AEHistWinAy_Addr*/
0x4498,		/*gPR_Active_720P_u8AEHistWinBx_Addr*/
0x4578,		/*gPR_Active_720P_u8AEHistWinBy_Addr*/
0x4622,		/*gPR_Active_720P_u8AWBTrim_Addr*/
0x4728,		/*gPR_Active_720P_u8AWBCTWinAx_Addvr*/
0x4820,		/*gPR_Active_720P_u8AWBCTWinAy_Addr*/
0x4978,		/*gPR_Active_720P_u8AWBCTWinBx_Addr*/
0x4A60,		/*gPR_Active_720P_u8AWBCTWinBy_Addr*/
0x4B03,		/*gPR_Active_720P_u16AFCFrameLength_0*/
0x4C00,		/*gPR_Active_720P_u16AFCFrameLength_1*/

/*VGA PR*/
0xFF86,		/*Page mode*/
0x2E1E,
0x2F05,		/* gPT_u8PR_Active_VGA_WORD_COUNT_Addr0*/
0x3000,		/* gPT_u8PR_Active_VGA_WORD_COUNT_Addr1*/
0x3304,		/* gPT_u8PR_Active_VGA_DPHY_CLK_TIME_Addr3*/

0xFF87,		/*Page mode*/
0x4D00,		/*gPR_Active_VGA_u8SensorCtrl_Addr*/
0x4E72,		/*gPR_Active_VGA_u8SensorMode_Addr*/
0x4F01,		/*gPR_Active_VGA_u8PLL_P_Addr*/
0x500F,		/*gPR_Active_VGA_u8PLL_M_Addr*/
0x5100,		/*gPR_Active_VGA_u8PLL_S_Addr*/
0x5200,		/*gPR_Active_VGA_u8PLL_Ctrl_Addr*/
0x5301,		/*gPR_Active_VGA_u8src_clk_sel_Addr*/
0x5400,		/*gPR_Active_VGA_u8output_pad_status_Addr*/
0x553F,		/*gPR_Active_VGA_u8ablk_ctrl_10_Addr*/
0x56FF,		/*gPR_Active_VGA_u8BayerFunc_Addr*/
0x57FF,		/*gPR_Active_VGA_u8RgbYcFunc_Addr*/
0x5800,		/*gPR_Active_VGA_u8ISPMode_Addr*/
0x5902,		/*gPR_Active_VGA_u8SCLCtrl_Addr*/
0x5A01,		/*gPR_Active_VGA_u8SCLHorScale_Addr0*/
0x5BFF,		/*gPR_Active_VGA_u8SCLHorScale_Addr1*/
0x5C01,		/*gPR_Active_VGA_u8SCLVerScale_Addr0*/
0x5DFF,		/*gPR_Active_VGA_u8SCLVerScale_Addr1*/
0x5E00,		/*gPR_Active_VGA_u8SCLCropStartX_Addr0*/
0x5F00,		/*gPR_Active_VGA_u8SCLCropStartX_Addr1*/
0x6000,		/*gPR_Active_VGA_u8SCLCropStartY_Addr0*/
0x6110,		/*gPR_Active_VGA_u8SCLCropStartY_Addr1*/
0x6202,		/*gPR_Active_VGA_u8SCLCropEndX_Addr0*/
0x6380,		/*gPR_Active_VGA_u8SCLCropEndX_Addr1*/
0x6401,		/*gPR_Active_VGA_u8SCLCropEndY_Addr0*/
0x65F0,		/*gPR_Active_VGA_u8SCLCropEndY_Addr1*/

0xFFd1,		/*Page mode*/
0x0700,		/* power off mask clear*/
0x0b00,		/* clock off mask clear*/
0xFFC0,		/*Page mode*/
0x1041,

/* Self-Cam END of Initial*/
};

/* Set-data based on SKT VT standard ,when using 3G network */
/* 8fps */
static const u32 db8131m_vt_common[] = {
/*
 Command Preview Fixed 8fps
*/
0xFF87,
0xDE7A,
0xFFC0,
0x1042,

/*Fixed 8fps Mode*/
0xFF82, /*Page mode*/
0x9102,	/*AeMode*/
0xFF83, /*Page mode*/
0x0D08,	/*Frame Rate*/
0x0E0D,	/*Frame Rate*/
0x030f,	/*TimeMax60Hz*/
0x040A,	/*Time3Lux60Hz*/
0x0506,	/*Time2Lut60Hz*/
0x0604,	/*Time1Lut60Hz*/
0xFF82, /*Page mode*/
0x925D,
};

/* Set-data based on Samsung Reliabilty Group standard */
/* ,when using WIFI. 15fps*/
static const u32 db8131m_vt_wifi_common[] = {
/*
 Command Preview Fixed 15fps
*/
0xFF87,
0xDE7A,
0xFFC0,
0x1042,

/*Fixed 15fps Mode*/
0xFF82, /*Page mode*/
0x9102,	/*AeMode*/
0xFF83, /*Page mode*/
0x0D04,	/*Frame Rate*/
0x0E4C,	/*Frame Rate*/
0x0308,	/*TimeMax60Hz*/
0x0407,	/*Time3Lux60Hz*/
0x0506,	/*Time2Lut60Hz*/
0x0604,	/*Time1Lut60Hz*/
0xFF82, /*Page mode*/
0x925D,
};

/*===========================================*/
/* CAMERA_PREVIEW - �Կ� �� ������ ���ͽ� ���� */
/*============================================*/

static const u16 db8131m_preview[] = {
0xDD96,
};

/*===========================================
	CAMERA_SNAPSHOT
============================================*/

static const u16 db8131m_capture[] = {
0xffC0,
0x1003,
0xDD96,
};

static const u16 db8131m_720p_common[] = {
/*
 Command Preview 30fps
*/
0xFFC0,
0x1001,
0xDD96,		/*Wait  150*/

/*
 Format
*/
0xFFA1,
0x7001,
0x710D,
/*
 SensorCon
*/
0xFFD0,
0x0F0D,
0x1300,
0x1501,
0x2013,
0x2300,
0x2401,
0x3970,
0x511D,
0x832D,
0x852F,
0x872D,
0x892F,
0x8B27,
0x8D6C,
0xD780,
0xD962,
0xDBA2,
0xED01,
0xEE13,
0xEF00,
0xF900,
0xFBB8,
/*
 Analog ADF
*/
0xFF85,
0x89C2,
0x8D60,
0x8E03,
0x8F14,
0x9119,
0x920F,
0x9364,
0x9518,
0x9640,
0x970A,
0x980D,
0x9906,
0x9B02,
0x9C18,
0x9E11,
0x9F5D,
0xA074,
0xA218,
0xA340,
0xA40B,
0xFF86,
0x1500,
0x16B5,
0x1713,
0x1824,
0x191C,
0x1A07,
0x1B30,
0x1C01,
0x1D14,
0x1F31,
0x2064,
0x2218,
0x2329,
0x240B,
0x2577,
0xFFD0,
0x2011,
0xFF87,
0xDC05,
0xDD34,
0xF139,
0xFF83,
0x6328,
0x6410,
0x65A8,
0x6650,
0x6728,
0x6814,
0xFF87,
0x2310,

/*
 AE
*/
0xFFA1,
0x99A0,
0xFF83,
0x4F05,
0x0304,
0x0404,
0x0504,
0x0604,
0xFF82,
0xF901,
0xFA60,
0xFBB0,
0xFC70,
0xFD30,
0xFE12,
0xD600,
0xD7A0,
0xD801,
0xD900,
0xDA02,
0xDB80,
0xD318,
0xD430,
0xD5D0,
0xF30B,
0xF4A9,
0xA10A,
0xFF83,
0x0F02,
0x10EE,
0xFF82,
0x9102,
0x924F,

/*
 AWB
*/
0xFF83,
0x79B3,
0x9005,
0x9405,
0x98D4,
0xA228,
0xA300,
0xA401,
0xFF84,
0x5E20,
0x3D00,
0x3E00,
0x3F06,
0x4020,
0x4107,
0x4253,
0x4300,
0x4400,
0xFF83,
0xAE77,
0xB554,
0xB6C3,
0xB770,
0xB8A4,
0xFF87,
0xC922,
0xFF84,
0x4902,
0x4A00,
0x4B03,
0x4C40,
0xFF83,
0xCB03,
0xCCC0,

/*
 AWB STE
*/
0xFFA1,
0xA021,
0xA16E,
0xA225,
0xA36A,
0xA49C,
0xA54A,
0xA6AA,
0xA73C,
0xA878,
0xA96E,
0xAA8F,
0xAB42,
0xAC5A,
0xAD60,
0xAE78,
0xAF4B,
0xB04D,
0xB16F,
0xB263,
0xB35D,
0xB401,
0xB502,
0xB603,
0xB704,
0xB846,
0xB994,
0xBA5A,
0xBB84,
0xBC48,
0xBDAC,
0xBE50,
0xBFA8,
0xC049,
0xC181,
0xC258,
0xC378,

/*
 UR
*/
0xFF87,
0xC922,
0xFF83,
0xEA00,
0xEB72,
0xECFF,
0xEDCE,
0xEE00,
0xEF00,
0xF0FF,
0xF1F4,
0xF200,
0xF350,
0xF4FF,
0xF5FC,
0xF600,
0xF700,
0xF8FF,
0xF9C0,
0xFA00,
0xFB80,
0xFC00,
0xFD6D,
0xFF85,
0xE0FF,
0xE1D5,
0xFF84,
0x00FF,
0x01FE,
0x02FF,
0x03E8,
0x0400,
0x055A,
0x06FF,
0x07FC,
0x08FF,
0x09FA,
0x0AFF,
0x0BBE,
0x0C00,
0x0D86,
0x0E00,
0x0F3A,
0x10FF,
0x11FE,
0x1200,
0x1300,
0x14FF,
0x15F0,
0x1600,
0x1750,
0x1800,
0x1900,
0x1AFF,
0x1BF0,
0x1CFF,
0x1DB8,
0x1E00,
0x1F99,

/*
 ADF
*/
0xFF85,
0x1640,
0xFFA0,
0x1080,
0x60A3,
0x61CD,
0x690C,
0x6A60,
0xC204,
0xD051,
0xFFA1,
0x3001,
0x3250,
0x3400,
0x350B,
0x3601,
0x3780,
0x3A00,
0x3B30,
0x3C08,
0xFF85,
0x0F43,
0x1043,
0x1730,
0x2613,
0x3C00,
0x1843,
0x2700,
0x3D00,
0x12E5,
0x2240,
0x2370,
0x3804,
0x3930,
0x15F4,
0x2D20,
0x2E30,
0x4340,
0x4480,
0x04FB,
0x0605,
0x14A3,
0x2800,
0x2903,
0x2A20,
0x2B03,
0x2C20,
0x3E00,
0x3F06,
0x4022,
0x4101,
0x4255,
0x5800,
0x5904,
0x5A06,
0x5B2E,
0x5C41,
0x5D4E,
0x5E6A,
0x5F7F,
0x6091,
0x61A0,
0x62C1,
0x63D3,
0x64E3,
0x65EB,
0x66F2,
0x67F9,
0x68FF,
0x4700,
0x4818,
0x492D,
0x4A47,
0x4B57,
0x4C63,
0x4D7A,
0x4E8C,
0x4F9A,
0x50A8,
0x51C0,
0x52CE,
0x53D6,
0x54EC,
0x55F4,
0x56FB,
0x57FF,
0x5800,
0x590E,
0x5A15,
0x5B2E,
0x5C41,
0x5D4E,
0x5E6A,
0x5F7F,
0x6091,
0x61A0,
0x62C1,
0x63D3,
0x64E3,
0x65EB,
0x66F2,
0x67F9,
0x68FF,
0xFF87,
0xD500,
0xFF85,
0x863C,
0xFFA0,
0x4378,
0x4498,
0x458E,
0x4670,
0x4780,
0x4880,
0x4980,
0x4A80,
0x4B76,
0x4C90,
0x4D9C,
0x4E90,
0x52B4,
0x5320,
0x5400,
0xFF85,
0x32C0,
0x3340,
0x3400,
0x3590,
0x3620,
0x3700,
0x1CD1,
0x1D47,
0x1E00,
0x1F91,
0x201A,
0x2100,
0xFF87,
0xAD01,
0xABFF,
0xACFF,
0xFF82,
0x78DB,
0xFFA1,
0x99A0,
0xFF83,
0x4F05,
0x0304,
0x0404,
0x0504,
0x0604,
0xFF82,
0xF901,
0xFA60,
0xFBB0,
0xFC70,
0xFD30,
0xFE12,
0xD600,
0xD7A0,
0xD801,
0xD900,
0xDA02,
0xDB80,
0xD318,
0xD430,
0xD5D0,
0xF30B,
0xF4A9,
0xFF83,
0x0F02,
0x10EE,
0xFF82,
0x9102,
0x924F,

/* LineLength*/
0xFF87,         /*Page mode */
0xDC05,         /* by Yong In Han 091511*/
0xDD34,         /* by Yong In Han 091511*/
0xd500,         /* Flip*/

/*
 MIPI
*/
0xFFD0,
0x2013,
0x2011,
0xFFB0,
0x5402,
0x3805,
0xFF85,
0xB401,
0xB501,
0xFF86,
0x380A,
0x3900,
0x3C04,
0xFFD1,
0x0700,
0x0B00,
0xFFC0,
0x1042,

};

static const u16 db8131m_vga_common[] = {
/*
 Command Preview 30fps
*/
0xFF87,
0xDE7A,
0xFFC0,
0x1042,

/*Fixed 30fps Mode*/
0xFF82, /*Page mode*/
0x9102,	/*AeMode*/
0xFF83, /*Page mode*/
0x0D02,	/*Frame Rate*/
0x0E26,	/*Frame Rate*/
0x0304,	/*TimeMax60Hz*/
0x0403,	/*Time3Lux60Hz*/
0x0502,	/*Time2Lut60Hz*/
0x0601,	/*Time1Lut60Hz*/
0xFF82, /*Page mode*/
0x925D,
};
/*===========================================*/
/*	CAMERA_RECORDING WITH 25fps  */
/*============================================*/

static const u16 db8131m_recording_60Hz_common[] = {
/*================================================================
Device : DB8131M
MIPI Interface for Noncontious Clock
================================================================*/

/*Recording Anti-Flicker 60Hz END of Initial*/

0xFF87,
0xDE7A,
0xFFC0,
0x1042,

/* Fixed 25fps Mode*/
0xFF82,		/*Page mode*/
0x9102,		/*AeMode*/
0x921D,		/*AeMode*/
0xFF83,		/*Page mode*/
0x0D02,		/*Frame Rate*/
0x0E94,		/*Frame Rate*/
0x0304,		/*TimeMax60Hz*/
0x0403,		/*Time3Lux60Hz*/
0x0502,		/*Time2Lut60Hz*/
0x0601,		/*Time1Lut60Hz*/
0xFF82,		/*Page mode*/
0x925D,
};

static const u16 db8131m_recording_50Hz_common[] = {
0xFF87,
0xDE7A,
0xFFC0,
0x1042,

/* Fixed 25fps Mode*/
0xFF82, /*Page mode*/
0x9102,	/*AeMode*/
0x9219,	/*AeMode*/
0xFF83, /*Page mode*/
0x1302,	/*Frame Rate*/
0x1494,	/*Frame Rate*/
0x0703,	/*TimeMax50Hz*/
0x0803,	/*Time3Lux50Hz*/
0x0902,	/*Time2Lut50Hz*/
0x0A01,	/*Time1Lut50Hz*/
0xFF82, /*Page mode*/
0x925D,
};

static const u16 db8131m_stream_stop[] = {
};


/*=================================
*	CAMERA_BRIGHTNESS_1 (1/9) M4   *
==================================*/
static const u16 db8131m_bright_m4[] = {
/* Brightness -4 */
0xFF87,		/* Page mode */
0xAEB0,		/* Brightness*/
0xffa0,
0x0205,
};

/*=================================
*	CAMERA_BRIGHTNESS_2 (2/9) M3  *
==================================*/
static const u16 db8131m_bright_m3[] = {
/* Brightness -3 */
0xFF87,		/* Page mode */
0xAED0,		/* Brightness*/
};

/*=================================
	CAMERA_BRIGHTNESS_3 (3/9) M2
==================================*/
static const u16 db8131m_bright_m2[] = {
/* Brightness -2 */
0xFF87,		/* Page mode */
0xAEE0,		/* Brightness*/
};

/*=================================
	CAMERA_BRIGHTNESS_4 (4/9) M1
==================================*/
static const u16 db8131m_bright_m1[] = {

/* Brightness -1 */
0xFF87,		/* Page mode */
0xAEF0,		/* Brightness */
};

/*=================================
	CAMERA_BRIGHTNESS_5 (5/9) Default
==================================*/
static const u16 db8131m_bright_default[] = {
/* Brightness 0 */
0xFF87,		/* Page mode*/
0xAE00,		/* Brightness */
};

/*=================================
	CAMERA_BRIGHTNESS_6 (6/9) P1
==================================*/
static const u16 db8131m_bright_p1[] = {
/* Brightness +1 */
0xFF87,		/* Page mode */
0xAE10,		/* Brightness */
};

/*=================================
	CAMERA_BRIGHTNESS_7 (7/9) P2
==================================*/
static const u16 db8131m_bright_p2[] = {
/* Brightness +2 */
0xFF87,		/* Page mode */
0xAE20,		/* Brightness */
};

/*=================================
	CAMERA_BRIGHTNESS_8 (8/9) P3
==================================*/
static const u16 db8131m_bright_p3[] = {
/* Brightness +3 */
0xFF87,		/* Page mode */
0xAE30,		/* Brightness*/
};

/*=================================
	CAMERA_BRIGHTNESS_9 (9/9) P4
==================================*/
static const u16 db8131m_bright_p4[] = {
/* Brightness +4 */
0xFF87,		/* Page mode */
0xAE50,		/* Brightness */
};

/*******************************************************
* CAMERA_VT_PRETTY_0 Default
* 200s self cam pretty
*******************************************************/
static const u16 db8131m_vt_pretty_default[] = {
};

/*******************************************************
*	CAMERA_VT_PRETTY_1
*******************************************************/
static const u16 db8131m_vt_pretty_1[] = {
};


/*******************************************************
*	CAMERA_VT_PRETTY_2				*
*******************************************************/
static const u16 db8131m_vt_pretty_2[] = {
};


/*******************************************************
*	CAMERA_VT_PRETTY_3
*******************************************************/
static const u16 db8131m_vt_pretty_3[] = {
};

static const u16 db8131m_vt_7fps[] = {
/* Fixed 7fps Mode */
0xFF82, /*Page mode*/
0x9102,	/*AeMode*/
0xFF83, /*Page mode*/
0x0B09,	/*Frame Rate*/
0x0C33,	/*Frame Rate*/
0x030F,	/*TimeMax60Hz*/
0x040A,	/*Time3Lux60Hz*/
0x0506,	/*Time2Lut60Hz*/
0x0604,	/*Time1Lut60Hz*/
0xFF82, /*Page mode*/
0x925D,
};

static const u16 db8131m_vt_10fps[] = {
/* Fixed 10fps Mode */
0xFF82, /*Page mode*/
0x9102, /*AeMode*/
0xFF83, /*Page mode*/
0x0B06, /*Frame Rate*/
0x0C70, /*Frame Rate*/
0x030A, /*TimeMax60Hz*/
0x0408, /*Time3Lux60Hz*/
0x0506, /*Time2Lut60Hz*/
0x0604, /*Time1Lut60Hz*/
0xFF82, /*Page mode*/
0x925D,
};

static const u16 db8131m_vt_12fps[] = {
/* Fixed 12fps Mode */
0xFF82, /*Page mode*/
0x9102, /*AeMode*/
0xFF83, /*Page mode*/
0x0B05, /*Frame Rate*/
0x0C5E, /*Frame Rate*/
0x0309, /*TimeMax60Hz*/
0x0408, /*Time3Lux60Hz*/
0x0506, /*Time2Lut60Hz*/
0x0604, /*Time1Lut60Hz*/
0xFF82, /*Page mode*/
0x925D,
};

static const u16 db8131m_vt_15fps[] = {
/* Fixed 15fps Mode */
0xFF82, /*Page mode*/
0x9102, /*AeMode*/
0xFF83, /*Page mode*/
0x0B04, /*Frame Rate*/
0x0C4C, /*Frame Rate*/
0x0308, /*TimeMax60Hz*/
0x0406, /*Time3Lux60Hz*/
0x0504, /*Time2Lut60Hz*/
0x0604, /*Time1Lut60Hz*/
0xFF82, /*Page mode*/
0x925D,
};

/*******************************************************
*	CAMERA_DTP_ON
*******************************************************/
static const u16 db8131m_pattern_on[] = {
0xFF87,		/*Page mode*/
0xAB00,		/*BayerFunc*/
0xAC28,		/*RGBYcFunc*/
0xFFA0,		/*Page mode*/
0x0205,		/*TPG Gamma*/
};

/*******************************************************
*	CAMERA_DTP_OFF
*******************************************************/
static const u16 db8131m_pattern_off[] = {
0xFF87,		/*Page mode*/
0xABFF,		/*BayerFunc*/
0xACFF,		/*RGBYcFunc*/
0xFFA0,		/*Page mode*/
0x0200,		/*TPG Disable*/
};


static const u16 db8131m_vflip[] = {
0xFF87,		/*Page mode */
0xd508,		/*VFlip*/
};

static const u16 db8131m_hflip[] = {
0xFF87,		/*Page mode */
0xd504,		/*HFlip*/
};

#endif /* __DB8131M_REG_H */