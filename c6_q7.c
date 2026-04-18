/*Try problem 3 using call by value and verify that it does not change the value of
the said variable */
#include<stdio.h>
int change_the_value(int);
int change_the_value(int a){
    a = a * 10;
    return 1;
}
int main(){
    int i = 2;
    printf("the value of i is %d\n",i);
    change_the_value(i); 
    printf("the value of i is %d\n",i);
//the value of i wont be 10 times or it wont change until we pass the address

    return 0;
}