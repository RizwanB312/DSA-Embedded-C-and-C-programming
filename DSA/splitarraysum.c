#include<stdio.h>

int partitions(int array[],int k,int mid)
{
  int num=1;
  int size=0;
  for(int i=0;i<5;i++)
    {
      if(size+array[i]<=mid)
      {
        size+=array[i];
      }
      else{
        num++;
        size=array[i];
      }
    }
  return num;
}



int binary2(int array[],int low,int high,int k)
{
 int mid=0;
  while(low<=high)
    {
      mid=(low+high)/2;
      int partition=partitions(array,k,mid);
      if(partition<k)
      {
        high=mid-1;
      }
      else if(partition>k)
      {
        low=mid+1;
      }
      else
        high=mid-1;
    }
  return low;    
}

int splitarray()
{
  int array[]={7,2,5,10,8};
  int partitions=2;
  int arraymax=array[0];
  int arraysum=0;
  for(int i=0;i<5;i++)
    {
      arraysum+=array[i];
      if(array[i]>arraymax)
        arraymax=array[i];
    }
  int low=arraymax;
  int high=arraysum;
  int minimax=binary2(array,low,high,partitions);
  printf("MIN SPLIT ARRAY SUM IS %d",minimax);
}