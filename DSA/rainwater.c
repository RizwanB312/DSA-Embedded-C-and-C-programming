#include<stdio.h>

int findtotal(int height[],int n)
{
  int lmax=0;int rmax=0;int total=0;
  int l=0;
  int r=n-1;
  while(l<r)
    {
      if(height[l]<=height[r])
      {
        if(lmax>height[l])
        {
          total+=lmax-height[l];
        }
        else
        {
          lmax=height[l];
        }
        l++;
      }
      else
      {
        if(rmax>height[r])
        {
          total+=rmax-height[r];
        }
        else
        {
          rmax=height[r];
        }
        r--;
      }
    }
  return total;
}

int rain()
{
  int height[] = {4,2,0,3,2,5};
  int n=sizeof(height)/sizeof(height[0]);
  int ans=findtotal(height,n);
  printf("%d",ans);
  return 0;
}
