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

	write(1, &c, 1);
	return (1);
}
