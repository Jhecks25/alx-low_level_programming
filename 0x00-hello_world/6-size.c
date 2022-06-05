#include <stdio.h>
/**
 *main - Printing sizeof
 *Return: 0 Always success
 */
int main(void)
{
char c;
int i;
long long int d;
long int a;
float f;
printf("The Size of a char: %lu byte(s)\n", (unsigned long) sizeof(c));
printf("The Size of an int: %lu byte(s)\n", (unsigned long) sizeof(i));
printf("The Size of a long int: %lu byte(s)\n", (unsigned long) sizeof(a));
printf("The Size of a long long int: %lu byte(s)\n", (unsigned long) sizeof(d));
printf("The Size of a float: %lu byte(s)\n", (unsigned long) sizeof(f));
return (0);
}
