/*/*Write a program to print the address of a variable. Use this address to get the
value of the variable. */
#include <stdio.h>
int main(){
    int i = 6;
    int* value = &i;
    printf("the address of i is %p\n",value);
    printf("the value on address i is %d", *value);

    return 0;
}
