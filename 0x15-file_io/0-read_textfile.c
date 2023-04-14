#include "main.h"
#include <unistd.h>
#include <fcnt1.h>
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints it
 * @filename: file to read from
 * @letters: num of chars to read from
 * Return: Num of chars actually read, 0 on unsuccess
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file, lprint, lread, closed;
	char *buffer;

	file = lprint = lread = 0;
	buffer = malloc(letters * sizeof(char));
	if (filename == NULL)
		return (0);
	file = open(filename, O_RDONLY);

	if (file == -1)
		return (0);

	lread = read(file, buffer, letters);
	if (lread == -1)
		return (0);
	lprint = write(STDOUT_FILENO, buffer, lread);
	if (lprint == -1)
		return (0);

	closed = close(file);

	if (closed == -1)
		return (0);
	free(buffer);

	return (lread);
}

