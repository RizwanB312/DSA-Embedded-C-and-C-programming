/*
#include<stdio.h>
#include<string.h>

int main()
{
 int a[25];
 int n,temp;
 printf("Enter the number of digits = ");
 scanf("%d",&n);
 printf("Enter the numbers = ");
for(int i=0;i<n;i++)
  scanf("%d",&a[i]);

  for(int i=0;i<n/2;i++)
    {
      temp=a[i];
      a[i]=a[n-1-i];
      a[n-1-i]=temp;
    }
  printf("Reversed array  = ");
  for(int i=0;i<n;i++)
    printf("%d ",a[i]);
  return 0;
}
*/