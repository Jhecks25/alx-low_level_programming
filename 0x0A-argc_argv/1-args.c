#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - print argc and argv
 * @argc : count number of arguments
 * @argv : stores the arrays of argc
 * Return: 0 Always
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
	printf("%s\n", argv[i]);
	printf("%s\n", argv[i]);
	}

	return (0);
}

