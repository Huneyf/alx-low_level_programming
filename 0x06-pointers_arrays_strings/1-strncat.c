#include "main.h"
#include <string.h>
/**
 *_strncat - a function that strncats two strings to a third
 *@dest: parameter1
 *@src: parameter2
 *@n: parameter3
 *Return: a string
 */
char *_strncat(char *dest, char *src, int n)
{
strncat(dest, src, n);
return (dest);
}
