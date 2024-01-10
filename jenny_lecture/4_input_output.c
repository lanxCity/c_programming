#include <stdio.h>
/**
 * main - Entry point
 *
 * Result: success (0)
 */
int main()
{
	int a, b, sum;
	float c, d, num;
	char e, f, user[15];

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
	
	/*printf("Enter the value of a and b: ");
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
	 * /
	printf("---------> 1. Formatted output \"printf()\" function\n\n");

	a = 123456789, b = 65;

	printf("a = %d, b = %d \n", a, b);
	printf("a = %5d, b = %d \n", a, b);        //To specify the minimum number of width/digits to be displayed
						   //if the digits is less, xtra spaces are added
						   //
	printf("a = %015d, b = %d \n", a, b);      //To replace the extra spaces with "zeros" on the left  
						   //(right justify)
	
	printf("a = %-15d, b = %d \n", a, b);     //To add extra spaces on the right (left justify)


	c = 45678.123456789;
	printf("The value of c is: %f\n", c);
	printf("The value of c is (5): %5f\n", c);    //To specify the minimum number of width to be displayed
	printf("The value of c is (5.2): %5.2f\n", c);
	printf("The value of c is (e): %e\n", c);
	printf("The value of c is (5e): %5e\n", c);
	printf("The value of c is (5.2e): %5.2e\n", c);
	
	
	e = 'v';
	printf("The value of e is: %c\n", e);
	printf("The value of e is: %10c\n", e);
	printf("The value of e is: %-10c,\n", e);
	printf("The value of e is: %d\n", e);
	printf("The value of e is: %10d\n", e);

	*/


	/*---------> 1. Unformatted inputs "scanf()"
	 * -> The following are used to get characters (single char) e.g. 
	 *  getchar();
	 *  getch() and getche()  - "conio" library and they don't wait to press enter key
	 *  gets() - Used to inputs string but deprecated. We use "fgets" instead
	 *
	 *
	 * NB:
	 * You enter a character for e and press Enter.
	 * The first scanf reads the entered character, but the newline character ('\n') 
	 * remains in the input buffer.
	 * The second scanf is executed for f. However, it immediately reads the 
	 * newline character left in the buffer from the previous input and considers it as the input for f.
	 * To address this issue, you can modify your code by using getchar() before the second scanf 
	 * or add a space before the "%c" to consume the newline character:
	 */

	//printf("Enter the value of e: ");
	//e = getchar();

	//getchar();

	//printf("Enter the value of f: ");
	//f = getchar();
	//
	//
	/*	
	printf("Enter the value of e: ");
	e = getch();

	getchar();


	printf("Enter the value of e: ");
	f = getche();
	
	printf("The value of e: %c, and f = %c", e, f);

	*/

	printf("Enter your name please: ");
	fgets(user, sizeof(user),stdin);
	printf("Welcome %s", user);






























	//printf("\n");
	return (0);
}
