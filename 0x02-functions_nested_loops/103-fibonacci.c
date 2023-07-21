#include <stdio.h>

int main() 
{
int i;
long j = 1, k = 2, sum = 0, next;

while (k <= 4000000) {
if (k % 2 == 0) {
sum += k;
}

next = j + k;
j = k;
k = next;
}

printf("Sum of even-valued terms: %ld\n", sum);

    return (0);
}

