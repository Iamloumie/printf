#include "main.h"

/**
 * ptr_spec - prints pointer address.
 * @args: incoming arguments.
 * Return: counter.
 */
int ptr_spec(va_list args)
{
	void *ptr;
	char *str = "(nil)";
	long int addr;
	int i, printed_chars;

	ptr = va_arg(args, void*);

	if (ptr == NULL)
	{
		for (i = 0; str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}
		return (i);
	}

	addr = (unsigned long int)ptr;

	_putchar('0');
	_putchar('x');

	printed_chars = print_hex_xtra(addr);

	return (printed_chars + 2);
}
