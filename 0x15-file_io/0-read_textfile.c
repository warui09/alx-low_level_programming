#include "main.h"
#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>

/**
 *read_textfile - reads a text file and prints it to the POSIX standard output
 *@filename: pointer to the file to read and print
 *@letters: numbers of letters to read and print
 *
 *Return: number of letters read and printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_desc;
	ssize_t num_written, num_read;
	char *buffer;

	if (!filename)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
		return (0);

	file_desc = open(filename, O_RDONLY);
	if (file_desc < 0)
	{
		free(buffer);
		return (0);
	}

	num_read = read(file_desc, buffer, letters);
	if (num_read < 0)
	{
		free(buffer);
		close(file_desc);
		return (0);
	}

	num_written = write(STDOUT_FILENO, buffer, num_read);
	if (num_written < 0 || num_written != num_read)
	{
		free(buffer);
		close(file_desc);
		return (0);
	}

	free(buffer);
	close(file_desc);
	return (num_read);
}
