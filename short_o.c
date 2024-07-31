#include "main.h"

/**
 * sht_o - print short octal numbers
 * @args: arguments
 * Return: count.
 */
int sht_o(va_list args)
{
	int i;
	int *oct_array;
	int count = 0;
	unsigned short int num = (unsigned short int) va_arg(args, unsigned int);
	unsigned short int tmp = num;

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

