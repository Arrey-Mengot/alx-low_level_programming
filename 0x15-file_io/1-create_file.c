#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"
#include <string.h>
/**
  * create_file - creates and writes to a file
  * @filename: filename to be created first
  * @text_content: content to be written to file
  *
  * Return: size for text written to file
  */

int create_file(const char *filename, char *text_content)
{
	int file_descriptor;
	ssize_t write_status;
	size_t text_length;
	int flag;

	if (filename == NULL)
		return (-1);

	flag = O_CREAT | O_WRONLY | O_TRUNC;
	file_descriptor = open(filename, flag, S_IRUSR | S_IWUSR);
	if (file_descriptor == -1)
		return (-1);

	if (text_content != NULL)
	{
		text_length = strlen(text_content);
		write_status = write(file_descriptor, text_content, text_length);
		if (write_status == -1)
			return (-1);
	}

	close(file_descriptor);

	return (1);
}
