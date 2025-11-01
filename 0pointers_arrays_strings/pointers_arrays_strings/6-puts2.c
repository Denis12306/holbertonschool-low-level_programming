#include "main.h"
/**
 * puts2 - Print one caracter on two on the string
 * followed by a new line
 * Return: Always 0.
 */
void puts2(char *str)
{
	int len = 0;
	int i;

	while (str[len] != '\0')
	{
		len++;
	}
	for (i = 0; i < len; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
