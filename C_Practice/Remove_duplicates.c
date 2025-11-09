/*
#include <stdio.h>
#include <string.h>



int main()
{
    char a[50];
    char s[50];
    int top=-1;

    printf("Enter the string : ");
    scanf("%s",a);
    for(int i=0;i<strlen(a);i++)
     {
         int found=0;
         for(int j=0;j<=top;j++)
         {

         if(a[i]==s[j])
         {
             found=1;
             break;
         }

         }
        if(found==0)
         {
         s[++top]=a[i];
         }

     }
    s[top+1]='\0' ;

    printf("%s",s);
    return 0;


}
*/