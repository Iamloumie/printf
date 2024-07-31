#include "main.h"

/**
 * bin_spec - prints binary number.
 * @args: parameter.
 * Return: integer
 */
int bin_spec(va_list args)
{
	int flag = 0, counter = 0;
	int i, b, a = 1;
	unsigned int p;
	unsigned int num = va_arg(args, unsigned int);

	for (i = 0; i < 32; i++)
	{
		p = ((a << (31 - i)) & num);
		if (p >> (31 - i))
			flag = 1;
		if (flag)
		{
			b = p >> (31 - i);
			_putchar(b + 48);
			counter++;
		}
	}
	if (counter == 0)
	{
		counter++;
		_putchar('0');
	}
	return (counter);
}
