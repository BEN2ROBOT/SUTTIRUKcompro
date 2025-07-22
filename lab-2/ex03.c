#include<stdio.h>
 int main(){
    float height;
    int age , weight;
    char ch1[20],ch2[20],ch3[20];
    printf("Enter your name :");
    scanf("%s",ch1);
    printf("Enter your age :");
    scanf("%d",&age);
    printf("Enter your height :");
    scanf("%f",&height);
    printf("Enter your weight :");
    scanf("%d",&weight);
    printf("Enter your gender :");
    scanf("%s",ch3);
    printf("Enter your Education Qualification :");
    scanf("%s",ch2);
    printf("Name :  %s      ",  ch1   );
    printf("Age :  %d         ",    age     );
    printf("Gender :  %s\n",    ch3);
    printf("Height :  %f         ",    height     );
    printf("Weight :  %d\n",    weight);
    printf("Education :%s ",ch2);
    return(0);
 }