//Write a program using recursion to calculate nth element of Fibonacci series.
/* Fibonacci series is  0 1 1 2 3 5 8 11
(n-2)+(n-1)*/

#include <stdio.h>
int fib(int);
int fib(int a){
    if(a == 0){
        return 0;
    }
    else if(a == 1){
    return 1;}
    return fib(a-2) + fib(a-1);

}

int main() {
    int x = 8;
    printf("the fibbonachi series of %d is %d", x , fib(x));
    printf("\n");
    for(int i = 0; i <= x; i++) {
        printf("%d ", fib(i));
    }

    return 0;
}