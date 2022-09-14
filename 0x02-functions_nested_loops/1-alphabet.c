#include "main.h"
#include "unistd.h"

/**
 * print_alphabet - prints alphabeth
 *
 * return: 0 (success)
 */
void print_alphabet(void)
{
	char alpha[26] = "abcdefghijklmnopqrstuvwxyz";
	int l = 0;

	for (l = 0; l < 26; l++)
	{
		_putchar(alpha[l]);
	}
	_putchar('\n');
}
