#include <stdlib.h>
#include <stdio.h>

#include <time.h>

/* more headers goes there */

/**
 * main - Computes the last digit of a random number,
 * Return: 0 always
 */

/* betty style doc for function main goes there */

int main(void)

{

	int n;
	int result;

	srand(time(0));

	n = rand() - RAND_MAX / 2;

		/* your code goes there */
	result = n % 10;

	if (result > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, result);
	else if (result == 0)
		printf("Last digit of %d is %d and is 0\n", n, result);
	else if (result < 6 && result > 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, result);
	
	return (0);

}
