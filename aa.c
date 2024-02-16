#include <stdlib.h>
#include <stdio.h>

/**
 * print_array - Prints an array of integers
 *
 * @array: The array to be printed
 * @size: Number of elements in @array
 */
void print_array(const int *array, size_t size)
{
    size_t i;

    i = 0;
    while (array && i < size)
    {
        if (i > 0)
            printf(", ");
        printf("%d", array[i]);
        ++i;
    }
    printf("\n");
}

int main() {
    // Define an array of integers
    int numbers[] = {10, 20, 30, 40, 50};
    // Calculate the size of the array
    size_t size = sizeof(numbers) / sizeof(numbers[0]);
    printf("%ld\n", size);
    // Call the print_array function with the numbers array
    print_array(numbers, size);

    return 0;
}
