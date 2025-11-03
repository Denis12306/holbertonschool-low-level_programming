#include "main.h"
#include <stdio.h>
/**
 * _strchr a fonction that locate a caracter in the string
 * @s is the string of caracter
 * @c is the letter to return
 * Return: s or NULL.
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (c == *s)
			return (s);
		s++;
	}
	if (c == *s)
		return (s);
	return (NULL);
}
