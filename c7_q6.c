/*Write a program containing functions which counts the number of positive
integers in an array*/
#include <stdio.h>
int c = 0;
int positive(int*);
int positive(int* a){
    for (int i = 0; i < 9; i++)
    {
        if (a[i]>0)
        {
            c++;
        }
      
        
    }
      printf("%d",c);
    
}

int main() {
    int arr[] = {1,2,3,4,-1,-3,-4,5,6,7};
    positive(arr);

    return 0;
}
