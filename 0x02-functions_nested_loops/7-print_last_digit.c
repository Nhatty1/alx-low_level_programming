#include "main.h"
/**
 * print_last_digit - prints the last digit of a number.
 * @i: digit to find the last place of.
 * Return: The last digit.
 */
int print_last_digit(int i)
{
int j;
j = (i % 10);
if (j < 0)
{
j = j * -1;
_putchar((char)(j + 48));
}
else
{
_putchar((char)(j + 48));
}
return (j);
}
