//Write a recursive function to calculate the sum of first ‘n’ natural numbers.
#include<stdio.h>
//n = 1+2+3+5.........(n-1), (n)
int sum_natural(int n);
int sum_natural(int n){
    if(n==1){
        return 1;
    }
    return sum_natural(n-1)+ n;  //doubt:return sum_natural(n-1)+sum_natural(n)
}
int main(){
    int n = 5; 
    printf("%d, %d",n,sum_natural(n));

    return 0;
}