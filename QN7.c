#include<stdio.h>
#include<stdlib.h>

int binarySearch(int arr[], int target, int st, int end) {
   

    int mid = st + (end - st) / 2;

    if (arr[mid] == target) {
        return mid;
    }
    else if (arr[mid] > target) {
        return binarySearch(arr, target, st, mid - 1);
    }
    else {
        return binarySearch(arr, target, mid + 1, end);
    }
    return -1;
}

int main() {
    int size;
    printf("Enter array size:\n");
    scanf("%d", &size);

    int *arr = (int*)malloc(size * sizeof(int));
    printf("Now enter array elements:\n");

    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    int target;
    printf("Enter target:\n");
    scanf("%d", &target);

    int result = binarySearch(arr, target, 0, size - 1);

    if (result)
        printf("Found at index %d\n", result);
    else
        printf("Not found\n");

    free(arr);
    return 0;
}