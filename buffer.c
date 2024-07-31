#include "main.h"

#define BUFFER_SIZE 1024

/**
 * flush_buffer - Writes the contents of the buffer and resets it
 * @buffer: The buffer to flush
 * @buffer_index: Pointer to the current index in the buffer
 *
 * Return: Number of characters written
 */
int flush_buffer(char buffer[], int *buffer_index)
{
	int chars_written = 0;

	if (*buffer_index > 0)
	{
		chars_written = write(1, buffer, *buffer_index);
		*buffer_index = 0;
	}

	return (chars_written);
}

/**
 * buffer_char - Adds a character to the buffer, flushing if necessary
 * @c: Character to add
 * @buffer: The buffer to add to
 * @buffer_index: Pointer to the current index in the buffer
 *
 * Return: Number of characters written if buffer was flushed, 0 otherwise
 */
int buffer_char(char c, char buffer[], int *buffer_index)
{
	int chars_written = 0;

	if (*buffer_index == BUFFER_SIZE)
	{
		chars_written = flush_buffer(buffer, buffer_index);
	}

	buffer[*buffer_index] = c;
	(*buffer_index)++;

	return (chars_written);
}
