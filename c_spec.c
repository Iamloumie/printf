#include "main.h"

/**
 * c_spec - prints a character.
 * @args: arguments.
 * Return: integer.
 */

int c_spec(va_list args)
{
	char c;

	c = va_arg(args, int);
	_putchar(c);
	return (1);
}
