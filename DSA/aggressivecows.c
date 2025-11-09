#include<stdio.h>
#include<string.h>

void sortedstall(int stall[], int n)
{
  for(int i=1;i<=n-1;i++)
    {
      int j=i;
      while(j>0 && stall[j]<stall[j-1])
        {
          int temp=stall[j];
          stall[j]=stall[j-1];
          stall[j-1]=temp;
          j--;
        }
    }
}

int countcows(int stall[],int cows,int distance,int n)
{
  
  
  int cowcount=1;
  int position=stall[0];
  for(int i=1;i<=n-1;i++)
    {
      if(stall[i]-position>=distance)
      {
        cowcount++;
        position=stall[i];
      }
    }
  if(cowcount>=cows)
    return 1;
  else
    return 0;
}

int cowdistance(int stall[],int n,int cow)
{
  sortedstall(stall,n);
  int low=1;
  int high=stall[n-1]-stall[0];
  while(low<=high)
    {
      int mid=(low+high)/2;
      if(countcows(stall,cow,mid,n))
      {
        low=mid+1;
      }
      else
        high=mid-1;
    }
  return high;
}


int agressioncow()
{
  int cows=4;
  int n;
  int stall[20];
  printf("Enter size of array : ");
  scanf("%d",&n);
  printf("\nEnter elements of array : ");
  for(int i=0;i<n;i++)
    {
      scanf("%d",&stall[i]);
    }
  int val=cowdistance(stall,n,cows);
  printf("MAX Minimum distance between two cows is %d",val);
  return 0;
}