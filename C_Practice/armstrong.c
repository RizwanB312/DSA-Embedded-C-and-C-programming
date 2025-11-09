/*
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>


int digit_count(int num)
{
  int count=0;
  while(num!=0)
    {
      num=num/10;
      count+=1;
    }
  return count;
}


int armstrong(int num)
{
  int base,result=0;
  int exponent=digit_count(num);
  int temp=num;
  while(temp!=0)
    {
      base=temp%10;
      temp=temp/10;
      result=result+pow(base,exponent);
    }
  return result;
}

int main()
{
  int num;
  printf("Enter the number : ");
  scanf("%d",&num);
  int result=armstrong(num);
  if(num==result)
  {
    printf("%d is Armstrong",num);
  }
  else
  {
    printf("%d is not Armstrong",num);
  }
  return 0;
}
*/