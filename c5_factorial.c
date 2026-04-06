/*The logic:
 Factorial(n) = 1 x 2 x 3 … x n
Factorial(n) = 1 x 2 x3 … (n-1) x n
Factorial(n) = Factorial (n-1) x n*/
#include <stdio.h>
int factorial(int);
int factorial (int n){
if(n == 1 || n ==0){
    return 1;
}
return factorial (n-1)*n;}
int main(){
    int a = 5;
    printf("the factorial of %d is %d",a,factorial(a));
    return 0;
}