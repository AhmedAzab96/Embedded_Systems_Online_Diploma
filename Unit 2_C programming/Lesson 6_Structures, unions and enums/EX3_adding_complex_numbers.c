/*
 * EX3_adding_complex_numbers.c
 *
 *  Created on: Jan 9, 2024
 *      Author: ahmed
 */

// This program takes 2 complex numbers from user then adds them then they are printed

#include"stdio.h"

// Creating structure for complex numbers
struct Scomplex
{
	float real;
	float imaginary;
};

// Function to add the complex numbers
struct Scomplex sum_of_numbers(struct Scomplex num1, struct Scomplex num2)
{
	struct Scomplex result;

	// Adding real numbers together and adding imaginary numbers together
	result.real = num1.real + num2.real;
	result.imaginary = num1.imaginary + num2.imaginary;
	return result;
}

void main()
{
	struct Scomplex number_1, number_2, sum;

	// Asking the user to enter the first complex number
	printf("For 1st complex number\nEnter real and imaginary respectively: ");
	fflush(stdin);
	fflush(stdout);

	// Getting numbers from the user
	scanf("%f", &number_1.real);
	scanf("%f", &number_1.imaginary);

	// Asking the user to enter the second complex number
	printf("For 2nd complex number\nEnter real and imaginary respectively: ");
	fflush(stdin);
	fflush(stdout);

	// Getting numbers from the user
	scanf("%f", &number_2.real);
	scanf("%f", &number_2.imaginary);

	// Calling sum_of_numbers function and storing the result in sum
	sum = sum_of_numbers(number_1, number_2);

	// Printing the result
	printf("Sum = %.1f+%.1fi", sum.real, sum.imaginary);
	fflush(stdin);
	fflush(stdout);
}
