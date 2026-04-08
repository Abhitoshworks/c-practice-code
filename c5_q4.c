//Write a program using recursion to calculate nth element of Fibonacci series.
#include<stdio.h>
//fibonacci series  0 1 1 2 3 5 8 13
//fibonacci_series(n) = (n-1) + (n-2)
int fibonacci(int n);
int fibonacci(int n){
    if(n==1){
        return 1;
    }
    else if (n==0)
    {
        return 0;
    }
    
    return fibonacci(n-1) + fibonacci(n-2);
}
int main(){
    int n = 3;
    printf("%d is the value at that position %d",fibonacci(n),n);
    return 0;
}