#include "main.h"

/**
 * print_hex_xtra - prints hexadecimals
 * @num: number to print.
 * Return: counter.
 */
int print_hex_xtra(unsigned int num)
{
	char digits[] = "0123456789abcdef";
	char buffer[sizeof(unsigned long int) * 2];
	int i = sizeof(buffer) - 1;
	int chars_printed = 0;

	if (num == 0)
	{
		_putchar('0');
		return (1);
	}
	buffer[i] = '\0';

	while (num > 0)
	{
		i--;
		buffer[i] = digits[num % 16];
		num /= 16;
	}

	while (buffer[i])
	{
		_putchar(buffer[i]);
		i++;
		chars_printed++;
	}

	return (chars_printed);
}
