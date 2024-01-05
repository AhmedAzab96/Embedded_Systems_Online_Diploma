
// A program to add numbers without using loops

#include "stdio.h"

// Function to add the numbers
int add(int num)
{
	// Adding number to the number less than it by one as long as it's greater than zero
	if(num > 0)
	{
		return num + add(num - 1);
	}

	// In case the nubmer is zero return one
	return 1;
}

void main()
{
	int number;

	// asking the user to enter a number
	printf("Please enter a number: ");
	fflush(stdin);
	fflush(stdout);

	// Getting a number from the user
	scanf("%d", &number);

	// Printing the result
	printf("%d", add(number));
	fflush(stdin);
	fflush(stdout);
}
