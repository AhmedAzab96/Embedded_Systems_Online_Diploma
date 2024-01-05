
// Program to reverse words of a string

#include "stdio.h"
#include "string.h"

// Function to reverse and print words of string
void reverse_string(char arr[])
{
	char new_arr[100];
	unsigned char i, j = 0;

	for(i = 0; i < strlen(arr); i++)
	{
		// Checking for the space between the 2 words
		if(arr[i] == ' ')
		{
			i++;

			// Writing the second name at the start of the new string
			while(arr[i] != 0)
			{
				new_arr[j] = arr[i];
				i++;
				j++;
			}

			// Returning i to zero to put the first word in the new array
			i = 0;
			new_arr[j] = ' ';
			j++;
			break;
		}
	}

	// Checking that looping is on the first word of the string
	while(arr[i] != ' ')
	{
		new_arr[j] = arr[i];
		i++;
		j++;
	}

	// Putting zero at the end of the new string
	new_arr[j] = 0;

	// Printing the string
	printf("%s", new_arr);
}

void main()
{
	char my_string[100];

	// Asking user to enter the string
	printf("Enter a string: ");
	fflush(stdin);
	fflush(stdout);

	// Getting string from the user
	gets(my_string);

	// Calling the function to print the reversed string
	reverse_string(my_string);
}

