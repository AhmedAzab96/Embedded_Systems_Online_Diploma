/*
 * Printing_sentence.c
 *
 *  Created on: Nov 14, 2023
 *      Author: Ahmed
 */

#include "stdio.h"

void main()
{
	int my_integer;
	printf("Enter an integer: ");

	// Removing any remaining characters in the input buffer after previous input operations
	fflush(stdin);

	// Ensuring that any buffered output data is written to the output device immediately
	fflush(stdout);

	// Reading the value of the integer
	scanf("%d", &my_integer);

	printf("You entered: %d", my_integer);

}

