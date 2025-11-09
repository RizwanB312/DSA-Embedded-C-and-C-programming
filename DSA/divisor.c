#include<stdio.h>

int checkdiv(int num[],int mid,int thres)
{
  int sum=0;
  for(int i=0;i<4;i++)
    {
      sum+=(num[i]+mid-1)/mid;
    }
  return sum<=thres;
}

int mindivisor(int num[],int low,int high,int thres)
{
  int mid,res;
  while(low<=high)
    {
      mid=(low+high)/2;
      res=checkdiv(num,mid,thres);
      if(res)
      {
        high=mid-1;
      }
      else{
        low=mid+1;
      }
    }
  return low;
}


int divis()
{
  int num[]={1,2,5,9};
  int thres=6;
  int low=1;
  int high=9;
  int ans=mindivisor(num,low,high,thres);
  printf("%d",ans);
  return 0;
}