/* SPDX-License-Identifier: GPL-2.0-only */
/*
 * Copyright (c) 2021, The Linux Foundation. All rights reserved.
 * Copyright (c) 2022, Qualcomm Innovation Center, Inc. All rights reserved.
 */

#ifndef _DT_BINDINGS_CLK_QCOM_GPU_CC_DIWALI_H
#define _DT_BINDINGS_CLK_QCOM_GPU_CC_DIWALI_H

/* GPU_CC clocks */
#define GPU_CC_PLL0					0
#define GPU_CC_PLL1					1
#define GPU_CC_AHB_CLK					2
#define GPU_CC_CB_CLK					3
#define GPU_CC_CRC_AHB_CLK				4
#define GPU_CC_CX_APB_CLK				5
#define GPU_CC_CX_FF_CLK				6
#define GPU_CC_CX_GMU_CLK				7
#define GPU_CC_CX_SNOC_DVM_CLK				8
#define GPU_CC_CXO_AON_CLK				9
#define GPU_CC_CXO_CLK					10
#define GPU_CC_DEMET_CLK				11
#define GPU_CC_DEMET_DIV_CLK_SRC			12
#define GPU_CC_FF_CLK_SRC				13
#define GPU_CC_FREQ_MEASURE_CLK				14
#define GPU_CC_GMU_CLK_SRC				15
#define GPU_CC_HLOS1_VOTE_GPU_SMMU_CLK			16
#define GPU_CC_HUB_AHB_DIV_CLK_SRC			17
#define GPU_CC_HUB_AON_CLK				18
#define GPU_CC_HUB_CLK_SRC				19
#define GPU_CC_HUB_CX_INT_CLK				20
#define GPU_CC_HUB_CX_INT_DIV_CLK_SRC			21
#define GPU_CC_MEMNOC_GFX_CLK				22
#define GPU_CC_MND1X_0_GFX3D_CLK			23
#define GPU_CC_MND1X_1_GFX3D_CLK			24
#define GPU_CC_RBCPR_AHB_CLK				25
#define GPU_CC_RBCPR_CLK				26
#define GPU_CC_RBCPR_CLK_SRC				27
#define GPU_CC_SLEEP_CLK				28
#define GPU_CC_XO_CLK_SRC				29
#define GPU_CC_XO_DIV_CLK_SRC				30

/* GPU_CC power domains */
#define GPU_CC_CX_GDSC					0
#define GPU_CC_GX_GDSC					1

/* GPU_CC resets */
#define GPUCC_GPU_CC_ACD_BCR				0
#define GPUCC_GPU_CC_CB_BCR				1
#define GPUCC_GPU_CC_CX_BCR				2
#define GPUCC_GPU_CC_FAST_HUB_BCR			3
#define GPUCC_GPU_CC_FF_BCR				4
#define GPUCC_GPU_CC_GFX3D_AON_BCR			5
#define GPUCC_GPU_CC_GMU_BCR				6
#define GPUCC_GPU_CC_GX_BCR				7
#define GPUCC_GPU_CC_RBCPR_BCR				8
#define GPUCC_GPU_CC_XO_BCR				9
#define GPUCC_GPU_CC_FREQUENCY_LIMITER_IRQ_CLEAR	10

#endif