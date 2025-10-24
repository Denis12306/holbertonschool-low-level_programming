#include "main.h"
#include <stdio.h>
/*
* main - Print the alphabet in lowercase 10 times.
*
* Return: Always 0 (Success)
*/
void print_alphabet(void)
{
	int j = '0';
        int i;
	for (; j <= '9'; j++)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
		 	_putchar(i);
		}
	}
	_putchar('\n');
}
