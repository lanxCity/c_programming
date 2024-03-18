#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    /** -> Quiz 1
     * *Calculates the hypotenuse of a right angle triagle
     *  by taking in two doubles as inputs
     * *Using Pythagora's theorem
     *  hyp^2 = opp^2 + adj^2
     */

    double opp, adj, hyp;

    printf("Enter the opposite value: ");
    scanf("%lf", &opp);

    printf("Enter the adjacent value: ");
    scanf("%lf", &adj);

    hyp = sqrt((opp * opp) + (adj * adj));

    printf("The hypotenus is: %f", hyp);

    return 0;
}
