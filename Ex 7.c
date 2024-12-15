#include <stdio.h>

void sap_xep(int *arr){
    for(int i = 0; i < 5 - 1; i++){
        for(int j = 0; j < 5 - i - 1; j++){
            if(arr[j] > arr[j + 1]){
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int arr[5] = {24, 83, 30, 63, 71};

    printf("Mang truoc khi sap xep: ");
    for(int i = 0; i < 5; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");

    sap_xep(arr);

    printf("Mang sau khi sap xep: ");
    for(int i = 0; i < 5; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
