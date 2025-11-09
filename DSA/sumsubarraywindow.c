#include<stdio.h>
#include<limits.h>

int subarrayfixed(int arr[],int n,int k)
{
  int max=INT_MIN;
  int sum=0;
  int window;
  int left=arr[0];int right=arr[0];
  for(int i=0;i<n;i++)
    {
      sum+=right;
      window=(right-left)+1;
      right++;
      
      if(window==k)
      {
        if(sum>max)
        { 
        max=sum;
        }   
        sum-=left;
        left++;
      }
    }
  return max;
}

int sumsub()
{
  int arr[]={2,1,5,1,3,2};
  int n=6;
  int k=3;
  int result=subarrayfixed(arr,n,k);
  printf("%d",result);
  return 0;
}