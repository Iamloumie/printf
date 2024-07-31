#include "main.h"
/**
 * u_spec - prints unsigned integer
 * @args: incoming parameter
 * Return: unsigned integer
 */

int u_spec(va_list args)
{
	int num, single_numb;
	int  i = 1, expo = 1;
	unsigned int n = va_arg(args, unsigned int);
	int sec_digit = n % 10;

	n = n / 10;
	num = n;

	if (sec_digit < 0)
	{
		_putchar('-');
		num = -num;
		n = -n;
		sec_digit = -sec_digit;
		i++;
	}
	if (num > 0)
	{
		while (num / 10 != 0)
		{
			expo = expo * 10;
			num = num / 10;
		}
		num = n;
		while (expo > 0)
		{
			single_numb = num / expo;
			_putchar(single_numb + '0');
			num = num - (single_numb * expo);
			expo = expo / 10;
			i++;
		}
	}
	_putchar(sec_digit + '0');

	return (i);
}

