#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: name of text file
 * @letters: number of letters it should read and print
 *
 * Return: actual number of letters it could read and print. Otherwise 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buf;
	ssize_t rcount, wcount;

	if (filename == NULL)
		return (0);

	/* open file */
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	/* create buf */
	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
	{
		close(fd);
		return (0);
	}

	/* read file */
	rcount = read(fd, buf, letters);
	if (rcount == -1)
	{
		free(buf);
		close(fd);
		return (0);
	}

	close(fd);

	/* write to std_out */
	wcount = write(STDOUT_FILENO, buf, rcount);
	if (wcount == -1)
	{
		free(buf);
		return (0);
	}
	free(buf);
	return (wcount);
}
