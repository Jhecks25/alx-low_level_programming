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
	int i, j, sum = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}

