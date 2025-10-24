#include "main.h"
/*
* main - Print the alphabet in lowercase.
*
* Return: Always 0 (Success)
*/
void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
