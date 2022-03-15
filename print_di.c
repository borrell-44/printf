#include "main.h"

/**
* print_di - print a digit
* @ap: argument given
*
* Return: lenght of argument
*/

int print_di(va_list *ap)
{
	va_list ap1;
	char *str;
	int num;
	int len;

	va_copy(ap1, *ap);
	num = va_arg(ap1, int);
	str = conv_in(num);

	if (str == NULL)
	{
		free(str);
		exit(0);
	}

	len = _strlen(str);
	if (num < 0)
		_putchar('-');
	for (num = 0; num < len; num++)
	{
		_putchar(str[num]);
	}
	return (num);
}

