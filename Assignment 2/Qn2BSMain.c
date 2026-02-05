#include <stdio.h>
int main() {
    int n, target;
    int result = -1;
    printf("Enter the size of array:\n");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the sorted elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the element to search:\n");
    scanf("%d", &target);
    int start = 0;
    int end = n - 1;
    while (start <= end) {
        int mid = start + (end - start) / 2;
        if (arr[mid] == target) {
            result = mid;
            end = mid - 1;
        }
        else if (arr[mid] < target) {
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }
    }
    if (result != -1) {
        printf("Found The Element At Index %d\n", result);
    } else {
        printf("Element Not Found\n");
    }
    return 0;
}