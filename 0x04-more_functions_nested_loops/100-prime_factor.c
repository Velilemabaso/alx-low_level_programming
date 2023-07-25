#include <stdio.h>
#include <math.h>

/**
 * largest_prime_factor - Finds the largest prime factor of a number
 * @n: The number to find the largest prime factor of
 *
 * Return: The largest prime factor
 */
long largest_prime_factor(long n)
{
long max_factor = -1;
long i;

/* Remove all factors of 2 */
while (n % 2 == 0)
{
max_factor = 2;
n /= 2;
}

/* Remove other odd factors */
for (i = 3; i <= sqrt(n); i += 2)
{
while (n % i == 0)
{
max_factor = i;
n /= i;
}
}

/* If n is still greater than 2, it is a prime number */
if (n > 2)

max_factor = n;

return (max_factor);
}

int main(void)
{
long number = 612852475143;
long largest_prime = largest_prime_factor(number);

printf("%ld\n", largest_prime);

return (0);
}

