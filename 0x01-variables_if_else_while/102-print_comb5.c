#include <stdbool.h>
#include <stdio.h>

/**
 * main - Prints all possible combinations of two two-digit numbers
 *Return: Always 0 (Success)
*/
int main(void)
{

int num1, num2;
bool firstCombination = true;

for (num1 = 0; num1 <= 98; num1++)
{

for (num2 = num1 + 1; num2 <= 99; num2++)
{

if (!firstCombination)
{

putchar(',');
putchar(' ');

}

putchar((num1 / 10) + '0');
putchar((num1 % 10) + '0');
putchar(' ');
putchar((num2 / 10) + '0');
putchar((num2 % 10) + '0');

firstCombination = false;

}

}

putchar('\n');

return (0);

}
