#include "main.h"
/**
* more_numbers - function that prints numbers
* Description: print numbers from 1 to 14
* Return: mul.
*/
void more_numbers(void)
{
	char num;
	int count = 0;

	while (count < 10)
	{
		for (num = '0' ; num <= '14' ; num++)
		{
			_putchar(num);
		}
		count++;
		_putchar('\n');

	}
	_putchar('\n');
}
