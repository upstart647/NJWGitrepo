/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2024 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f4xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define I2C2_SDA_MPU_Pin GPIO_PIN_0
#define I2C2_SDA_MPU_GPIO_Port GPIOF
#define I2C2_SCL_SCL_Pin GPIO_PIN_1
#define I2C2_SCL_SCL_GPIO_Port GPIOF
#define U2_TX_BT_Pin GPIO_PIN_2
#define U2_TX_BT_GPIO_Port GPIOA
#define U2_RX_BT_Pin GPIO_PIN_3
#define U2_RX_BT_GPIO_Port GPIOA
#define U3_TX_ESP_Pin GPIO_PIN_8
#define U3_TX_ESP_GPIO_Port GPIOD
#define U3_RX_ESP_Pin GPIO_PIN_9
#define U3_RX_ESP_GPIO_Port GPIOD
#define TRIG2_Pin GPIO_PIN_3
#define TRIG2_GPIO_Port GPIOG
#define ECOH2_Pin GPIO_PIN_5
#define ECOH2_GPIO_Port GPIOG
#define TRIG3_Pin GPIO_PIN_6
#define TRIG3_GPIO_Port GPIOG
#define ECOH3_Pin GPIO_PIN_7
#define ECOH3_GPIO_Port GPIOG
#define I2C1_SCL_OLED_Pin GPIO_PIN_6
#define I2C1_SCL_OLED_GPIO_Port GPIOB
#define I2C1_SDA_OLED_Pin GPIO_PIN_7
#define I2C1_SDA_OLED_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */