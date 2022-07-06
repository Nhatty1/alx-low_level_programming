#include "main.h"
#include <stdio.h>
/**
 * main - computes and prints the sum of all the multiples of
 * 3 or 5 below 1024.
 * Return: Nothing.
 */
int main(void)
{
int i, j, k, x, y;
i = 0;
x = 0;
j = 5;
k = 3;
while (j < 1024)
{
i = i + j;
j = j + 5;
}
while (k < 1024)
{
if (((k % 10) == 5) || ((k % 10) == 0))
x = x;
else
x = x + k;
k = k + 3;
}
y = i + x;
printf("%d\n", y);
return (0);
}
