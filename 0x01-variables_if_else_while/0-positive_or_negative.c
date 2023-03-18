#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * This program assigns a random number to the variable n each time it is executed
 * and prints whether the number stored in the variable n is positive or negative.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int n;

    /* Seed the random number generator with the current time */
    srand(time(0));
    /* Generate a random number in the range of [-RAND_MAX/2, RAND_MAX/2] */
    n = rand() - RAND_MAX / 2;

    printf("The number %d is ", n);

    if (n > 0)
        printf("positive\n");
    else if (n == 0)
        printf("zero\n");
    else
        printf("negative\n");

    return (0);
}
