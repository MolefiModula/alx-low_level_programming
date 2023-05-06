#include "main.h"

/**
 * binary_to_uint - converts a binary num to unsigned int
 * @b: str containing the binary num
 *
 * Return: converted num
 */
unsigned int binary_to_uint(const char *b)
{
	int j;

	unsigned int dec val = 0;

	if (!b)
		return (0);
	for (j = 0; b[j]; j++)
	{
		if (b[j] < '0' || b[j] > '1')
			return (0);
		dec_val = 2 * dec_val + (b[j] - '0');
	}
}
