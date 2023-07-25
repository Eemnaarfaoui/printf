#include "main.h"
/**
* printf_string - Function to print a string.
* @val: The argument of the function (va_list).
* Return: The length of the string.
*/
int printf_string(va_list val)
{
char *s; // Declare a char pointer to hold the string argument.
int i, len; // Declare variables to store the loop index and the length of the string.

// Extract the next argument from the va_list as a char pointer.
s = va_arg(val, char *);

// If the argument is NULL, meaning a null pointer was passed,// print "(null)" and return its length.
if (s == NULL)
s = "(null)"; // Default string to be printed for NULL argument.
len = _strlen(s); // Get the length of the default string.

// Loop through the default string and print each character using _putchar.
for (i = 0; i < len; i++)
_putchar(s[i]);

return (len); // Return the length of the string (length of "(null)").
}
else // If the argument is not NULL.
{
len = _strlen(s); // Get the length of the provided string.

// Loop through the string and print each character using _putchar.
for (i = 0; i < len; i++)
_putchar(s[i]);

return (len); // Return the length of the string.
}
}
