/*Level 1 (Syntax & Control *\Flow): The Smart Meter. Write a C program that calculates an electricity bill. Take an integer input for 'units consumed'.

For the first 100 units, charge ₹5 per unit.

For the next 100 units (101-200), charge ₹7 per unit.

For anything above 200 units, charge ₹10 per unit.

Requirement: Add a flat ₹50 "hardware maintenance fee" to the final total. Print the final bill.
*/
#include <stdio.h>
int main(){
    int units;
    float total,final_price;
    printf("enter the units: ");
    scanf("%d",&units);
    if(units<=100){
        total = 5*units;
    }
    else if(units>100 && units<=200){
        total = (100*5)+((units-100)*7);
    }
    else{
        total = (100*5)+(100*7)+((units-200)*10);
    }
            final_price = total+50;
    printf("%f",final_price);


    return 0;

}