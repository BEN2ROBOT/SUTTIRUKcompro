#include <stdio.h>
     int main (){
        int count , num1;
        int sum = 0 ;
        float avg ;
        for (count=1;count<=10;count ++){
            printf("%d.enter the number :",count);
            scanf("%d",&num1);
            sum = sum + num1 ;
        }
        avg = sum/10 ;
        printf("Total sum is %d",sum);
        printf("Average is %f",avg);
        return 0 ;
    }