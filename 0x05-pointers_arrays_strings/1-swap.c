#include "main.h"
#include <stdio.h>

/**
 * swap_int - function that swaps two integers
 * @a: the swapped value of the pointer
 * @b: the new assigned value of pointer
 * int c: pointer address of the new pointer value
 * return: void
*/

void swap_int(int *a, int *b)
{
	int c = *a
	*a = *b;
	*b = c;
}
