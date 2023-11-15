/*
 * EX7_finding_factorial.c
 *
 *  Created on: Nov 15, 2023
 *      Author: Ahmed
 */

#include "stdio.h"

void main()
{

	int number, i, factorial = 1;

	printf("Enter an integer: ");

	// Removing any remaining characters in the input buffer after previous input operations
	fflush(stdin);

	// Ensuring that any buffered output data is written to the output device immediately
	fflush(stdout);

	scanf("%d", &number);

	fflush(stdin);
	fflush(stdout);

	/*
	 * Checking if the number bigger than 0 or equals 0 or less than zero
	 * to check if we can calculate the factorial. Then we calculate it if possible
	 */

	if (number > 0)
	{
		for (i = 1; i <= number; i++)
			{
				factorial *= i;
			}
		printf("Factorial = %d", factorial);
	}
	else if (number == 0)
	{
		printf("Factorial = %d", factorial);
	}
	else
	{
		printf("Error !!! Factorial of negative number doesn't exist.");
	}

}

