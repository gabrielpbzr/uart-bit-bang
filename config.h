/* 
 * File:   config.h
 * Author: gabriel
 *
 * Created on 9 de Abril de 2021, 09:37
 */

#ifndef CONFIG_H
#define	CONFIG_H

#ifdef	__cplusplus
extern "C" {
#endif


// CONFIG
#pragma config FOSC = INTRCIO // Oscillator Selection bits (INTOSC oscillator: I/O function on GP4/OSC2/CLKOUT pin, I/O function on GP5/OSC1/CLKIN)
#pragma config WDTE = OFF     // Watchdog Timer Enable bit (WDT disabled)
#pragma config PWRTE = OFF    // Power-Up Timer Enable bit (PWRT disabled)
#pragma config MCLRE = OFF    // GP3/MCLR pin function select (GP3/MCLR pin function is digital I/O, MCLR internally tied to VDD)
#pragma config BOREN = ON     // Brown-out Detect Enable bit (BOD enabled)
#pragma config CP = OFF       // Code Protection bit (Program Memory code protection is disabled)
#pragma config CPD = OFF      // Data Code Protection bit (Data memory code protection is disabled)

#ifdef	__cplusplus
}
#endif

#endif	/* CONFIG_H */

