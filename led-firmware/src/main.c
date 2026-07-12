#include "led.h"

int main(void)
{
    led_init();
    while (1)
    {
        led_toggle();
        for (volatile int i = 0; i < 500000; i++);
    }
    return 0;
}
