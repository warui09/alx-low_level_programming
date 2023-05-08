#include "main.h"
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

/**
 *read_textfile - reads a text file and prints it to the POSIX standard output
 *@filename: pointer to the file to read and print
 *@letters: numbers of letters to read and print
 *
 *Return: number of letters read and printed
 */

size_t read_textfile(const char *filename, size_t letters)
{
	int file_desc;
	size_t i, num_read;
	char buffer[1024];

	if (!filename)
		return (0);

	file_desc = open(filename, O_RDONLY);

	if (file_desc < 0)
		return (0);

	num_read = read(file_desc, buffer, letters);

	for (i = 0; i < num_read; i++)
		write(1, &buffer[i], 1);

	return (i);
}
