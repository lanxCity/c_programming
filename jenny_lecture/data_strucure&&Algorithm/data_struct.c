#include <stdio.h>
#include <string.h>

#define SIZE 50

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
     * - Time const. (or cmplx) for program xcution e.g insertion
     * in array
     */

    /**--------Traversing
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
    */

    /**---> Array sorting algorithm*/
    /*
    int size;
    int myArr[SIZE] = {23, 1, 1, 1, 100, 2, 2, 2, 19, 15};

    for (size = 0; myArr[size] != '\0'; size++)
        printf("Index %d: %d\n", size + 1, size[myArr]);

    printf("------------------------------------\n");

    /*
    int count = 0;

    while (count < size)
    {
        int lowest = myArr[count];
        int lowest_idx;

        for (int i = count; i < size; i++)
        {
            if (myArr[i] <= lowest)
            {
                lowest = myArr[i];
                lowest_idx = i;
            }
        }

        int init_el_at_count = myArr[count]; // storing element to be swapped with new lowest element

        myArr[count] = lowest;
        myArr[lowest_idx] = init_el_at_count;

        count++;
    }

    for (int i = 0; i < size && myArr[i] != '\0'; i++)
        printf("Index %d: %d\n", i + 1, myArr[i]);

    */

    /**2a. Pointers -------------------
     * a[2] == p[2] == *(a + 2) == *(p + 2)
     * *(a + 4) == *(4 + a) == 4[a] == a[4]
     *
     * NB:
     * a == &a
     * a + 1 != &a + 1
     *
     * a + 1 -> is the addr of next el in the array
     * &a + 1 -> is the next addr after the whole array
     *
     * However,
     * &a[i] == a + i
     */

    /*
    int *p;

    p = myArr;

    myArr[1] = 24;
    p[2] = 24;

    *myArr = 15;
    *p = 12;

    *(myArr + 4) = 15;
    *(p + 5) = 212;

    *(5 + p) = 102;
    5 [p] = 504;

    for (size = 0; myArr[size] != '\0'; size++)
        printf("Index %d: %d\n", size + 1, size[myArr]);

    printf("--------------\n");
    printf("myArray address (a): %p\n", myArr);
    printf("myArray address (&a): %p\n", &myArr);
    printf("myArray address (a + 1): %p\n", myArr + 1);
    printf("myArray address (a + 9): %p\n", myArr + 9);
    printf("myArray address (&a + 1): %p\n", &myArr + 1);
    printf("Value *(a + 1): %d\n", *(myArr + 1));
    printf("Value *a + 1: %d\n", *myArr + 1);
    printf("myArray address (&a + 1): %p\n", &p);
    printf("myArray address (&a + 1): %p\n", &p + 1);
    printf("myArray address (&a + 1): %p\n", &p[1]);

    */

    /** 2b. 2-Dimensional Arrays  --------
     * Declarations at
     * -> int a[i][j]
     * -> int a[][j]
     *
     * -> int a[i][] --------> Very wrong
     *

    int a[3][3] = {
        {23, 1, 1},
        {1, 100, 2},
        {2, 2, 19}};
    int b[][3] = {
        {23, 1, 1},
        {1, 100, 2},
        {2, 2, 19}};

    int c[2][3];
    int d[3][3];

    /*
        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                printf("Enter value at row %d col %d: ", i, j);

                scanf("%d", c[i] + j);
            }
        }

    *
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Enter value at row %d col %d: ", i, j);

            scanf("%d", &d[i][j]);
        }
    }
    */

    int c[2][3];

    printf("------------------------------------\n");

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
            printf("%d\n", c[j][i]);
    }

    return (0);
}