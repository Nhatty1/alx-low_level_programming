#include "main.h"
/**
 * print_times_table - function prints the 9 times table, starting with 0
 * Return: void
 * @n: return something
 */
void print_times_table(int n)
{
int i, j, k;
k = 1;
if (!(n > 15))
{
for (i = 0; i <= n; i++)
{
for (j = 0; j <= n; j++)
{
k = i * j;
if (k > 9)
{
_putchar(44);
_putchar(32);
if (k < 100)
_putchar(32);
if (k > 99)
{
_putchar((char) (k / 100) + 48);
}
_putchar((char) ((k / 10) % 10) + 48);
_putchar((char) (k % 10) + 48);
}
	else
	{
		if (j > 0)
	{
		_putchar(44);
		_putchar(32);
		_putchar(32);
		_putchar(32);
		}
		_putchar((char) (k + 48));
		}
		}
		_putchar('\n');
		}
	}
}
