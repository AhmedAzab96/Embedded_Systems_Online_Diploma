/*
 * EX6_size_of_structure_and_union.c
 *
 *  Created on: Jan 9, 2024
 *      Author: ahmed
 */

// This program prints the sizes of a union and a structure respectively

#include"stdio.h"

// Union and variable definitions
union job
{
	char name[32];
	float salary;
	int worker_no;
}u;

// Structure and variable definitions
struct job1
{
	char name[32];
	float salary;
	int worker_no;
}s;

void main()
{
	// Printing the size of union
	printf("size of union = %d", sizeof(u));
	fflush(stdin);
	fflush(stdout);

	// Printing the size of structure
	printf("\nsize of structure = %d", sizeof(s));
	fflush(stdin);
	fflush(stdout);
}
