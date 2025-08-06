#include <stdio.h>
int main(){
    float num,num2,sum,sub,mul;
    float di,f1,f2;
    scanf("%f",&num);
    scanf("%f",&num2);
    sum = num+num2 ;
    sub= num-num2;
    mul=num*num2;
    di=num/num2;
    printf("%.0f\n",sum);
    printf("%.0f\n",sub);
    printf("%.0f\n",mul);
    printf("%f\n",di);

}