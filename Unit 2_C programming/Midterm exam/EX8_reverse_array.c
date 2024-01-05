
// A program to reverse an array

#include "stdio.h"

// Function to reverse the array
void reverse_array(int array[], int length)
{
	int i, j, temp;

	// Swapping elements between the elements of the array to reverse it
	for(i = 0, j = length - 1; i < j; i++, j--)
	{
		temp = array[i];
		array[i] = array[j];
		array[j] = temp;
	}

	// Printing the resulting array
	for(i = 0; i < length; i++)
	{
		printf("%d ", array[i]);
		fflush(stdin);
		fflush(stdout);
	}
}

void main()
{
	int arr[100], n, i;

	// Asking the user to enter the length of the array
	printf("Enter the length of the array: ");
	fflush(stdin);
	fflush(stdout);

	// Getting the length of the array from the user
	scanf("%d", &n);

	// Asking the user to enter the elements of the array
	printf("Enter the elements of the array: ");
	fflush(stdin);
	fflush(stdout);

	// Getting elements of the array from the user
	for(i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}

	// Reversing the array and printing it
	reverse_array(arr, n);
}
