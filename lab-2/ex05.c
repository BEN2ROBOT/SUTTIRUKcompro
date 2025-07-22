#include<stdio.h>
 int main(){
    float height;
    int age ;
    char ch1[20],ch2[20];
    printf("Enter your full name :");
    scanf("%s",ch1);
    printf("Enter your age :");
    scanf("%d",&age);
    printf("Enter your height :");
    scanf("%f",&height);
    printf("Enter your University name :");
    scanf("%s",ch2);
    printf("Hi everyone.");
    printf("This is%s",ch1);
    printf("From%s",ch2);
    printf("From%s",ch2);
    return(0);
 }