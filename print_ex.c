#include "main.h"

/**
* print_ex - print percent with exclemation mark
* @ap: argument given
*
* Return: length of argument
*/

int print_ex(va_list * ap __attribute__((unused)))
{
	_putchar('%');
	_putchar('!');
	return (1);
}

