#include "holberton.h"

/**
* get_bit - returns value of a bit at a given index
* @n: given integer
* @index: index to return value of bit
* Return: value of bit
*/
int get_bit(unsigned long int n, unsigned int index)
{
unsigned long int i = 1;

if (index > (sizeof(int) * 8))
return (-1);
i <<= index;

if (i & n)
return (1);
else
return (0);
}
