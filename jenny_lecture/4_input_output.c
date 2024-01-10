#include <stdio.h>

/**
 * main - Entry point
 *
 * Result: success (0)
 */
int main()
{
	int a, b, sum;

	/*---------> 1. Formatted input "scanf()"
	 * -> scanf("control or conversion string", arg1, arg2, arg3)
	 * -The control string consists of the format specifiers (that indicates 
	 * the type of data or the expected format to be inputed by the user, at the runtime) and args.
	 * - The conversion string include -> "%" (conversion character), "d" specifier
	 *
	 * NB: According to Jenny, there is no comma between the specifiers within the 
	 * string but it works after trying it with comma. Just ensure the values are separated 
	 * with comma while inserting
	 *
	 * - The args are the addresses of the variables where the values inputted would be stored and be assign
	 * - to the variables
	 * - We can also specify the size or number of digit to be entered.
	 * - scanf function always returns the num of args
	 *
	 * */
	//printf("---------> 1. Formatted input \"scanf()\" function\n\n");
	
	//printf("Enter the value of a and b: ");
	//scanf("%d %d", &a, &b);
	//scanf("%d, %d", &a, &b);
	//scanf("%3d %d", &a, &b);   //Specifying the max digits to take (where overflow is truncated) but avoid it
	//scanf("%f %d", &a, &b);      // Unexpected value of "a" bcos of wrong specifier
	//printf("%d", scanf("%d %d", &a, &b));    //returns the number of user inputs
	//scanf("%d", &a, &b);       //Unexpected result for value b

	//sum = a + b;
	//printf("The sum of %d and %d is: %d\n", a, b, sum);


	/*---------> 2. Formatted output "printf()"
	 * -> Printf()
	 * - Unlike scanf, we only need the variable as an arg to print the value stored
	 *
	 *
	 * */
	printf("---------> 1. Formatted output \"printf()\" function\n\n");

	a = 123456789, b = 65;

	printf("a = %015d, b = %d \n", a, b);      //extra spaces is added if the digits is not enough



























	printf("\n");
	return (0);
}
