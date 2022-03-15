#include "main.h"

/**
 * print_amp - print %
 * @amp: ampersan character
 *
 * Return: number of characters printed
 */

int print_amp(va_list *ap)
{
	va_list ap1;
	va_copy(ap1, *ap);

	if (va_arg(ap1, int) == '%')
	{
		_putchar('%');
		return (1);
	}

	return (0);
}

