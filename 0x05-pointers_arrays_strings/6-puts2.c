#include"main.h"

/**
 * puts2 - prints every character of string
 * @str: string parameter input
 * Return: No value
*/

void puts2(char *str)
{
	int j;

	for (j = 0; str[j] != '\0'; ++j)
	{
		if (j % 2 == 0)
			_putchar(str[j]);
	}
	_putchar('\n');
}
