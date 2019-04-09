/* 3. Program to copy contents of one file into another */
#include "holberton.h"

#define BUFFSIZE 1024

int main(int ac, char **av)
{
	int to, from, close_error;
	char buffer[BUFFSIZE];
	ssize_t bytes_read, bytes_written;

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	to = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 00664);
	if (to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}
	from = open(av[1], O_RDONLY);
	if (from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	_rAw(from, to, av[1], av[2], buffer);
	close_error = close(to);
	if (close_error == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", to);
		exit(100);
	}
	close_error = close(from);
	if (close_error == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", from);
		exit(100);
	}
	return (0);
}

/**
 * rAw - read and write loop
 * @from: file no reading from
 * @to: file no writing to
 * @src: source file to copy
 * @dest: destination for copy
 * @buffer: buffer for tx
 *
 * Return: VOID
 */
void rAw(int from, int to, char *src, char *dest, char *buffer)
{
	ssize_t bytes_read, bytes_written;

	do{
		bytes_read = read(from, buffer, BUFFSIZE);
		if (bytes_read == 0)
			break;
		if (bytes_read == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", src);
			exit(98);
		}
		bytes_written = write_all(to, buffer, bytes_read);
		if (bytes_written == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", dest);
			exit(99);
		}
	} while(1);
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
	ssize_t write_last;
	size_t write_total = 0;

	if (buffer == NULL || file < 0 || count < 1)
		return (-1);
	do {
		write_last = write(file, buffer + write_total, count);
		write_total += write_last;
	} while (write_total < count && write_last > 0);
	if (write_last < 0)
		return (-1);
	return (write_total);
}
