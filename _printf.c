#include "main.h"
/**
 * _printf - is a function that selects the correct function to print.
 * @format: identifier to look for.
 * Return: the length of the string.
 */
int _printf(const char * const format, ...)
{
	convert p[] = {
		{"%s", print_s}, {"%c", print_c},
		{"%%", print_37},
		{"%i", print_i}, {"%d", print_d}, {"%r", print_revs},
		{"%R", print_rot13}, {"%b", print_bin},
		{"%u", print_unsigned},
		{"%o", print_oct}, {"%x", print_hex}, {"%X", print_HEX},
		{"%S", print_exc_string}, {"%p", print_pointer}
	};

	va_list args;
	int i = 0, length = 0, conv_len;

	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			conv_len = handle_conversion(format, &i, args, p);
			{
				if (conv_len == -1)
					return (-1);
				length += conv_len;
			}
		}
		else
		{
			_putchar(format[i]);
			length++;
		}
		i++;
	}
	va_end(args);
	return (length);
}
/**
 * handle_conversion - handles conversion specifiers
* @format: format string
* @i: pointer to current index in format string
* @args: va_list of arguments
* @p: array of pair structures
* Return: length of converted string or -1 on error
*/
int handle_conversion(const char *format, int *i, va_list args, convert *p)
{
	int j, flag = 0;

	(*i)++;
	if (format[*i] == '#')
	{
		flag = 1;
		(*i)++;
	}
	if (format[*i] == ' ')
	{
		flag = 1;
		(*i)++;
	}
	if (format[*i] == '+')
	{
		flag = 1;
		(*i)++;
	}

	for (j = 13; j >= 0; j--)
	{
		if (p[j].ph[1] == format[*i])
			return (p[j].function(args, flag));
	}
	if (format[*i] == '\0')
		return (-1);

	_putchar('%');
	_putchar(format[*i]);
	return (2);
}
