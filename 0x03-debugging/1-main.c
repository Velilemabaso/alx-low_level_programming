#include <stdio.h>

/**
* main - causes an infinite loop
* Return: 0
*/

int main(void)
{
int i;

printf("Infinite loop incoming :(\n");
i = 0;
while (i < 10)
{
/* Commenting out the entire while loop using a preprocessor directive */
/* #if 0 */
putchar(i);
/* #endif */
i++;
}
printf("Infinite loop avoided! \\o/\n");
return (0);
}
