#include "main.h"
/**
 *puts_half - second half value.
 *@str: value to evaluate.
 *Return: No value
 */
void puts_half(char *str)
{
	int length = 0;
	char *y = str;
	int n;

	while (*y != '\0')
	{
		y++;
		length++;
	}
	if (length % 2 == 0)
	{
		n = length / 2;
	}
	else
	{
		n = (length + 1) / 2;
	}
	for ( ; n < length ; n++)
	{
		_putchar(str[n]);
	}
	_putchar('\n');
}
