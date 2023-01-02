#include "main.h"

/**
 * print_last_digit - prints the last digit of you code,
 * @n: the digit input,
 * Return: last digit of n
 */

int print_last_digit(int n)
{
	int result;
	result = (n % 10);

	if (result < 0)
		result = (result * -1);

	_putchar(result + '0');

	return (result);
}
