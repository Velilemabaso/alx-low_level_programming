#include "main.h"

/**
 * print_last_digit - Print the last digit of a number.
 * @n: The number from which the last digit is extracted.
 *Return: The value of the last digit.
 */
int print_last_digit(int n)
{
int last_digit;

/* Get the absolute value of n */
if (n < 0)
n = -n;

/* Get the last digit by taking the modulo of 10 */
last_digit = n % 10;

_putchar('0' + last_digit);

/* Return the last digit */
return (last_digit);
}

