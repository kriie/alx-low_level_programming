#include <stdio.h>

/**
 * main - computes numbers with putchar function
 * Return: 0 always
 */

int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');

	putchar('\n');

	return (0);
}
