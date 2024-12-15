#include <stdio.h>

void update(int *arr, int index, int newValue){
    arr[index] = newValue;
}

void print(int *arr){
    for(int i=0; i<5; i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}

int main(){
    int arr[5] = {24, 30, 63, 83, 71};
    printf("mang ban dau: ");
    print(arr);
    
    update(arr, 4, 10);

    printf("\nmang sau cap nhat: ");
    print(arr);

    return 0;
}
