#include <stdio.h>

int main(int argc, char const *argv[])
{
    /** --> 1a. Introduction to Array
     * - Valid declaration is as follows,
     * "data_type var[size_const]"
     * E.g. int scores[20];
     *
     * - The address of an array variable is the address
     * of the first element in the array.
     * - Index of a certain element is,
     * i = 0 + (size - 1)
     * - To obtain the address of a certain index, we
     * can say, "B + idx * size_of_data", where
     * B = address of base (first) element
     *
     * - The size of an array is fixed
     */

    /*
    int size = 5, myList[size], i;

    printf("Enter five different values\n");

    for (i = 0; i < size; i++)
    {
        printf("Value %d: ", i + 1);
        scanf("%d", myList + i);

        while (getchar() != '\n')
            ;
    }

    printf("-----------------------");
    for (i = 0; i < size; i++)
    {
        printf("Value %d: %d\n", i + 1, myList[i]);
    }
    */

    /** 1b. Operations in array
     * - Traversing
     * - Insertion
     * - Deletion
     * - Searching
     * - Sorting
     *
     * - Time const. for program xcution e.g insertion
     * in array
     */

    /*--------Traversing*/
    int size = 5, myList[size], i;

    printf("Enter five different values\n");

    for (i = 0; i < size; i++)
    {
        printf("Value %d: ", i + 1);
        scanf("%d", &myList[i]);

        while (getchar() != '\n')
            ;
    }

    printf("-----------------------");
    for (i = 0; i < size; i++)
    {
        printf("Value %d: %d\n", i + 1, myList[i]);
    }

    return 0;
}
