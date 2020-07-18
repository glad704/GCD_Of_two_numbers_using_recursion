/*************************************************************************
 * FILE		: findGCD().c
 * DESCRIPTION	: Program to find the GCD of two numbers using recursion.
 * AUTHOR	: GLADSON HANSDA
 * DATED	: 18/07/2020
 * **********************************************************************/

int findGCD(int a,int b)
{
	while(a!=b)
	{
		if(a>b)
		{
			return findGCD(a-b,b);
		}
		else
		{
			return findGCD(a,b-a);
		}
	}
	return a;
}




/*************************************************************************
 *			*End of file: findGCD().c*
 * **********************************************************************/
