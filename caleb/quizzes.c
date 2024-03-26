#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int main(int argc, char const *argv[])
{
    /** -> Quiz 1
     * *Calculates the hypotenuse of a right angle triagle
     *  by taking in two doubles as inputs
     * *Using Pythagora's theorem
     *  hyp^2 = opp^2 + adj^2
     */

    /**
    double opp, adj, hyp;

    printf("Enter the opposite value: ");
    scanf("%lf", &opp);

    printf("Enter the adjacent value: ");
    scanf("%lf", &adj);

    hyp = sqrt(pow(opp, 2.0) + pow(adj, 2.0));

    printf("The hypotenus is: %f", hyp);
    */

    /* Nested for loop*/
    /**
    int i, j;

    for (i = 0; i < 11; i++)
    {
        for (j = i; j >= 0; j--)
        {
            printf("%d", j);

            if (j > 0)
                printf(" ");
        }
        printf("\n");
    }
    */

    /* For a given max range (integer), Print out prime numbers */
    int maxRange, i, j;
    bool isPrime;

    printf("Enter any range: ");
    scanf("%d", &maxRange);

    if (maxRange > 1)
    {
        for (i = 2; i <= maxRange; i++)
        {
            isPrime = true;
            for (j = i - 1; j >= 2; j--)
            {
                if (i % j == 0)
                {
                    isPrime = false;
                    break;
                }
            }
            if (isPrime)
                printf("%d is prime\n", i);
        }
    }

    printf("-------%f\n", sqrt(25));

    return 0;
}
