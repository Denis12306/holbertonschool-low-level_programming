#include "main.h"
#include <stdio.h>
/**
 * main - Write a program that prints all arguments it receives
 * All arguments should be printed, including the first one
 * Only print one argument per line, ending with a new line
 * @argc: arguement count
 * @argv: argument value
 * Return: 0 always success
 */
int main(int argc, char *argv[])
{
	while (argc--)
	{
		printf("%s\n", *argv++);
	}
	return (0);
}
