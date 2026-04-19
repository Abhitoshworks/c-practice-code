#include<stdio.h>
int main(){
    int marks[90]; //reservers space for integer all the way upto 90
     marks[1] = 45;
     marks[2] = 55; //you can got till marks[89] not 90 
    printf("the value of marks 1 and 2 is %d and %d\n",marks[1],marks[2]);

    return 0;
}