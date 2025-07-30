#include <stdio.h>
int main(){
    int a,c ;
    printf("Enter a number");
    scanf("%d", &a);
     switch (a)
     {
        case 0 ... 100:
        switch(a%2){
            case 0:
            printf("%d is even", a);
        break;    
        case 1:
       printf("%d is odd", a);
        break;  
        }
        break;
       default: printf("%d is out of range ", a);
     }
    
 return(0);
}