#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - random numbers
 *Return: 0 Always success
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
{
printf("The numbers are positive");
}
else
{
printf("The numbers are negative");
}
return (0);
}
