#include "main.h"
#include <string.h>
/**
 *_strlen - this function gets the string length
 *@s: string pointer to be passed
 *Return: returns length of the string
 */
int _strlen(char *s)
{
int len;
for (; *s != '\0'; s++)
{
len = len + 1;
}
return (len);
}
