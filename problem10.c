//Write a program to check whether a given number is prime or not using loops.
#include<stdio.h>
int main(){
    int prime = 0;
    int i;
    int n ;
    printf("Enter the number n: ");
    scanf("%d",&n);
    for(i=2;i<n;i++){
        if(n%i==0){
        prime = 1;
        
        }
    }
    if(prime){
        printf("%d is not prime number",n);
        
    }
    else{
        printf("%d is prime",n);
    }


    return 0;
}