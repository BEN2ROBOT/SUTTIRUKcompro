#include <stdio.h>
int main(){
    int num1, num2 ,num3, select ;
    float num4 ;
    printf("Enter num1 : ");
    scanf("%d",&num1);
    printf("Enter num2 : ");
    scanf("%d",&num2);
    printf("calculator menu\n");
    printf("1.+\n");
    printf("2.-\n");
    printf("3.*\n");
    printf("4./\n");
    printf("choose menu\n");
    scanf("%d",&select);
     if (select==1){
        num3 = num1+num2;
        printf("Ans : Num1 + Num2 =%d",num3);
    }  
    else if (select==2){
        num3 = num1-num2;
        printf("Ans : Num1 - Num2 =%d",num3);
    }  
    else if (select==3){
        num3 = num1*num2;
        printf("Ans : Num1 * Num2 =%d",num3);
    }  
    else if (select==4){
        num4 = num1*num2;
        printf("Ans : Num1 / Num2 =%.2f",num4);
    }  
    return 0;

}