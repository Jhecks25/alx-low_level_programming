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
long double dd;
float f;
printf("The size of a char is: %lu byte(s).\n", (unsigned long) sizeof(c));
printf("The size of an int is: %lu byte(s).\n", (unsigned long) sizeof(i));
printf("The size of a long int is: %lu byte(s).\n", (unsigned long) sizeof(d));
printf("The size of a long long int is: %lu byte(s).\n", (unsigned long) sizeof(dd));
printf("The size of a float is: %lu byte(s).\n", (unsigned long) sizeof(f));
return (0);
}
