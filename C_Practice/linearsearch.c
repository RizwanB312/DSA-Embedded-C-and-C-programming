/*
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void linearsearch(int a[],int n,int key)
{
  int i,found=0;
 for(i=0;i<n;i++)
   {
     if(a[i]==key)
     {
       found=1;
       break;
     }
     
   }
  if(found)
  {
    printf("The key %d is present at %d location",key,i+1);
  }
  else
  {
    printf("The key %d is not present in the array",key);
  }
  
}
int main()
{
  int a[100];
  int i,n,key;
  printf("Enter the number of elements : ");
  scanf("%d",&n);
  printf("\nEnter the elements : ");
  for(i=0;i<n;i++)
    {
      scanf("%d",&a[i]);
    }
  printf("Enter the key to be searched : ");
  scanf("%d",&key);
  linearsearch(a,n,key);
  return 0;
}
*/