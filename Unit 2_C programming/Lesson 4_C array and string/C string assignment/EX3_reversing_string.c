/*
 * EX3_reversing_string.c
 *
 *  Created on: Nov 30, 2023
 *      Author: ahmed
 */

#include "stdio.h"
#include "string.h"

void main()

{
	char i, j = 0, my_string[200], my_string_2[200];

	// Asking the user to enter a string
	printf("Enter the string: ");
	fflush(stdin);
	fflush(stdout);

	// Getting string from the user
	gets(my_string);

	// Looping on the string to reverse it and put it in another string
	for(i = strlen(my_string) - 1; i >= 0; i--)
	{
		my_string_2[j] = my_string[i];
		j++;
	}

	// Printing the reversed string
	printf("Reverse string is: %s", my_string_2);
	fflush(stdin);
	fflush(stdout);
}
