/*
 * Waleed Ayyash - wfa0012
 * csce 3600 major1 power of 2
 */
#include <math.h>
#include "major1.h"

void power() //function of
{
	double n = 0.0;
	bool check = 1;

	while (check == 1)
	{
		printf("Enter a positive integer less than 2 billion: ");
		scanf("%lf" , &n);
		if (n > 0 && n < 2000000000)
		{
			check = 0;
		}else
		{
			check = 1;
		}
	}
	int x = n;

	int b;
	b = (x &&(!(x&(x-1))));

	if (b == 1)
	{
		printf("%u is a power of 2\n", x);
	}else
	{
		double nxtInt = pow(2, ceil(log(x)/log(2)));
		printf("%u is not the power of 2\n", x);
		printf("Next higher integer that is the power of 2 is %lf\n", nxtInt);
	}
}
