#include<stdio.h>
#define maxn 105
#define maxk 1005
int array[maxn][maxk];
/*
int eggdrop(int n,int k)
{
  if(k==0 || k==1)
    return k;
  if(n==1)
    return k;
  if(array[n][k]!=-1)
    return array[n][k];

  int attempts=k;
  for(int x=1;x<=k;x++)
    {
      int breaks,nobreaks;
      breaks=eggdrop((n-1),(x-1));
      nobreaks=eggdrop(n,k-x);
      int minattempts=1+(breaks>nobreaks?breaks:nobreaks);
      attempts=(minattempts<attempts?minattempts:attempts);
    }
  return attempts;
}


int main()
{
  int n,k;
  printf("Enter the number of eggs : ");
  scanf("%d",&n);
  printf("\nEnter the num of floors : ");
  scanf("%d",&k);
  for(int i=0;i<=n;i++)
    {
      for(int j=0;j<=k;j++)
        {
          array[i][j]=-1;
        }

    }
  int result=eggdrop(n,k);   
  printf("\nMinimum attempts is %d",result);
  return 0;
}*/