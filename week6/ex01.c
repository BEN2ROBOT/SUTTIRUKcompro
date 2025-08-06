#include <stdio.h>
int main (){
    int values[9] , i ;
    for ( i = 0 ; i <= 9 ; i++)
    {
        printf("Enter the value %d here:",i+1);
        scanf("%d",&values[i]);
    }
    printf("Values in array are: ");
    for ( i = 0; i <= 9 ; i++)
    {
          printf("%d",values[i]);
    }
    return 0 ;
    
}