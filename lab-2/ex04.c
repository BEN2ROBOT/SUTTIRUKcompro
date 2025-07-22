#include<stdio.h>
 int main(){
    float physic,cal,compro;
    int id ;
    char ch1[20];
    printf("Enter your name :");
    scanf("%s",ch1);
    printf("Enter student id :");
    scanf("%d",&id);
    printf("Enter your programming score :");
    scanf("%f",&compro);
    printf("Enter your Physics score :");
    scanf("%f",&physic);
    printf("Enter your Calculus score :");
    scanf("%f",&cal);
    printf("Hi%s(%d)!",ch1,id);
    float Gpa = (cal + physic + compro)/3 ;
    printf("Your GPA is%f   ",Gpa);


    return(0);
 }