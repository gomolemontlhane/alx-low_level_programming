#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

/**
 *print_error - Prints an error message to the standard error.
 *@msg: The error message.
 *@code: The exit code.
 */
void print_error(const char *msg, int code)
{
	dprintf(2, "%s\n", msg);
	exit(code);
}

/**
 *close_file - Closes a file descriptor.
 *@fd: The file descriptor to close.
 */
void close_file(int fd)
{
	if (close(fd) == -1)
		print_error("Error: Can't close fd", 100);
}

/**
 *main - Copies the content of a file to another file.
 *@argc: The argument count.
 *@argv: The argument vector.
 *
 *Return: 0 on success, or an exit code on failure.
 */
int main(int argc, char *argv[])
{
	int file_from, file_to, read_count, write_count;
	char buffer[1024];

	if (argc != 3)
		print_error("Usage: cp file_from file_to", 97);

	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
		print_error("Error: Can't read from file", 98);

	file_to = open(
			argv[2], O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH
			);
	if (file_to == -1)
		print_error("Error: Can't write to file", 99);

	while ((read_count = read(file_from, buffer, 1024)) > 0)
	{
		write_count = write(file_to, buffer, read_count);
		if (write_count != read_count)
			print_error("Error: Can't write to file", 99);
	}

	if (read_count == -1)
		print_error("Error: Can't read from file", 98);

	close_file(file_from);
	close_file(file_to);

	return (0);
}
