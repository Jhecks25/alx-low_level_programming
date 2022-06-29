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
	if (argc == 3)
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	}
	return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}

