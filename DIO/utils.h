
#ifndef utils
#define utils

#include "std_types.h"


#define SET_BIT(reg, n) (reg |= (1<<n))
#define CLR_BIT(reg, n) (reg &=  ~(1<<n))
#define TOG_BIT(reg, n) (reg ^=(1<<n))
#define GET_BIT(reg, n) ((reg>>n)&1)

//#define CONC_BIT(a, b, c, d, e, f, g, h) (0b##a##b##c##d##e##f##g##h)
#define CONCBIT(PIN7, PIN6, PIN5, PIN4, PIN3, PIN2, PIN1, PIN0) CONCBIT_helper(PIN7, PIN6, PIN5, PIN4, PIN3, PIN2, PIN1, PIN0)
#define CONCBIT_helper(PIN7, PIN6, PIN5, PIN4, PIN3, PIN2, PIN1, PIN0) 0b##PIN7##PIN6##PIN5##PIN4##PIN3##PIN2##PIN1##PIN0


#define SET_NBL_LOW(reg) (reg |= (0x0F))
#define SET_NBL_HIGH(reg) (reg |= (0xF0))

#define RST_NBL_LOW(reg) (reg &= (0xF0))
#define RST_NBL_HIGH(reg) (reg &= (0x0F))

#define TOG_NBL_LOW(reg) (reg ^=(0x0F))
#define TOG_NBL_HIGH(reg) (reg ^=(0xF0))

#define GET_NBL_LOW(reg) ((reg)&0x0F)
#define GET_NBL_HIGH(reg) ((reg>>4)&0x0F)



#define SET_NBL_VAL_LOW(reg, val) (reg|=((reg &= (0xF0))|(val & 0x0F)))
#define SET_NBL_VAL_HIGH(reg, val) (reg|=((reg &= (0x0F))|(val & 0xF0)))

#endif
