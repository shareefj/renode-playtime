#ifndef HANDSHAKE_H
#define HANDSHAKE_H

#include <stdbool.h>
#include <libopencm3/stm32/rcc.h>
#include <libopencm3/stm32/gpio.h>
#include <libopencm3/stm32/usart.h>

#define HSO GPIO0
#define HSI GPIO1

static inline __attribute__((always_inline)) bool hso_get(void) {
    return (gpio_get(GPIOA, HSO) == HSO);
}

static inline __attribute__((always_inline)) void hso_set(void) {
    gpio_set(GPIOA, HSO);
}

static inline __attribute__((always_inline)) void hso_clear(void) {
    gpio_clear(GPIOA, HSO);
}

static inline __attribute__((always_inline)) bool hsi_get(void) {
    return (gpio_get(GPIOA, HSI) == HSI);
}

static inline __attribute__((always_inline)) void hsi_set(void) {
    gpio_set(GPIOA, HSI);
}

static inline __attribute__((always_inline)) void hsi_clear(void) {
    gpio_clear(GPIOA, HSI);
}


void master_handshake(void);
void slave_handshake(void);

#endif