#include <stdio.h>

int main() {
    int n, i, j, key;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];


    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for(i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;

        printf("\nPass %d:\n", i);
        printf("Key = %d\n", key);


        while(j >= 0 && arr[j] > key) {
            printf("Shifting %d from position %d to position %d\n", arr[j], j, j+1);
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = key;

        
        printf("Array after pass %d: ", i);
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