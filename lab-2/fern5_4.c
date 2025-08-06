#include <stdio.h>
 int main(){
    int matrix[3][3],i,j;
    int com = 0 ;
    int com2 = 100000000;
    for ( i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d",&matrix[i][j]);
        }
        
    }
    for (i = 0; i < 3; i++)
    {
         for (j = 0; j < 3; j++)
        {
            printf("%d",matrix[i][j]);
        }
        printf("\n");
    }
    for ( i = 0; i < 3; i++)
    {
       for (j = 0; j < 3; j++)
       {
       
        if (matrix[i][j]>com){
            com = matrix[i][j] ;
        }
       }
       
    }
    for ( i = 0; i < 3; i++)
    {
       for (j = 0; j < 3; j++)
       {
       
        if (matrix[i][j]<com2){
            com2 = matrix[i][j] ;
        }
       }
       
    }
    printf("Hightest number is : %d\n",com);
    printf("Lowest number is  : %d\n",com2);
    
    
 }