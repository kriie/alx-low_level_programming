#include "main.h"

/**
 * _islower - checks program if character is a lower case,
 * @c: The character is to be checked,
 * Return: 1 if character is a lower case otherwise return 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
