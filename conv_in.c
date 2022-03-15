#include "main.h"

char *conv_in(int num)
{
	int hold;
	int i = 10;
	int count = 1;
	int j = 0;
	char *n;
	char *out;

	if (num < 0)
		num *= -1;

	while(num >= i)
	{
		count++;
		i *= 10;
	}

	n = malloc(sizeof(char) * count - 1);
	out = malloc(sizeof(char) * count - 1);
	if (n == NULL || out == NULL)
	{
		free(out);
		free(n);
		return (0);
		return (0);
	}

	i = 0;
	while (num >= 10)
	{
		hold = num % 10;
		n[i] = hold + '0';
		i++;
		num /= 10;
	}

	hold = num % 10;
	n[i] = hold + '0';
	i++;
	n[i] = '\0';

	for (i = (count - 1); i >= 0; i--)
	{
		out[j] = n[i];
		j++;
	}
	free(n);

	return (out);
}

