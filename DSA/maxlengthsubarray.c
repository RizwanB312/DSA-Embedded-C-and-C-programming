#include<stdio.h>
#include<limits.h>

int maxlengthsubarray(int a[],int k,int n)
{
  int size=INT_MIN;
  int window=0;
  int left=0;
  int sum=0;
  for(int right=0;right<n;right++)
    {
      sum+=a[right];
      while(sum>k)
        {
          sum-=a[left];
          left++;
        }
      if(sum==k)
        {
        window=(right-left)+1;
        if(window>size)
        {
          size=window;
        }
        }
    }
  if(size==INT_MIN)
  {
    return 0;
  }
  return size;
}

int maxlengthsub()
{
  int arr[]={1,2,3,1,1,1,1,4,2};
  int k=5;
  int n=9;
  int res=maxlengthsubarray(arr,k,n);
  printf("%d",res);
  return 0;
}