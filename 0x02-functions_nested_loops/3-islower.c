#include "main.h"
#include "unistd.h"

/**
* _islower - Shows 1 if the input is a
* lowercase character. other cases, shows 0
*
* @c: The character in ASCII code
*
* Return: 1 for lowercase. 0 for the rest.
*/

int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}
	return (0);
}
