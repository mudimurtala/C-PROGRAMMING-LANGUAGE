#include <stdio.h>

// int sum(int num1, int num2)
// {
//     int result = num1 + num2;
//     return result;
// }

// int mul(int num1, int num2)
// {
//     int result = num1 * num2;
//     return result;
// }

int main()
{
    int sumResult = sum(5, 10);
    int mulResult = mul(5,10);
    printf("%d and %d", sumResult, mulResult);
    return 0;
}