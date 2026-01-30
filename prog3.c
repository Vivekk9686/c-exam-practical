#include <stdio.h>

void reverseAndSum(int arr[], int size);

int main() 
{
    int n, i,size;
    int numbers[100];

    printf("Enter the number of elements (up to 100): ");
    scanf("%d", &size);

    printf("Enter %d elements:\n", size);
    for (i = 0; i < size; i++) 
	{
        printf("Element %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    reverseAndSum(numbers, size);

    fflush(stdin);
    getchar();
    getchar();

    return 0;
}

void reverseAndSum(int arr[], int n) 
{
    int i, sum = 0;

    printf("\nElements in Reverse Order:\n");
 
    for (i = n - 1; i >= 0; i--) 
	{
        printf("%d ", arr[i]);
        sum = sum + arr[i]; 
    }

    printf("\n\nSum of all elements: %d\n", sum);
}

