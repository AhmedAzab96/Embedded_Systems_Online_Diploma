/*
 * EX2_adding_two_distances.c
 *
 *  Created on: Jan 9, 2024
 *      Author: ahmed
 */


/* This program takes 2 distances both in feet and inches from the user and adds them then
 * prints them on the screen
 */

#include"stdio.h"

void main()
{
	// Creating structure that contains feet and inches members
	struct Sdistances
	{
		int feet;
		float inches;
	};

	struct Sdistances distance[2], sum;
	int i;

	// Looping on the structure array
	for (i = 0; i < 2; i++)
	{
		printf("Enter information for distance %d\n", i + 1);
		fflush(stdin);
		fflush(stdout);

		// Asking the user to enter length in feet
		printf("Enter feet: ");
		fflush(stdin);
		fflush(stdout);

		// Getting length in feet from user
		scanf("%d", &distance[i].feet);

		// Asking the user to enter length in inches
		printf("Enter inch: ");
		fflush(stdin);
		fflush(stdout);

		// Getting length in inches from user
		scanf("%f", &distance[i].inches);

		printf("\n");
		fflush(stdin);
		fflush(stdout);
	}

	// Adding feet with feet and inches with inches
	sum.feet = distance[0].feet + distance[1].feet;
	sum.inches = distance[0].inches + distance[1].inches;

	// Converting feet to inches if their sum is greater than 12
	while(sum.inches >= 12)
	{
		sum.inches -= 12;
		sum.feet++;
	}

	// Printing the result of the sum
	printf("Sum of distances = \"%d\'%.1f\"", sum.feet, sum.inches);
}
