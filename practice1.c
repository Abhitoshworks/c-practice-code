/*Write a C program that simulates a robot's motor speed ramping up.

Use a for loop or a while loop.

Start the speed at 0.

Increase the speed by 10 each iteration until it reaches 100.

Print the output exactly like this: Motor speed: 10%, Motor speed: 20%, etc., until 100%*/
#include<stdio.h>
int main(){
    int i;
    int n=100;
  
    for(i=0;i<=n;i+=10){
        printf("Motor speed is %d%\n",i);
    }

    return 0;
}