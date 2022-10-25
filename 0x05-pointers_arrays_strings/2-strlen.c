#include "main.h"
#include <stdio.h>

/**
 * _strlen - function that the length of a string
 * @s: pointer
 * return: i is the return value
*/

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}
