#include "holberton.h"
/**
 * print_alphabet - entry point
 * print alphabet
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
int i, j;
for (j = 0; j < 10; j++)
{
for (i = 'a'; i <= 'z'; i++)
_putchar(i);
_putchar('\n');
}
}
