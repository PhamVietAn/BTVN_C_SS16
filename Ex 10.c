#include <stdio.h>

void deleteIndex(int *arr, int *size, int index){
    for(int i = index; i < *size; i++){
        arr[i] = arr[i+1];
    }
    (*size)--;
}

int main(){
    int arr[100] = {24, 83, 30, 63, 71};
    int size = 5;

    printf("Mang truoc khi xoa phan tu: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    deleteIndex(arr, &size, 4);

    printf("Mang sau khi xoa phan tu: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

}