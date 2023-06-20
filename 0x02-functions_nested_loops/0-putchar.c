#include "main.h"
/**
 * main- prints _putchar, followed by new line
 * Return: Always 0 (Success)
*/

int main(void)
{
	char abc[] = "_putchar";

	int d;

	for (d = 0; d < 8; d++)
	{
		_putchar(abc[d]);
	}
	_putchar('\n');

	return (0);
}
