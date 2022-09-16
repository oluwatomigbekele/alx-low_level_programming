#include "main.h"
/**
* print_diagonal - function that prints straight line
* @n: integer passed
*/
void print_diagonal(int n)
{
	int i, k;

	if (n > 0)
	{
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
		_putchar('\n');
	}
	_putchar('\n');
}
