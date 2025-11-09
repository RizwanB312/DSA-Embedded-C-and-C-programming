/*
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int binarysearch(int a[],int low, int high,int key)
{ 
  int mid=0;
  while(low<=high)
    {
      mid=(low+high)/2;
      if(a[mid]==key)
      {
        return mid;
      }
      else if(a[mid]<key)
      {
        low=mid+1;
        return binarysearch(a,low,high,key);
        
      }
      else if(a[mid]>key)
      {
        high=mid-1;
        return binarysearch(a,low,high,key);
      }
    }
}

int main(){

  int a[20];
  int i,n,key;
  
  printf("Enter the number of elments : ");
  scanf("%d",&n);
  printf("Enter the numbers :");
  for(i=0;i<n;i++)
    scanf("%d",&a[i]);
  printf("Enter the key to be searched : ");
  scanf("%d",&key);
  int low=0;
  int high=n-1;
  int value=binarysearch(a,low,high,key);
  printf("The key %d is present at %d index",key,value);
  
  return 0;
}
  */