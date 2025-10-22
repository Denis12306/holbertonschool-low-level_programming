#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Prints the alphabet in lowercase, followed by a new line.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
    char character;
    int num;

    for (num = 0; num <= 9; num++)
        putchar(num + '0');
    for (character = 'a'; character <= 'f'; character++)
    {
        putchar(character);
    }
    putchar('\n');
    return (0);
