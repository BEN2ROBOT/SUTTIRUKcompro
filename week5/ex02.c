#include <stdio.h>
  int main (){
    int count = 1 ;
    int num1 ;
    int sum = 0 ;
    while (count<=10)
    {
        printf("%d.Enter the number :",count);
        scanf("%d",&num1);
        sum = sum + num1 ;
        count ++ ;

    }
    printf("Total sum is %d",sum);
    return 0 ;
  }