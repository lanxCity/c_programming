#include <stdio.h>

int main()
{

	/** Implicit type conversion (Promotion)
	 * This is when a certain value of a variable is changed automatically
	 * into another data type.
	 * E.g. An int is stored into a variable of double data type, in this case,
	 * the integer is turned into double implicitly
	 */
	printf("--------> Implicit Type Casting\n");

	double num = 1;

	printf("The size of num %f is: %ld\n", num, sizeof(num));

	/** Explicit type casting
	 * This is when a certain value of a variable is changed manually
	 * into another data type on fly (during usage).
	 */
	printf("--------> Explicit Type Casting\n");

	int newNum = 1;

	printf("The size of num %d is: %ld\n", newNum, sizeof((double) newNum));
	printf("The size of num %d is: %ld\n", newNum, sizeof(newNum));
	



	return (0);
}
