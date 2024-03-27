#include <stdio.h>
#include <stdbool.h>

/**
 * main - Entry point function
 * @argc: number of args or command on the shell
 * @argv: array of args or command on the shell
 * Return: 0 (success)
 */
int main(int argc, char const *argv[])
{
    /* code */
    /* --> Inline "if" statement*/
    if (true)
        printf("Hey there! I am from inline \"if\" statement\n");

    /**
     * --> Switch case
     * NB:
     * - Switch can not have comparison or
     * logical operators
     * - The break keyword is important at the end each case
     * - Usage of default (works same "else" statement) at
     * the end of the whole cases is
     * good practice
     */

    /*int cgpa;
    printf("Please, enter your age: ");
    scanf("%d", &cgpa);

    switch (cgpa)
    {
    case 4 /* constant-expression *:
        /* code *
        printf("Excellent!");
        break;
    case 3:
        printf("Good!");
        break;
    case 2:
        printf("Fair!");
        break;
    case 1:
        printf("Poor!");
        break;
    default:
        printf("Invalid input!!!");
        break;
    }*

    /** --> Intro to loops
     * for loop
     * while loop
     * do-while loop
     */

    bool validInput = false;
    int userInput;

    do
    {
        printf("Enter any number from 0 - 9: ");
        scanf("%d", &userInput);

        if (userInput >= 0 && userInput < 10)
            validInput = true;

    } while (!validInput);

    printf("=> The number you entered is %d", userInput);

    return 0;
}
