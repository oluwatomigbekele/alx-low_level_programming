#include "main.h"
/**
* print_square - function that prints straight line
* @size: integer passed
*/
void print_square(int size)
{
	if (size > 0)
	{
		int i;

		for (i = 0; i < n; i++)
		{
			while (size)
			{
				_putchar(35);
				size--;
			}
			_putchar('\n');
		}
	}
	_putchar('\n');
}
