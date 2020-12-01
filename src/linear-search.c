#include <stdio.h>

// function prototypes
void print_numbers(int numbers[], int length);
void sort(int unsorted[], int length);
void swap(int *left, int *right);

int main(int argc, char *argv[])
{
	int numbers[10] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};

	int *pNumbers = numbers;

	// print the unsorted numbers
	print_numbers(numbers, 10);

	// sort low to high
	sort(numbers, 10);

	// print sorted numbers
	print_numbers(numbers, 10);


	return 0;
}

void print_numbers(int numbers[], int length)
{
	for (int i = 0; i < length; i++)
	{
		printf("%d ", *(numbers + i));
	}
}

void sort(int unsorted[], int length)
{
	int scan_count = 0;
	while (scan_count <= length)
	{
		for (int i = 0; i < length; i++)
		{
			if (*(unsorted + i) > *(unsorted + i + 1))
			{
				printf("scan count: %d, needs swap\n", scan_count);
				swap(unsorted + i, unsorted + i + 1);
			}
		}
		scan_count++;

	}
}

void swap(int *left, int *right)
{
	int temporary = *left;
	*left = *right;
	*right = temporary;
}