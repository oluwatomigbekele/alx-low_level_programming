#include "main.h"
/**
* print_numbers - function that prints numbers
* Description: print numbers from 1 to 10
* Return: mul.
*/
void print_numbers(void)
{
	char num;

	for (num = '0' ; num <= '9' ; num++)
	{
		_putchar(num);
	}
	_putchar('\n');
}
