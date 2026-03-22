//. Write a program to check whether a given number is prime or not using loops.
#include <stdio.h>

int main() {
    int prime = 0;
    int i;
    int n = 5;

    for(i = 2; i < n; i++) {
        if(n % i == 0) {
            prime = 1;
            break;
        }
    }

    if(prime == 0)
        printf("%d is prime", n);
    else
        printf("%d is not prime", n);

    return 0;
}