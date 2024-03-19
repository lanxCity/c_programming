#include <stdio.h>
#include <time.h>
#include <stdlib.h> //For random number function

int main(int argc, char const *argv[])
{
    /*Testing variables in the block of codes*/
    /**
     * int x = 15;

    if (1)
    {
        printf("The value of x: %d\n", x);
        int x = 13444444;
        printf("The value of x: %d\n", x);
    }
    */

    /**
     * To generate random number, we'll use time
     * function which returns the current seconds since
     * Epoch (January 1, 1970, 00:00:00 UTC)
     */

    srand(time(NULL));
    int randNum = rand();

    printf("From time: %ld\n", time(NULL));
    printf("From rand: %d\n", randNum % 10);
    printf("RAND_MAX: %d\n", RAND_MAX);

    return 0;
}
