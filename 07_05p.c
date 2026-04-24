// Write a program containing a function which reverses the array passed to it
#include <stdio.h>
void reversearr(int *a , int n)
{
    int b[n] ;
    int i=0 ;
    for(int k=5 ; k>=0 ; k--)
    {
        b[i]=a[k] ;
        i++ ;
    }

    for(int i=0 ; i<6 ; i++)
    {printf("%d " , b[i]) ;
    }
}

int main() {
   int arr[]={1,2,3,4,5,6} ;
    for(int i=0 ; i<6 ; i++)
    {printf("%d " , arr[i]) ;
    }
    printf("\n") ;
    reversearr(arr , 6) ;

    return 0;
}