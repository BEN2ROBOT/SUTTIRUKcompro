#include<stdio.h>
   int main (){
   int hB,fB,twB,tBc,fBc,oBc;
   int all;
   scanf("%d",&all);
   hB = all/100;
   fB = (all-hB*100)/50;
   twB = (all-(hB*100+fB*50))/20;
   tBc = (all-(hB*100+fB*50+twB*20))/10;
   fBc = (all-(hB*100+fB*50+twB*20+tBc*10))/5;
   oBc = (all-(hB*100+fB*50+twB*20+tBc*10+fBc*5))/1;
   printf("%d one hundred baht banknotes %d fifty baht banknotes %d twenty baht banknotes %d ten baht coins %d five baht coins %d one baht coins ",hB,fB,twB,tBc,fBc,oBc);
   }