#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *print_c - print character
 *ch: character to print
 *Return: a character
 */

int print_c (va_list *ch)
{
	int i;
	va_list ch1;

	va_copy(ch1, *ch);

	i = va_arg (ch1, int);

	_putchar(i);

	return (i);
}

/**
 *print_str - prints a string
 *@s - the string
 *Return: a string
 */

int print_str(va_list *s)
{
	char *str;
	int i;
	va_list s1;

	va_copy(s1, *s);
	str = va_arg(s1, char *);

	if (str == NULL)
		exit(98);

	for (i = 0; _strlen(str); i++)
	{
		_putchar(str[i]);
	}
	va_end(s1);
	
	return (i);
}

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

	for (i -= 1; i >= 0; i ++)
	{
		_putchar(s[i]);
	}
	va_end(r1);
	return (i);
}
