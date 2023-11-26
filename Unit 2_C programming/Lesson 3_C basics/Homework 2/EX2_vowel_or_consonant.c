/*
 * EX2_vowel_consonant.c
 *
 *  Created on: Nov 15, 2023
 *      Author: Ahmed
 */

#include "stdio.h"

void main()
{
	char letter;

	printf("Enter an alphabet: ");

	// Removing any remaining characters in the input buffer after previous input operations
	fflush(stdin);

	// Ensuring that any buffered output data is written to the output device immediately
	fflush(stdout);

	scanf("%c", &letter);

	fflush(stdin);
	fflush(stdout);

	// Checking if the letter is vowel or consonant

	if (letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u')
	{
		printf("%c is a vowel.", letter);
	}

    else if (letter == 'A' || letter == 'E' || letter == 'I' || letter == 'O' || letter == 'U')
    {
    	printf("%c is a vowel.", letter);
    }

	else
	{
		printf("%c is consonant.", letter);
	}




}

