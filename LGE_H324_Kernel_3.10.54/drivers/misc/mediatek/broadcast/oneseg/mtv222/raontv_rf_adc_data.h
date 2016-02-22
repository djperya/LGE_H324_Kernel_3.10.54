/******************************************************************************
* (c) COPYRIGHT 2013 RAONTECH, Inc. ALL RIGHTS RESERVED.
*
* This software is the property of RAONTECH and is furnished under license
* by RAONTECH.
* This software may be used only in accordance with the terms of said license.
* This copyright noitce may not be remoced, modified or obliterated
* without the prior written permission of RAONTECH, Inc.
*
* This software may not be copied, transmitted, provided to or otherwise
* made available to any other person, company, corporation or other entity
* except as specified in the terms of said license.
*
* No right, title, ownership or other interest in the software is hereby
* granted or transferred.
*
* The information contained herein is subject to change without notice
* and should not be construed as a commitment by RAONTECH, Inc.
*
* TITLE      : RAONTECH TV RF ADC data header file.
*
* FILENAME   : raontv_rf_adc_data.h
*
* DESCRIPTION:
*  All the declarations and definitions necessary for the setting of RF ADC.
*
******************************************************************************/

/******************************************************************************
* REVISION HISTORY
*
*    DATE	  	  NAME				REMARKS
* ----------  -------------    ------------------------------------------------
* 07/26/2013  Yang, Maverick   Created.
*******************************************************************************/

#if defined(RAONTV_CHIP_PKG_QFN)
static const U8 g_atLNAtbl[5][18] = {

	/* ICONLNA_HG_NORM	LNA_VAS_CON	ICONLNA_MG_NORM	LNAICON_MGTR	U_LNACAP_I2C
		U_LNACAPL_I2C	LNACAP_MG	LNACAP_VLG	UHF_QCAP_HG	UHF_FCAP_HG
		UHF_QCAP_MG	UHF_FCAP_MG	UHF_QCAP_LG	UHF_FCAP_LG	UHF_QCAP_VLG
		UHF_FCAP_VLG	U_FEED_EN	RFEED_U*/
	/*470 - 500*/{0x13,0x02,0x0B,0x00,0x0E,0x06,0x0E,0x06,0x1F,0x07,0x0F,0x00,0x1F,0x00,0x07,0x05,0x00,0x00},
	/*500 - 530*/{0x12,0x02,0x0B,0x00,0x07,0x06,0x07,0x06,0x1F,0x01,0x0F,0x00,0x1F,0x00,0x07,0x05,0x00,0x00},
	/*530 - 630*/{0x12,0x02,0x0B,0x00,0x03,0x06,0x05,0x06,0x1F,0x00,0x0F,0x00,0x1F,0x00,0x07,0x05,0x00,0x00},
	/*630 - 710*/{0x12,0x02,0x0B,0x00,0x02,0x06,0x00,0x06,0x1F,0x00,0x1F,0x00,0x1F,0x00,0x07,0x05,0x00,0x00},
	/*710 - 810*/{0x12,0x02,0x10,0x03,0x00,0x06,0x00,0x06,0x1F,0x00,0x1F,0x00,0x1F,0x00,0x07,0x05,0x00,0x00}
};
#else
static const U8 g_atLNAtbl[6][18] = {

	/* ICONLNA_HG_NORM	LNA_VAS_CON	ICONLNA_MG_NORM	LNAICON_MGTR	U_LNACAP_I2C
		U_LNACAPL_I2C	LNACAP_MG	LNACAP_VLG	UHF_QCAP_HG	UHF_FCAP_HG
		UHF_QCAP_MG	UHF_FCAP_MG	UHF_QCAP_LG	UHF_FCAP_LG	UHF_QCAP_VLG
		UHF_FCAP_VLG	U_FEED_EN	RFEED_U*/
	/*470 - 510*/{0x0F,0x02,0x0B,0x00,0x0D,0x06,0x0B,0x05,0x0A,0x04,0x07,0x03,0x05,0x03,0x05,0x02,0x00,0x00},
	/*510 - 550*/{0x0D,0x02,0x0B,0x00,0x05,0x06,0x07,0x05,0x08,0x03,0x03,0x03,0x04,0x02,0x04,0x02,0x00,0x00},
	/*550 - 590*/{0x0C,0x02,0x0B,0x00,0x03,0x06,0x03,0x05,0x07,0x03,0x03,0x00,0x02,0x02,0x02,0x01,0x00,0x00},
	/*590 - 670*/{0x0C,0x02,0x0B,0x00,0x02,0x06,0x00,0x05,0x07,0x00,0x00,0x00,0x00,0x00,0x01,0x00,0x00,0x00},
	/*670 - 709*/{0x0C,0x02,0x0B,0x00,0x02,0x06,0x00,0x05,0x07,0x00,0x00,0x00,0x00,0x00,0x01,0x00,0x00,0x00},
	/*709 - 810*/{0x0C,0x02,0x10,0x03,0x00,0x06,0x00,0x05,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}
};
#endif

