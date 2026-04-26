//call by reference swapping 
#include <stdio.h>
int swap(int* ,int*);
int swap(int*a ,int*b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int a = 4;
    int b = 6;
    swap(&a,&b);
    printf("the value of a is %d and b is %d", a,b );

    return 0;
}