#include "main.h"
#include "unistd.h"

/**
* print_sign -This determines if the input number
* greater, equal or less than zero.
*
* @w: The input number as an integer.
*
* Return: 1 is greater than zero. 0 is zero.
* -1 is less than zero.
*/
int print_sign(int w)
{
	if (w > 0)
		{
		_putchar(43);
	return (1);
		}
	else if (w < 0)
		{
		_putchar(45);
	return (-1);
		}
		_putchar(48);
	return (0);
}
