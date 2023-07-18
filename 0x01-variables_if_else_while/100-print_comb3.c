#include <stdbool.h>
#include <stdio.h>

/**
 * main - Prints all possible different combinations of two digits
 *Return: Always 0 (Success)
*/
int main(void)
{
int tensDigit, onesDigit;
bool firstCombination = true;
for (tensDigit = 0; tensDigit <= 8; tensDigit++)
{
for (onesDigit = tensDigit + 1; onesDigit <= 9; onesDigit++)
{
if (!firstCombination)
{
putchar(',');
putchar(' ');
}
putchar(tensDigit + '0');
putchar(onesDigit + '0');

firstCombination = false;
}

}

putchar('\n');

return (0);
}
