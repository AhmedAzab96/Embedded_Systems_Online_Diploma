
// A program to sum the digits of a given number

#include "stdio.h"

// Function to sum the numbers of the digits
int sum_of_numbers_digits(int num)
{
	int sum = 0, rem = 0;
	// Checking that number is not equal to zero
	while(num != 0)
		{
			rem = num % 10;

			// Adding the leftmost digit to the sum
			sum += rem;
			num /= 10;
		}
	return sum;
}

void main()
{
	int number;

	// Asking the user to enter a number
	printf("Enter the number: ");
	fflush(stdin);
	fflush(stdout);

	// Getting number from user
	scanf("%d", &number);

	// Printing output
	printf("Input: %d -> Output: %d", number, sum_of_numbers_digits(number));
	fflush(stdin);
	fflush(stdout);
}
