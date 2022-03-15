#include "main.h"

int (*get_f(char s))(va_list *ap)
{
	print_t ops[] = {
		{'s', print_str},
		{'%', print_amp},
		{'\0', 0}
	};
	int i = 0;

	while (i < 3)
	{
		if (ops[i].print == s)
		{
			return (ops[i].f);
		}
		i++;
	}

	return (0);
}

