#include "main.h"

/**
*swap_int - swaps the values of two integers
*@a: value to evaluate
*@b: value to evaluate.
*Return: No return value
*/
void swap_int(int *a, int *b)
{

	int t = *a;
	*a = *b;
	*b = t;
}
