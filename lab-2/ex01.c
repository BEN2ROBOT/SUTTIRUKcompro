#include<stdio.h>
 int main(){
    float b;
    int a;
    char ch[10];
    printf("Please enter an integer value :");
    scanf("%d",&a);
    printf("You entered :%d\n",a);
    printf("Please enter an float value :");
    scanf("%f",&b);
    printf("You entered :%.2f\n",b);
    printf("Please enter  a character :");
    scanf("%s",ch);
    printf("You entered :%s\n",ch);
    return(0);
 }