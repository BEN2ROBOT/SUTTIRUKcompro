#include<stdio.h>

int main()
{
char sentence [22] = "Welcome to my ";
char word [9] = {'T', 'h', 'a', 'i', 'l', 'a', 'n', 'd', '\0'};
char not_word [5] = {'l', 'o', 'v', 'e','\0'};
printf ("Message1 = %s\n", sentence);
printf ("Message2 = %s\n", word);
printf ("Message3 = %s", not_word);

return 0;
}