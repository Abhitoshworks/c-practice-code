//Write a function and pass the value by reference.
#include<stdio.h>
int change(int* a);
int change(int* a){
    *a = 20; 
}
int main(){
    int i = 10;
    change(&i);
    printf("the value of i is %d",i);


    return 0;
}