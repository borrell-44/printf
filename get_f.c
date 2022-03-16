#include "main.h"

/**
* get_f - get the function specified by parameter
* @s: specifier given
*
* Return: return pointer to function
*/

int (*get_f(char s))(va_list * ap)
{
	print_t ops[] = {
		{'s', print_str},
		{'%', print_amp},
		{'c', print_c},
		{'d', print_di},
		{'i', print_di},
		{'\0', 0}
	};
	int i = 0;

	while (i < 6)
	{
		if (ops[i].print == s)
		{
			return (ops[i].f);
		}
		i++;
	}

	return (0);
}

