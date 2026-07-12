#include <stdint.h>
#include "led.h"

/* Simulated LED state */
uint8_t led_state = 0;

void led_init(void)
{
    led_state = 0;
}

void led_on(void)
{
    led_state = 1;
}

void led_off(void)
{
    led_state = 0;
}

void led_toggle(void)
{
    led_state ^= 1;
}
