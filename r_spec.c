#include "main.h"

/**
 * rev_str_spec - prints string in reverse
 * @args: incoming string
 * Return: the string
 */
int rev_str_spec(va_list args)
{
	int i;
	int j = 0;

	char *str = va_arg(args, char*);

	if (str == NULL)
	{
		return (-1);
	}
	/* @j: string index and i is the loop counter*/

	while (str[j] != '\0')
	{
		j++;
	}
	for (i = j - 1; i >= 0; i--)
	{
		_putchar(str[i]);
	}
	return (j);
}
