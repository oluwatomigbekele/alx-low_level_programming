#include <stdio.h>

/**
* main - prints alphabet in lowercase, uppercase, followed by a new line
*
* Return: Always 0 (Success)
*/
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	putchar(c);
	for (c = 'A'; c <= 'Z'; c++)
	putchar(c);
	putchar('\n');

	return (0);
}
