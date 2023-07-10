#include "main.h"
#include <fcntl.h>
#include <stdlib.h>
#include <string.h>

/**
 * create_file - creates a file
 * @filename: pointer to the name of the file
 * @text_content: content to write to the file
 *
 * Return: 1 on success, -1 otherwise
 *
 */

int create_file(const char *filename, char *text_content)
{
	int file_desc;
	ssize_t num_read, num_written;
	char *buffer;

	file_desc = open(filename, O_RDWR | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (!file_desc)
		return (-1);

	if (!text_content)
	{
		close(file_desc);
		return (-1);
	}

	buffer = malloc(strlen(text_content) + 1);
	if (!buffer)
		return (-1);

	strcpy(buffer, text_content);

	num_read = strlen(text_content);
	num_written = write(file_desc, buffer, num_read);
	if (num_written < 0 || num_written != num_read)
	{
		free(buffer);
		return (-1);
	}

	free(buffer);
	close(file_desc);
	return (1);
}
