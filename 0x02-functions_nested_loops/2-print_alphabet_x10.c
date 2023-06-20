#include "main.h"

/**
  * print_alphabet_x10 - Entry point
  * Return: 0
*/

void print_alphabet_x10(void)
{
	char c;
	int num;

	for (num = 0; num < 10; num++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
	_putchar('\n');
	}
}
