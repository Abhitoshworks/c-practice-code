//call by reference
#include <stdio.h>
int sum(int* , int* );
int sum(int* a, int* b){
    *a = 7;
    return (*a+*b);
}

int main() {
    int x = 3;
    int y = 2;
    printf("the sum is %d", sum(&x,&y));
    

    return 0;
}