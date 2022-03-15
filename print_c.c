#include "main.h"

int print_c (va_list *ap)
{
	char i;
	va_list ap1;

	va_copy(ap1, *ap);

	i = va_arg (ap1, int);
	if (i == '\0')
		exit(0);

	_putchar(i);

	va_end(ap1);
	return (1);
}

