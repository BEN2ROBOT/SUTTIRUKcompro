#include <stdio.h>
  int main (){
    int a,b;
    scanf ("Enter number1 :%d\n", &a);
    scanf("Enter number2 :%d\n", &b) ;
    if (a>b){
        printf("not equal\n");
        while (1){
           b+=1 ;
         if (b>a){
         printf("equal");
         break;
         }
        }
       
    }
  }