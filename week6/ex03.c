#include <stdio.h>
  int main(){
    int marks[4] , i , total , max=0;
    for (i = 0; i <= 4 ; i++)
    {
         printf("Enter the marks of student %d : ", i +1);
         scanf("%d",&marks[i]);
         total = total + marks[i];  
     }
     printf("Total Marks :  %d\n",total);
    for (i = 0 ; i < 4 ; i++)
    {
        if(marks[i]>max){
            max = marks[i];

        }
    }
   printf("Highest Marks: %d",max);
}