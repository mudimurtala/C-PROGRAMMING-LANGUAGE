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

// #include <stdio.h>

// void sum(float, float);

// void main()
// {
//     float x, y;
//     printf("Enter x :");
//     scanf("%f", &x);
//     printf("Enter y :");
//     scanf("%f", &y);
//     sum(x, y);
// }

// void sum(float a, float b)
// {
//     float s = 0;
//     s = a + b;
//     printf("Sum = %f\n", s);
// }

// #include <stdio.h>

// int incr(int i)
// {
//     static int count = 0;
//     count = count + i;
//     return (count);
// }

// int main()
// {
//     int i, j;
//     for(i = 0; i <= 4; i++);
//         j = incr(i);
//     printf("j = %d\n", j);
//     return 0;
// }

// #include <stdio.h>

// int r()
// {
//     static int num = 7;
//     return num--;
// }

// int main()
// {
//     for(r(); r(); r())
//         printf("%d ", r());
//     return 0;
// }

// #include <stdio.h>

// void f(int *p, int m)
// {
//     m = m + 5;
//     *p = *p + m;
//     return;
// }

// void main()
// {
//     int i = 5, j = 10;
//     f(&i, j);
//     printf("%d\n", i + j);
// }

// #include <stdio.h>

// int arg(int[], float);

// void main()
// {
//     float average;
//     int marks[5] = {10, 15, 20, 30, 45};
//     average = arg(marks, 5);
//     printf("arg is %f\n", average);
// }

// int arg(int marks[], float a)
// {
//     int i, sum = 0;
//     float average = 0;
//     for(i = 0;i < a; i++)
//     {
//         sum = sum + marks[i];
//         average = sum/a;
//     }
// }

// #include <stdio.h>

// int avg(int[], int);

// void main()
// {
//     int marks[5] = {10, 20, 30, 40, 50}, size, average;
//     size = sizeof(marks)/sizeof(marks[0]);
//     average = avg(marks, size);
//     printf("average = %d\n", average);
//     printf("Inside main size of array is (in bytes) : %ld\n", sizeof(marks));
// }

// int avg(int marks1[], int size)
// {
//     int i, sum, average;
//     for(i = 0; i < size; i++)
//     {
//         sum = sum + marks1[i];
//     }
//     average = sum/size;
//     printf("Inside avg function size of array is (in bytes) : %ld\n", sizeof(marks1));

//     return average;
// }

// #include <stdio.h>

// void modify(char[], char[]);

// void main()
// {
//     char str1[] = "jenny";
//     char str2[] = "khatri";
//     modify(str1, str2);

// }

// void modify(char str1[], char str2[])
// {
//     int i, l = 0;
//     for(i = 0; str1[i] != '\0'; i++)
//     {
//         l = l + 1;
//     }
//     str2[1] = 'z';
//     printf("Length of string 1 is : %d\n", l);
//     printf("Both the strings are : %s and %s\n", str1, str2);
// }

// #include <stdio.h>

// void modify(char*, char*);

// void main()
// {
//     char str1[] = "jenny";
//     char str2[] = "khatri";
//     modify(str1, str2);

// }

// void modify(char* str1, char* str2)
// {
//     int i, l = 0;
//     for(i = 0; str1[i] != '\0'; i++)
//     {
//         l = l + 1;
//     }
//     str2[1] = 'z';
//     printf("Length of string 1 is : %d\n", l);
//     printf("Both the strings are : %s and %s\n", str1, str2);
// }

// #include <stdio.h>

// char* display();

// void main()
// {
//     char* str;
//     str = display();
//     str[0] = 'z';
//     printf("String is : %s\n", str);
// }

// char* display()
// {
//     static char str[] = "jenny";
//     return str;
// }

// #include <stdio.h>

// int* returnPointer(int[]);

// void main()
// {
//     int a[] = {1, 2, 3, 4, 5}, *p;
//     p = returnPointer(a);
//     printf("%d\n", *p);
// }

