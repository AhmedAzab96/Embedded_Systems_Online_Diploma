/*
 * EX4_student_information_10_students.c
 *
 *  Created on: Jan 9, 2024
 *      Author: ahmed
 */

// This program takes students' data from user then prints them sequentially

#include "stdio.h"
#include "string.h"

// Structure definition for students' data
struct Sstudent
{
	char name[50];
	int roll;
	float marks;
};

// Function prototype for getting students' data from the user
void Getting_data(struct Sstudent students_info[], int size);

// Function prototype for printing students' data
void print_data(struct Sstudent students_data[], int size);


void main()
{
	struct Sstudent students[10];
	int size = 10;

	// Calling function to get students' data from user
	Getting_data(students, size);

	// Calling function to print students' data
	print_data(students, size);
}

// Function for getting students' data from the user
void Getting_data(struct Sstudent students_info[], int size)
{
	int i;

	// Looping over the 10 students to give their rolls numbers from 1 to 10
	for(i = 0; i < size; i++)
	{
		students_info[i].roll = i + 1;
	}

	// Asking user to enter the students' information
	printf("Enter information of students:\n\n");
	fflush(stdin);
	fflush(stdout);

	for(i = 0; i < size; i++)
	{
		printf("For roll number %d\n", students_info[i].roll);
		fflush(stdin);
		fflush(stdout);

		// Asking user to enter name
		printf("Enter name: ");
		fflush(stdin);
		fflush(stdout);

		// Getting name from the user
		gets(students_info[i].name);

		// Asking user to enter marks
		printf("Enter marks: ");
		fflush(stdin);
		fflush(stdout);

		// Getting marks from the user
		scanf("%f", &students_info[i].marks);

		printf("\n");
		fflush(stdin);
		fflush(stdout);
	}

}

//Function prototype for printing students' data
void print_data(struct Sstudent students_data[], int size)
{
	int i;

	printf("Displaying information of students:\n\n");
	fflush(stdin);
	fflush(stdout);

	// Looping over the 10 students to print their data
	for(i = 0; i < size; i++)
	{
		printf("Information for roll number %d:\n", students_data[i].roll);
		fflush(stdin);
		fflush(stdout);

		// Printing student name
		printf("Name: %s\n", students_data[i].name);
		fflush(stdin);
		fflush(stdout);

		// Printing student marks
		printf("Marks: %.1f\n\n", students_data[i].marks);
		fflush(stdin);
		fflush(stdout);
	}
}

