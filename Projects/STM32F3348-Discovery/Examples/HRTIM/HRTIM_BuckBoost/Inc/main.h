/**
  ******************************************************************************
  * @file    HRTIM/HRTIM_BuckBoost/Inc/main.h 
  * @author  MCD Application Team
  * @brief   Header for main.c module
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2016 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

/* Includes ------------------------------------------------------------------*/
#include "stm32f3xx_hal.h"
#include "stm32f3348_discovery.h"

/* Exported types ------------------------------------------------------------*/

/* Exported constants ---------------------------------------------------------*/
#define BUCK_PWM_PERIOD ((uint16_t)18432) // 250kHz
#define BUCK            0
#define BOOST           1
#define DE_ENERGIZE     2
#define FAULT           3


/* Exported macro ------------------------------------------------------------*/

/* Exported functions --------------------------------------------------------- */

extern uint32_t DemoState;
extern HRTIM_HandleTypeDef hhrtim;


#endif /* __MAIN_H */
