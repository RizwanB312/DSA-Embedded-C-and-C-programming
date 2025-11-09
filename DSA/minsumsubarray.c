#include<stdio.h>
#include<limits.h>

int minsumsubarray(int arr[],int target,int n)
{ 
  int size=INT_MAX;
  int window=0;
  int sum=0;
  int left=0;
  for(int right=0;right<n;right++)
    {
      sum+=arr[right];
      while(sum>=target)
      {
        window=(right-left)+1;
        if(window<size)
        {
          size=window;
        }
        sum-=arr[left];
        left++;
      }
    }
  return size;
}

int minsumsub()
{
  int arr[]={2,3,1,2,4,3};
  int target=7;
  int n=6;
  int result=minsumsubarray(arr,target,n);
  printf("%d",result);
  return 0;
}