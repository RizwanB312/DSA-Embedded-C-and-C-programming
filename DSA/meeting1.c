#include<stdio.h>
#include<stdlib.h>
/*
#include<stdio.h>
#include<stdlib.h>

struct Interval
{
int start;
int end;
};

int cmp(const void* a, const void*b)
{
  return ((struct Interval*)a)->start -((struct Interval*)b)->start; // if a.start<b.start a comes before b
}

int meet1(struct Interval intervals[],int n)
{
  qsort(intervals,n,sizeof(struct Interval),cmp);
  for(int i=1;i<n;i++)
    {
      if(intervals[i].start<intervals[i-1].end)
      {
        return 1;
      }
    }
  return 0;
}

int main()
{
  struct Interval intervals[]={{1, 3}, {2, 6}, {8, 10}, {15, 18}};
  int n=sizeof(intervals)/sizeof(intervals[0]);
  int meeted=meet1(intervals,n);  
  if(meeted)
  {
  printf("Overlapping");
  }  
  else{
    printf("Nope");
  }
  return 0;

}*/