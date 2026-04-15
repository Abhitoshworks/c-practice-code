//char in pointers
#include <stdio.h>
int main(){
    char i = 'A';
    char* j = &i ;
    float k = 5.45;
    float* k1 = &k;
    printf("the value at address of j is %d\n", *j);
    printf("the address of variable i is %p\n",&i); // you can use %u for integer address
    printf("the address of variable i is %p\n",j);
    printf("the address of k is %f",k1); //issue


    return 0;
}