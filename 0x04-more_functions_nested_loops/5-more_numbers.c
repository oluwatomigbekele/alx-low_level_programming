#include "main.h"
/**
* more_numbers - function that prints numbers
*/
void more_numbers(void)
{
	int num;
	char c;

	for (num = 0; num < 10; num++)
	{
		for (c = 0; c < 15; c++)
		{
			if (c > 9)
			_putchar((c / 10) + '0');
			_putchar((c % 10) + '0');
		}
		_putchar('\n');
	}
}
