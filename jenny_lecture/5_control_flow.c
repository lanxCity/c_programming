#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: success (0)
 */
int main()
{
	int a = 53;

	/**
	 * -After writing a program and execute it, there is Sequential flow execution of a program that is, 
	 *  the execution runs from top to bottom
	 *
	 */

	//----> Suppose we have the following,
	//-> Case 1 
	// Multiple statements associated with "if" must be enclosed in a block
	puts("==============> Case 1");
	if (0)
		puts("a. Hey there! I am inside if");
		puts("b. Hey there! I am inside if");
		puts("c. Hey there! I am inside if");
	puts("Hey there! I am out of the if statement\n");


	puts("==============> Case 2   (Terminating the if statement)");
	if (0);
		puts("a. Hey there! I am inside if");
		puts("b. Hey there! I am inside if");
		puts("c. Hey there! I am inside if");
	puts("c. Hey there! I am inside if\n");
	
	
	puts("==============> Case 3");
	if (a = 71)     // If you mistakenly use assignment operator instead of testing for equality
		printf("a = %d\n", a);














	return (0);
}
