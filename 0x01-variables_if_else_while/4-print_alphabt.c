#include <stdio.h>
/**
*main - looping alphabets
*Return: 0 Always success
*/
int main(void)
{
char b;
for (b = 'a'; b <= 'z'; b++)
if (b != 'q' && b != 'e')
putchar(b);
putchar('\n');
return (0);
}
