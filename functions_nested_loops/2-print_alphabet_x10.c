#include "main.h"
/**
* print_alphabet_x10 - print alphabet in lower cases 10 times
* return line each time
*
* Return: void
*/
void print_alphabet_x10(void)
{
	int j = '0';
	int i;

	for (; j <= '9'; j++)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
