#include <stdio.h>

/**
 * main - prints lowercase alphabets except q and e,
 * Return: 0 as always
 */

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter != 'e' && letter != 'q')
			putchar(letter);
	}

	putchar('\n);

	return (0);
}
