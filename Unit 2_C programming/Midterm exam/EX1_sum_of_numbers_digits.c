

#include "stdio.h"

int sum_of_numbers_digits(int num)
{
	int sum = 0, rem = 0;

	while(num != 0)
		{
			rem = num % 10;
			sum += rem;
			num /= 10;
		}
	return sum;
}

void main()
{
	int number;

	printf("Enter the number: ");
	fflush(stdin);
	fflush(stdout);

	scanf("%d", &number);

	printf("Input: %d -> Output: %d", number, sum_of_numbers_digits(number));
	fflush(stdin);
	fflush(stdout);
}
