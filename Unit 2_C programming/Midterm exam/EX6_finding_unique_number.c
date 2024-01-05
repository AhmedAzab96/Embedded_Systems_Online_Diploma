
// Program to find unique number from pairs of numbers in an array

#include "stdio.h"

// Function to find the unique number
int unique_number(int arr[], int array_size)
{
	int i, result = 0;

	/* Looping on all array's elements and doing bitwise XOR with result that equals zero
	 * initially so that at the end the result will equal the enique number */
	for(i = 0; i < array_size; i++)
	{
		result ^= arr[i];
	}
	return result;
}

void main()
{
	int array[100],size, i;

	// Asking the user to enter the size of the array
	printf("Please enter the size of the array: ");
	fflush(stdin);
	fflush(stdout);

	// Getting the array size from the user
	scanf("%d", &size);

	// Asking the user to enter the values of the array
	printf("Please enter the values of the array: ");
	fflush(stdin);
	fflush(stdout);

	// Getting the values of the array
	for(i = 0; i < size; i++)
	{
		scanf("%d", &array[i]);
	}

	// Printing the function's result
	printf("Output is: %d", unique_number(array, size));
	fflush(stdin);
	fflush(stdout);
}

