
// Program that prints prime numbers between two numbers

#include "stdio.h"

// Function prints the primary numbers
void prime_number(int num1, int num2)
{
	int i, j, flag = 0;

	// Looping over each number between the 2 numbers
	for(i = num1; i <= num2; i++)
	{
		// Looping over each number to check if it's prime or not
		for(j = 2; j <= (i / 2); j++)
		{
			if(i % j == 0)
			{
				flag++;
				break;
			}
		}
		// Printing the number if it's a prime number
		if(flag == 0)
		{
			printf("%d ", i);
			fflush(stdin);
			fflush(stdout);
		}
		// Returning the flag to zero for the next iteration
		flag = 0;
	}
}

void main()
{
	int first_number, second_number;

	// Asking the user to enter the 2 numbers
	printf("Please enter the two numbers: ");
	fflush(stdin);
	fflush(stdout);

	// Entering the 2 numbers
	scanf("%d %d", &first_number, &second_number);

	// Calling the function
	prime_number(first_number, second_number);
}

