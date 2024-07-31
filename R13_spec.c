#include "main.h"
/**
 * rot13_spec - converts to rot13
 * @args: printf arguments
 * Return: counter
 */
int rot13_spec(va_list args)
{
	int i, j, counter = 0;
	int k = 0;

	char alph[] = {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
	char mix_alph[] = {"nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM"};

	char *str = va_arg(args, char*);

	str = malloc(sizeof(char) * counter);

	if (str == NULL)
	{
		return (-1);
	}
	for (i = 0; str[i]; i++)
	{
		k = 0;
		for (j = 0; alph[j] && !k; j++)
		{
			if (str[i] == alph[j])
			{
				_putchar(mix_alph[j]);
				counter++;
				k = 1;
			}
		}
		if (!k)
		{
			_putchar(str[i]);
			counter++;
		}
	}
	free(str);
	return (counter);
}
