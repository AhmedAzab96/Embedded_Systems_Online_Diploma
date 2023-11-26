/*
 * EX5_character_is_alphabet.c
 *
 *  Created on: Nov 15, 2023
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

	scanf("%c", &my_character);

	fflush(stdin);
	fflush(stdout);

	/*
	 * Checking whether the character is alphabetical or not by comparing the
	 * my_character to the ASCII of the capital and small letters
	 */

	if (my_character >= 97 && my_character <= 122)
	{
		printf("%c is an alphabet", my_character);
	}
	else if (my_character >= 65 && my_character <= 90)
	{
		printf("%c is an alphabet", my_character);
	}
	else
	{
		printf("%c is not an alphabet", my_character);
	}
}



