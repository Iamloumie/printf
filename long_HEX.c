#include "main.h"

/**
 * lng_HEX - prints long upper hexadecimal number.
 * @args: next parameter.
 * Return: count.
 */
int lng_HEX(va_list args)
{
	int i;
	int count = 0;
	int *HEX_array;
	unsigned long int num = va_arg(args, unsigned long int);
	unsigned long int tmp_store = num;

	while (num / 16 != 0)
	{
		num /= 16;
		count++;
	}
	count++;
	if (count > 16)
		count = 16;

	HEX_array = malloc(count * sizeof(int));
	if (HEX_array == NULL)
	{
		return (-1);
	}

	for (i = 0; i < count; i++)
	{
		HEX_array[i] = tmp_store % 16;
		tmp_store /= 16;
	}

	for (i = count - 1; i >= 0; i--)
	{
		if (HEX_array[i] > 9)
		{
			HEX_array[i] = HEX_array[i] + 7;
		}
		_putchar(HEX_array[i] + '0');
	}

	free(HEX_array);
	return (count);
}
