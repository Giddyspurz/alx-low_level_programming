#include "main.h"

/**
 * create_file - creates a file
 * @filename: the name of the file to create
 * @text_content: a NULL terminated string to write to the file
 * The created file must have those permissions: rw-------.
 * If the file already exists, do not change the permissions.
 *
 * Return: 1 if successful. -1 Otherwise.
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	unsigned int len = 0;

	if (filename == NULL)
		return (-1);

	/* open file */
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	/* write to file */
	if (text_content)
	{
		/* count bytes in text_content */
		while (text_content[len])
			len++;

		if (write(fd, text_content, len) == -1)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}
