/*
 * 7SegD_Prog.c
 *
 *  Created on: Sep 20, 2019
 *      Author: User
 */

#include"std_types.h"
#include"utils.h"

#include"DIO_int.h"

#include"7SegD_Priv.h"
#include"7SegD_Config.h"
#include"7SegD_int.h"

void SegD_VoidInit()
{
	DIO_voidSetPIN (Seg_Enb,DIO_LOW);
}

void SegD_VoidDisplay(u8 Local_DispNumb)
{
	DIO_voidSetPIN (Seg_Enb,DIO_HIGH);

	switch (Local_DispNumb)
	{
		case 0:
			DIO_voidSetPIN (SegA,DIO_LOW);
			DIO_voidSetPIN (SegB,DIO_LOW);
			DIO_voidSetPIN (SegC,DIO_LOW);
			DIO_voidSetPIN (SegD,DIO_LOW);
		break;

		case 1:
			DIO_voidSetPIN (SegA,DIO_HIGH);
			DIO_voidSetPIN (SegB,DIO_LOW);
			DIO_voidSetPIN (SegC,DIO_LOW);
			DIO_voidSetPIN (SegD,DIO_LOW);
		break;

		case 2:
			DIO_voidSetPIN (SegA,DIO_LOW);
			DIO_voidSetPIN (SegB,DIO_HIGH);
			DIO_voidSetPIN (SegC,DIO_LOW);
			DIO_voidSetPIN (SegD,DIO_LOW);
		break;

		case 3:
			DIO_voidSetPIN (SegA,DIO_HIGH);
			DIO_voidSetPIN (SegB,DIO_HIGH);
			DIO_voidSetPIN (SegC,DIO_LOW);
			DIO_voidSetPIN (SegD,DIO_LOW);
		break;

		case 4:
			DIO_voidSetPIN (SegA,DIO_LOW);
			DIO_voidSetPIN (SegB,DIO_LOW);
			DIO_voidSetPIN (SegC,DIO_HIGH);
			DIO_voidSetPIN (SegD,DIO_LOW);
		break;

		case 5:
			DIO_voidSetPIN (SegA,DIO_HIGH);
			DIO_voidSetPIN (SegB,DIO_LOW);
			DIO_voidSetPIN (SegC,DIO_HIGH);
			DIO_voidSetPIN (SegD,DIO_LOW);
		break;

		case 6:
			DIO_voidSetPIN (SegA,DIO_LOW);
			DIO_voidSetPIN (SegB,DIO_HIGH);
			DIO_voidSetPIN (SegC,DIO_HIGH);
			DIO_voidSetPIN (SegD,DIO_LOW);
		break;

		case 7:
			DIO_voidSetPIN (SegA,DIO_HIGH);
			DIO_voidSetPIN (SegB,DIO_HIGH);
			DIO_voidSetPIN (SegC,DIO_HIGH);
			DIO_voidSetPIN (SegD,DIO_LOW);
		break;

		case 8:
			DIO_voidSetPIN (SegA,DIO_LOW);
			DIO_voidSetPIN (SegB,DIO_LOW);
			DIO_voidSetPIN (SegC,DIO_LOW);
			DIO_voidSetPIN (SegD,DIO_HIGH);
		break;

		case 9:
			DIO_voidSetPIN (SegA,DIO_HIGH);
			DIO_voidSetPIN (SegB,DIO_LOW);
			DIO_voidSetPIN (SegC,DIO_LOW);
			DIO_voidSetPIN (SegD,DIO_HIGH);
		break;
	}
}
void main(){}
