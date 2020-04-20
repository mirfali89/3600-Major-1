#include <stdio.h>
#include "major1.h"
//Mitchell Severson--mjs0374
void replace()
{
	long unsigned int input1;//user input for number under 2 billion
	long unsigned int mask;//mask used for bit replacement
	long unsigned int bit_R;//position of bit to be replace
	long unsigned int bit_M;// mask used so that only one bit is affected in target number
	
	//user input section used to collect input for callculatons
	//do while loops utilized to control input for an unspecified number of attempts by user
	

 	do{	
                printf("enter positive integer less than 2 billion: ");
                scanf("%lu",&input1);

        }while(input1 > 1999999999 || input1 < 1);


	do{
		printf("enter positive integer less than 3 billion: ");
		scanf("%lu",&mask);

	}while(mask > 2999999999 || mask < 1);

	 do{
                printf("enter positive integer between 0 and 31 inclusively: ");
                scanf("%lu",&bit_R);

        }while(bit_R > 31 || bit_R < 0);
	
	//bit replacement callculations
	
	bit_M = (mask >> bit_R)&1; //moves bit to be replaced to the end 


 	if(bit_M == 1)//checks if bit at the end is a 1 or 0
	{		
		bit_M <<= bit_R;//moves bit back to correct location
		input1 |= bit_M;// or opperation changes target bit to 1 if 0 and if already one is unaffected
	}
	else
	{
		bit_M = 1 << bit_R;//moves a 1 to correct bit location
		bit_M = ~bit_M;//changes that 1 we moved to a 0 and all otthers to 1
		input1 &= bit_M;//changes the bit to 0 if 1 and keeps it 0 if already 0

	}
	
	//output bit location mask and new number
	printf("New integer with bit %lu from mask %lu is %lu \n",bit_R,mask,input1);	
}







