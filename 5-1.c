// Joshua Mayes
// 5-1
// 2024-02-22
#include <stdio.h>

int main()
{
    int n[10];
    int i, j;

    /* initialize elements of the array */
    for (i = 0; i < 10; i++)
    {
        n[i] = i + 100;
    }

    /* output each array element's value */
    for (j = 0; j < 10; j++)
    {
        printf("Element[%d] = %d\n", j, n[j]);
    }

    /* output the tenth element again */
    printf("Element[9] = %d\n", n[9]);

    return 0;
}
