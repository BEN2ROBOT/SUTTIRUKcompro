#include <stdio.h>
int main(){
    int a ;
    printf("Enter a number");
    scanf("%d", &a);
    if (a > 100){
     printf("Out of range");
     return 0;
    }
    if (a %2==0){
        printf("even\n");
    }  else if (a %2 != 0) {
        printf("odd\n");
    }
    return(0);
}