#include "main.h"
/**
 * read_textfile - reads a text file and prints it to the standard output
 * @filename: name of the file to be read
 * @letters: number of letters to read and print
 * Return: the number of letters printed, or 0 if it failed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int z;
	int i, y;
	char *cab;

	if (!filename)
		return (0);
	z = open(filename, O_RDONLY);
	if (z < 0)
		return (0);
	cab = malloc(sizeof(char) * letters);
	if (!buf)
		return (0);
	i = read(z, cab, letters);
	if (i < 0)
	{
		free(cab);
		return (0);
	}
	cab[i] = '\0';
	close(z);
	y = write(STDOUT_FILENO, cab, i);
	if (y < 0)
	{
		free(cab);
		return (0);
	}
	free(cab);
	return (y);
}
