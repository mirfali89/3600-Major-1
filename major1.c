
// Main File
// Farhan Ali
// Waleed LASTNAME
// AJ LASTNAME
// Mitchell Severson

#include"major1.h"



int main()
{

	int choice; // users menu selection
	    do
	    {
	        printf("\nEnter the menu option for the operation to perform: \n");
	        printf("1. POWER OF 2\n");
	        printf("2. REVERSE BITS \n");
	        printf("3. REPLACE BIT POSITION FROM MASK \n");
	        printf("4. PALINDROME\n");
	        printf("5. EXIT\n");
	        scanf("%d",&choice);

	        switch(choice)
	        {
	            case 1:

	            	power();
	                break;
	            case 2:
	   	            reverse();
	                break;
	            case 3:

	            	replace();
	          	    break;
	            case 4:
	            	PalindromeMain();
	          	     break;
	            case 5: printf("EXITING PROGRAM, PLEASE BE PATIENT\n");
	                exit(0);
	                break;
	            default: printf("INVALID CHOICE\n");
	                break;
	        }

	    } while (choice != 5);

	return 0;
}
