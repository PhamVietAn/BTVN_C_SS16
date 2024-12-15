#include <stdio.h>

int addNew(int *arr, int *size, int newValue, int index){
    
    for(int i=*size; i>index; i--){
        arr[i]=arr[i-1];
    }
    arr[index] = newValue;
    (*size)++;
}

int main(){
    int arr[100] = {24, 83, 30, 63, 71};
    int size = 5;

    printf("Mang truoc khi them phan tu: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    addNew(arr, &size, 16, 1);

    printf("Mang sau khi them phan tu: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}