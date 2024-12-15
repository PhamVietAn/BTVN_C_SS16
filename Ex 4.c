#include <stdio.h>

void print(int *arr){
    printf("cac phan tu cua mang: ");
    for(int i=0; i<10; i++){
        printf("%d ", *(arr+i));
    }
}

int main(){
    int arr[10] = {24, 4, 30, 3, 63, 83, 30, 10, 8, 12};
    print(arr);
    printf("\n");
}