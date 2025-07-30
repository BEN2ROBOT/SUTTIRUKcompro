#include <stdio.h>
  int main(){
    int r = 6371;
    float pi = 3.14;
    float circ,vol,s_area,area ;
    circ = 2*pi*r ;
    printf("%.2f\n",circ);
    area = pi*r*r;
    printf("%.2f\n",area);
    vol = 1.33333333333*pi*(r*r*r);
    printf("%.2f\n",vol);
    s_area = 4 *pi*r*r;
    printf("%.2f\n",s_area);
    return 0 ;
  }