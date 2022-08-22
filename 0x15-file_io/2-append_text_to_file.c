#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: the name of the file to create
 * @text_content: a NULL terminated string to append to the file
 * Do not create the file if it does not exist
 *
 * Return: 1 if successful. -1 Otherwise.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	unsigned int len = 0;

	if (filename == NULL)
		return (-1);

	/* open file */
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	/* write to file */
	if (text_content)
	{
		/* count number of bytes in text_content */
		while (text_content[len])
			len++;

		if (write(fd, text_content, len) == -1)
			return (-1);
	}

	close(fd);
	return (1);
}
