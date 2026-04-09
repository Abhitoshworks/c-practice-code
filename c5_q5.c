/* What will the following line produce in a C program:*/
#include<stdio.h>
int main(){
int a = 4;
printf("%d %d %d \n", a, ++a, a++); //the output wont be 4 5 5 because we evaluate it from right to left
return 0;} //the output will be  4 6 6