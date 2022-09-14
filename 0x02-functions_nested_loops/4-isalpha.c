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
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	return (0);
}
