#include "main"
#include <stdio>

/**
 * main - check
 * strcat- concatenates 2 strings
 * Return: Always 0
 */

int main(void)
{
	char s1[98] = "Hello ";
	char s2[] = "World\n";

	strcat(s1, s2);
	return (0);
}
