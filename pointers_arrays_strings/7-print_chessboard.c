#include "main.h"
#include <stdio.h>
/**
 * print_chessboard - a function that print a chessboard
 * @l and @c are two integer for putting the board
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
    int l;
    int c;

    for (l = 0; l < 8; l++)
    {
        for (c = 0; c < 8; c++)
    {
        _putchar(a[l][c]);
    }
    _putchar('\n');
    }
}
