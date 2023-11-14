/*
 * main.c
 *
 *  Created on: Oct 19, 2023
 *      Author: ahmed
 */
#include "stdio.h"
void main()
{
	int no_students, i;
	float degree, sum = 0;
	printf("Enter the numbers of the students: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d", &no_students);
	for(i = 1; i <= no_students; i++)
	{
		printf("Enter the degree of student number %d: ", i);
		fflush(stdin);
		fflush(stdout);
		scanf("%f", &degree);
		fflush(stdin);
		fflush(stdout);
		sum += degree;
		printf("\n");
		fflush(stdin);
		fflush(stdout);
	}
	printf("The average degrees of the students is: %f", sum/no_students);
	fflush(stdin);
	fflush(stdout);

}


