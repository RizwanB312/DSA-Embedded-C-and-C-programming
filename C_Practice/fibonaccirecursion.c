/*
#include<stdio.h>
#include<string.h>

int fibonaccirecursion(int n)
{
  if(n==0)
    return 0;
  else if(n==1)
    return 1;
  else
    return fibonaccirecursion(n-1)+fibonaccirecursion(n-2);
}

int main()
{
  int n;
  printf("Enter the number of elments : ");
  scanf("%d",&n);
  printf("\nThe fibonacci sequence is ");
  for(int i=0;i<n;i++)
    {
      printf("%d ",fibonaccirecursion(i));
    }
}
*/