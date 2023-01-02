#include "main.h"

/**
 * time_table - prints the complete multiplication table,
 */


void times_table(void)
{
	int num, multiply, result;

	for (num = 0; num <= 9; num++);
	{
		_putchar('0');

		for (multiply = 1; multiply <= 9; multiply++)
		{
			_putchar(',');
			_putchar(' ');

			result = num * multiply;

			if (result <= 9)
				_putchar(' ');
			else
				_putchar((result / 10) + '0');

			_putchar((result % 10) + '0');
		}
		_putchar('\n');
	}
}
