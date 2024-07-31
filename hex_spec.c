#include "main.h"

/**
 * hex_spec - prints lower hexadecimal number.
 * @args: next parameter.
 * Return: count.
 */
int hex_spec(va_list args)
{
	int i;
	int count = 0;
	int *hex_array;
	unsigned int num = va_arg(args, unsigned int);
	unsigned int tmp_store = num;

	while (num / 16 != 0)
	{
		num /= 16;
		count++;
	}
	count++;

	hex_array = malloc(count * sizeof(int));
	if (hex_array == NULL)
	{
		return (-1);
	}

	for (i = 0; i < count; i++)
	{
		hex_array[i] = tmp_store % 16;
		tmp_store /= 16;
	}

	for (i = count - 1; i >= 0; i--)
	{
		if (hex_array[i] > 9)
		{
			hex_array[i] = hex_array[i] + 39;
		}
		_putchar(hex_array[i] + '0');
	}

	free(hex_array);
	return (count);
}
