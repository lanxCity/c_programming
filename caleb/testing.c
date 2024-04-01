#include <stdio.h>
#include <time.h>
#include <stdlib.h> //For random number function
#include <string.h>

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
     *
     * * time function generates a seed number
     * * srand initializes the seed and uses the value
     * as limit within which a new value within the range
     * would be generated
     * * rand function picks a value within the range
     * set by the srand function
     */

    /*srand(time(NULL));
    int randNum = rand();

    printf("From time: %ld\n", time(NULL));
    printf("From rand: %d\n", randNum % 10);
    printf("RAND_MAX: %d\n", RAND_MAX);  //prints the max value of the generated random number
    */

    /*Generate random number within the range of 0 - 6*
    srand(time(NULL));

    int hiddenNum = (rand() % 6) + 1;

    printf("Hidden number: %d", hiddenNum);
    */
    int myNum[] = {12, 2, 1, 10};
    char str1[20] = {'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd'};
    char str2[] = {'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd'};
    char str3[20] = "Hello World";
    char str4[] = "Hello World";
    char *str5 = "Hello World";

    printf("=>str[20] with {}: %s----\n", str1);
    printf("=>str[] with {}: %s-----\n", str2);
    printf("=>str[20] with double quotes: %s---\n", str3);
    printf("=>str[] with double qoutes: %s----\n", str4);
    printf("=>*str with poiter: %s----\n", str5);

    return 0;
}
