#include <unistd.h>
#include <stdio.h>
#include "main.h"

/**
 * _strlen - gets a string lenght
 * @str: string that will be evaluated
 *
 * Return: lenght of the string
 */

int _strlen(const char *str)
{
	int count = 0;

	if (str == NULL)
		return (0);

	while (str[count] != '\0')
		count++;

	return (count);
}

/**
 * _printf - produce output according to format
 * @format: a string of directives
 *
 * Return: number of characters printed
 */

int _printf(const char *format, ...)
{
	va_list ap;
	int (*form_f)(va_list *ap);
	int size = 0;
	int length;
	int i;

	if (format == NULL)
		exit(0);

	length = _strlen(format);
	va_start(ap, format);

	for (i = 0; i < length; i++)
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == ' ')
				i++;
			form_f = get_f(format[i]);

			if (!form_f)
				exit(0);
			size += form_f(&ap);
			va_arg(ap, void *);
		}
		else
		{
			_putchar(format[i]);
			size++;
		}
	}


	va_end(ap);
	return (size);
}

