/*************************************************************************
 * FILE		: GCD_of_two_numbers_using_recursion().c
 * DESCRIPTION	: Program to print the gcd of two numbers using recursion.
 * AUTHOR	: GLADSON HANSDA
 * DATED	: 18/07/2020
 * **********************************************************************/

#include"/home/gladson/Desktop/Practice/program_practice/recursion/GCD_Of_two_numbers_using_recursion/include/GCD_of_two_numbers_using_recursion.h"

int main()
{
	int num1,num2,gcd;
	printf("\n\nRecursion : Find GCD of two numbers :\n");
	printf("-----------------------------------------\n");
	printf("Input 1st number: ");
	scanf("%d",&num1);
	printf("Input 2nd number: ");
	scanf("%d",&num2);

	gcd = findGCD(num1,num2);
	printf("\nThe GCD of %d and %d is: %d\n\n",num1,num2,gcd);
	return 0;
}



/*************************************************************************
 *	     *End of file: GCD_of_two_numbers_using_recursion().c*
 * **********************************************************************/
