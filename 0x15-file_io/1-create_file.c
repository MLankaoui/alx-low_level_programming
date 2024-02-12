#include "main.h"

/**
* create_file - Creates a file with a given text content
* @filename: Name of the file to create
* @text_content: Text content to write to the file
*
* Return: 1 on success, -1 on failure
*/
int create_file(const char *filename, char *text_content)
{
	int i = 0, c;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		text_content = "";

	while (text_content[i] != '\0')
		i++;


	c = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (c == -1)
		return (-1);


	write(c, text_content, i);

	return (1);
}
