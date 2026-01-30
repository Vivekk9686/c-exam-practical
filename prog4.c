#include <stdio.h>

int main() {
    int arr[50], n, i;
    int *p; 

    printf("Enter number of elements (max 50): ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    p = arr;

    printf("\nThe cubes of the elements are:\n");
    for (i = 0; i < n; i++) {
        
        int cube = (*p) * (*p) * (*p);
        
        printf("Cube of %d = %d\n", *p, cube);

        p++;
    }

    return 0;
}
