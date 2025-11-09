#include<stdio.h>

void sorrt(int nums[],int n)
{
  int low=0;
  int mid=0;
  int high=n-1;
  int temp;
  while(mid<=high)
    {
      if(nums[mid]==0)
      {
        temp=nums[mid];
        nums[mid]=nums[low];
        nums[low]=temp;
        mid+=1;
        low+=1;
      }
      else if(nums[mid]==1)
      {
        mid+=1;
      }
      else if(nums[mid]==2)
      {
        temp=nums[mid];
        nums[mid]=nums[high];
        nums[high]=temp;
        high-=1;
      } 
    }
}

int dutch()
{
  int nums[]={2,1,2,0,0,2};
  int n=sizeof(nums)/sizeof(nums[0]);
  sorrt(nums,n);
 for(int i=0;i<n;i++)
   {
     printf("%d ",nums[i]);
   }
}
