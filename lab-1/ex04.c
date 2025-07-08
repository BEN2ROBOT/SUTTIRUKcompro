#include <stdio.h>
int main(){
    float a, b, c, d;
    printf("Enter the first number\n");
    scanf ("%f" , &a);
    printf("Enter the second number\n");
    scanf ("%f" , &b);
    printf("Enter the third number\n");
    scanf ("%f" , &d);
    c = a + b + d ;
    printf("%.1f + %.1f+%.1f = %.1f\n", a, b, c, d);
    return 0;
}
