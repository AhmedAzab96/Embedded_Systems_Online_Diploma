/*
 * EX1_student_information.c
 *
 *  Created on: Jan 9, 2024
 *      Author: ahmed
 */


/* This program creates a structure for students data then let's user enter the data then
 * it can be printed
 */
#include "stdio.h"
#include "string.h"

void main()
{
	// Creating student structure
	struct Sstudent
	{
		char name[50];
		int roll;
		float marks;
	};

	struct Sstudent student_data;

	printf("Enter information of students\n");
	fflush (stdin);
	fflush(stdout);

	// Asking user to enter student's name
	printf("Please enter student name: ");
	fflush (stdin);
	fflush(stdout);

	// Getting the name from the user
	gets(student_data.name);

	// Asking the user to enter studen's roll
	printf("Please enter student roll: ");
	fflush (stdin);
	fflush(stdout);

	// Getting the student roll from the user
	scanf("%d", &student_data.roll);

	// Asking the user to enter student's marks
	printf("Please enter student marks: ");
	fflush (stdin);
	fflush(stdout);

	// Getting marks from the user
	scanf("%f", &student_data.marks);

	// Printing the student's data
	printf("\nDisplay information\nName: %s\nRoll: %d\nMarks: %.2f", student_data.name, student_data.roll, student_data.marks);
	fflush (stdin);
	fflush(stdout);
}
