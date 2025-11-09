/*
#include<stdio.h>
#include<string.h>

void printpointer(int *p,int n)
{
  printf("The entire array is ");
  for(int i=0;i<n;i++)
    {
      printf("%d ",*(p+i));
    }
  printf("\nThe even numbers are ");
  for(int i=0;i<n;i++)
    {
      if(*(p+i)%2==0)
      {
      printf("%d ",*(p+i));
      }
    }
}

int main()
{
 int i,n;
 int a[25];
 printf("Enter the number of elements = ");
 scanf("%d",&n);
 printf("\nEnter the numbers = ");
 for(i=0;i<n;i++)
   scanf("%d",&a[i]);
 printpointer(a,n);
 return 0
}
*/