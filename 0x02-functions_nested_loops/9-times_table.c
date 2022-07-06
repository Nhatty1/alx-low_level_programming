#include "main.h"
/**
 * times_table - prints the times table from 0 - 9.
 * Return: Nothing
 */
void times_table(void)
{
int i, j, k, x;
i = 0;
j = 0;
for (x = 0; x < 10; x++)
{
for (i = 0; i < 10; i++)
{
k = (j *i);
if (k > 9)
{
_putchar(44);
_putchar(32);
_putchar((char)((k / 10) + '0'));
_putchar((char)((k % 10) + '0'));
}
else
{
if (i > 0)
{
_putchar(44);
_putchar(32);
_putchar(32);
}
_putchar((char)(k + '0'));
}
}
_putchar('\n');
i = 0;
j++;
}
}
