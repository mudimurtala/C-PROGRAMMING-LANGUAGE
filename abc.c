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

// #include <stdio.h>

// void sum()
// {
//     int a, b, sum = 0;
//     printf("Enter two numbers: ");
//     scanf("%d%d", &a, &b);
//     sum = a + b;
//     printf("Sum = %d", sum);
// }

// void main()
// {
//     sum();
//     printf("Hello");
//     sum();
//     sum();
// }

// #include <stdio.h>

// void sum(); // function declaration
// void main()
// {
//     sum(); // function calling
// }

// void sum()
// {
//     int a, b, sum = 0;
//     printf("Enter two numbers: ");
//     scanf("%d%d", &a, &b);
//     sum = a + b;
//     printf("Sum = %d\n", sum);
// }

// #include <stdio.h>

// void fun(int*, int*);
// void main()
// {
//     int x = 5, y = 7;
//     fun(&x, &y);
//     printf("Inside main(calling function)\n");
//     printf("x = %d y = %d\n", x,y);
// }

// void fun(int* x, int* y)
// {
//     *x = 7;
//     *y = 5;
//     printf("Inside fun(called function)\n");
//     printf("x = %d y = %d\n", *x,*y);
// }

// #include <stdio.h>

// void sum(void);

// void main()
// {
//     sum();
// }

// void sum()
// {
//     int a = 5, b = 7, sum = 0;
//     sum = a + b;
//     printf("Sum = %d\n", sum);
// }

// #include <stdio.h>

// int sum(void);

// void main()
// {
//     int s;
//     s = sum();
//     printf("sum = %d\n", s);

// }

// int sum()
// {
//     int a = 5, b = 7, sum = 0;
//     sum = a + b;
//     return sum, b, a, sum;
// }

#include <stdio.h>

void sum(float, float);

void main()
{
    float x, y;
    printf("Enter x and y : ");
    scanf("%f%f\n", &x, &y);
    sum(x, y);
}

void sum(float a, float b)
{
    float s = 0;
    s = a + b;
    printf("Sum = %f", s);
}