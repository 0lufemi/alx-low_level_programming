#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of the file to create
 * @text_content: NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fo, fw;
	int l = 0;

	if (filename == NULL)
		return (-1);

	fo = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0600);

	if (fo == -1)
		return (-1);

	/* int l = 0; */
	while (text_content && *(text_content + l))
		l++;

	fw = write(fo, text_content, l);
	if (fw == -1)
		return (-1);

	close(fo);

	return (1);
}
