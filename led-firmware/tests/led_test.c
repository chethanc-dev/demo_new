#include "led.h"

static int check(int condition, const char *message)
{
    if (!condition) {
        return 1;
    }
    (void)message;
    return 0;
}

int main(void)
{
    led_init();
    if (check(led_state == 0, "initial state")) {
        return 1;
    }

    led_on();
    if (check(led_state == 1, "on state")) {
        return 1;
    }

    led_toggle();
    if (check(led_state == 0, "toggle off")) {
        return 1;
    }

    led_toggle();
    if (check(led_state == 1, "toggle on")) {
        return 1;
    }

    led_off();
    if (check(led_state == 0, "off state")) {
        return 1;
    }

    return 0;
}
