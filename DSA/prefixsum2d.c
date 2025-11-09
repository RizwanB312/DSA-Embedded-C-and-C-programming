#include<stdio.h>
#include<string.h>
/*
void prefixarray(int p[][5],int arr[][4])
{
  int n=4;int m=4;
  for(int i=1;i<n+1;i++)
    {
      for(int j=1;j<m+1;j++)
        {
          p[i][j]=p[i][j-1]+p[i-1][j]-p[i-1][j-1]+arr[i-1][j-1];
        }
    }
}

int prefixsum(int p[][5],int x1,int y1,int x2,int y2)
{
  int sum=0;
  sum=p[x2+1][y2+1]-p[x2+1][y1]-p[x1][y2+1]+p[x1][y1];
  return sum;
}

int main()
{
  int n,m;
  n=4;
  m=4;
  int arr[4][4]={
      {1,  2,  3,  4},
      {5,  6,  7,  8},
      {9, 10, 11, 12},
      {13,14, 15, 16}
  };
  int p[n+1][m+1];
  memset(p,0,sizeof(p));
  prefixarray(p,arr);
  int q;
  printf("Enter the number of queries : ");
  scanf("%d",&q);
  int x1,y1,x2,y2;
  printf("\nEnter the values for x1,y1,x2,y2 ");
  for(int i=0;i<q;i++)
    {
     scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
     int ans=prefixsum(p,x1,y1,x2,y2);
     printf("Sum = %d\n",ans);
    }

  return 0;
}
*/