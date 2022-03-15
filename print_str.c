#include "main.h"

/**
* print_str - prints a string
* @ap: argument given
*
* Return: lenght of the arguemnt
*/

int print_str(va_list *ap)
{
	char *str;
	int i;
	va_list ap1;

	va_copy(ap1, *ap);

	str = va_arg(ap1, char *);

	if (str == NULL)
		exit(98);

	for (i = 0; i < _strlen(str); i++)
	{
		_putchar(str[i]);
	}
	return (i);
}

