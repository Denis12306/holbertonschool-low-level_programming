#include "main.h"
/**
* _isalpha - Returns 1 if c is a letter, lowercase or uppercase.
* @c the caracter to check.
*
* Return: otherwise 0.
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
