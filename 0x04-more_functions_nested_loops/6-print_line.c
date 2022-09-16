#include "main.h"
/**
* print_line - function that prints straight line
* @n: integer passed
*/
void print_line(int n)
{
	if (n > 0)
	{
		while (n)
		{
			_putchar(95);
			n--;
		}
	}
	_putchar('\n');
}
