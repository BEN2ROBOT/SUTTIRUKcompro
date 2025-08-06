#include <stdio.h>
  int main (){
    int num[10] , i,re,even,odd;
    for (i = 0; i < 10; i++)
    {
        printf("Enter value %d : ",i+1);
        scanf("%d",&num[i]);
    }
    for (i = 0; i < 10 ; i++)
    {
        if (num[i]%2==0)
        {
            even++ ;
        }
        else 
        odd ++ ;
       
        
    }
    printf("Even numbers : %d\n",even);
    printf("Odd numbers : %d\n",odd);
    return 0 ;
  }