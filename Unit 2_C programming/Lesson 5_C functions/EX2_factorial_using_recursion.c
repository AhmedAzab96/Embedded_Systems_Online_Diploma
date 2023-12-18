/*
 * EX2_factorial_using_recursion.c
 *
 *  Created on: Dec 18, 2023
 *      Author: ahmed
 */

#include "stdio.h"

// Function takes a number then returns its factorial
int factorial(int number)
{
	// Factorial of 0 and 1 equals 1
	if(number == 0 || number == 1)
	{
		return 1;
	}
	else
	{
		return number * factorial(number - 1);
	}
}

int main()
{
	int number;
	// Asking user to enter a number
	printf("Enter a positive integer: ");
	fflush(stdin);
	fflush(stdout);

	// Getting the number from user
	scanf("%d", &number);

	// Printing the called factorial function
	printf("Factorial of %d is %d",number, factorial(number));
	fflush(stdin);
	fflush(stdout);
}
