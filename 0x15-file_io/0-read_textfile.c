#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* read_textfile -  reads a text file and prints it to the POSIX
* standard output.
* @filename: pointer
* @letters: size of letters
* Return: number of letters if success, else 0
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t r, file, w;
	char *buffer;

	buffer = malloc(letters);
	if (buffer == NULL || filename == NULL)
		return (0);
	file = open(filename, O_RDONLY);
	if (file == -1)
	{
		free(buffer);
		return (0);
	}
	r = read(file, buffer, letters);
	w = write(STDOUT_FILENO, buffer, r);
	close(file);
	return (w);
}
