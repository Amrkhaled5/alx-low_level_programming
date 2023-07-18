#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
<<<<<<< HEAD
 * main - Determine if a random number is positive, negative 
 * 
 * Return: 0 on (success)
=======
 * main - Entry point
 *
 * Return: Always 0 (Success)
>>>>>>> 2e94ef8c71ac317ea0be99fdb7138b96e0c61331
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
if (n > 0)
{
printf("%d is positive\n", n);
}
if (n < 0)
{
printf("%d is negative\n", n);
}
if (n == 0)
{
printf("%d is zero\n", n);
}
return (0);
}
