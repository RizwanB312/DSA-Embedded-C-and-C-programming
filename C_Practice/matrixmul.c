/*
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int main()
{
  int n,m,p,q,i,j,k;
  int a[20][20],b[20][20],c[20][20];
  printf("Enter the number of rows of matrix A : ");
  scanf("%d",&m);
  printf("\nEnter the number of cols of matrix A : ");
  scanf("%d",&n);
  printf("\nEnter the number of rows of matrix B : ");
  scanf("%d",&p);
  printf("\nEnter the number of cols of matrix B : ");
  scanf("%d",&q);
  if(n!=p)
  {
    printf("\nMatrix multiplication is not possible");
    return 0;
  }
  printf("\nEnter the elements of Matrix A ");
  for(i=0;i<m;i++)
  {
    for(j=0;j<n;j++)
      {
        scanf("%d",&a[i][j]);
      }
  }
  printf("\nEnter the elements of Matrix B ");
  for(i=0;i<p;i++)
  {
    for(j=0;j<q;j++)
      {
        scanf("%d",&b[i][j]);
      }
  }
  
  for(i=0;i<m;i++)
    {
      for(j=0;j<q;j++)
        {
          c[i][j]=0;
          for(k=0;k<n;k++)
          c[i][j]+=a[i][k]*b[k][j];
        }
    }
  printf("\nThe new matrix C is : \n");
  for(i=0;i<m;i++)
    {
      for(j=0;j<q;j++)
        {
          printf("%d ",c[i][j]);
        }
        printf("\n");
    }
  
  return 0;
}
*/