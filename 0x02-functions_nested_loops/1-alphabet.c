#include "main.h"

/**
 * main - creates lowercase alphabet
 */

void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter < 'z'; letter++)
		_putchar(letter);

	_putchar('\n');	
}
