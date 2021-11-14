#include <stdio.h>
#include <stdlib.h>
/* Sort an integer array in the ascending
 * order by using the qsort function. */
int compar (const void* p1, const void* p2)
{
    int i1 = *(int*)p1;
    int i2 = *(int*)p2;

    if (i1 < i2)
        return -1;
    else if (i1 == i2)
        return 0;
    else if (i1 > i2)
        return 1;
}

int main()
{
    int vals[5] = {3, 5, 1, 4, 2};

    printf("initial array:\t");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", vals[i]);
    }
    printf("\n");

    qsort(vals,
          sizeof(vals) / sizeof(int),
          sizeof(int),
          compar);
    
    printf("sorted array:\t");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", vals[i]);
    }
    printf("\n");

    return 0;
}
