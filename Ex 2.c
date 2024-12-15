#include<stdio.h>

void changeCount(int *a, int *b){
      int temp = *a;
    *a = *b;
    *b = temp; 
}

int main(){
    int a = 83, b = 24;
    printf("truoc khi hoan doi: \na = %d\nb = %d\n", a, b);
    changeCount(&a, &b);
    printf("\nsau khi hoan doi: \na = %d\nb = %d\n", a, b); 

    return 0;
}
