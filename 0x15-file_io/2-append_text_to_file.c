#include "main.h"

/**
 * append_text_to_file - appends a text at the end of a file.
 * @filename: name of the file
 * @text_content: NULL terminated string to add at the end of the file
 * Return: 1 on success and -1 on failure
 * @fn: integer
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fn;
	ssize_t len;

	if (filename == NULL)
		return (-1);
	fn = open(filename, O_WRONLY | O_APPEND);
	if (fn == -1)
		return (-1);
	if (text_content != NULL)
	len = write(fd, text_content, _strlen(text_content));
	close(fn);
	if (len == -1)
		return (-1);
	return (1);
}
