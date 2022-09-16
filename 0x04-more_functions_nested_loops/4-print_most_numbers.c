#include "main.h"
/**
* print_numbers - function that prints numbers
* Description: print numbers from 0 to 9
* Return: mul.
*/
void print_numbers(void)
{
	char num;

	for (num = '0' ; num <= '9' ; num++)
	{
		if (num != '2' && num != '4')
		{
			_putchar(num);
		}
	}
	_putchar('\n');
}
