#include <stdio.h>
  int main (){
    int num ;
    scanf("%d",&num);
    switch (num > 0) {
    case 1:
        if (num%2==0)
        {

            printf("%d is even.\n", num);
        }
         else { printf("%d is odd\n",num); }
         
        
        break;
    case 0:
        switch (num < 0) {
            case 1:
                printf("%d is negative.\n", num);
                break;
            case 0:
                printf("%d is zero.\n", num);
                break;
        }
        break;
    }
}
