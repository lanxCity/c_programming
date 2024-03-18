#include <stdio.h>
#include <stdbool.h>

/**
 * main - Code entry point
 * Return: integer 0 (success)
 */
int main()
{
	/**
	 * -> Numeric data type
	 *  - int: these are whole numbers
	 *  - floating point number: these are numbers with fractional part and it's includes
	 *    float and double.
	 *   * The difference between the float and double is precision
	 */

	/**float dec1 = 11111.11111;
	float dec2 = 11111.11111F;

	/*---These prints the same outputs* 
	printf("dec1: %f\n", dec1);
	printf("dec2: %f\n", dec2);
	*/

	/*This prints different outputs*/
	/*It is an evidence that the value itself are basically considered "const" and not the data type*/
	/*The floating point values are "doubled" by standard*/
	/*printf("dec1: %f\n dec2: %f\n", 11111.11111, 11111.111111F);*/

	/**---> Scientific notation of numeric values
	 * This is when a number is converted to the power of its decimal e.g. 3567 ~= 3.567 * 10^3
	 * we have format as "%e" and "%g", where g is to let the compiler decides when sci-notation is necessary
	 * The format are originally used floating numbers while printing it.
	 *
	 * The power <= -4 or power <= 5 are not converted to scientic notation by defaul
	 * 
	 * NB: if you wanna escape "%", you double it as "%%".
	 *

	int a, b;

	a = 2.542e3;
	b = 25.7e2;  /*multiply by 10^3*

	printf("-------------> INTEGERS\n");
	printf("=> %i : %i\n", a, a);
	printf("=> %i : %i\n", b, b);

	double c, d;
	
	c = 2.542e9;
	d = 25.7e3;  /*multiply by 10^3*

	printf("-------------> FLOATING\n");
	printf("=> %f (%%e): %e\n", c, c);
	printf("=> %f (%%g): %g\n", c, c);
	
	printf("=> %f (%%e): %e\n", d, d);
	printf("=> %f (%%g): %g\n", d, d);
	
	/*To read sci-notation from stdin, we use "lf" and also works for decimal*
	printf("Enter sci-notation value: ");
	scanf("%lf", &d);

	printf("=> %f (%%e): %e\n", d, d);
	printf("=> %f (%%g): %g\n", d, d);*/

	/**
	 * - Character are data (ASCII values) with a single qoute
	 * - Booleans are logical data type which can be either true (1 or other positive int) or false (0).
	 *   But in under the hood, true is 1.
	 *   To declare booean variable, we use "_Bool" data type, however, we can include a library for boolean
	 *   using "<stdbool>" and declaration of "bool".
	 */
	char myData = 'A';
	_Bool isTrue = 915;
	bool isDone = 1;

	printf("The char '%c' is printed as int \"%d\"\n", myData, myData);
	printf("The boolean variable using \"_Bool\" is -> %d\n", isTrue);
	printf("The boolean variable using \"bool\" is -> %d\n", isDone);























	return (0);


}











