#include <stdio.h>
    int main (){
        int num = 0 , result = 1, num2 = 0 , i;
        scanf("%d",&num);
        num2 = num ;
        for (i=1;i<=num; i++)
        {
            result=result*num2;
            num2 = num2 - 1 ;
        }
        printf("Factorial of %d is %d",num,result);
        return 0 ;
    }