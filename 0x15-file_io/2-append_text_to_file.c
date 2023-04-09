#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of the file
 * @text_content: NULL terminated string to add at the end of the file
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fo;
	int len = 0;
	int fw;

	if (filename == NULL)
		return (-1);

	fo = open(filename, O_WRONLY | O_APPEND);

	if (fo == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (*(text_content + len) != '\0')
			len++;

		fw = write(fo, text_content, len);

		if (fw == -1)
			return (-1);
	}

	return (1);
}
