#include "app.h"
 
void app()
{
    char *msg[] = { "STM32F411\n" };
    while (1)
    {
        HAL_GPIO_TogglePin(LED_GPIO_Port, LED_Pin);
        HAL_Delay(3000);
        //HAL_USB_Transmit();
     }
} 