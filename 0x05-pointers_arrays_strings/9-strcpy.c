#include "holberton.h"
/**
 * _strcpy - copies string to another
 * @dest: the string to copy in 
 * @src: the string to copy from 
 * Return: dest.
 */
char *_strcpy(char *dest, char *src)
{
int i;
while(*(src + i))
{
*(dest + i) = *(src + i);
i++;
}
return (dest);
}
