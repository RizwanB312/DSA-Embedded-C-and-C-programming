#include<stdio.h>
#include<stdlib.h> 
#include<limits.h>
/*
struct Interval
{
int start;
int end;
};

int cmp(const void* a, const void*b)
{
  return ((struct Interval*)a)->start -((struct Interval*)b)->start; // if a.start<b.start a comes before b
}
int cmpInt(const void *a, const void *b) {
    return (*(int *)a) - (*(int *)b);
}
int mergedint(struct Interval intervals[],int n)
{
  qsort(intervals,n,sizeof(struct Interval),cmp);
  int arr1[n];
  int arr2[n];
  int count=0;
  int max=INT_MIN;
  for(int i=0;i<n;i++)
    {
      arr1[i]=intervals[i].start;
      arr2[i]=intervals[i].end;
    }
  int l=0;int r=0;
  while(l<n || r<n)
    {
      if(arr1[l]<arr2[r])
      {
        count++;
        l++;
        if(count>max)
        {
          max=count;
        }
      }
      else
      {
        count--;
        r++;
      }
    }
  return max;
}

int meeting2()
{
  struct Interval intervals[]={{1, 3}, {2, 6}, {8, 10}, {15, 18}};
  int n=sizeof(intervals)/sizeof(intervals[0]);
  int ans=mergedint(intervals,n);
  printf("Number of rooms %d\n",ans);
 return 0;
}*/