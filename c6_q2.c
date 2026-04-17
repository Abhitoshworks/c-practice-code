/*Write a program having a variable ‘i’. Print the address of ‘i’. Pass this variable to
a function and print its address. Are these addresses same? Why? */
#include <stdio.h>
int value(int* a);
int value(int* a){
    printf("the address of variable a is %u\n",a);
}

int main(){
    
    int i = 6;
    
    printf("the address of variable i is %u\n",&i);
    value(&i);
    

    return 0;
}