#include <stdio.h>

    int sum(int* ,int* );
    int sum(int* a,int* b){
        *a = 6;
        return (*a + *b);
    }
    int main(){
        int x = 5;
        int y = 6;
        printf("the sum is %d\n", sum(&x,&y));
        printf("%d\n",x); //usually the value of x would be 5 but its change to 6 with the help of address


    return 0;
}