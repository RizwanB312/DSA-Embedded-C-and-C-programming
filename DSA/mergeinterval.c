#include<stdio.h>
#include<stdlib.h> 
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

int mergedint(struct Interval intervals[],int n,struct Interval merged[])
{
  qsort(intervals,n,sizeof(struct Interval),cmp);
  int index=0;
  merged[0]=intervals[0];

  for(int i=1;i<n;i++)
    {
      if(intervals[i].start<=merged[index].end)
      {
        merged[index].end=(intervals[i].end>merged[index].end)?intervals[i].end: merged[index].end;
      }
      else
      {
       index++;
       merged[index]=intervals[i];
      }
    }
  return index+1;
}

int mergeinter()
{
  struct Interval intervals[]={{1, 3}, {2, 6}, {8, 10}, {15, 18}};
  int n=sizeof(intervals)/sizeof(intervals[0]);
  struct Interval merged[100];

  int ans=mergedint(intervals,n,merged);
  printf("Number of intervals after merging %d\n",ans);
  for(int i=0;i<ans;i++)
    {
      printf("{%d,%d}, ",merged[i].start,merged[i].end);
    }
  return 0;
}*/