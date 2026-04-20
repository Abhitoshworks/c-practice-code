#include <stdio.h>

int main() {
    int a = 5; 
    int* ptr = &a; //u'll get da address diff everytime u run after period of time
    printf("the address of variable a is %u\n",&a); 
    printf("the address of variable a is %u\n",ptr); //both will have same address
    ptr++; // now youll think address will increase by one but this is not how it works
           // it depends on the data type (int has 4 bytes) so it'll increase by 4
           // if it was char then i would've been increased by 1 (char = 1 bytes)
           printf("the address of variable a is %u\n",ptr); 

    return 0;
}