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
     *
    int x, z, sum, num; /*Declaration*
    x = 2;              /*initialization*

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
     *
    printf("Enter any integer to add to %i: ", y);
    scanf("%i", &z);

    sum = y + z;
    printf("-> %i + %i is: %i\n", y, z, sum);

    /**->Type casting
     * - The act of converting between data types
     * Example is as follows;
     *
    num = 7;
    float div = (double)sum / num; /*Arithmetic error (int / int = int value)*/

    /*It's either we divide by "5.0" or we type cast... e.g "(double) sum / 5", which converts "sum" to double *

    printf("-> %i / %i is: %f\n\n", sum, num, div);

    /**-> Strings*
    char lastName[31];
    char firstName[31];

    printf("Enter your fisrtname: ");
    scanf("%s", firstName);

    printf("Enter your lastname: ");
    scanf("%s", lastName);

    printf("Hey %s %s! How are you doing?", firstName, lastName);
    */

    /**->Functions in C programming
     * - passing of the argument allows to change the behaviour of a function
     */

    /**-> Constant in C programming
     * - Generally, a constant is a variable that its value can never be changed e.g. PI.
     * - However, basically in C, a constant is just a value assigned to a variable of a certain data type e.g. 
     *   int num = 7. In this case, 7 is a numerical (decimal) constant but the value can be changed later.
     *
     * - In the case of data type constant, Consider the following example,
     *
     * In C programming, when you declare a floating-point constant, you can use either the f suffix 
     * or the decimal point to specify that the value is a float. Lets break down the difference:
     ** Given 3.0F and 3.0
     * The 3.0f represents a floating-point literal with the value 3.0.
     * The f suffix explicitly indicates that this value is a single-precision float.
     * It occupies 32 bits of memory.
     * Example usage: float myFloat = 3.0f;
     *
     * The 3.0 (without the f suffix) is also a floating-point literal.
     * However, it is treated as a double-precision float by default.
     * A double uses 64 bits of memory.
     * Example usage: double myDouble = 3.0;
     *
     * Result Differences:
     * When performing arithmetic operations, the different precisions can lead to varying results.
     * For example, multiplying 97346822 by 3.0f yields 292040480.0, while multiplying by 3.0 gives 292040466.0.
     * The discrepancy arises due to the internal representation of these values in memory.
     * Remember that specifying 3.0f ensures that youre working with a float, while 3.0 defaults to a double.
     *
     *
     *
     * - Symbolic Constants: Provide a way to give a name to a constant value. In this case, the value of 
     *   the variable remains constant throughout the program.
     *
     * a. Using #define:
     *    #define PI 3.14
     *
     * b. Using const:
     *    const double PI = 3.14
     */

     float a = 3.0;
     float b = 3.0F;

     int c = 97346822;

     /*Same result since a and b are defined as float but some times, one might want to be*/
     /*specific about the type of constant*/
     printf("=> %f x %d: %f\n", a, c, a * c); 
     printf("=> %f x %d: %f\n", b, c, b * c);










    
    
    	


    return (0);
}



















