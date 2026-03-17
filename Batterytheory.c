/*Level 2 (Logic & Manipulation): The Battery Drain
Initialize an integer battery = 100. Write a while loop that decreases the battery by 7% each cycle (simulate this by just subtracting 7 from the integer).

Print "Battery at X%" during each loop.

The loop must stop before the battery drops below 15%.

Once the loop breaks, print exactly: "Critical Warning: Battery too low. Entering sleep mode."
*/
#include<stdio.h>
int main(){
    int battery = 100;
    while(battery>15){
        battery = battery-7;
        printf("The battery after drain is %d\n",battery);
        
             }
             printf("Critical warning battery is low");


    return 0;
}