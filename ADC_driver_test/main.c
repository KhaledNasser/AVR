/*
 * main.c
 *
 *  Created on: Nov 23, 2019
 *      Author: Ahmed
 */

/*
 * a project to test ADCW and visualize ADCH and ADCL
 * try change ADLAR to 0 and to 1 to see different results
 */

#include "ADC_int.h"		// include ADC driver
#include "ADC_priv.h"		// to use ADC_CH0 and ADC_CH1 and so on
#include <avr/io.h>			// just to use PORT and DDR
#include <util/delay.h>		// just for delay
#include "utils.h"			// to use SETBIT

void putADCWonPORTCandD(void);

void main()
{
	ADC_voidSetISRPtr(putADCWonPORTCandD);
	ADC_voidInit();

	DDRC = 0xFF;
	DDRD = 0xFF;

	SETBIT(SREG, 7);		// enable global interrupt

	while(1)
	{
		ADC_voidChangeChannel(ADC_CH0);
		ADC_voidStartConv();
		_delay_ms(1000);		// delay between sampling
		ADC_voidChangeChannel(ADC_CH1);
		ADC_voidStartConv();
		_delay_ms(1000);		// delay between sampling
	}
}

// function will be called in ADC ISR
void putADCWonPORTCandD(void)
{
	PORTC = ADC_u16GetData();
	PORTD = ADC_u16GetData()>>8;
}
