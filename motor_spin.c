/*Goal: Accelerate a motor from 0 RPM to a user-defined target_speed in increments of 50.*/
#include<stdio.h>
int main(){
    int speed,target;
    printf("Enter the target: ");
    scanf("%d",&target);
    for(speed = 0;speed<target;speed +=50){
    printf("current speed is %d\n",speed);
   
    }
     printf("you have reached the limit\n");
    return 0;
}