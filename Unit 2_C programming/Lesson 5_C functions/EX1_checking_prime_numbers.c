/*
 * EX1_checking_prime_numbers.c
 *
 *  Created on: Dec 18, 2023
 *      Author: ahmed
 */

#include"stdio.h"

/* Creating a function to get 2 numbers and prints the prime numbers in the interval
 * between them
 */
void prime_numbers(int number1, int number2)
{
	int i, j, prime_number = 0;

	// Looping on each number in the interval
	for(i = number1 + 1; i < number2; i++)

	{	// Looping on the number to know if it's prime or not
		for(j = 2; j < (i / 2); j++)
		{
			if(i % j == 0)
			{
				prime_number = 1;
				break;
			}
		}

		// Printing the number in case it's prime
		if(prime_number == 0)
		{
			printf("%d ", i);
		}

		// Resetting the variable to 0 in preparation for the next loop
		else
		{
			prime_number = 0;
		}
	}
}

void main()
{
	int num1, num2;

	// Printing a message to the user
	printf("Enter two numbers (intervals)");
	fflush(stdin);
	fflush(stdout);

	// Entering the 2 numbers of the interval
	scanf("%d %d", &num1, &num2);

	printf("Prime numbers between %d and %d are: ", num1, num2);
	fflush(stdin);
	fflush(stdout);

	// Calling prime_numbers function to print the prime numbers
	prime_numbers(num1, num2);

}
