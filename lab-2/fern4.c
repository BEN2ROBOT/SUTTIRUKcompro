#include <stdio.h>
#include <string.h>

char fname1[100];
char fname2[100];
char fname3[100];
char sur1[100];
char sur2[100];
char sur3[100];
char full1[200];
char full2[200];
char full3[200];

int main()
{
    printf("first student name: ");
    fgets(fname1, sizeof(fname1), stdin);
    fname1[strlen(fname1)-1] = '\0';
    
    printf("family name: ");
    fgets(sur1, sizeof(sur1), stdin);
    sur1[strlen(sur1)-1] = '\0';
    
    printf("second student name: ");
    fgets(fname2, sizeof(fname2), stdin);
    fname2[strlen(fname2)-1] = '\0';
    
    printf("family name: ");
    fgets(sur2, sizeof(sur2), stdin);
    sur2[strlen(sur2)-1] = '\0';
    
    printf("third student name: ");
    fgets(fname3, sizeof(fname3), stdin);
    fname3[strlen(fname3)-1] = '\0';
    printf("family name: ");
    fgets(sur3, sizeof(sur3), stdin);
    sur3[strlen(sur3)-1] = '\0';
    strcpy(full1, fname1);
    strcat(full1, " ");
    strcat(full1, sur1);
    strcat(full1, " ");
    strcat(full2, fname2);
    strcat(full2, " ");
    strcat(full2, sur2);
    strcat(full2, " ");
    strcat(full3, fname3);
    strcat(full3, " ");
    strcat(full3, sur3);
    printf("\n 1.%s\n 2.%s\n 3.%s",full1,full2,full3);
    return 0;
}