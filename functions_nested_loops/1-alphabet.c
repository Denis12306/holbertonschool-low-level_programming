#include <stdio.h>
#include "main.h"
/**
* main - Print the alphabet in lowercase.
*
* Return: Always 0 (Success)
*/
int main(void)
{
	void print_alphabet(void);
	int i;

	for (i= 'a'; i <= 'z'; i++);
	{
		putchar(i++);
	}
	putchar('\n');
	return(0);
}
