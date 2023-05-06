#include "main.h"
#include <unistd.h>

/*
 * _putchar - writes the char c to standard output
 * @c: the char to print
 *
 * Return: 1 on success
 * On error, Return -1, and errno is set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
