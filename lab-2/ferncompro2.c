#include <stdio.h>
   int main (){
    int life = 20599;
    int y,m,d;
    y = life/365;
    m = (life-(y*365))/30;
    d = (life-(y*365+m*30));
    printf("Jack Ma has been living in this world for %d years, %d months , %d days.", y,m,d);
    return 0 ;
   }