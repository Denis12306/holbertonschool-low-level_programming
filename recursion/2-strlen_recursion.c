#include "main.h"
#include <stdio.h>
/**
 * _strlen_recursion - a function that prints the lenght of a string
 * @s: An input string to mesure
 * Return: 0 success
 */
int _strlen_recursion(char *s)
{
	while (*s)
		return (1 + _strlen_recursion(s + 1));
	return (0);
}
