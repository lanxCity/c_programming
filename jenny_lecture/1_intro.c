/**
 * -> Structure of C programming
 *
 *  * Documentation section - A comment section that include the author, date, and description of the program.
 */

#include <stdio.h>


/*Definition section*/
#define PI 3.142


/*Main section*/
/**
 * main - Entry point
 *
 * Return: return 0 (success)
 */
int main(void)
{
	int a, b, c;
	char d;
	/**Declaration of constant*/
	const int gravity = 10;

	a = 30;
	b = 15;

	/*printf("%d\n", 30 + 15);*/

	c = 'A';
	d = 'K';

	printf("1. ");
	putchar(c);
	printf("\n");

	printf("2. ");
	putchar(d);
	printf("\n");

	printf("3. %d\n", c);
	printf("4. %d\n", d);

	/**Usage of constants*/
	printf("%f\n", PI);
	printf("%d\n", gravity);





	return (0);
}





















