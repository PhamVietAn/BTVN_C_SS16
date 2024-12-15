#include<stdio.h>

void result(int a, int b, int *sum){
    *sum = a + b; 
}

int main(){
    int a = 83, b = 24, sum;
    printf("gia tri a: %d, gia tri b: %d", a, b);
    result(a, b, &sum);
    printf("\ntong a va b: %d\n",sum ); 

    return 0;
}
