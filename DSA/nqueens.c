#include<stdio.h>
#include<stdbool.h>
/*
#define n 4

int chess[n][n];

bool safe(int r,int c)
{
  for(int i=0;i<r;i++)
    if(chess[i][c]=='Q')
      return false;
  for(int i=r-1,j=c-1;i>0&&j>0;i--,j--)
    if(chess[i][j]=='Q')
      return false;
  for(int i=r-1,j=c-1;i>0&&j>0;i--,j++)
    if(chess[i][j]=='Q')
      return false;

  return true;
}

void solve(int row)
{
 if(row==n)
 {
   for(int i=0;i<n;i++)
     for(int j=0;j<n;j++)
       printf("%c",chess[i][j]);
    printf("\n");
 }
  for(int cols=0;cols<n;cols++)
    {
      if(safe(row,cols))
      {
        chess[row][cols]='Q';
        solve(row+1);
        chess[row][cols]='.';
      } 
    }
}

int main()
{
 for(int i=0;i<n;i++)
   for(int j=0;j<n;j++)
     chess[i][j]='.';
  solve(0);    
  return 0;
}*/