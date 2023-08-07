#include "main.h"

/**
  * create_file - creates a file with rw------- permissions
  * @filename: name of the file, if NULL, return -1
  * @text_content: contents of the file. If NULL, create an empty file
  * Return: 1 on success, -1 on failure
  */

int create_file(const char *filename, char *text_content)
{
	int new_fil, len, wr_status;

	if (filename == NULL)
		return (-1);
	new_fil = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (new_fil == -1)
		return (-1);
	if (text_content == NULL)
	{
		close(new_fil);
		return (1);
	}
	for (len = 0; text_content[len]; len++)
		;
	wr_status = write(new_fil, text_content, len);
	if (close(new_fil) == -1)
		return (-1);
	return (wr_status == -1 ? -1 : 1);
}
