#include "main.h"
#include <limits.h>

/**
 * print_last_digit - Print the last digit of a number.
 * @n: The number from which the last digit is extracted.
 *Return: The value of the last digit.
 */
int print_last_digit(int n)
{
int last_digit;

/* Handle INT_MIN separately */
if (n == INT_MIN)
{
_putchar('8');
return (8);
}

/* Get the absolute value of n */
if (n < 0)
n = -n;

/* Handle the case when n is zero */
if (n == 0)
{
_putchar('0');
return (0);
}

/* Get the last digit by taking the modulo of 10 */
last_digit = n % 10;

/* Handle the case when the last digit is negative */
if (n < 0)
{
last_digit = -last_digit;
_putchar('0' - last_digit);
}
else
{
_putchar('0' + last_digit);
}

/* Return the last digit */
return (last_digit);
}

