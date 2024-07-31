#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>

/**
 * struct format - converter for printf
 * @str: type char pointer of the specifier
 * @spec: function for the conversion specifier
 *
 */
typedef struct format {
	char *str;
	int (*spec)();
} print;

int _putchar(char c);
int spec_37(void);
int bin_spec(va_list args);
int c_spec(va_list args);
int d_spec(va_list args);
int i_spec(va_list args);
int HEX_spec(va_list args);
int hex_spec(va_list args);
int o_spec(va_list args);
int rev_str_spec(va_list args);
int rot13_spec(va_list args);
int _strlen(char *str);
int _strlenc(const char *str);
int str_spec(va_list args);
int u_spec(va_list args);
int ptr_spec(va_list args);
int print_HEX_xtra(unsigned int num);
int excl_str(va_list args);
int print_hex_xtra(unsigned int num);
int _printf(const char * format, ...);
int flush_buffer(char buffer[], int *buffer_index);
int buffer_char(char c, char buffer[], int *buffer_index);



#endif
