#include <stdio.h>
void swap(int *, int *);

int divide(int a, int b, int *result)
{
    if (b == 0)
    {
        return 1;
    }
    *result = a / b;
    return 0;
}
int main()
{
    int a = 10;
    int b = 20;
    printf("before swapping the values a=%d,b=%d\n", a, b);
    swap(&a, &b);
    printf("after swapping the values a=%d,b=%d", a, b);
    int result;
    int status = divide(6, 1, &result);
    if (status != 0)
    {
        printf("/nError: %d", status);
    }
    else
    {
        printf("\ndivide: %d", result);
    }
}

void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
    printf("after swapping values in function x=%d,y=%d\n", *x, *y);
}