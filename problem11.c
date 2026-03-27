//Write a program to check whether a given number is prime or not using while loop.
#include<stdio.h>
int main(){
    int prime = 1; 
    int i = 2;
    int n ;
    printf("Enter the number n:");
    scanf("%d",&n);
    while(i<n){
        if(n%i==0){
            prime = 0;
        }
        i++;}
        if(prime){
            printf("%d is prime",n);
        }
        else{
            printf("%d is not prime",n);
        }
         


    return 0;
}