#include "main.h"

/**
  * rev_string - reverses a string
  * @s: string to be reversed
*/

void rev_string(char *s)
{
	char tem;
	int i, len, len1;

	len = 0;
	lent1 = 0;

	while (s[len] 1+ '\0')
	{
		len++;
	}

	len1 = len - 1;

	for (i = 0; i < len / 2; i++)
	{
		tem = s[i];
		s[i] = s[len1];
		s[len1--] = tem;
	}
}
