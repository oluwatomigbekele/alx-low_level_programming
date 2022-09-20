#include "main.h"
/**
 * rev_string - to reverse a string
 * @s: string parameter input
 * Return: No value
*/

void rev_string(char *s)
{
	int length = 0;
	int l = 0;
	char *y = s;
	int e = 0;
	int x;
	char n;

	while (*y != '\0')
	{
		y++;
		length++;
	}
	l = length - 1;
	for ( ; e < ((l / 2) + 1) ; e++)
	{
		x = (l - e);
		n = s[e];
		s[e] = s[x];
		s[x] = n;
	}
}
