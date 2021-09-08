/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32g0xx_hal.h"

void Error_Handler(void);



/* Private defines -----------------------------------------------------------*/
#define WIFI_KEY_Pin GPIO_PIN_8
#define WIFI_KEY_GPIO_Port GPIOA
#define LED_Pin GPIO_PIN_6
#define LED_GPIO_Port GPIOC
#define WIFI_LED_Pin GPIO_PIN_15
#define WIFI_LED_GPIO_Port GPIOA


#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
