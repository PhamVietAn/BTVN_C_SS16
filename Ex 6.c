#include <stdio.h>

int timKiem(int *arr, int value){
    for(int i=0; i<5; i++){
        if(arr[i]==value){
            return i;
        }
    }
    return -1;
    
}

int main(){
    int arr[5] = {24, 30, 63, 83, 71};
    int findValue;
    printf("nhap phan tu can tim kiem: ");
    scanf("%d", &findValue);
    int viTri = timKiem(arr, findValue);
    if(viTri != -1){
        printf("phan tu %d duoc tim thay tai vi tri %d\n", findValue, viTri);
    }else{
        printf("phan tu %d khong duoc tim thay trong mang\n", findValue);
    }
}