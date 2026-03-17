//Write a while loop that counts from 1 to 20, but only prints the even numbers (2, 4, 6... 20).
#include <stdio.h>
int main(){
    int i=1;
    while(i<=20){
        if(i%2==0){
            printf("the value of i is %d\n",i);
        }
        i++;

    }




    return 0;
}