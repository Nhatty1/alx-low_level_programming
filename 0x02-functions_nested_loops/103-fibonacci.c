#include <stdio.h>
/**
 * main - sum even fibonacci numbers under 4 million.
 * Return: Nothing.
 */
int main(void)
{
unsigned long count, i, j, k, x;
i = x = 0;
j = 1;
for (count = 0; count < 50; count++)
{
k = i + j;
i = j;
j = k;
if (k % 2 == 0 && k < 4000000)
{
x += k;
}
}
printf("%lu\n", x);
return (0);
}