#if (RTV_SRC_CLK_FREQ_KHz == 19200)
static const U8 g_abAdcClkSynTbl[MAX_NUM_RTV_ADC_CLK_FREQ_TYPE][6] = {
	{0x04, 0x50, 0x0B, 0x13, 0x0E, 0x2E}, /* Based 19.2MHz, 8MHz */
	{0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF}, /* Based 19.2MHz, 8.192MHz  Unsupport Clock */
	{0x04, 0x5A, 0x0C, 0x13, 0x0E, 0x2E}, // Based 19.2MHz, 9MHz
	{0x04, 0x60, 0x0D, 0x13, 0x0E, 0x2E}  // Based 19.2MHz, 9.6MHz
};

#if defined(RAONTV_CHIP_INTEGER_MODE_EN)
static const struct RTV_ADC_CFG_INFO g_atOfdmCfgTbl_ISDBT[] = {
	 /* TNCO        PNCO1        PNCO2    CFREQ_GAIN  GAIN	  */
	 {0x10410420, 0xF50624E0, 0x1B6C8B40, 0x208208, 0x41}, /* 8MHz */
	 {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFF, 0xFF}, /* 8.192MHz.  Unsupport Clock */
	 {0x0E72AE55, 0xF63E59AB, 0x18607BC7, 0x1CE55C, 0x39}, /* 9MHz */
	 {0x0D8B8366, 0xF6DA7417, 0x16DA73FB, 0x1B1706, 0x36}, /* 9.6MHz */
};
#else
static const struct RTV_ADC_CFG_INFO g_atOfdmCfgTbl_ISDBT[] = {
	 /* TNCO        PNCO1        PNCO2    CFREQ_GAIN  GAIN	  */
	 {0x10410420, 0xF50E5600, 0xF0000000, 0x208208, 0x41}, /* 8MHz */
	 {0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFF, 0xFF}, /* 8.192MHz.  Unsupport Clock */
	 {0x0E72AE55, 0xF645A1C8, 0xF1C71C72, 0x1CE55C, 0x39}, /* 9MHz */
	 {0x0D8B8366, 0xF6E147B1, 0xF2AAAAB4, 0x1B1706, 0x36}, /* 9.6MHz */
};
#endif

static const E_RTV_ADC_CLK_FREQ_TYPE g_aeAdcClkTypeTbl_ISDBT[] = {
	RTV_ADC_CLK_FREQ_8_MHz,
	RTV_ADC_CLK_FREQ_9_MHz,
	RTV_ADC_CLK_FREQ_9_6_MHz
};

#elif (RTV_SRC_CLK_FREQ_KHz == 26000)

