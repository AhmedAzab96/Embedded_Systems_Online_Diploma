/*
 * EX4_inserting_element_in_array.c
 *
 *  Created on: Nov 29, 2023
 *      Author: ahmed
 */

#include"stdio.h"

void main()
{
	int i, no_elements, inserted_element, element_location;

	printf("Enter no of elements: ");
	fflush(stdin);
	fflush(stdout);

	scanf("%d", &no_elements);

	int array[30];

	for(i = 0; i < no_elements; i++)
	{
		scanf("%d", &array[i]);
	}

	printf("\nEnter the element to be inserted: ");
	fflush(stdin);
	fflush(stdout);

	scanf("%d", &inserted_element);

	printf("Enter the location: ");
	fflush(stdin);
	fflush(stdout);

	scanf("%d", &element_location);

	for(i = no_elements; i >= element_location; i--)
		{
				array[i + 1] = array[i];
		}


	array[element_location] = inserted_element;

	for(i = 0; i < no_elements + 1; i++)
		{
			printf("%d ", array[i]);
			fflush(stdin);
			fflush(stdout);
		}
}

