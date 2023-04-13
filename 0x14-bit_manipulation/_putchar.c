#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes the char c to stdout
 * @c: the char to print
 *
 * Return: 1 on success
 * On error return -1
 */
int_putchar(char c)
{
	return (write(1, &c, 1));
}
