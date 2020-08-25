#include "DIO_config.h"
#include "DIO_priv.h"
#include "DIO_int.h"
#include "utils.h"
#include <avr/io.h>
u8 ret=DIO_HIGH;
//write the macro like func of CONCBIT

#define PORTA_DIR CONCBIT(DIO_PIN33_DIR, DIO_PIN34_DIR, DIO_PIN35_DIR, DIO_PIN36_DIR, DIO_PIN37_DIR, DIO_PIN38_DIR, DIO_PIN39_DIR, DIO_PIN40_DIR)
#define PORTB_DIR CONCBIT(DIO_PIN8_DIR, DIO_PIN7_DIR, DIO_PIN6_DIR, DIO_PIN5_DIR, DIO_PIN4_DIR, DIO_PIN3_DIR, DIO_PIN2_DIR, DIO_PIN1_DIR)
#define PORTC_DIR CONCBIT(DIO_PIN29_DIR, DIO_PIN28_DIR, DIO_PIN27_DIR, DIO_PIN26_DIR, DIO_PIN25_DIR, DIO_PIN24_DIR, DIO_PIN23_DIR, DIO_PIN22_DIR)
#define PORTD_DIR CONCBIT(DIO_PIN21_DIR, DIO_PIN20_DIR, DIO_PIN19_DIR, DIO_PIN18_DIR, DIO_PIN17_DIR, DIO_PIN16_DIR, DIO_PIN15_DIR, DIO_PIN14_DIR)
void DIO_voidInit(void)
{
	DDRA = PORTA_DIR;
	DDRB = PORTB_DIR;
	DDRC = PORTC_DIR;
	DDRD = PORTD_DIR;
}

void DIO_voidSetPIN (u8 local_pinNumber, u8 local_pinValue)
{

	if ((local_pinNumber < 41)&&(local_pinNumber >32))
	{
		if (local_pinValue == DIO_HIGH)
			SET_BIT (PORTA, (-(local_pinNumber-40)));
		else
			CLR_BIT (PORTA, (-(local_pinNumber-40)));
	}
	else if (local_pinNumber < 9)
	{
		if (local_pinValue == DIO_HIGH)
			SET_BIT (PORTB, (local_pinNumber-1));
		else
			CLR_BIT (PORTB, (local_pinNumber-1));
	}
	else if ((local_pinNumber < 30)&&(local_pinNumber > 21))
	{
		if (local_pinValue == DIO_HIGH)
			SET_BIT (PORTC, (local_pinNumber-22));
		else
			CLR_BIT (PORTC, (local_pinNumber-22));
	}
	else if ((local_pinNumber < 22)&&(local_pinNumber > 13))
	{
		if (local_pinValue == DIO_HIGH)
			SET_BIT (PORTD, (local_pinNumber-14));
		else
			CLR_BIT (PORTD, (local_pinNumber-14));
	}
}

u8 DIO_u8GetPin(u8 local_pinNumber)
{
	if ((local_pinNumber < 41)&&(local_pinNumber >32))
	{
		if ((GET_BIT(PINA, (-(local_pinNumber-40))))==1)
			ret=DIO_HIGH;
		else
			ret=DIO_LOW;
	}

	else if (local_pinNumber < 9)
	{
			if ((GET_BIT(PINB, (local_pinNumber-1)))==1)
				ret=DIO_HIGH;
			else
				ret=DIO_LOW;
	}
	else if ((local_pinNumber < 30)&&(local_pinNumber > 21))
	{
			if ((GET_BIT(PINC, (local_pinNumber-22)))==1)
				ret=DIO_HIGH;
			else
				ret=DIO_LOW;
	}
	else if ((local_pinNumber < 22)&&(local_pinNumber > 13))
	{
			if ((GET_BIT(PIND, (local_pinNumber-14)))==1)
				ret=DIO_HIGH;
			else
				ret=DIO_LOW;
	}
	return ret;
}
