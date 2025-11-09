#include<stdio.h>
#include<limits.h>

int container(int height[],int n)
{
  int left=0;
  int right=n-1;
  int max=INT_MIN;
  int area=0;
  for(int i=0;i<n;i++)
    {
      while(left<right)
        {
          if(height[left]<height[right])
          {
            area=height[left]*(right-left);
            left++;
          }
          else
          {
            area=height[right]*(right-left);
            right--;
          }
          if(max<area)
          {
            max=area;
          }
        }
    }
  return max;
}

int waterrr()
{
  int height[] = {1,8,6,2,5,4,8,3,7};
  int n=9;
  int ans=container(height,n);
  printf("%d",ans);
  return 0;
}