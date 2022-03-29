#include "main.h"
/**
 * append_text_to_file - function at the end of the file
 * @filename: file
 * @text_content: text to add
 * Return: 1 - Success or -1 - Failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, bytes_wrote, len;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_APPEND | O_WRONLY);

	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len] != '\0'; len++)
			;

		bytes_wrote = write(fd, text_content, len);

		if (bytes_wrote == -1)
		{
			return (-1);
		}
	}
	close(fd);
	return (1);
}
