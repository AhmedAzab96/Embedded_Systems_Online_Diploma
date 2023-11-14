/*
 * Printing_sentence.c
 *
 *  Created on: Nov 14, 2023
 *      Author: Ahmed
 */

#include "stdio.h"

void main()
{
	char my_character;
	printf("Enter a character: ");

	// Removing any remaining characters in the input buffer after previous input operations
	fflush(stdin);

	// Ensuring that any buffered output data is written to the output device immediately
	fflush(stdout);

	// Reading the values of a character
	scanf("%c", &my_character);

	printf("ASCII value of %c = %d", my_character, my_character);

}

