#include "main.h"
#include "unistd.h"

/**
 * print_alphabet_x10 - prints alphabeth
 *
 * return: 0 (success)
 */
void print_alphabet_x10(void)
{
	char alpha[26] = "abcdefghijklmnopqrstuvwxyz";
	int l, i = 0;

	for (l = 0; l < 10; l++)
	{
		for (i = 0; i < 26; i++)
		{
			_putchar(alpha[i]);
		}
		_putchar('\n');
	}
}
