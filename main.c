/*
 * File:   main.c
 * Author: gabriel
 *
 * Created on 2 de Fevereiro de 2021, 12:14
 */
#include "config.h"
#include "definitions.h"
#include <xc.h>

void uart_send_char(char c) {
    //Insert STOP_BIT after MSB and START_BIT before LSB of char
    unsigned short tx_buffer = ((1 << 9) | (c << 1)); 
    while (tx_buffer) {
        TX_PIN = (tx_buffer & 0x01);
        __delay_us(UART_DELAY);
        tx_buffer >>= 1;
    }
}

void uart_send_string(char *str) {
    while (str) {
        uart_send_char(*str++);
    }
}

void setup()
{
    TRISIO2 = 0;
    TRISIO3 = 1;
    TRISIO5 = 0; 
    
    TX_PIN = 1;
    CLK_PIN = 1;    
}

void loop()
{
    if (BTN_PIN == 0) {
        uart_send_string("IT WORKS\r\n");
    }
}

void main(void)
{
    setup();
    for (;;)
    {
        loop();
    }
}
