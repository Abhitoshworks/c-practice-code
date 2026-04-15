//pointer stores address of a variable
#include <stdio.h>
int main(){
    int i = 77;
    int* j = &i ;
    printf("the value at address of j is %d\n", *j);
    printf("the address of variable i is %p\n",&i); // you can use %u for integer address
    printf("the address of variable i is %p\n",j);


    return 0;
}