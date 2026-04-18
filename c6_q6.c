/*Write a program to print the value of a variable i by using “pointer to pointer” type
of variable. */
#include<stdio.h>
int main(){
    int i = 2;
    int* k = &i;
    int** d = &k;
    printf("value of i is %d\n", *k);
    printf("value of i is %d", **d);

    return 0;
}