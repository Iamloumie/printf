#include "main.h"
/**
 * excl_str - print exclusuives string.
 * @args: parameter.
 * Return: integer.
 */

int excl_str(va_list args)
{
	char *ex_str;
	int i, length = 0;
	int value;

	ex_str = va_arg(args, char *);
	if (ex_str == NULL)
	{
		return (-1);
	}
	for (i = 0; ex_str[i] != '\0'; i++)
	{
		if (ex_str[i] < 32 || ex_str[i] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			length = length + 2;
			value = ex_str[i];
			if (value < 16)
			{
				_putchar('0');
				length++;
			}
			length = length + print_HEX_xtra(value);
		}
		else
		{
			_putchar(ex_str[i]);
			length++;
		}
	}
	return (length);
}
