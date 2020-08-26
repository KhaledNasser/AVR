

#include"BIT_MATH.h"
#include"STD_TYPES.h"
#include "util/delay.h"

#include"DIO_int.h"

#include"SWITCH_config.h"
#include"SWITCH_priv.h"
#include"SWITCH_int.h"

static u8 ret=ISNOT_PRESSED;

void SWITCH_voidInit(void)
{


}

u8 SWITCH_u8IsPressed(u8 SWITCH_NUM)
{
	if(SWITCH_NUM==SWITCH_ONE)
	{
		#if(SWITCH_STATE_ONE==PULL_UP)
			if(DIO_u8GetPin(SWITCH_PIN1)==DIO_HIGH)
				ret=ISNOT_PRESSED;
			else if(DIO_u8GetPin(SWITCH_PIN1)==DIO_LOW)
				ret=IS_PRESSED;

		#elif(SWITCH_STATE_ONE==PULL_DOWN)
			if(DIO_u8GetPin(SWITCH_PIN1)==DIO_HIGH)
				ret=IS_PRESSED;
			else if(DIO_u8GetPin(SWITCH_PIN1)==DIO_LOW)
				ret=ISNOT_PRESSED;
		#endif
	}
	else if(SWITCH_NUM==SWITCH_TWO)
	{
		#if(SWITCH_STATE_TWO==PULL_UP)
			if(DIO_u8GetPin(SWITCH_PIN2)==DIO_HIGH)
				ret=ISNOT_PRESSED;
			else if(DIO_u8GetPin(SWITCH_PIN2)==DIO_LOW)
				ret=IS_PRESSED;
		#elif(SWITCH_STATE_TWO==PULL_DOWN)
			if(DIO_u8GetPin(SWITCH_PIN2)==DIO_HIGH)
				ret=IS_PRESSED;
			else if(DIO_u8GetPin(SWITCH_PIN2)==DIO_LOW)
				ret=ISNOT_PRESSED;
		#endif
	}
	else if(SWITCH_NUM==SWITCH_THREE)
	{
		#if(SWITCH_STATE_THREE==PULL_UP)
			if(DIO_u8GetPin(SWITCH_PIN3)==DIO_HIGH)
				ret=ISNOT_PRESSED;
			else if(DIO_u8GetPin(SWITCH_PIN3)==DIO_LOW)
				ret=IS_PRESSED;
		#elif(SWITCH_STATE_THREE==PULL_DOWN)
			if(DIO_u8GetPin(SWITCH_PIN3)==DIO_HIGH)
				ret=IS_PRESSED;
			else if(DIO_u8GetPin(SWITCH_PIN3)==DIO_LOW)
				ret=ISNOT_PRESSED;
		#endif
	}
	else if(SWITCH_NUM==SWITCH_FOUR)
	{
		#if(SWITCH_STATE_FOUR==PULL_UP)
			if(DIO_u8GetPin(SWITCH_PIN4)==DIO_HIGH)
				ret=ISNOT_PRESSED;
			else if(DIO_u8GetPin(SWITCH_PIN4)==DIO_LOW)
				ret=IS_PRESSED;
		#elif(SWITCH_STATE_FOUR==PULL_DOWN)
			if(DIO_u8GetPin(SWITCH_PIN4)==DIO_HIGH)
				ret=IS_PRESSED;
			else if(DIO_u8GetPin(SWITCH_PIN4)==DIO_LOW)
				ret=ISNOT_PRESSED;
		#endif
	}
	else if(SWITCH_NUM==SWITCH_FIVE)
	{
		#if(SWITCH_STATE_FIVE==PULL_UP)
			if(DIO_u8GetPin(SWITCH_PIN5)==DIO_HIGH)
				ret=ISNOT_PRESSED;
			else if(DIO_u8GetPin(SWITCH_PIN5)==DIO_LOW)
				ret=IS_PRESSED;
		#elif(SWITCH_STATE_FIVE==PULL_DOWN)
			if(DIO_u8GetPin(SWITCH_PIN5)==DIO_HIGH)
				ret=IS_PRESSED;
			else if(DIO_u8GetPin(SWITCH_PIN5)==DIO_LOW)
				ret=ISNOT_PRESSED;
		#endif
	}
	return ret;
}

