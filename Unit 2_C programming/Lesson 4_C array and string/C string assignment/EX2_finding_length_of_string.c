/*
 * EX2_finding_length_of_string.c
 *
 *  Created on: Nov 30, 2023
 *      Author: ahmed
 */

#include "stdio.h"

void main()

{
	char i = 0, my_string[200];

	// Asking the user to enter the string
	printf("Enter a string: ");
	fflush(stdin);
	fflush(stdout);

	// User entering the string
	gets(my_string);

	// Counting the number of strings as long as the string is ended by 0
	while(my_string[i] != 0)
	{
		i++;
	}

	// Printing the string's length
	printf("\nLength of string: %d", i);
	fflush(stdin);
	fflush(stdout);
}
