#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *print_r - print a reverse string
 *@r: string
 *Return: rev characters
 */

int print_r (va_list *r)
{
	char *s;
	int i;
	va_list r1;
	
	va_copy(r1, *r);

	s = va_arg(r1, char*);

	while (s[i] != '\0')
	{
				s++;
	}

	for (i -= 1; i >= 0; i --)
	{
		_putchar(s[i]);
	}
	va_end(r1);
	return (i);
}
