/*
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void insertionsort(int a[],int n)
{
  int i,j,temp;
  for(i=1;i<=n-1;i++)
    {
      j=i;
      while(j>0 && a[j]<a[j-1])
        {
          temp=a[j];
          a[j]=a[j-1];
          a[j-1]=temp;
          j=j-1;
        }
    }
  
}


int main()
{

  int a[20];
  int i,n;
  printf("Enter the number of elments : ");
  scanf("%d",&n);
  printf("Enter the numbers :");
  for(i=0;i<n;i++)
    scanf("%d",&a[i]);
  insertionsort(a,n);
  printf("The sorted array is ");
    for(i=0;i<n;i++)
    printf("%d ",a[i]);
}
*/