
// A program to count the number of ones in a binary number

#include "stdio.h"

// Function to count the ones
void ones_in_binary_number(int num)
{
	int i, counter = 0;

	// Shifting the number to the right and comparing it to one
	for(i = 0; i <= 31; i++)
	{
		if((1 & (num >> i)) == 1)
		{
			counter++;
		}
	}

	// Printing the number of ones
	printf("Input: %d -> Output: %d", num, counter);
}

void main()
{
	int number;

	// Asking user to enter a number
	printf("Enter a number: ");
	fflush(stdin);
	fflush(stdout);

	// Getting a number from user
	scanf("%d", &number);

	// Calling the function to print the result
	ones_in_binary_number(number);
}

