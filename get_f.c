#include "test.h"

int (*get_f(char s))(va_list *ap)
{
	op_f ops[] = {
		{'i', print_it},
		{'c', print_c},
		{'s', print_str},
		{'d', print_di},
		{'\0', 0}
	};
	int i = 0;

	while (i < 5)
	{
		if (ops[i].op == s)
		{
			return (ops[i].f);
		}
		i++;
	}

	return (0);
}

