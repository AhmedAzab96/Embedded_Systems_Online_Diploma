/*
 * EX5_search_element_in_array.c
 *
 *  Created on: Nov 29, 2023
 *      Author: ahmed
 */

#include "stdio.h"

void main()
{
	int i, no_elements, scanned_element, flag = 0;

	printf("Enter the number of elements: ");
	fflush(stdin);
	fflush(stdout);

	// Getting the number of elements from user
	scanf("%d", &no_elements);

	int array [no_elements];

	// Filling the array with values from the user
	for(i = 0; i < no_elements; i++)
	{
		scanf("%d", &array[i]);
	}

	printf("Enter the element to be searched: ");
	fflush(stdin);
	fflush(stdout);

	// Getting the scanned element from user
	scanf("%d", &scanned_element);

	// Searching in the array for the element in the array
	for(i = 0; i < no_elements; i++)
	{
		if (scanned_element == array[i])
		{
			printf("Number found at location %d", i + 1);
			fflush(stdin);
			fflush(stdout);
			flag++;
		}

	}
	// Printing a message for the user in case the number wasn't found
	if (flag == 0)
	{
		printf("Number wasn't found.");
		fflush(stdin);
		fflush(stdout);
	}
}
