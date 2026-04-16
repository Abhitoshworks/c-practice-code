// * aur & ek dusre ko kat dete hai
#include<stdio.h>
int main(){
    int i = 7;
    int* j = &i;
    int** k = &j;
    printf("%d",**k); //this wont tell the address but the value of k which is 7


    return 0;
}