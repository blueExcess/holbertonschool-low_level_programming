/* 0. read text file and print to stdout */

#include "holberton.h"
#define BUFFSIZE 1024
/**
 * read_textfile - program to read a file and print contents to stdout
 * @filename: name of file to read
 * @letters: num of chars in file to read
 * Return: num of letters actually read and printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd = 0;
	ssize_t ret = 0, bytesRead, bytesReadTotal = 0;
	char buffer[BUFFSIZE];

	if (filename == NULL)
		return (0);

	fd = open(*filename, O_RDONLY);

	do {
		bytesRead = read(fd, buffer, letters);
		bytesReadTotal += bytesRead;
		ret = write_all(fd, buffer, BUFFSIZE);

}



/**
 * write_all - function to write and check
 * @file: where to write output
 * @buffer: what to write
 * @count: how many bytes to write
 *
 * Return: ssize_t - number of bytes written
 */
ssize_t write_all(int file, char *buffer, size_t count)
{
	size_t write_last, write_total = 0;

	if (buffer == NULL || file < 0 || count < 1)
		return (-1);
	do {
		write_last = write(file, buffer + write_total, count);
		write_total += write_last;
	} while (write_total != count && write_last > 0);
	if (write_last < 0)
		return (-1);
	return (write_total);
}
