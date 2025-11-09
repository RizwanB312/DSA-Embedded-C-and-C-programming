#include<stdio.h>
#include<math.h>

int isprime(int x)
{
  if(x<2) return 0;
  if(x%2==0) return x==2;
  for(int i=3;i*i<x;i+=2)
    {
      if(x%i==0) return 0;
    }
  return 1;
}

int main()
{
  int N;
  printf("Enter The Limit : ");
  scanf("%d",&N);
  int bestlen=0;
  int besta=0;
  int bestb=0;
  for(int a=-N;a<=N;a++)// a from -N to N
    {
      for(int b=2;b<=N;b++)// we reduce b to only primes
        {
          if(!isprime(b))continue;
          int n=0;

          while(isprime(n*n+a*n+b))
            n++;
          if(n>bestlen)
          {
            bestlen=n;
            besta=a;
            bestb=b;
          }
        }
    }
  printf("%d %d ",besta,bestb);
  return 0;
}