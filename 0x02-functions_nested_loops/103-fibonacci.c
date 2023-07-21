#include <stdio.h>

/**
 * main - Prints  the sum of the even-valued terms
 * Return: Always 0 (Success)
 */

int main() 
{
unsigned long long int prev = 1;
unsigned long long int current = 2;
unsigned long long int sum = 0;

while (current <= 4000000) {
if (current % 2 == 0) {
sum += current;
}
unsigned long long int next = prev + current;
prev = current;
current = next;
}

printf("Sum of even-valued terms: %llu\n", sum);

return (0);
}

