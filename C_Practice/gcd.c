/*
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int gcd(int n1,int n2)
{
  int i,gcdvalue=1;
  int limit=(n1<n2)?n1:n2;
   for(i=1;i<=limit;i++)
     {
       if((n1%i==0) && (n2%i==0))
         gcdvalue=i;
     }
    return gcdvalue;
  
}

int lcm(int n1,int n2)
{
  int lcmvalue;
  int gcdvalue=gcd(n1,n2);
  return lcmvalue=(n1*n2)/gcdvalue;
  
}

int main()
{
  int n1,n2;
  printf("Enter the numbers :");
  scanf("%d %d",&n1,&n2);
  printf("GCD = %d",gcd(n1,n2));
  printf("\nLCM = %d",lcm(n1,n2));
 return 0;
}
*/