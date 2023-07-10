#include "main.h"
#include <fcntl.h>
#include <stdlib.h>
#include <string.h>

/**
 * append_text_to_file - appends text at the end of a file
 *
 * @filename: pointer to the file to append to
 * @text_content: text to append
 *
 * Return: 1 on success and -1 on failure
 *
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file_desc;
	ssize_t num_read, num_written;
	char *buffer;

	if (!filename)
		return (-1);

	if (!text_content)
		return (1);

	file_desc = open(filename, O_WRONLY | O_APPEND);
	if (file_desc < 0)
		return (-1);

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
