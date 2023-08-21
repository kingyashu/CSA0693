#include <stdio.h>
#include <string.h>
 
int main()
{
   char s1[1000],s2[1000];  
    int i;
    printf("Enter any string: ");
    gets(s1);
    strcpy(s2,s1);
    printf("original string s1='%s'\n",s1);
    printf("copied string   s2='%s'",s2);
    return 0;
}
