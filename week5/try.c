#include <stdio.h>
   int main() {
int i ;
int sum = 0;
for (i=1;i<=100; i++ ){
    if (i%2==0){
        sum = sum + i ;
    }
 }
 printf("summation of even number 1 to 100 = %d",sum);
 return 0 ;
}