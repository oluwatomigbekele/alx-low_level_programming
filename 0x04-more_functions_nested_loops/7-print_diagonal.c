#include "main.h"
/**
* print_diagonal - function that prints straight line
* @n: integer passed
*/
void print_diagonal(int n)
{
	int k, j, i;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (k = 0; k < n; k++)
		{
			i = k - 1;

			for (j = 0; j <= i; j++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
}
