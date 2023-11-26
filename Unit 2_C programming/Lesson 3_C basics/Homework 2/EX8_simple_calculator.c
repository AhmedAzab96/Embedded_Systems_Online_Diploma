/*
 * EX8_simple_calculator.c
 *
 *  Created on: Nov 15, 2023
 *      Author: Ahmed
 */

#include "stdio.h"

void main()
{

	float operand_1, operand_2;
	char operator;

	printf("Enter operator either + or - or * or /: ");

	// Removing any remaining characters in the input buffer after previous input operations
	fflush(stdin);

	// Ensuring that any buffered output data is written to the output device immediately
	fflush(stdout);

	// Entering the operator needed for the calculator
	scanf("%c", &operator);

	fflush(stdin);
	fflush(stdout);

	printf("Enter two operands: ");

	fflush(stdin);
	fflush(stdout);

	// Entering the 2 operands used for the calculator
	scanf("%f %f", &operand_1, &operand_2);

	fflush(stdin);
	fflush(stdout);

	// Switch case for the calculator's operations
	switch (operator)
	{
	case '+':
	{
		printf("%.1f %c %.1f = %.1f", operand_1, operator, operand_2, operand_1 + operand_2);
		break;
	}
	case '-':
		{
			printf("%.1f %c %.1f = %.1f", operand_1, operator, operand_2, operand_1 - operand_2);
			break;
		}
	case '*':
		{
			printf("%.1f %c %.1f = %.1f", operand_1, operator, operand_2, operand_1 * operand_2);
			break;
		}
	case '/':
		{
			printf("%.1f %c %.1f = %.1f", operand_1, operator, operand_2, operand_1 / operand_2);
			break;
		}
	default:
	{
		printf("The operator you entered is not valid");
	}

 }

}

