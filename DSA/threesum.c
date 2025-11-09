#include<stdio.h>

void threesum(int nums[],int n)
{
  for(int i=0;i<=n-3;i++)
    {
      if(i>0 && nums[i]==nums[i-1])
        {
          continue;
        }
      int left=i+1;
      int right=n-1;
      while(left<right)
        {
          int sum=nums[i]+nums[right]+nums[left];
        if(sum==0)
          {
          printf("%d %d %d\n",nums[i],nums[left],nums[right]);
          int curleft=nums[left];
          int curright=nums[right];
          while(left<right && nums[left]==curleft)
            left++;
          while(left<right && nums[right]==curright)
            right--;
          }
          else if(sum<0)
          {
            left++;
          }
          else
          {
            right--;
          }
        }
    }  
}
int threesum0()
{
  int nums0[]={-1, 0, 1, 2, -1, -4};
  int n=6;
  int nums[]={-4,-1,-1,0,1,2};
  threesum(nums,n);

  return 0;
}