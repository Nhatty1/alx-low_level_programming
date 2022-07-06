#include "main.h"
/**
 * jack_bauer - prints time table in this format: HH:MM
 * Return: something
 */
void jack_bauer(void)
{
int i, j, k, x;
for (i = 0; i < 3; i++)
{
for (j = 0; j < 10; j++)
{
for (k = 0; k < 6; k++)
{
for (x = 0; x < 10; x++)
{
if (i == 2 && j == 4 && k == 0 && x == 0)
{
return;
}
else
{
_putchar((char)(i + 48));
_putchar((char)(j + 48));
_putchar(58);
_putchar((char)(k + 48));
_putchar((char)(x + 48));
_putchar('\n');
}
}
}
}
}
}
