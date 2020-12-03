#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// convert a long to an array of each digit
long* array_from_long(long value);

// sorts the array from low to high using bubble sort
void bubble_sort(int unsorted[], int length);

// prints the elements of an int array to the console
void print_numbers(int numbers[], int length);

// prints the elements of a long array to the console
void print_big_numbers(long *numbers, long length);

// swaps the values
void swap(int *value1, int *value2);

int main(int argc, char *argv[])
{
    // test numbers to be sorted
    int numbers[10] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};

    print_numbers(numbers, 10);
    bubble_sort(numbers, 10);

    long *big_numbers = array_from_long(12345);
    //print_big_numbers(&big_numbers, 12345);

    printf("%ld\n", *big_numbers);




    return 0;
}


long* array_from_long(long value)
{
    long temp_value = value;
    long *split_value = malloc(sizeof(split_value) * value);
    for (long i = value - 1; i >= 0; i--)
    {
        *(split_value + i) = temp_value % 10;    // the last digit
        temp_value /= 10;    // drop the last digit
    }

    return;
}   

void bubble_sort(int unsorted[], int length)
{
    /**
     * pseudocode:
     * - while the list is not sorted (considered sorted if the loop
     *   completes a scan without needing to swap)
     *   - loop through each element in array
     *     - if the value at element i is less than the value at i + 1,
     *       sorted, next...
     *     - else use the swap function to sort the values
     * - 
     */

    bool is_sorted = false;
    while (!is_sorted)
    {
        unsigned long swap_count = 0;
        for (int i = 0; i < length - 1; i++)
        {
            if (unsorted[i] > unsorted[i + 1])
            {
                swap(&unsorted[i], &unsorted[i + 1]);
                swap_count++;
            }
        }
        
        if (swap_count == 0)
        {
            is_sorted = true;
        }
        // test
        print_numbers(unsorted, 10);
    }

}

void print_numbers(int numbers[], int length)
{
    for (int i = 0; i < length; i++)
    {
        printf("%d", numbers[i]);
    }

    printf("\n");
}

void print_big_numbers(long *numbers, long length)
{
    for (long i = 0; i < length; i++)
    {
        printf("%ld", *(numbers + i));
    }

    printf("\n");
}

void swap(int *value1, int *value2)
{
    // temporarily store the value
    int temp_value = *value1;

    *value1 = *value2;
    *value2 = temp_value;
}