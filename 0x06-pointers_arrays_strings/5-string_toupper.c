#include "main.h"
/**
 * string_toupper - change all lowercase to uppercase
 * @n:
 *
 * Return: n
 */
char *string_toupper(char *n)
{
	int i;

	i = 0;
	while (n[i] != '\0')
	{
		if (n[i] >= 'a' && n[i] <= 'b')
			n[i] = n[i] - 26;
		i++;
	}
	return (n);
}