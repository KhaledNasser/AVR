/*
*   7Seg_prog for pin this file is part of 7 segment driver
*
*   Author : Ever_last
*   Date: 25/9/2019
*/


#include "std_types.h"
#include "utils.h"

#include "DIO_int.h"
#include "DIO_config.h"

#include "7Seg_priv.h"
#include "7Seg_config.h"
#include "7Seg_int.h"

void Seg_voidInit()
{
    DIO_voidSetPIN(Segl_Enb,DIO_LOW);
    DIO_voidSetPIN(Segr_Enb,DIO_LOW);
}

void Seg_voidDisplay(u8 Local_DispNum,u8 Seg_num){

    if(Seg_num == 1){
    	DIO_voidSetPIN(Segl_Enb,DIO_HIGH);
    	switch (Local_DispNum)
    	{
    			case 0:
    				DIO_voidSetPIN (SegAl,DIO_LOW);
    				DIO_voidSetPIN (SegBl,DIO_LOW);
    				DIO_voidSetPIN (SegCl,DIO_LOW);
    				DIO_voidSetPIN (SegDl,DIO_LOW);
    			break;

    			case 1:
    				DIO_voidSetPIN (SegAl,DIO_HIGH);
    				DIO_voidSetPIN (SegBl,DIO_LOW);
    				DIO_voidSetPIN (SegCl,DIO_LOW);
    				DIO_voidSetPIN (SegDl,DIO_LOW);
    			break;

    			case 2:
    				DIO_voidSetPIN (SegAl,DIO_LOW);
    				DIO_voidSetPIN (SegBl,DIO_HIGH);
    				DIO_voidSetPIN (SegCl,DIO_LOW);
    				DIO_voidSetPIN (SegDl,DIO_LOW);
    			break;

    			case 3:
    				DIO_voidSetPIN (SegAl,DIO_HIGH);
    				DIO_voidSetPIN (SegBl,DIO_HIGH);
    				DIO_voidSetPIN (SegCl,DIO_LOW);
    				DIO_voidSetPIN (SegDl,DIO_LOW);
    			break;

    			case 4:
    				DIO_voidSetPIN (SegAl,DIO_LOW);
    				DIO_voidSetPIN (SegBl,DIO_LOW);
    				DIO_voidSetPIN (SegCl,DIO_HIGH);
    				DIO_voidSetPIN (SegDl,DIO_LOW);
    			break;

    			case 5:
    				DIO_voidSetPIN (SegAl,DIO_HIGH);
    				DIO_voidSetPIN (SegBl,DIO_LOW);
    				DIO_voidSetPIN (SegCl,DIO_HIGH);
    				DIO_voidSetPIN (SegDl,DIO_LOW);
    			break;

    			case 6:
    				DIO_voidSetPIN (SegAl,DIO_LOW);
    				DIO_voidSetPIN (SegBl,DIO_HIGH);
    				DIO_voidSetPIN (SegCl,DIO_HIGH);
    				DIO_voidSetPIN (SegDl,DIO_LOW);
    			break;

    			case 7:
    				DIO_voidSetPIN (SegAl,DIO_HIGH);
    				DIO_voidSetPIN (SegBl,DIO_HIGH);
    				DIO_voidSetPIN (SegCl,DIO_HIGH);
    				DIO_voidSetPIN (SegDl,DIO_LOW);
    			break;

    			case 8:
    				DIO_voidSetPIN (SegAl,DIO_LOW);
    				DIO_voidSetPIN (SegBl,DIO_LOW);
    				DIO_voidSetPIN (SegCl,DIO_LOW);
    				DIO_voidSetPIN (SegDl,DIO_HIGH);
    			break;

    			case 9:
    				DIO_voidSetPIN (SegAl,DIO_HIGH);
    				DIO_voidSetPIN (SegBl,DIO_LOW);
    				DIO_voidSetPIN (SegCl,DIO_LOW);
    				DIO_voidSetPIN (SegDl,DIO_HIGH);
    			break;
    		}
    }
    else if(Seg_num == 2){
    	DIO_voidSetPIN(Segr_Enb,DIO_HIGH);
    	switch (Local_DispNum)
    	{
    	    			case 0:
    	    				DIO_voidSetPIN (SegAr,DIO_LOW);
    	    				DIO_voidSetPIN (SegBr,DIO_LOW);
    	    				DIO_voidSetPIN (SegCr,DIO_LOW);
    	    				DIO_voidSetPIN (SegDr,DIO_LOW);
    	    			break;

    	    			case 1:
    	    				DIO_voidSetPIN (SegAr,DIO_HIGH);
    	    				DIO_voidSetPIN (SegBr,DIO_LOW);
    	    				DIO_voidSetPIN (SegCr,DIO_LOW);
    	    				DIO_voidSetPIN (SegDr,DIO_LOW);
    	    			break;

    	    			case 2:
    	    				DIO_voidSetPIN (SegAr,DIO_LOW);
    	    				DIO_voidSetPIN (SegBr,DIO_HIGH);
    	    				DIO_voidSetPIN (SegCr,DIO_LOW);
    	    				DIO_voidSetPIN (SegDr,DIO_LOW);
    	    			break;

    	    			case 3:
    	    				DIO_voidSetPIN (SegAr,DIO_HIGH);
    	    				DIO_voidSetPIN (SegBr,DIO_HIGH);
    	    				DIO_voidSetPIN (SegCr,DIO_LOW);
    	    				DIO_voidSetPIN (SegDr,DIO_LOW);
    	    			break;

    	    			case 4:
    	    				DIO_voidSetPIN (SegAr,DIO_LOW);
    	    				DIO_voidSetPIN (SegBr,DIO_LOW);
    	    				DIO_voidSetPIN (SegCl,DIO_HIGH);
    	    				DIO_voidSetPIN (SegDr,DIO_LOW);
    	    			break;

    	    			case 5:
    	    				DIO_voidSetPIN (SegAr,DIO_HIGH);
    	    				DIO_voidSetPIN (SegBr,DIO_LOW);
    	    				DIO_voidSetPIN (SegCr,DIO_HIGH);
    	    				DIO_voidSetPIN (SegDr,DIO_LOW);
    	    			break;

    	    			case 6:
    	    				DIO_voidSetPIN (SegAr,DIO_LOW);
    	    				DIO_voidSetPIN (SegBr,DIO_HIGH);
    	    				DIO_voidSetPIN (SegCr,DIO_HIGH);
    	    				DIO_voidSetPIN (SegDr,DIO_LOW);
    	    			break;

    	    			case 7:
    	    				DIO_voidSetPIN (SegAr,DIO_HIGH);
    	    				DIO_voidSetPIN (SegBr,DIO_HIGH);
    	    				DIO_voidSetPIN (SegCr,DIO_HIGH);
    	    				DIO_voidSetPIN (SegDr,DIO_LOW);
    	    			break;

    	    			case 8:
    	    				DIO_voidSetPIN (SegAr,DIO_LOW);
    	    				DIO_voidSetPIN (SegBr,DIO_LOW);
    	    				DIO_voidSetPIN (SegCr,DIO_LOW);
    	    				DIO_voidSetPIN (SegDr,DIO_HIGH);
    	    			break;

    	    			case 9:
    	    				DIO_voidSetPIN (SegAr,DIO_HIGH);
    	    				DIO_voidSetPIN (SegBr,DIO_LOW);
    	    				DIO_voidSetPIN (SegCr,DIO_LOW);
    	    				DIO_voidSetPIN (SegDr,DIO_HIGH);
    	    			break;
    	    		}
    }
}