#if defined(RAONTV_CHIP_INTEGER_MODE_EN)
const static U32 g_aPllnSynTbl[56][3] = {
		{0xE61735E0, 3, 0x06D},
		{0xEADDA3AB, 5, 0x0B8},
		{0xE36C8B40, 4, 0x095},
		{0xF36C8B40, 4, 0x097},
		{0xF08DFEAB, 5, 0x0BF},
		{0xF0C1E0A0, 3, 0x074},
		{0x0E9FBE70, 5, 0x0C4},
		{0x10C1E0A0, 3, 0x077},
		{0x16DA4220, 7, 0x119},
		{0xEDB5D11D, 2, 0x051},
		{0xFBEEB4AB, 1, 0x029},
		{0x0B6C8B40, 2, 0x053},
		{0x18607BC7, 1, 0x02A},
		{0xE8F82FE4, 3, 0x07F},
		{0xE8395820, 5, 0x0D6},
		{0xE36C8B40, 4, 0x0AD},
		{0xF36C8B40, 4, 0x0AF},
		{0xF08DFEAB, 5, 0x0DD},
		{0xF2737256, 3, 0x086},
		{0x0E9FBE70, 5, 0x0E2},
		{0x10C1E0A0, 3, 0x089},
		{0x16DA4220, 7, 0x143},
		{0xEB6C8B40, 2, 0x05D},
		{0xFB6C8B40, 1, 0x02F},
		{0x0B6C8B40, 2, 0x05F},
		{0x18607BC7, 1, 0x030},
		{0xE8F82FE4, 3, 0x091},
		{0xE8395820, 5, 0x0F4},
		{0xE6995F56, 4, 0x0C5},
		{0xF36C8B40, 4, 0x0C7},
		{0xEE9FBE80, 5, 0x0FB},
		{0xF0C1E0A0, 3, 0x098},
		{0x0E9FBE70, 5, 0x100},
		{0x0EE53971, 3, 0x09B},
		{0x14503AC7, 7, 0x16D},
		{0xEB6C8B40, 2, 0x069},
		{0xFBEEB4AB, 1, 0x035},
		{0x0B6C8B40, 2, 0x06B},
		{0x1B6C8B40, 1, 0x036},
		{0xE61735E0, 3, 0x0A3},
		{0xE8395820, 5, 0x112},
		{0xE6995F56, 4, 0x0DD},
		{0xF4D242E4, 4, 0x0DF},
		{0xEE9FBE80, 5, 0x119},
		{0xF2737256, 3, 0x0AA},
		{0x0E9FBE70, 5, 0x11E},
		{0x10C1E0A0, 3, 0x0AD},
		{0x16DA4220, 7, 0x197},
		{0xEDB5D11D, 2, 0x075},
		{0xFBEEB4AB, 1, 0x03B},
		{0x0A279838, 2, 0x077},
		{0x1B6C8B40, 1, 0x03C},
		{0xE8F82FE4, 3, 0x0B5},
		{0xE8395820, 5, 0x130},
		{0xE36C8B40, 4, 0x0F5},
		{0xF36C8B40, 4, 0x0F7}
};			 
#endif

static const U8 g_abAdcClkSynTbl[MAX_NUM_RTV_ADC_CLK_FREQ_TYPE][6] = {
	{0x0D, 0xC0, 0x0C, 0x13, 0x0E, 0x2E}, // Based 26MHz,	8MHz	 
	{0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF}, // Based 26MHz, 8.192MHz  /* Unsupport Clock */
	{0x0D, 0xD8, 0x0D, 0x13, 0x0E, 0x2E}, // Based 26MHz,	9MHz	  
	{0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF}  // Based 26MHz,	9.6MHz /* Unsupport Clock */
};

static const struct RTV_ADC_CFG_INFO g_atOfdmCfgTbl_ISDBT[] = {
	/* TNCO 	   PNCO1	  PNCO2	 CFREQ_GAIN  GAIN	 */
	 {0x10410420, 0xF0000000, 0x00, 0x208208, 0x41}, //8MHz
	 {0xFFFFFFFF, 0xFFFFFFFF, 0xFF, 0xFFFFFF, 0xFF}, // 8.192MHz /* Unsupport Clock */
	 {0x0E72AE55, 0xF1C71C72, 0x00, 0x1CE55C, 0x39}, //9MHz
	 {0xFFFFFFFF, 0xFFFFFFFF, 0xFF, 0xFFFFFF, 0xFF}, //9.6MHz /* Unsupport Clock */
};

