#include <math.h>
#include <stdio.h>

float cb_square(int num)
{
    return num * num;
}

float cb_cube(int num)
{
    return num * num * num;
}

float cb_square_root(int num)
{
    return sqrt(num);
}

typedef float (*op_t)(int);

/* Define a calculate function that takes in
 * an integer and an operation.
 *
 * The function should return the result of
 * the operation on the integer. */
float calc(int num, op_t op)
{
    return op(num);
}

int main()
{
    printf("square:\t%.2f\n", calc(5, cb_square));
    printf("cube:\t%.2f\n", calc(5, cb_cube));
    printf("sqrt:\t%.2f\n", calc(5, cb_square_root));

    return 0;
}
