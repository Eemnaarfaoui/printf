#include <stdio.h>
#include <string.h>
#include "main.h"
/**
* _strlen - Returns the length of a string.
* @s: Pointer to the string.
*
* Description: This function takes a pointer to a string and
*              returns the length of the string, excluding the null terminator.
*              The length is determined by counting the number of characters
*              until the null terminator is encountered.
*
* Return: The length of the string as an integer.
*/
int _strlen(char *s)
{
int length = 0;

while (*s != '\0')
{
length++;
s++;
}

return (length);
}
