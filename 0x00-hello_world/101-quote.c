#include <unistd.h>

/**
* main - Entry point
* Description: print quote using write function
* Return: This time return exit code 1 to show error
*/

int main(void)
{
	char kuo[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(1, kuo, 59);
	return (1);
}
