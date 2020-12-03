#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// sorts the array from low to high using bubble sort
void bubble_sort(int unsorted[], int length);

// populates an empty array with worst case unsorted values
void populate_test_array(int empty_array[], unsigned int length);

// prints the elements of an int array to the console
void print_numbers(int numbers[], int length);

// swaps the values
void swap(int *value1, int *value2);


int main(int argc, char *argv[])
{
    const int TEST_LENGTH = 100;

    int numbers[TEST_LENGTH] = {0};

    populate_test_array(numbers, TEST_LENGTH);

    bubble_sort(numbers, TEST_LENGTH);

    return 0;
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
        print_numbers(unsorted, length);
    }

}

void populate_test_array(int empty_array[], unsigned int length)
{
    int digits[10] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};

    int digit = 9;    // high to low

    for (int i = 0; i < length; i++)
    {
        *(empty_array + i) = digit;
        if (digit == 0)
        {
            digit = 9;
        }
        else
        {
            digit--;
        }
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

void swap(int *value1, int *value2)
{
    // temporarily store the value
    int temp_value = *value1;

    *value1 = *value2;
    *value2 = temp_value;
}