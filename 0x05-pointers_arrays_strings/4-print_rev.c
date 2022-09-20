#include "main.h"
/**
 * print_rev - prints a string in reverse
 * @s: value
 * Return: (0)
 */
void print_rev(char *s)
{
	int lenth;

	for (lenth = 0; s[lenth] != '\0'; lenth++)
	{
	}
	for (lenth = lenth - 1; lenth >= 0; lenth--)
	{
		_putchar(s[lenth]);
	}
	_putchar('\n');
}
