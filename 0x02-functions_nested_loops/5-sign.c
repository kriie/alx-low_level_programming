#include "main.h"

/**
 * print_sign - This program prints the sign of the number input,
 * @n: The input to be given and its sign to be printed,
 * Return: 1 if positive, 0 if zero otherwise -1 if negative
 */

int print_sign(int  n)
{
	if (n == -n)
	{
		_putchar('-');
		return (-1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('+');
		return (1);
	}
}
