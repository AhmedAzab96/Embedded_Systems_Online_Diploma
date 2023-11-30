/*
 * EX1_frequency_character_in_string.c
 *
 *  Created on: Nov 30, 2023
 *      Author: ahmed
 */

#include "stdio.h"

void main()

{

	char my_string[200], my_character, counter = 0, i;

	// Asking the user the enter the string
	printf("Enter a string: ");
	fflush(stdin);
	fflush(stdout);

	// The user enters the string
	gets(my_string);

	// Asking the user to enter the string
	printf("Enter character to find frequency: ");
    fflush(stdin);
    fflush(stdout);

    // The user enters the character that he wants to check its frequency
    scanf("%c", &my_character);

    /*
     * Comparing the character to the string to get the frequency and to exit when the
     * string ends
     */

    for (i = 0; i < sizeof(my_string); i++)
    {
    	if(my_string[i] == my_character)
    	{
    		counter++;
    	}
    	else if (my_string[i] == '\0')
		{
    		break;
		}

    }

    // Printing the frequency of the character
    printf("Frequency of %c = %d", my_character, counter);
    fflush(stdin);
    fflush(stdout);

}
