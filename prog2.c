#include <stdio.h>

int findSum(int arr[], int n);

int main() 
{
    int numbers[100]; 
    int size, i, total;

    printf("Enter the number of elements: ");
    scanf("%d", &size);

    printf("Enter %d elements:\n", size);

    for(i = 0; i < size; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    total = findSum(numbers, size);

    printf("\nThe sum of the elements is: %d\n", total);

    return 0;
}


int findSum(int arr[], int n) {
    int sum = 0;
    int j; 
    
    for(j = 0; j < n; j++) {
        sum = sum + arr[j];
    }
    return sum;
}


