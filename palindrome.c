#include<stdio.h>
#include "major1.h"
#include <stdbool.h>


//Create a function called BinaryPring that prints out the binary representation
void BinaryPrint(unsigned int num1)
{
/*
	if(num1 > 1)			//if statement for num1 > 1
	BinaryPrint(num1>>1);

	printf("%d", num1 & 1);		//output statement displaying the binary representaiton

*/

//using a for loop and nested if and else statements to do the following:
//store the binary result into a char to be able to display the 0s at the beginning of each binary result
for (int i = 31; i >= 0 ; i--) {
	int k = num1 >> i;
	if (k & 1)
	printf( "%c", '1');		//an output statement for the user to read
	else
	printf( "%c", '0');		//an output statement for the user to read
}



}

//write a function called ReversingBits that reverses the bits of numbers to check palindrome on both sides.
unsigned int ReversingBits (unsigned int num2)
{
/*
	unsigned int checking = 0;		//declare an unsigned int called "checking" and set it equal to 0
	//write a while loop that reverses the number
	while (num2 > 0)
	{
		checking <<= 1;
		if(num2 & 1 == 1)
		checking ^= 1;

		num2 >>= 1;
	}

	return checking;		//return statement that returns the value of checking
*/

int t, r =0;		//declare an int t and r, then set r = 0

t = num2;			//set t = to the unsgined int num2

//write a while loop that checks if the binary number is in fact plaindrom or not.
while (t != 0)
{
	r = r *10;			//multiplying the result by 10
	r = r + t%10;		
	t = t/10;			// then dividing the result by 10 again
}

// using if and else statement to check the validity of the palindrome
if (num2 == r)
	printf ("Yes, %d is a palindrome number. \n", num2);		// an output statement displaying the palindrome if it is correct
else
	printf ("No, %d is not a palindrome number. \n", num2);	// an output statement saying that the binary number is not a palindrome
return 0;
}






/*
write a bool function and call it "Palindrome".
This function should check whether the binary representation is palindrome or not.
*/
bool Palindrome (unsigned int num3)
{
	unsigned int ReversingCheck = ReversingBits(num3);
	return (num3 == ReversingCheck);
}




//main function
void PalindromeMain()
{

        unsigned int n;		//decalre an unsigned int and call it n

//write a while loop nested with if/else statements so that it only accepts positive integers less than 2 bil
while ( n >= 0 )	//while loop only accepts positive integers
{


        printf(" Enter a positive integer less than 2 billion : ");		//write an output statement that allows the user to enter the number
        scanf("%u", &n);						//write an input statement that takes the user's input
//while ( n >= 0 )
//{
	if (n > 0 && n < 2000000000)			//if statement that only accepts numbers less than 2 bil
	{
        printf(" Binary representation of %d = " ,n);			//write an output statement that displays the binary representation
        BinaryPrint(n);							//BinaryPRINT Function call
	break;
	}
	else					//else statement asking the user to try again if the number is greater than 2 bil
	{
	printf(" \n Try Again: ");
	}
}


/*
	//using an if/else statements, print out the results of the binary representation and state if they are palindrome or not
        if (Palindrome(n))
        printf("\n ------Yes, %d is a Palindrome" ,n);	//an output statement displaying YES if the number is palindrome
        else
        printf("\n ------NO, %d is not Palindrome" ,n);	//an output statement displaying No if the number is not palindrome
*/
	printf("\n");					//an empty line for space
    ReversingBits(n);


//        return 0;

}

