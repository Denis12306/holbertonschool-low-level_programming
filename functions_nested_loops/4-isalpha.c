#include "main.h"
/*
* main - Returns 1 if c is a letter, lowercase or uppercase.
* Return 0 otherwise.
* Return: Always 0.
*/
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
