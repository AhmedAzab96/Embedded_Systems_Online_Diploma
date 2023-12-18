/*
 * EX4_calculating_power_using_recursion.c
 *
 *  Created on: Dec 18, 2023
 *      Author: ahmed
 */

#include "stdio.h"

// Writing a function to calculate the power of a number
int power(int base, int exp)
{
	// Checking that exponent is not equal zero
	if(exp != 0)
	{
		return base * power(base, exp - 1);
	}
	else
	{
		return 1;
	}
}

void main()
{
	int number, exponent;

	// Asking user to enter the number
	printf("Enter base number: ");
	fflush(stdin);
	fflush(stdout);

	scanf("%d", &number);

	// Asking the user to enter the exponent
	printf("Enter power number (positive integer): ");
	fflush(stdin);
	fflush(stdout);

	scanf("%d", &exponent);

	// Calling the power function to print its result
	printf("%d^%d = %d", number, exponent, power(number, exponent));
	fflush(stdin);
	fflush(stdout);
}
