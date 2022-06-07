#include <stdio.h>
/**
*main - looping alphabets
*Return: 0 Always success
*/
int main(void)
{
char b;
for (b = 'z'; b >= 'a'; b--)
{
putchar(b);
}
putchar('\n');
return (0);
}
