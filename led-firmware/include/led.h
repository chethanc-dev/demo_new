#ifndef LED_H
#define LED_H

#include <stdint.h>

extern uint8_t led_state;

void led_init(void);
void led_on(void);
void led_off(void);
void led_toggle(void);

#endif
