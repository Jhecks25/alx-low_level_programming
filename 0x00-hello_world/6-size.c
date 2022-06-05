#include <stdio.h>
/**
 *main - Printing sizeof
 *Return: 0 Always success
 */
int main(void)
{
char c;
int i;
double d;
printf("The size of an char is: %lu.\n", (unsigned long) sizeof(c));
printf("The size of an int is: %lu.\n", (unsigned long) sizeof(i));
printf("The size of a long int is: %lu.\n", (unsigned long) sizeof(d));
return (0);
}
