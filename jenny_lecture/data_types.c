/* Data type */
#include <stdio.h>

int main(void)
{
	short int a, b;

	/*==> 1. Integer Data types*/
	printf("=======> Integer <======\n");
	printf("Short: %d\n", sizeof(short));
	printf("Unsigned Short: %d\n", sizeof(unsigned short));
	printf("int: %d\n", sizeof(int));
	printf("unsigned int: %d\n", sizeof(unsigned int));
	printf("long int: %d\n", sizeof(long int));
	printf("long unsigned int: %d\n", sizeof(long unsigned int));
	printf("long long: %d\n", sizeof(long long int));
	printf("unsigned long long: %d\n", sizeof(long long unsigned int));
	

	/*Examples*/
	printf("--> short: %hd\n", 8888888);
	printf("--> unsigned short: %hu\n", 8888888);
	printf("--> %d\n", 8888888);
	
	a = 32768;
	b = -10;
	printf("The value of a (short max = 32767): %d\n", b);
	printf("The value of a (unsigned max = 65535): %hu\n", b);


	/*==> 2. Character*/
	printf("=========> Character <========\n");
	printf("%c\n", 33);

	/**
	 * For extended ASCII char, it advisable to use their unicode code points for portability purposes
	 */
	printf("\u00A9 copyright\n");
	printf("\u2122 trademark\n");



	return (0);
}
