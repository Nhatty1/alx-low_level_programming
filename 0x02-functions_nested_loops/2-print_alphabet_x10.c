#include "main.h"
/**
 *    print_alphabet_x10 - repeats the print_alphabet 10 times.
 *       Return: Nothing.
 */
void print_alphabet_x10(void)
{
char c = 'a';
int i;
for (i = 0; i < 10; i++)
{
while (c <= 'z')
{
_putchar(c);
c++;
}
c = 'a';
_putchar('\n');
}
}
