/*
 * EX5_circle_area_using_macros.c
 *
 *  Created on: Jan 9, 2024
 *      Author: ahmed
 */

// This program takes radius of a circle and prints the circle's area using macros
#include"stdio.h"

// Definition of macros
#define pi 3.14
#define area(r)(pi*(r)*(r))

void main()
{
	float radius, circle_area;

	// Asking user to enter the radius
	printf("Please enter the radius: ");
	fflush(stdin);
	fflush(stdout);

	// Getting radius from the user
	scanf("%f", &radius);

	// Calculating the area
	circle_area = area(radius);

	// Printing the area
	printf("Circle's area = %.2f", circle_area);
	fflush(stdin);
	fflush(stdout);
}

