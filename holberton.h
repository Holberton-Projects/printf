#ifndef PRINTF_H
#define PRINTF_H

#include <stdarg.h>
#include <unistd.h>

int _printf(const char *format, ...);
int (*_getmatch_print(char *s))(va_list);
int _printChar(va_list c);
int _printString(va_list s);
int _printInt(va_list i);
int _strcmp(char *s1, char *s2);
int _putchar(char c);

/**
 * struct format - Struct op
 * @op: The operator
 * @j: The function associated
 */
typedef struct format
{
	char *op;
	int (*j)(va_list);
} format_t;

#endif /* #ifndef PRINTF_H */
