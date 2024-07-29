#ifndef MAIN_H
#define MAIN_H

#include <limits.h>
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <stddef.h>
#include <unistd.h>



/**
 * struct format - converter for printf
 * @ph: type char pointer of the specifier
 * @function: function for the conversion specifier
 *
 */

typedef struct format
{
	char *ph;
	int (*function)(va_list, int);
} convert;

int *_strcpy(char *dest, char *src);
int print_pointer(va_list val, int flag);
int print_unsigned(va_list args, int flag);
int print_hex_extra(unsigned long int num);
int _strlenc(const char *s);
int print_HEX_extra(unsigned int num);
int print_exc_string(va_list val, int flag);
int print_HEX(va_list val, int flag);
int print_hex(va_list val, int flag);
int print_oct(va_list val, int flag);
int print_bin(va_list val, int flag);
int print_revs(va_list args, int flag);
int print_rot13(va_list args, int flag);
int print_i(va_list args, int flag);
int print_d(va_list args, int flag);
int _strlen(char *s);
int rev_string(char *s);
int print_37(va_list val, int flag);
int print_c(va_list val, int flag);
int print_s(va_list val, int flag);
int _putchar(char c);
int _printf(const char *format, ...);
int print_dflagplus(va_list args, int flag);
int print_dflagspace(va_list args, int flag);
int print_HEXhash(va_list val, int flag);
int print_hexhash(va_list val, int flag);
int print_iflagplus(va_list args, int flag);
int print_intspace(va_list args, int flag);
int handle_conversion(const char *format, int *i, va_list args, convert *p);



#endif
