#include <main.h>

/*
 * _isdigit - checks for digits
 *
 * @c: the argument to check
 *
 * Return: 1 for true and 0 otherwise
 *
 */

int _isdigit(int c)
{
	for (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
