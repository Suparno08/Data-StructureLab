#include<stdio.h>

int main(){
    int N, X, found = 0;

    printf("Enter The Number of Elements:\n");
    scanf("%d", &N);

    int arr[N];

    printf("Enter the elements:\n");
    for(int i = 0; i < N; i++){
        scanf("%d", &arr[i]);
    }

    printf("Enter Which Element You Want To Find:\n");
    scanf("%d", &X);

    for(int i = 0; i < N; i++){
        if(arr[i] == X){
            printf("Found The Element At Index %d\n", i);
            found = 1;
            break;
        }
    }

    if(!found){
        printf("Element Not Found\n");
    }

    return 0;
}
