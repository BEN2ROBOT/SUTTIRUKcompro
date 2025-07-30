#include <stdio.h>
   int main (){
    int num1 ;
    do {
        printf("Enter the number:\n");
        scanf("%d",&num1);
        if (num1==0){
          break;
        }
        else if (num1%2==0){
            printf("%d number is even\n",num1);
        }
        else {
            printf("%d number is odd\n",num1);
        } 

    }  while (num1!=0);
       printf("Exiting Program... Bye");
   }