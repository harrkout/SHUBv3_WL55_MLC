/**
  ******************************************************************************
  * @file    custom_mems_conf.h
  * @author  MEMS Application Team
  * @brief   This file contains definitions of the MEMS components bus interfaces for custom boards
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2022 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __CUSTOM_MEMS_CONF_H__
#define __CUSTOM_MEMS_CONF_H__

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32wlxx_hal.h"
#include "stm32wlxx_nucleo_bus.h"
#include "stm32wlxx_nucleo_errno.h"

/* USER CODE BEGIN 1 */

/* USER CODE END 1 */

#define USE_CUSTOM_MOTION_SENSOR_LSM6DSOX_0       1U

#define CUSTOM_LSM6DSOX_0_I2C_Init BSP_I2C2_Init
#define CUSTOM_LSM6DSOX_0_I2C_DeInit BSP_I2C2_DeInit
#define CUSTOM_LSM6DSOX_0_I2C_ReadReg BSP_I2C2_ReadReg
#define CUSTOM_LSM6DSOX_0_I2C_WriteReg BSP_I2C2_WriteReg

#ifdef __cplusplus
}
#endif

#endif /* __CUSTOM_MEMS_CONF_H__*/

