#include<stdio.h>
#include<stdlib.h>
/*
struct burger{
int x;
int a;
int b;
};

int cmp(const void *a,const void *b)
{
  return ((struct burger*)a)->x-((struct burger*)b)->x;
}

int happiness(struct burger bur[],int n)
{
 qsort(bur,n,sizeof(struct burger),cmp);
 int dp[1000];
  if(bur[0].a>-(bur[0].b))
    dp[0]=bur[0].a;
  else
    dp[0]=bur[0].b;
  
 for(int i=1;i<n;i++)
   {
     if(dp[i-1]+bur[i].a>dp[i-1]-bur[i].b)
       dp[i]=dp[i-1]+bur[i].a;
     else
       dp[i]=dp[i-1]+bur[i].a;
     
   }
  return dp[n-1];
}

int main()
{
  int n;
  printf("Enter the number of days : ");
  scanf("%d",&n);
  struct burger bur[1000];
  for(int i=0;i<n;i++)
    {  
     scanf("%d",&bur[i].x);
     scanf("%d",&bur[i].a);
     scanf("%d",&bur[i].b);
    }
  int ans=happiness(bur,n);
  printf("%d",ans);
  return 0;
}
*/