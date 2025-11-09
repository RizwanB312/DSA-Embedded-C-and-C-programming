#include<stdio.h>

int koko(int piles[],int mid,int h)
{
  int hours=0;
  int temp=mid;
  for(int i=0;i<4;i++)
    {
      hours+=(piles[i]+mid-1)/mid;
    }
  return hours<=h;
}

int speed(int piles[],int low,int high, int h)
{
  int mid,result;
  while(low<=high)
    {
      mid=(low+high)/2;
      result=koko(piles,mid,h);
      if(result)
      {
        high=mid-1;
      }
      else{
        low=mid+1;
      }
    }
  return low;
}


int kokobanana()
{
  int piles[]={3,6,7,11};
  int h=8;
  int low=1;
  int high=11;
  int ans=speed(piles,low,high,h);
  printf("%d",ans);
  return 0;
}
