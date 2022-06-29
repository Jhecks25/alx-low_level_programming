#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - print argc and argv
 * @argc : count number of arguments
 * @argv : stores the arrays of argc
 * Return: 0 Always
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	if (argc > 0)
		printf("%d\n", argc - 1);
	return (0);
}

