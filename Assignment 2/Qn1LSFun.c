#include<stdio.h>

int LinearSearch(int a, int b, int arr[]){
    for(int i = 0; i < a; i++){
        if(arr[i] == b){
            printf("%d",i);   
            return i;
        }
    }
    return -1;
}

int main(){
    int N, X;

    printf("Enter The Number:\n");
    scanf("%d", &N);

    int arr[N];

    printf("Enter array elements:\n");
    for(int i = 0; i < N; i++){
        scanf("%d", &arr[i]);
    }

    printf("Enter target:\n");
    scanf("%d", &X);

    LinearSearch(N, X, arr);   

    return 0;
}
