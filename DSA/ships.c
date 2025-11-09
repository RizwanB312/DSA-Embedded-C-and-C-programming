#include<stdio.h>

int package(int weights[],int length,int mid,int day)
{
  int days=1;
  int weight=weights[0];
  for(int i=1;i<length;i++)
    {
      if(weights[i]+weight<=mid)
      {
        weight+=weights[i];
      }
     else{
       days++;
       weight=weights[i];
     }
    }
  return days<=day;
}

int ship(int weights[],int length,int low,int high,int day)
{
  int mid,res;
  while(low<=high)
    {
      mid=(low+high)/2;
      res=package(weights,length,mid,day);
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

int ships()
{
  int weights[] = {1,2,3,4,5,6,7,8,9,10};
  int length=10;
  int day=5;
  int low=10;
  int high=55;
  int ans=ship(weights,length,low,high,day);
  printf("%d",ans);
  return 0;
}
