/*program to create an array of 10 integers and store multiplication table. Takeinput from user*/
#include <stdio.h>

int main() {
    int c;
    int a[10];
    printf("Enter the number c: ");
    scanf("%d",&c);
    for (int i = 0; i < 10; i++)
    {
        a[i] = c*(i+1);
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d x %d = %d\n",c,i+1,a[i]);
    }
    
    

    return 0;
}