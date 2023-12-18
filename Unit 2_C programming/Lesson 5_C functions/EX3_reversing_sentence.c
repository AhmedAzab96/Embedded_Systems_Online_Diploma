/*
 * EX3_reversing_sentence.c
 *
 *  Created on: Dec 18, 2023
 *      Author: ahmed
 */


#include "stdio.h"

// Function used to convert a sentence
void convert_sentence()
{
	char character;

	// Getting string's characters from user
	scanf("%c", &character);

	// Function is calling itself as long as there is no newline character
	if(character != '\n')
	{
		convert_sentence();

		printf("%c", character);
		fflush(stdin);
		fflush(stdout);
	}
}

void main()
{
	// Asking the user to enter sentence
	printf("Enter a sentence: ");
	fflush(stdin);
	fflush(stdout);

	// Calling of the convert_sentence function
	convert_sentence();
}
