#include "main.h"

/**
 * _putchar - writes a character to the standard output (stdout)
 * @c: The character to be written
 *
 * Return: On success, the number of characters written is returned.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
    return write(1, &c, 1);
}

/**
 * print_numbers - Prints the numbers from 0 to 9 followed by a new line
 */
void print_numbers(void)
{
int i;

for (i = 0; i < 10; i++)
{
_putchar(i + '0');
}
_putchar('\n');
}

