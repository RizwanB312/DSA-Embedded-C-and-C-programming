#include<stdio.h>
#include<stdlib.h>
/*
struct balloon{
int start;
int end;
};

int cmp(const void*a,const void*b)
{
  return ((struct balloon*)a)->end-((struct balloon*)b)->end;
}

int arrows(struct balloon b[],int n)
{
  qsort(b,n,sizeof(struct balloon),cmp);
  int ar=1;
  int lastar=b[0].end;
    for(int i=1;i<n;i++)
      {
        if(b[i].start>lastar)
        {
          ar++;
          lastar=b[i].end;
        }
      }
  return ar;

}

int main()
{
  struct balloon b[]= {{10,16}, {2,8}, {1,6}, {7,12}};
  int n=sizeof(b)/sizeof(b[0]);
  int ans=arrows(b,n);
  printf("%d",ans);
  return 0;
}
*/