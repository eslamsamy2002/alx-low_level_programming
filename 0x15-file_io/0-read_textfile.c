#include "main.h"
#include <stdlib.h>

/**
 *read_textfile- Read text file print to STDOUT.
 *@filename: text file being read
 *@letters: number of letters to be read
 *Return: w- actual number of bytes read and printed
 *      0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf[7000];
	ssize_t chars;

	int fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	chars = read(fd, buf, letters);
	chars = write(1, buf, chars);
	close(fd);
	return (chars);

}
