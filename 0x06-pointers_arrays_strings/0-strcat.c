#include "main.h"
/**
 * _strcat - is a function that strcats second string to first string
 * @dest: parameter1
 * @src: parameter2
 * return: a string
 */
char *_strcat(char *dest, char *src)
{
int len = 0;
int i;
while (dest[len])
len++;
for (i = 0; src[i] != 0; i++)
{
dest[len] = src[i];
i += 1;
}
dest[len] = '\0';
return (dest);
}
