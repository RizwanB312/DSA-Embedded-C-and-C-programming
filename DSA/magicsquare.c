#include<stdio.h>
#include<stdio.h>
/*
void magicsquare(int m[][5],int n)
{
  for(int i=0;i<n;i++)
    for(int j=0;j<n;j++)
      m[i][j]=0;
  int i=n/2;
  int j=n-1;
   m[i][j]=1;
  for(int val=2;val<=n*n;val++)
     {  
       i=i-1;
       j=j+1;
       if(i==-1 && j==n)
          {
            i=0;
            j=n-2;
          }
       if(i==-1)
         i=n-1;
       if(j==n)
         j=0;

       if(m[i][j]!=0)
       {
         i+=1;
         j-=2;
       }
      m[i][j]=val; 
     } 
}

int main()
{
  int n=5;
  int m[5][5];
  magicsquare(m,n);
  for(int i=0;i<n;i++)
    {
    for(int j=0;j<n;j++)
      {
        printf("%d ",m[i][j]);
      }
      printf("\n");
    }
  return 0;
}*/