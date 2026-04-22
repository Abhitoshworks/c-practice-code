//Addition of a number to a pointer
#include <stdio.h>

int main() {
    int a = 3;
    int* ptr = &a ;
    int b = 4;
    int* ptr1 = &b;
    int sum = *ptr + *ptr1;
    printf("%d",sum);

    

    

    return 0;
}