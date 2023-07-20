#include "main.h"
#include <stdio.h>

/**
 * print_times_table - Print the n times table, starting with 0.
 * @n: The number to print the times table for.
 */
void print_times_table(int n)
{
int row, column, result;

if (n >= 0 && n <= 15)
{
for (row = 0; row <= n; row++)
{
for (column = 0; column <= n; column++)
{
result = row * column;
if (column == 0)
printf("%d", result);
else
printf(", %d", result);
}
printf("\n");
}
}
}

