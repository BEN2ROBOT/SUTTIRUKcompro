#include<stdio.h>
int main(){
    float point;
    char name[20];
    printf("Enter your name :\n");
    scanf("%s[^\n]",name);
    printf("Enter your point :\n");
    scanf("%f\n",&point);
    printf("Name : %s\n",name);
    printf("Points : %f\n" ,point);
    return(0);
}