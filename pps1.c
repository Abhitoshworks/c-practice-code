//Write a program to print multiplication table of a given number n
#include<stdio.h>
int main(){
    int n,i;
    printf("Enter the number: ");
    scanf("%d",&n);
    
    for(i=1;i<11;i++){
        
        printf("%d*%d = %d\n",n,i,i*n);


    }





    return 0;
}

