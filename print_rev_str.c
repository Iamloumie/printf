#include "main.h"

/**
 * print_revs - function that prints a str in reverse
 * @args: type struct va_arg where is allocated printf arguments
 * @flag: the flag
 * Return: the string
 */
int print_revs(va_list args, int flag)
{
	char *s = va_arg(args, char*);
	int length = 0;
	int start = 0;
	int end;
	char temp;

	(void)flag;

	while (s[length] != '\0')
	{
		length++;
	}
	end = length - 1;

	while (start < end)
	{
		temp = s[start];
		s[start] = s[end];
		s[end] = temp;

		start++;
		end--;
	}
	return (end);
}
