#include "main.h"

/**
 * print_hexhash - prints hassh flag.
 * @val: arguments.
 * @flag: incoming flag
 * Return: counter.
 */
int print_hexhash(va_list val, int flag)
{
	int i;
	int *array;
	int counter = 0;
	unsigned int num = va_arg(val, unsigned int);
	unsigned int tem = num;

	while (num / 16 != 0)
	{
		num /= 16;
		counter++;
	}
	counter++;
	array = malloc(counter * sizeof(int));
	if (array == NULL)
		return (-1);

	for (i = 0; i < counter; i++)
	{
		array[i] = tem % 16;
		tem /= 16;
	}
	if (flag && array[0] != 0)
	{
		_putchar('0');
		_putchar('x');
		counter += 2;
	}
	for (i = counter - 1; i >= 0; i--)
	{
		if (array[i] > 9)
			array[i] = array[i] + 7;
		_putchar(array[i] + '0');
	}
	free(array);
	return (counter);
}
