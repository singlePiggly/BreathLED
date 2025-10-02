//
// Created by DKM on 2025/10/2.
//
#include "cmsis_os.h"
#include "main.h"
#include "FreeRTOS.h"
#include "task.h"
#include "tim.h"

void red_led_task(void const * argument)
{
    HAL_TIM_PWM_Start(&htim5, TIM_CHANNEL_3);
    while (1)
    {
        for (int i=0;i<100;i++)
        {
            __HAL_TIM_SET_COMPARE(&htim5, TIM_CHANNEL_3, i);
            osDelay(10);
        }
        osDelay(2000);
    }
}
void blue_led_task(void const * argument)
{
    HAL_TIM_PWM_Start(&htim5, TIM_CHANNEL_2);
    while (1)
    {
        for (int i=0;i<100;i++)
        {
            __HAL_TIM_SET_COMPARE(&htim5, TIM_CHANNEL_2, i);
            osDelay(10);
        }
        osDelay(3000);
    }
}
void green_led_task(void const * argument)
{
    HAL_TIM_PWM_Start(&htim5, TIM_CHANNEL_1 );
    while (1)
    {
        for (int i=0;i<100;i++)
        {
            __HAL_TIM_SET_COMPARE(&htim5, TIM_CHANNEL_1, i);
            osDelay(10);
        }
        osDelay(5000);
    }
}