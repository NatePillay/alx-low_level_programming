#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * Description:  main - display the last digit of a number and test condition
 *
 * Return: 0 and the value of the last digit
 */

int main(void)
{
	int n;
	int lastDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastDigit = n % 10;
	if (I > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, I);
	}
	else if (I == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, I);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, I);
	}
	return (0);
}
