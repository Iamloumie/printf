#include "main.h"

/**
 * print_bin - prints binary number.
 * @val: parameter.
 * @flag: the flag
 * Return: integer
 */
int print_bin(va_list val, int flag)
{
	int check = 0;
	int cont = 0;
	int i, a = 1, b;
	unsigned int num = va_arg(val, unsigned int);
	unsigned int p;

	(void)flag;

	for (i = 0; i < 32; i++)
	{
		p = ((a << (31 - i)) & num);
		if (p >> (31 - i))
			check = 1;
		if (check)
		{
			b = p >> (31 - i);
			_putchar(b + 48);
			cont++;
		}
	}
	if (cont == 0)
	{
		cont++;
		_putchar('0');
	}
	return (cont);
}
