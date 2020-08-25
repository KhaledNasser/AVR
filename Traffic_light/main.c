/*
 * Traffic light implemented in avr16 by two seven segment and 5 led
 *  3 for displaying state for motion for cars.
 *  2 for displaying state for motion of people.
 *
 *      Created on: Sep 26, 2019
 *      Author: KHALED NASSER & Mennatallah Zaid
 */

#include <avr/io.h>
#include "DIO_int.h"
#include "std_types.h"
#include "utils.h"
#include "DIO_config.h"

#include "7Seg_int.h"
#include "7seg_config.h"


#include <util/delay.h> //_delay_ms(1000);

void Green();
void Yellow();
void Red();

int main(){
	DIO_voidInit();
	Seg_voidInit();
	while (1)
	{
	Green();
	Yellow();
	Red();
	}
	return 0;
}



void TrafficLightTime(u8 left,u8 right){			// right to represent right seven segment and so left
	Seg_voidDisplay(left,1);
	Seg_voidDisplay(right,2);
	while(right > 0 || left > 0 ){
		while (right >= 0){
			if (right==0)
			{
				if(left==0)
					break;
				else
				{
					_delay_ms(1000);
					left--;
					right=9;
					Seg_voidDisplay(right,2);
					Seg_voidDisplay(left,1);
				}
			}
			else{
			_delay_ms(1000);
			right--;
			Seg_voidDisplay(right,2);
			Seg_voidDisplay(left,1);
			}
		}
	}

}

void Green(){
	DIO_voidSetPIN(DIO_PIN18,DIO_HIGH); //set green led
	DIO_voidSetPIN(DIO_PIN19,DIO_LOW); //make sure that rest led are off yellow
	DIO_voidSetPIN(DIO_PIN20,DIO_LOW); //make sure that rest led are off red
	DIO_voidSetPIN(DIO_PIN23,DIO_LOW); //green led for people
	DIO_voidSetPIN(DIO_PIN22,DIO_HIGH);//red led for people
	TrafficLightTime(9,0);
}

void Yellow(){
	DIO_voidSetPIN(DIO_PIN18,DIO_LOW); //make sure that rest led are off green
	DIO_voidSetPIN(DIO_PIN19,DIO_HIGH); //set yellow on
	DIO_voidSetPIN(DIO_PIN20,DIO_LOW); //make sure that rest led are off red
	DIO_voidSetPIN(DIO_PIN23,DIO_LOW); //green led for people
	DIO_voidSetPIN(DIO_PIN22,DIO_HIGH);//red led for people
	TrafficLightTime(1,5);
}

void Red(){
	DIO_voidSetPIN(DIO_PIN18,DIO_LOW); //make sure that rest led are off  green
	DIO_voidSetPIN(DIO_PIN19,DIO_LOW); //make sure that rest led are off yellow
	DIO_voidSetPIN(DIO_PIN20,DIO_HIGH); //set red on
	DIO_voidSetPIN(DIO_PIN23,DIO_HIGH); //green led for people
	DIO_voidSetPIN(DIO_PIN22,DIO_LOW);//red led for people
	TrafficLightTime(6,0);
}
