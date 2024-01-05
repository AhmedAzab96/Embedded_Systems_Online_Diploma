
// A program to reverse the digits of a number

#include "stdio.h"

// Function to reverse the digits
int reverse_digits(int num)
{
	int new_number = 0;

	// Checking that number doesn't equal zero
	while(num != 0)
	{
		new_number += num % 10;
		new_number *= 10;
		num /= 10;
	}

	// Removing the one more digit that was added in the last multiplication
	new_number /= 10;

	return new_number;
}

void main()
{
	int number;

	// Asking the user to enter a number
	printf("Enter a number: ");
	fflush(stdin);
	fflush(stdout);

	// Getting number from the user
	scanf("%d", &number);

	// Printing the result
	printf("Input: %d -> Oputput: %d", number, reverse_digits(number));
	fflush(stdin);
	fflush(stdout);
}

