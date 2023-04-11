#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0
 */

unsigned int binary_to_uint(const char *binary_string)
{
	if(binary_string == NULL)
	{
		return 0;
	}
	unsigned int result = 0;
	for(int i = 0; binary_string[i] != '\0'; i++)
	{
		if(binary_string[i] == '0')
		{
			result = result << 1;
		}else if (binary_string[i] == '1')
		{
			result = (result << 1) | 1;
		}else
		{
			return 0;
		}
	}
	return result;
}
