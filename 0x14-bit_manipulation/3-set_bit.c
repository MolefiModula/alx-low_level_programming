#include "main.h"

/*
 * set_bit - sets a bit to 1, at a given index
 * @n: pointer to the num to change
 * @index: index of the bit to set to 1
 *
 * Return: 1 on success, -1 otherwise
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = ((1UL << index) | *n);
	return (1);
}
