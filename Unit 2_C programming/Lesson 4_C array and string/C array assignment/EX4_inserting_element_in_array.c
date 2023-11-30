/*
 * EX4_inserting_element_in_array.c
 *
 *  Created on: Nov 30, 2023
 *      Author: ahmed
 */

#include"stdio.h"

void main()
{
	int i, no_elements, inserted_element, element_location;

	// Asking user to enter the number of array elements
	printf("Enter no of elements: ");
	fflush(stdin);
	fflush(stdout);

	scanf("%d", &no_elements);

	// Increasing the array size by 1 in preparation to the inserted element
	no_elements++;

	int array[no_elements];

	// Looping through the array to enter the the numbers
	for(i = 0; i < no_elements - 1; i++)

	{
		printf("Enter number %d: ", i + 1);
	    fflush(stdin);
	    fflush(stdout);

	    scanf("%d", &array[i]);
	}

	// Printing the array
	for(i = 0; i < no_elements - 1; i++)

		{
			printf("%d ", array[i]);
		    fflush(stdin);
		    fflush(stdout);
		}

	// Asking the user to enter the number to be inserted
	printf("\nEnter the element to be inserted: ");
	fflush(stdin);
	fflush(stdout);

	scanf("%d", &inserted_element);

	// Asking user to enter the location of the inserted number in the array
	printf("Enter the location: ");
	fflush(stdin);
	fflush(stdout);

	scanf("%d", &element_location);

	/*Making sure that element will be in the exact location wanted since the array's index
	is less than array's location by 1*/
	element_location--;

	// Shifting the array's numbers to the right to give space for the inserted number
	for(i = no_elements; i >= element_location; i--)
	{
		array[i + 1] = array[i];
	}

	// Inserting the desired number in the array
	array[element_location] = inserted_element;

	// Printing the new array
	for(i = 0; i < no_elements; i++)
	{
		printf("%d ", array[i]);
		fflush(stdin);
		fflush(stdout);
	}
}


