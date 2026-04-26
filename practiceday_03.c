//factorial recursion practice
#include <stdio.h>
int fact(int);
int fact(int a){
    if(a==0||a==1){
        return 1;
    }

return a*fact(a-1);} //da main point here

int main() {
    int x = 5;
    printf("the factorial of %d is %d",x,fact(x));
    

    return 0;
}