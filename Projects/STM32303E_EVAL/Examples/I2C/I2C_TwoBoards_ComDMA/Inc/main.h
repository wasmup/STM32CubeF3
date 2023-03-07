/**
  ******************************************************************************
  * @file    I2C/I2C_TwoBoards_ComDMA/Inc/main.h 
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
#include "stm32303e_eval.h"

/* Exported types ------------------------------------------------------------*/
/* Exported constants --------------------------------------------------------*/
/* User can use this section to tailor I2Cx/I2Cx instance used and associated
   resources */
/* Definition for I2Cx clock resources */
#define I2Cx                            I2C2
#define RCC_PERIPHCLK_I2Cx              RCC_PERIPHCLK_I2C2
#define RCC_I2CxCLKSOURCE_SYSCLK        RCC_I2C2CLKSOURCE_SYSCLK
#define I2Cx_CLK_ENABLE()               __HAL_RCC_I2C2_CLK_ENABLE()
#define I2Cx_SDA_GPIO_CLK_ENABLE()      __HAL_RCC_GPIOA_CLK_ENABLE()
#define I2Cx_SCL_GPIO_CLK_ENABLE()      __HAL_RCC_GPIOF_CLK_ENABLE() 
#define I2Cx_DMA_CLK_ENABLE()           __HAL_RCC_DMA1_CLK_ENABLE()

#define I2Cx_FORCE_RESET()              __HAL_RCC_I2C2_FORCE_RESET()
#define I2Cx_RELEASE_RESET()            __HAL_RCC_I2C2_RELEASE_RESET()

/* Definition for I2Cx Pins */
#define I2Cx_SCL_PIN                    GPIO_PIN_6
#define I2Cx_SCL_GPIO_PORT              GPIOF
#define I2Cx_SDA_PIN                    GPIO_PIN_10
#define I2Cx_SDA_GPIO_PORT              GPIOA
#define I2Cx_SCL_SDA_AF                 GPIO_AF4_I2C2

/* Definition for I2Cx's NVIC */
#define I2Cx_EV_IRQn                    I2C2_EV_IRQn
#define I2Cx_ER_IRQn                    I2C2_ER_IRQn
#define I2Cx_EV_IRQHandler              I2C2_EV_IRQHandler
#define I2Cx_ER_IRQHandler              I2C2_ER_IRQHandler

/* Definition for I2Cx's DMA */
#define I2Cx_DMA                        DMA1   
#define I2Cx_DMA_INSTANCE_TX            DMA1_Channel4
#define I2Cx_DMA_INSTANCE_RX            DMA1_Channel5

/* Definition for I2Cx's DMA NVIC */
#define I2Cx_DMA_TX_IRQn                DMA1_Channel4_IRQn
#define I2Cx_DMA_RX_IRQn                DMA1_Channel5_IRQn
#define I2Cx_DMA_TX_IRQHandler          DMA1_Channel4_IRQHandler
#define I2Cx_DMA_RX_IRQHandler          DMA1_Channel5_IRQHandler

/* Size of Transmission buffer */
#define TXBUFFERSIZE                      (COUNTOF(aTxBuffer) - 1)
/* Size of Reception buffer */
#define RXBUFFERSIZE                      TXBUFFERSIZE

/* Exported macro ------------------------------------------------------------*/
#define COUNTOF(__BUFFER__)   (sizeof(__BUFFER__) / sizeof(*(__BUFFER__)))
/* Exported functions ------------------------------------------------------- */

#endif /* __MAIN_H */
