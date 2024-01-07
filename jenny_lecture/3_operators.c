#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: success (0)*/
int main(void)
{

	int a, b, c, d, e, f, g;

	/*-----> increament and decreament*

	printf("---->Increament and Decreament");

	x = y = 10;
	printf("x: %d, y: %d\n", x, y);


	y = x++;
	printf("x++: %d, y: %d\n", x, y);

	y = ++x;
	printf("++x: %d, y: %d\n", x, y);

	/*------> modulo and assignment operators*
	putchar('\n');
	printf("------>Modulo operator\n");

	x = 15;
	y = 7;
	printf("%d %% %d: %d\n", x, y, x % y);

	x = -x;		/*x = -15 and y = 7*
	printf("%d %% %d: %d\n", x, y, x % y);

	x = -x;		/*x = 15 and y = -7*
	y = -y;
	printf("%d %% %d: %d\n", x, y, x % y);

	x = -x;		/*x = -15 and y = -7*
	printf("%d %% %d: %d\n", x, y, x % y);


	//printf("%f\n", 6.0 % 5);     //Throws error
	
	printf("%d\n", 6 + 5 - 2 * 4);


	/*----> Increament and decreament operators*

	//z = 10;
	//printf("z: %d\n", ++z == 10 ? z : 0);

	system("clear");

	x = 8, y = 7;
	printf("%d < %d: %d\n", x, y, x < y);
	*/

	/*------> Relational operators*/

	a = 18, b = 10;
	c = 9, d = 10;
	e = 10, f = 1;
	g = 4, f = 12;

	printf("The relation is: %d\n", a + c == b >= e < c + d != 1);

	/*-------> Bitwise Operator*/

	printf("Bitwise AND (&): %d & %d -> %d\n", b, c, b & c);
	printf("Bitwise OR (|): %d | %d -> %d\n", b, c, b | c);
	printf("Bitwise XOR (^): %d ^ %d -> %d\n", b, c, b ^ c);
	printf("Bitwise Left shift (<<): %d << %d -> %d\n", b, g, b << g);  // b * (2^3); dealing with binary
	printf("Bitwise Right shift (>>): %d >> %d -> %d\n", b, g, b >> g);  // b / (2^3); dealing with binary
	printf("Bitwise Right shift (~): ~%d -> %d\n\n", f, ~f);

	/*------> Special characters*/
	printf("------------------> The comma operator\n");
	
	a = (printf("I am inside comma operator\n"), 35, 90);
	b = 67, 12, 3, 43;

	printf("The value of a: %d\n", a);
	printf("The value of b: %d\n", b);





























	return (0);
}
