#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0
 */

unsigned int binary_to_uint(const char *binary_string)
{
	unsigned int result = 0;

	if (b == NULL)
		return 0;

	for(; *binary_string; b++)
	{
		if (binary_string* != '0' && *binary_string != '1')
			return 0;
		result = (result << 1) + (*binary_string - '0');
	}
	return result;
}
