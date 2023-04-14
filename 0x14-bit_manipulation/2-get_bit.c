#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * get_bit - a function that returns the value of a bit at a given index.
 * @n: number
 * @index: index
 *
 * Return: the value of the bit at index, -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= 64)
		return (-1);

	n = n >> index;

	if ((n & 1 ) == 1 )
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
