#include <avr/io.h>
#include "util/delay.h"
#include "usart.h"

#define LED_BUILTIN PINB5
#define DELAY 500


int main(void) {
  DDRB = 0xFF;
  usart_init(8);

  while (1) {
    PORTB ^= 1 << LED_BUILTIN;
    _delay_ms(DELAY);
    usart_tx_string("asdf");
  }
}
