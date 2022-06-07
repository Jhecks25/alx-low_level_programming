#include <stdio.h>
/**
 * main - Looping numbers
 * Return: 0 always success
 */
int main(void)
{
int i;
for (i = 0; i < 16; i++)
putchar((i % 16) + '0');
putchar('\n');
return (0);
}
