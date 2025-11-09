/*
#include<stdio.h>
#include<string.h>

int intremoval()
{
  int a[100];
  int s[100];
  int n;
  int top=-1;
  printf("Enter the number of elements : ");
  scanf("%d",&n);
    printf("\nEnter the elements :");
    for(int i=0;i<n;i++)
    {
  scanf("%d",&a[i]);
    }
  for(int i=0;i<n;i++)
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
      if(found==0){
        s[++top]=a[i];
      }
    }
  printf("The array after duplicate elimination is ");
  for(int i=0;i<=top;i++)
 printf("%d ",s[i]);

  return 0;
}
*/