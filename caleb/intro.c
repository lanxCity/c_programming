#include <stdio.h>

/**
 * main - Code Entry point function
 * Return: 0 (success)
 */
int main()
{
    /**-> Variables
     * - The declaration of a variable is called "Variable Declaration"
     * - Assignment of a value to the variable declared is called "variable initialization"
     */
    int x, z, sum, num; /*Declaration*/
    x = 2;              /*initialization*/

    int y = x * x; /*daclaration and init in a single statement*/

    /**-> Outputting
     * - printf("formatted string using the data conversion char", data)
     * - returns no. of char (or bytes) printed
     */

    /*printf("The answer for %ix%i is: %i", x, x, y);*/

    /**-> Inputting
     * - scanf("formatted string which includes the format specifiers of the data expected",
     * - address of the variable where data would be stored)
     * - "&" is called the "Address-of operator" that returns a value which is a memory address of a variable
     * - scanf returns no. of value inputs
     */
    printf("Enter any integer to add to %i: ", y);
    scanf("%i", &z);

    sum = y + z;
    printf("-> %i + %i is: %i\n", y, z, sum);

    /**->Type casting
     * - The act of converting between data types
     * Example is as follows;
     */
    num = 7;
    float div = (double)sum / num; /*Arithmetic error (int / int = int value)*/

    /*It's either we divide by "5.0" or we type cast... e.g "(double) sum / 5", which converts "sum" to double */

    printf("-> %i / %i is: %f\n\n", sum, num, div);

    /*-> Strings*/
    char lastName[31];
    char firstName[31];

    printf("Enter your fisrtname: ");
    scanf("%s", firstName);

    printf("Enter your lastname: ");
    scanf("%s", lastName);

    printf("Hey %s %s! How are you doing?", firstName, lastName);

    return (0);
}
