#include <stdio.h>
  int main(){
    int num[7] , i ,low=0 , max=0;
    for (i = 0; i <= 7 ; i++)
    {
         printf("Enter a number %d : ", i +1);
         scanf("%d",&num[i]);
     }
    
    for (i = 0 ; i <= 7; i++)
    {
        if(num[i]>max) {
            max = num[i];
        }
        if (num[i]<low) {
            low = num[i];
        }
    }
    printf("Highest Marks : %d\n",max);
    printf("Lowest marks : %d\n",low);
}