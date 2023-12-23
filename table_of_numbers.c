#include <stdio.h>

void main()
{
    int num, i, prod;

    printf("Enter a number: ");
    scanf("%d", &num);

    for (i = 1; i <= 12; i++)
    {
        prod = num * i;
        printf("%d x %d = %d\n", num, i, prod);
    }
}