#include<stdio.h>
int change(int a);  //parameter 
int change(int a){  
    a = 77;
    return 0;

}
int main(){
   int b = 22;
   change(b); // it will generate replica but will not change 
   printf("%d",b);  //the value of b is defined it would not change at any cost


    return 0;
}