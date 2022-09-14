#include "main.h"
#include "unistd.h"

/**
 * _islower - checks lowercase characters
 *
 *Description: checks lowercase characters
 *
 * return: 0 (success)
 */

int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}
	return (0);
}
