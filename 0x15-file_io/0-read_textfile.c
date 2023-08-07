#include "main.h"
#include <stddef.h>

/**
  * read_textfile - reads a text file and prints it to the POSIX standard out
  * @filename: name of the file to read
  * @letters: number of characters to print
  * Return: 0 on success
  **/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int txt_fil, tot, read_stat;
	char buffer[BUFSIZE];

	if (filename == NULL)
		return (0);
	txt_fil = open(filename, O_RDONLY);
	if (txt_fil == -1)
		return (0);
	tot = 0;
	read_stat = 1;
	while (letters > BUFSIZE && read_stat != 0)
	{
		read_stat = read(txt_fil, buffer, BUFSIZE);
		write(STDOUT_FILENO, buffer, read_stat);
		tot += read_stat;
		letters = letters -  BUFSIZE;
	}
	read_stat = read(txt_fil, buffer, letters);
	write(STDOUT_FILENO, buffer, read_stat);
	tot += read_stat;
	close(txt_fil);
	return (tot);
}
