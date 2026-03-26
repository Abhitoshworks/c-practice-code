//8. Write a program to calculate the factorial of a given number using a for loop
#include<stdio.h>
int main(){
    int i;
    int n = 5;
    int product = 1;
    for(i=1;i<=n;i++){
        product *= i;
    }
    printf("%d",product);



    return 0;
}