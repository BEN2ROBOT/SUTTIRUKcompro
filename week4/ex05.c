#include <stdio.h>
int main(){
    int h,r ;
    float vol ;
    printf("Enter cone hight : ");
    scanf("%d" , &h);
    printf("Enter cone radious : ");
    scanf("%d" , &r);
    vol = 0.33333333333333333*3.14*(r*r)*h ;
    printf("cone volume  : %.2f\n" , vol);
    
    if (vol>260){
        printf("This cone is perfect for Supun project\n");
    }
    else {
        printf("This cone is not fit for this project\n");
    }
    return 0;
}