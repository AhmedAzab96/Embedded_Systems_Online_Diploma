
// Program used for calculating the maximum number of ones between 2 zeros

#include "stdio.h"

// Function used to get the max number of ones between 2 zeros
int number_between_zeros(int num)
{
	unsigned int i, j, counter = 0, max = 0;

	for(i = 0; i < 32; i++)
	{
		// Checking for the first zero in the number
		if((1 & (num >> i)) == 0)
		{
			j = i + 1;

			// Counting for ones after the zero
			while((1 & (num >> j)) != 0)
			{
				counter++;
				j++;
			}

			// Storing the max number of ones
			if(counter > max)
			{
				max = counter;
			}

			// Clearing the counter
			counter = 0;
		}
	}
	return max;
}

void main()
{
	int number;

	// Asking user to enter a number
	printf("Enter a number: ");
	fflush(stdin);
	fflush(stdout);

	// Getting the number from the user
	scanf("%d", &number);

	// Printing the max number of ones
	printf("%d", number_between_zeros(number));
}

