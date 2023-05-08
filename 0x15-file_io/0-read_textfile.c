#include "main.h"

/**
 * read_textfile - entry point.
 * @filename:pointer value.
 * @letters: size value,
 * Return: Always 0 (Success)
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int j, i, k;
	char *buffer;

	buffer = malloc(sizeof(buffer) * letters);
	if (buffer == NULL || filename == NULL)
		return (0);

	j = open(filename, O_RDONLY);
	if (j == -1)
	{
		free(buffer);
		return (0);
	}

	i = read(j, buffer, letters);
	if (i == -1)
	{
		free(buffer);
		close(j);
		return (0);
	}

	k = write(STDOUT_FILENO, buffer, i);
	if (k == -1)
	{
		free(buffer);
		close(j);
		return (0);
	}
	free(buffer);
	close(j);
	return (k);
}
