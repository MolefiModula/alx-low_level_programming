#include "main.h"

/**
 * clear_bit - sets value to 0, of a given bit
 * @n: pointer to the num to change
 * @index: index of the bit to clear
 *
 * Return: 1 on success, -1 otherwise
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = (~(1UL << index) & *n);
	return (1);
}
