
// A program to calculate the square root of a number

#include "stdio.h"

float square_root(int num)
{
	float mul = 1;

	// Checking that multiple times itself is less than the number
	while ((mul * mul) < num)
		{
			// Increasing multiple by small amount to reach the given number
			mul += 0.000001;
		}
	return mul;
}

void main()
{
	int number;

	// Asking user to add a number
	printf("Enter a number: ");
	fflush(stdin);
	fflush(stdout);

	// Getting the number from user
	scanf("%d", &number);

	// Printing the result
	printf("Input: %d -> Oputput: %.3f", number, square_root(number));
	fflush(stdin);
	fflush(stdout);
}
