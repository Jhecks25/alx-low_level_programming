#include <stdio.h>
/**
 *maim - Printing sizeof
 *Return: 0 Always success
 */
int main(void)
{
int i;
double d;
char c;
printf("The size of an int is: %lu.\n", (unsigned long) sizeof(i));
printf("The size of an int is: %lu.\n", (unsigned long) sizeof(d));
printf("The size of an int is: %lu.\n", (unsigned long) sizeof(c));
return (0);
}
