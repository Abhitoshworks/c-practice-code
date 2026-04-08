//Write a program using function to find average of three numbers.
#include<stdio.h>
float average(float a, float b,float c);
float average(float a, float b,float c){
    return (a+b+c)/3.0;
}
int main(){
    float a,b,c;
    printf("Enter the value of a: \n");
    scanf("%f",&a);
    printf("Enter the value of b: \n");
    scanf("%f",&b);
    printf("Enter the value of c: \n");
    scanf("%f",&c);
printf("%.2f",average(a,b,c));

    return 0;
}