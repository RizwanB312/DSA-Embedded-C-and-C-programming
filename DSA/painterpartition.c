#include<stdio.h>
int painter(int array[],int k,int mid)
{
  int painter=1;
  int wallarea=0;
  for(int i=0;i<4;i++)
    {
      if(wallarea+array[i]<=mid)
      {
        wallarea+=array[i];
      }
      else{
        painter++;
        wallarea=array[i];
      }
    }
  return painter;
}
int binary1(int array[],int low, int high,int k)
{
  int mid=0;
  while(low<=high)
    {
      mid=(low+high)/2;
      int paintercount=painter(array,k,mid);
      if(paintercount<k)
      {
        high=mid-1;
      }
      else if(paintercount>k)
      {
        low=mid+1;
      }
      else
      {
        high=mid-1;
      }
    }
  return low;
}

int painterpart()
{
  int array[]={10,20,30,40};
  int k=2;
  int arraysum=0;
  int arraymax=array[0];
  for(int i=0;i<4;i++)
    {
      arraysum+=array[i];
      if(array[i]>arraymax)
        arraymax=array[i];
     
    }
  int low=arraymax;
  int high=arraysum;
  int minmax=binary1(array,low,high,k);
  printf("Minimum max work for painter is %d",minmax);
  return 0;
}
