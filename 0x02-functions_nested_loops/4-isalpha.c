#include "main.h"
#include "unistd.h"

/**
* _isalpha - Shows 1 if the input is c
* letter Another cases, shows 0
*
* @alphab: The character in ASCII code
*
* Return: 1 for letters. Returns 0 otherwise
*/
int _isalpha(int alphab)
{
	if ((alphab >= 97 && alphab <= 122) || (alphab >= 65 && alphab <= 90))
	{
		return (1);
	}
	return (0);
}
