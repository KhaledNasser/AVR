

#ifndef SWITCH_CONFIG_H_
#define SWITCH_CONFIG_H_

/************************************
PLEASE CHOOSE WHERE TO CONNECT SWITCH
DIO_PIN0
************************************/

#define SWITCH_PIN1 DIO_PIN24
#define SWITCH_PIN2 DIO_PIN25
#define SWITCH_PIN3 DIO_PIN26
#define SWITCH_PIN4 DIO_PIN0
#define SWITCH_PIN5 DIO_PIN1



/************************************
PLEASE CHOOSE BETWEEN
PULL_UP
PULL_DOWN
*************************************/

#define SWITCH_STATE_ONE 	  PULL_DOWN
#define SWITCH_STATE_TWO   	  PULL_DOWN
#define SWITCH_STATE_THREE    PULL_DOWN
#define SWITCH_STATE_FOUR     PULL_DOWN
#define SWITCH_STATE_FIVE     PULL_DOWN

#endif /* SWITCH_CONFIG_H_ */
