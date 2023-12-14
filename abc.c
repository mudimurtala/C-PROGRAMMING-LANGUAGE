// #include <stdio.h>
// int main()
// {
//     int a;
//     int *p;
//     a = 10;
//     p = &a;
//     *p = 12;
//     int b = 20;
//     *p = b;
//     printf("%d\n", p);
//     printf("%d\n", *p);
//     printf("%d\n", &a);



// }

// #include <stdio.h>

// int main()
// {
//     int a = 1025;
//     int *p;
//     p = &a;
//     printf("Size of integer is %ld\n",sizeof(int));
//     printf("%p, %d\n", p, *p);


//     return 0;
// }

#include <stdio.h>

void sum()
{
    int a, b, sum = 0;
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);
    sum = a + b;
    printf("Sum = %d", sum);
}

void main()
{
    sum();
    printf("Hello");
    sum();
    sum();
}

