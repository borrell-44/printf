#ifndef MAIN_H
#define MAIN_H
#include <stdlib.h>
#include <stdarg.h>

/**
 * struct op - Structure of format specifiers and pointer functions
 *
 * @op: The format
 * @f: The function associated
 */

typedef struct print
{
	char print;
	int (*f)(va_list *ap);
} print_t;

int _printf(const char *format, ...);
int (*get_f(char s))(va_list *ap);
int _putchar(char c);
int _strlen(const char *str);
int print_str(va_list *ap);
int print_c(va_list *ap);
int print_amp(va_list *ap);
int print_di(va_list *ap);
int print_in(va_list *ap);
char *conv_in(int num);
#endif

