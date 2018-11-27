/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * This notice applies to any and all portions of this file
  * that are not between comment pairs USER CODE BEGIN and
  * USER CODE END. Other portions of this file, whether 
  * inserted by the user or by software development tools
  * are owned by their respective copyright owners.
  *
  * Copyright (c) 2018 STMicroelectronics International N.V. 
  * All rights reserved.
  *
  * Redistribution and use in source and binary forms, with or without 
  * modification, are permitted, provided that the following conditions are met:
  *
  * 1. Redistribution of source code must retain the above copyright notice, 
  *    this list of conditions and the following disclaimer.
  * 2. Redistributions in binary form must reproduce the above copyright notice,
  *    this list of conditions and the following disclaimer in the documentation
  *    and/or other materials provided with the distribution.
  * 3. Neither the name of STMicroelectronics nor the names of other 
  *    contributors to this software may be used to endorse or promote products 
  *    derived from this software without specific written permission.
  * 4. This software, including modifications and/or derivative works of this 
  *    software, must execute solely and exclusively on microcontroller or
  *    microprocessor devices manufactured by or for STMicroelectronics.
  * 5. Redistribution and use of this software other than as permitted under 
  *    this license is void and will automatically terminate your rights under 
  *    this license. 
  *
  * THIS SOFTWARE IS PROVIDED BY STMICROELECTRONICS AND CONTRIBUTORS "AS IS" 
  * AND ANY EXPRESS, IMPLIED OR STATUTORY WARRANTIES, INCLUDING, BUT NOT 
  * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY, FITNESS FOR A 
  * PARTICULAR PURPOSE AND NON-INFRINGEMENT OF THIRD PARTY INTELLECTUAL PROPERTY
  * RIGHTS ARE DISCLAIMED TO THE FULLEST EXTENT PERMITTED BY LAW. IN NO EVENT 
  * SHALL STMICROELECTRONICS OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
  * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
  * LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, 
  * OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF 
  * LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING 
  * NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE,
  * EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
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
#include "stm32l0xx_hal.h"
#include "stm32l0xx_hal.h"

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
#define LCD_BTN_3_UP_Pin GPIO_PIN_13
#define LCD_BTN_3_UP_GPIO_Port GPIOC
#define OSC32_IN_Pin GPIO_PIN_14
#define OSC32_IN_GPIO_Port GPIOC
#define OSC32_OUT_Pin GPIO_PIN_15
#define OSC32_OUT_GPIO_Port GPIOC
#define USR_LED_Pin GPIO_PIN_0
#define USR_LED_GPIO_Port GPIOH
#define LCD_BTN_2_RT_Pin GPIO_PIN_1
#define LCD_BTN_2_RT_GPIO_Port GPIOH
#define LCD_BTN_1_LT_Pin GPIO_PIN_0
#define LCD_BTN_1_LT_GPIO_Port GPIOC
#define GPIO6_Pin GPIO_PIN_1
#define GPIO6_GPIO_Port GPIOC
#define GPIO5_Pin GPIO_PIN_2
#define GPIO5_GPIO_Port GPIOC
#define GPIO4_Pin GPIO_PIN_3
#define GPIO4_GPIO_Port GPIOC
#define GPIO3_Pin GPIO_PIN_0
#define GPIO3_GPIO_Port GPIOA
#define GPIO2_Pin GPIO_PIN_1
#define GPIO2_GPIO_Port GPIOA
#define UART2_TX_Pin GPIO_PIN_2
#define UART2_TX_GPIO_Port GPIOA
#define UART2_RX_Pin GPIO_PIN_3
#define UART2_RX_GPIO_Port GPIOA
#define DAC_Pin GPIO_PIN_4
#define DAC_GPIO_Port GPIOA
#define GPIO1_Pin GPIO_PIN_5
#define GPIO1_GPIO_Port GPIOA
#define GPIO0_Pin GPIO_PIN_6
#define GPIO0_GPIO_Port GPIOA
#define ADC3_Pin GPIO_PIN_7
#define ADC3_GPIO_Port GPIOA
#define ADC2_Pin GPIO_PIN_4
#define ADC2_GPIO_Port GPIOC
#define ADC1_Pin GPIO_PIN_5
#define ADC1_GPIO_Port GPIOC
#define ADC0_Pin GPIO_PIN_0
#define ADC0_GPIO_Port GPIOB
#define ADC_VBAT_Pin GPIO_PIN_1
#define ADC_VBAT_GPIO_Port GPIOB
#define SPI2_CS_DF_Pin GPIO_PIN_2
#define SPI2_CS_DF_GPIO_Port GPIOB
#define SPI2_CS_LCD_Pin GPIO_PIN_10
#define SPI2_CS_LCD_GPIO_Port GPIOB
#define LCD_RS_Pin GPIO_PIN_11
#define LCD_RS_GPIO_Port GPIOB
#define LCD_BACKLIGHT_Pin GPIO_PIN_12
#define LCD_BACKLIGHT_GPIO_Port GPIOB
#define SPI2_SCK_Pin GPIO_PIN_13
#define SPI2_SCK_GPIO_Port GPIOB
#define SPI2_MISO_Pin GPIO_PIN_14
#define SPI2_MISO_GPIO_Port GPIOB
#define SPI2_MOSI_Pin GPIO_PIN_15
#define SPI2_MOSI_GPIO_Port GPIOB
#define PWM_BUZZER_Pin GPIO_PIN_6
#define PWM_BUZZER_GPIO_Port GPIOC
#define VBAT_MEAS_EN_Pin GPIO_PIN_7
#define VBAT_MEAS_EN_GPIO_Port GPIOC
#define PWR_HOLD_Pin GPIO_PIN_8
#define PWR_HOLD_GPIO_Port GPIOC
#define LCD_BTN_6_YES_Pin GPIO_PIN_9
#define LCD_BTN_6_YES_GPIO_Port GPIOC
#define USB_DET_Pin GPIO_PIN_8
#define USB_DET_GPIO_Port GPIOA
#define UART1_TX_Pin GPIO_PIN_9
#define UART1_TX_GPIO_Port GPIOA
#define UART1_RX_Pin GPIO_PIN_10
#define UART1_RX_GPIO_Port GPIOA
#define USB1D_N_Pin GPIO_PIN_11
#define USB1D_N_GPIO_Port GPIOA
#define USB1D_P_Pin GPIO_PIN_12
#define USB1D_P_GPIO_Port GPIOA
#define SWDIO_Pin GPIO_PIN_13
#define SWDIO_GPIO_Port GPIOA
#define SWCLK_Pin GPIO_PIN_14
#define SWCLK_GPIO_Port GPIOA
#define LCD_BTN_5_NO_Pin GPIO_PIN_15
#define LCD_BTN_5_NO_GPIO_Port GPIOA
#define UART3_TX_Pin GPIO_PIN_10
#define UART3_TX_GPIO_Port GPIOC
#define UART3_RX_Pin GPIO_PIN_11
#define UART3_RX_GPIO_Port GPIOC
#define LCD_BTN_4_DN_Pin GPIO_PIN_12
#define LCD_BTN_4_DN_GPIO_Port GPIOC
#define SPI1_CS_SD_Pin GPIO_PIN_2
#define SPI1_CS_SD_GPIO_Port GPIOD
#define SPI1_SCK_Pin GPIO_PIN_3
#define SPI1_SCK_GPIO_Port GPIOB
#define SPI1_MISO_Pin GPIO_PIN_4
#define SPI1_MISO_GPIO_Port GPIOB
#define SPI1_MOSI_Pin GPIO_PIN_5
#define SPI1_MOSI_GPIO_Port GPIOB
#define SPI1_CS_Pin GPIO_PIN_6
#define SPI1_CS_GPIO_Port GPIOB
#define GPIO7_SD_CD_Pin GPIO_PIN_7
#define GPIO7_SD_CD_GPIO_Port GPIOB
#define I2C1_SCL_Pin GPIO_PIN_8
#define I2C1_SCL_GPIO_Port GPIOB
#define I21C1_SDA_Pin GPIO_PIN_9
#define I21C1_SDA_GPIO_Port GPIOB
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
