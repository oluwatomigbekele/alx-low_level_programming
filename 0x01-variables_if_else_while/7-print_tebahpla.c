#include <stdio.h>

/**
* main - Print the alphabet in lowercase letters in reverse
*
* Return: Always 0 (Success)
*/
int main(void)
{
	char alphab;

	for (alphab = 'z'; alphab >= 'a'; alphab--)
	putchar(alphab);

	putchar('\n');

	return (0);
}
