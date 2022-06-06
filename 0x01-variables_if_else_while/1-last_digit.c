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
int LastDigit;
srand(time(0));
n = rand() - RAND_MAX / 2;
LastDigit = n % 10;
if (n > 5)
{
printf("Last digit of %d is %d and is greater than 5\n", n, LastDigit);
}
else if (n < 6 && n != 0)
{
printf("Last digit of %d is %d and is less than 6\n and not 0", n, LastDigit);
}
else
{
printf("Last digit %d is %d and is 0\n", n, LastDigit);
}
return (0);
}
