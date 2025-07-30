#include <stdio.h>
 int main (){
    char name[10],grade;
    float cal,phy,sci,avg ;
    printf("Enter your name : ");
    scanf("%s", name);
    printf("Enter your Calculus score  :");
    scanf("%f", &cal);
    printf("Enter your Physic score  :");
    scanf("%f" , &phy);
    printf("Enter your Science score  :");
    scanf("%f" , &sci);
    avg = (cal+phy+sci)/3 ;
    if (avg >= 80 ){
        grade = 'A' ;
    }
    if (avg >= 70 && avg < 80 ){
        grade = 'B' ;
    }
    if (avg >= 60 && avg < 70 ){
        grade = 'C' ;
    }
     if (avg >= 50 && avg < 60 ){
        grade = 'D' ;
    }
     if ( avg < 50 ){
        grade = 'F' ;
    }
    printf("%s,your average is,%f.Your grade is%c ",name,avg,grade);
    return 0;

 }