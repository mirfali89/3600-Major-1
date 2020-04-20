/* Farhan Ali
 *
 * Reverse bit function using bitwise operators
 * This code will contain a single function that accepts a single positive integer less
 * than two billion (and the include directive to your header file) to perform
 * the following functionality: reverse the bits (all 32 of them) and then print
 * out the decimal value of the new integer
 *  */


#include"major1.h"

unsigned long int userInput() // shared input function
{

	unsigned long int input;
	do
	{
		printf("Please enter an positive Integer value of less than two Billion \n");
		scanf("%lu",&input);
	}
	while((input<0) & (input >= 2000000000)); // rejects out of bounds values, input should be within ( 0 < input <= 2 Billion)

		return input;
}
void reverse()
{
	unsigned long int input1 = userInput();
	printf("Original Number: %lu \n", input1); // original value print statement

		unsigned long int  bitSize = sizeof(input1) * 8;
	    unsigned long int reverseBit = 0;
	    unsigned int i;
	    for (i = 0; i <bitSize; i++)
	    {
	        if((input1 & (1 << i)))
	           reverseBit |= 1 << ((bitSize - 1) - i);
	   }
	    printf("Reversed number: %lu \n", reverseBit); // reversed value print statement

}
