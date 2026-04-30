#include <stdio.h>

int main() {
    int n, i, j, min_index, temp;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];


    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    
    for(i = 0; i < n - 1; i++) {
        min_index = i;

        
        for(j = i + 1; j < n; j++) {
            if(arr[j] < arr[min_index]) {
                min_index = j;
            }
        }

        
        printf("\nPass %d:\n", i + 1);
        printf("Minimum element = %d (at position %d)\n", arr[min_index], min_index);
        temp = arr[i];
        arr[i] = arr[min_index];
        arr[min_index] = temp;

        
        printf("Array after pass %d: ", i + 1);
        for(int k = 0; k < n; k++) {
            printf("%d ", arr[k]);
        }
        printf("\n");
    }

   
    printf("\nSorted array: ");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}