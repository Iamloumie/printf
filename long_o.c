#include "main.h"

/**
 * lng_o - print long octal numbers
 * @args: arguments
 * Return: count.
 */
int lng_o(va_list args)
{
	int i;
	int *oct_array;
	int count = 0;
	unsigned long int num = va_arg(args, unsigned long int);
	unsigned long int tmp = num;

	while (num / 8 != 0)
	{
		num /= 8;
		count++;
	}
	count++;
	oct_array = malloc(count * sizeof(int));
	if (oct_array == NULL)
	{
		return (-1);
	}

	for (i = 0; i < count; i++)
	{
		oct_array[i] = tmp % 8;
		tmp /= 8;
	}
	for (i = count - 1; i >= 0; i--)
	{
		_putchar(oct_array[i] + '0');
	}

	free(oct_array);
	return (count);
}
