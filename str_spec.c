#include "main.h"
/**
 * str_spec - print a string.
 * @val: argument.
 * Return: the length of the string.
 */

int str_spec(va_list val)
{
	char *str;
	int i, len;

	str = va_arg(val, char *);
	if (str == NULL)
	{
		return (-1);
	}

	len = _strlen(str);
	for (i = 0; i < len; i++)
	{
		_putchar(str[i]);
	}
	return (len);
}
