#include "main.h"
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * copy_file - copies the content of a file to another file
 *
 * @file_from: file to copy from
 * @file_to: file to copy to
 *
 * Return: 1 on success and -1 on failure
 *
 */

int main(int argc, char **argv)
{
	int file_from_desc, file_to_desc;
	ssize_t num_read, num_written;
	char buffer[1024];
	mode_t mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp %s %s\n", argv[1], argv[2]);
		exit(97);
	}

	file_from_desc = open(argv[1], O_RDONLY);
	if (file_from_desc < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	file_to_desc = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, mode);
	if (file_to_desc < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

	while ((num_read = read(file_from_desc, buffer, 1024)) > 0)
	{
		num_written = write(file_to_desc, buffer, num_read);
		if (num_written != num_read)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}

	if (num_read < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	if (close(file_from_desc) < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close %s\n", argv[1]);
		exit(100);
	}

	if (close(file_to_desc) < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close %s\n", argv[2]);
		exit(100);
	}

	return (1);
}
