/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file    stm32g0xx_it.c
  * @brief   Interrupt Service Routines.
  ******************************************************************************/
#include "main.h"
#include "stm32g0xx_it.h"
#include "mcu_api.h"


/* External variables --------------------------------------------------------*/
extern UART_HandleTypeDef huart2;

/******************************************************************************/
/*           Cortex-M0+ Processor Interruption and Exception Handlers          */
/******************************************************************************/
/**
  * @brief This function handles Non maskable interrupt.
  */
void NMI_Handler(void)
{
  while (1)
  {
  }
}

/**
  * @brief This function handles Hard fault interrupt.
  */
void HardFault_Handler(void)
{
  
  while (1)
  {
  
  }
}

/**
  * @brief This function handles System service call via SWI instruction.
  */
void SVC_Handler(void)
{
  
}

/**
  * @brief This function handles Pendable request for system service.
  */
void PendSV_Handler(void)
{
 
}

/**
  * @brief This function handles System tick timer.
  */
void SysTick_Handler(void)
{
 
  HAL_IncTick();

}

/******************************************************************************/
/* STM32G0xx Peripheral Interrupt Handlers                                    */
/* Add here the Interrupt Handlers for the used peripherals.                  */
/* For the available peripheral interrupt handler names,                      */
/* please refer to the startup file (startup_stm32g0xx.s).                    */
/******************************************************************************/

/**
  * @brief This function handles USART2 global interrupt / USART2 wake-up interrupt through EXTI line 26.
  */
void USART2_IRQHandler(void)
{
	  unsigned char Res=0;
    if((USART2->ISR&UART_FLAG_RXNE) != 0)
    { 
			Res=USART2->RDR;
			uart_receive_input(Res);
    }
}
/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
