#include <stdio.h>
/**
 * main - Looping numbers
 * Return: 0 always success
 */
int main(void)
{
int i;
for (i = 0; i < 10; i++)
putchar((i % 10 ) +'0');
printf("\n");
return (0);
}
