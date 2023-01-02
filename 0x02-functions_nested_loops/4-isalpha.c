#include "main.h"

/**
 * _isalpha - checks program to know if it is an alphabet,
 * Return: 1 if is otherwise return 0
 */

int _isalpha(int c)
{
	if (c >= 'a' || c >= 'A' && c <= 'z' || c <= 'Z')
		return (1);
	else
		return (0);
}
