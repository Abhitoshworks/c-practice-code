#include<stdio.h>
void swap(int* a,int* b);
void swap(int* a,int* b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
int main(){
    int a = 5 , b = 6;
    swap(&a,&b); //value will be swapped through address
    printf("the value of a is %d and the value of b is %d", a,b);

    return 0;
}