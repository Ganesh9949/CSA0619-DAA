#include <stdio.h>

int main() {
    int arr[100];  
    int n, max;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a valid array size.\n");
        return 1;  
    }

    printf("Enter the elements of the array:\n");

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    max = arr[0]; 

    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i]; 
        }
    }

    printf("The largest element in the array is: %d\n", max);

    return 0; 
}