static const E_RTV_ADC_CLK_FREQ_TYPE g_aeAdcClkTypeTbl_ISDBT[] = {
	RTV_ADC_CLK_FREQ_8_MHz,
	RTV_ADC_CLK_FREQ_9_MHz,
	RTV_ADC_CLK_FREQ_9_MHz
};

#elif (RTV_SRC_CLK_FREQ_KHz == 32000)
static const U8 g_abAdcClkSynTbl[MAX_NUM_RTV_ADC_CLK_FREQ_TYPE][6] = {
	{0x08, 0x60, 0x0D, 0x13, 0x0E, 0x2E}, // Based 32MHz,	8MHz	   External Clock27
	{0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF}, // Based 32MHz, 8.192MHz  /* Unsupport Clock */
	{0x08, 0x6C, 0x0F, 0x13, 0x0E, 0x2E}, // Based 32MHz,	9MHz	   External Clock28
	{0x05, 0x48, 0x0A, 0x13, 0x0E, 0x2E}  // Based 32MHz,	9.6MHz	   External Clock29
};

static const struct RTV_ADC_CFG_INFO g_atOfdmCfgTbl_ISDBT[] = {
	/* TNCO 	   PNCO1	  PNCO2	 CFREQ_GAIN  GAIN	 */
	 {0x10410420, 0xF0000000, 0x00, 0x208208, 0x41}, //8MHz
	 {0xFFFFFFFF, 0xFFFFFFFF, 0xFF, 0xFFFFFF, 0xFF},   // Based 32MHz, 8.192MHz  /* Unsupport Clock */
	 {0x0E72AE55, 0xF1C71C72, 0x00, 0x1CE55C, 0x39}, //9MHz
	 {0x0D8B8366, 0xF2AAAAB4, 0x00, 0x1B1706, 0x36}, //9.6MHz
};

static const E_RTV_ADC_CLK_FREQ_TYPE g_aeAdcClkTypeTbl_ISDBT[] = {
	RTV_ADC_CLK_FREQ_8_MHz,
	RTV_ADC_CLK_FREQ_9_MHz,
	RTV_ADC_CLK_FREQ_9_6_MHz
};

#elif (RTV_SRC_CLK_FREQ_KHz == 36000)
static const U8 g_abAdcClkSynTbl[MAX_NUM_RTV_ADC_CLK_FREQ_TYPE][6] = {
	{0x09, 0x60, 0x0D, 0x13, 0x0E, 0x2E}, // Based 36MHz, 8MHz	   External Clock33
	{0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF}, // Based 36MHz,	8.192MHz  /* Unsupport */
	{0x09, 0x6C, 0x0F, 0x13, 0x0E, 0x2E}, // Based 36MHz, 9MHz	   External Clock34
	{0x05, 0x40, 0x08, 0x13, 0x0E, 0x2E}  // Based 36MHz, 9.6MHz	   External Clock35
};

static const struct RTV_ADC_CFG_INFO g_atOfdmCfgTbl_ISDBT[] = {
	/* TNCO 	   PNCO1	  PNCO2	 CFREQ_GAIN  GAIN	 */
	 {0x10410420, 0xF0000000, 0x00, 0x208208, 0x41}, //8MHz
	 {0xFFFFFFFF, 0xFFFFFFFF, 0xFF, 0xFFFFFF, 0xFF},   // Based 36MHz, 8.192MHz  /* Unsupport Clock */
	 {0x0E72AE55, 0xF1C71C72, 0x00, 0x1CE55C, 0x39}, //9MHz
	 {0x0D8B8366, 0xF2AAAAB4, 0x00, 0x1B1706, 0x36}, //9.6MHz
};

static const E_RTV_ADC_CLK_FREQ_TYPE g_aeAdcClkTypeTbl_ISDBT[] = {
	RTV_ADC_CLK_FREQ_8_MHz,
	RTV_ADC_CLK_FREQ_9_MHz,
	RTV_ADC_CLK_FREQ_9_6_MHz
};
#else
	#error "Unsupport external clock freqency!"
#endif

