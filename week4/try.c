#include<stdio.h>
 int main(){
    float radious,resist,resistor,area;
    int length ;
    printf("Enter radious of Resistor(m)  :");
    scanf("%f", &radious );
    printf("Enter Length pf Resistor(m)  :");
    scanf("%d" , &length);
    printf("Enter Resistivity pf Resistor(m)  :");
    scanf("%f" , &resist);
    area = 3.14*(radious*radious); 
    resistor = resist*length/area;
    printf("The value of this resistor =  %f OHM" , resistor );
    return(0);

 }