#include <stdio.h>
int main(){
    int a, b, c, d;
    printf("Enter the first number\n");
    scanf ("%d" , &a);
    printf("Enter the second number\n");
    scanf ("%d" , &b);
    printf("Enter the third number\n");
    scanf ("%d" , &d);
    c = (a + b)- d ;
    printf("(%d + %d)-%d = %d\n", a, b, d, c);
    return 0;
}

