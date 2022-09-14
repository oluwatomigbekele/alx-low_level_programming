#include "main.h"
#include "unistd.h"

/*
* main - prints _putchar
*
* Return - Always 0 success
*/
int  main(void)
{
	char text[8]="_putchar";
	int ite=0;
	for (ite=0;ite<9;ite++)
	{
		_putchar(text[ite]);
	}
	_putchar('\n');
	return (0);
}
