/*Write a program using a function which calculates the sum and average of two
numbers. Use pointers and print the values of sum and average in main().  */
#include<stdio.h>
float calculate(int a,int b,int* sum,float* avg);
float calculate(int a,int b,int* sum,float* avg){  //whynot int* a and int* b
    *sum = a + b;
    *avg = (a+b)/2.0; 
    }
int main(){
    int x = 2;
    int y = 8;
    int sum;
    float avg;
    calculate(x,y,&sum,&avg);
    printf("%d\n",sum);
    printf("%f",avg);


    return 0;
}