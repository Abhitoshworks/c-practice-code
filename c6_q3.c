/*Write a program to change the value of a variable to ten times of its current
value */
#include<stdio.h>
int change_the_value(int*);
int change_the_value(int* a){
    *a = *a * 10;
    return 1;
}
int main(){
    int i = 2;
    printf("the value of i is %d\n",i);
    change_the_value(&i); //why not i why &i
    printf("the value of i is %d\n",i);


    return 0;
}