#include <fcntl.h>
#include <unistd.h>
#include <string.h>

/**
  * append_text_to_file - appends text to file
  * @filename: filename
  * @text_content: content to be written to file
  *
  * Return: 1 if all is well
  *
  */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t write_status;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		write_status = write(fd, text_content, strlen(text_content));
		if (write_status == -1)
			return (-1);
	}

	close(fd);
	return (1);
}