// int* returnPointer(int a[])
// {
//     a = a + 2;
//     return a;
// }

// #include <stdio.h>

// void f(int* p, int* q)
// {
//     p = q;
//     *p = 2;
// }
// int i = 0, j = 1;
// int main()
// {
//     f(&i, &j);
//     printf("%d : %d\n", i, j);
//     getchar();
//     return 0;
// }

// #include <stdio.h>

// int sum(int, int);

// void main()
// {
//     int s = 0;
//     int (*ptr)(int, int) = sum;
//     s = ptr(82,2);
//     printf("Sum = %d\n", s);
// }
// int sum(int a, int b)
// {
//     return a + b;
// }


// #include <stdio.h>

// int sum(int, int);

// void main()
// {
//     int s = 0;
//     //int (*ptr)(int, int) = &sum;
//     s = sum(20,2);
//     printf("Sum = %d\n", s);
// }
// int sum(int a, int b)
// {
//     return a + b;
// }

// #include <stdio.h>

// void sum(int a, int b)
// {
//     printf("Sum = %d\n", a + b);
// }

// void sub(int a, int b)
// {
//     printf("Sub = %d\n", a - b);
// }

// void display(void (*fptr)(int, int))
// {
//     fptr(9, 1);
// }

// void main()
// {
//     display(sum);
//     display(sub);
// }

// #include <stdio.h>
// #include <stdlib.h>

// int main()
// {
//     //size --> what do we put?
//     //void* --> how can we get a stronger type?
//     printf("%lu\n", sizeof(int) * 10);
//     int count = 20;
//     int* array = malloc(sizeof(int) * count);

//     if (array == NULL)
//     {
//         printf("Memory allocation failled.\n");
//         return 1;
//     }

//     count++;
//     int* array2 = realloc(array, sizeof(int) * count);
//     if (array2 == NULL)
//     {
//         printf("New Memory allocation failled...\n");
//         return 1;
//     }
//     else
//     {
//         array = array2;
//     }


//     for (int i = 0; i < count; i++)
//     {
//         array[i] = i;
//     }

//     for (int i = 0; i < count; i++)
//     {
//         printf("%i ", array[i]);
//     }

//     printf("\n");

//     free(array);
//     return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>

// void memory_hog(int size);

// int main(void)
// {
//     int *a = malloc(sizeof(int) * 10);

//     for (int i = 0; i < 10; i++)
//     a[i] = 10 - i;

//     for (int i = 0; i < 10; i++)
//     printf("a[%d] = %d\n", i, a[i]);
//     printf("\n");
//     printf("a: %p\n", a);
//     free(a);
    

//    //while (1)
//    memory_hog(128000);
//     return 0;
// }

// void memory_hog(int size)
// {
//     int *a = malloc(size);
//     free(a);
// }

#include <stdlib.h>


char *create_array(unsigned int size, char c)
{
    char *ptArray;
    unsigned int count;

    /* allocating enough space for all array members */
    ptArray = (char *)malloc(size * sizeof(char));

    /* put a char c in each of the memory locations */
    for (count = 0; count < size; count++)
    {
        /* assign the char to the specific memory location */
        ptArray[count] = c;
    }
    return (ptArray);
}

// #include <stdlib.h>

// char *_strdup(char *str)
// {
//     char *ptStr;
//     /* get length of str */
//     int str_len = 0;
//     while (str[str_len] != '\0')
//     {
//         str_len++;
//     }
//     /* determine size and allocate enough memory for it */
//     ptStr = malloc((str_len * sizeof(char)) + 1);

//     /* check if malloc doesn't return NULL */
//     if (ptStr == NULL)
//     {
//         return NULL;
//     }

//     /* copy the str to the new loction */
//     int count;
//     for (count = 0; str[count] != '\0'; count++)
//     {
//         ptStr[count] = str[count];
//     }

//     ptStr[count] = '\0';

//     return (ptStr);
// }

