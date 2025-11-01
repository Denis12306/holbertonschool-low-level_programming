#include "main.h"
#include <stdio.h>
/**
 * _strlen - Print the length of a string.
 * @s = "My first strlen!"
 * Return: Always 0.
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;
	return (len);
}
