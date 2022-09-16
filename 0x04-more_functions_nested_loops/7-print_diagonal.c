#include "main.h"
/**
* print_line - function that prints straight line
* @n: integer passed
*/
void print_line(int n)
{
	int i, k;

	if (n <= 0)
		_putchar('\n');
	for (i = 0; i < n; i++)
	{
		for (k = 0; k <= i; k++)
		{
			if (i == k)
			{
				_putchar('\\');
				_putchar('\n');
			}
			_putchar(' ');
		}
	}
}
