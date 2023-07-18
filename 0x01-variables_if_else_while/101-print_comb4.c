#include <stdio.h>
#include <stdbool.h>

/**
 * main - Prints  all possible different combinations of three digits
 *Return: Always 0 (Success)
 */
int main(void)
{
int hundredsDigit, tensDigit, onesDigit;
bool firstCombination = true;

for (hundredsDigit = 0; hundredsDigit <= 7; hundredsDigit++)
{
for (tensDigit = hundredsDigit + 1; tensDigit <= 8; tensDigit++)
{

for (onesDigit = tensDigit + 1; onesDigit <= 9; onesDigit++)
{

if (!firstCombination)
{

putchar(',');
putchar(' ');

}
putchar(hundredsDigit + '0');
putchar(tensDigit + '0');
putchar(onesDigit + '0');

firstCombination = false;

}

}

}

putchar('\n');

return (0);

}
