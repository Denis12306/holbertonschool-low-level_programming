#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * Print the alphabet
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter;

	while (letter = 'a'; letter <= 'z'; ++letter)
	{
		putchar(letter);
	}
	putchar('\n');

	return (0);
}
