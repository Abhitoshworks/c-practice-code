//first time interacting with pointers
//pointer stores address of a variable
#include <stdio.h>
int main(){
    int i = 77;
    int* j = &i ;
    printf("the address of variable i is %p\n",&i);
    printf("the address of variable i is %p\n",j);


    return 0;
}