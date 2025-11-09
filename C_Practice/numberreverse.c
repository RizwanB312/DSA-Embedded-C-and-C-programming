/*
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int powerof10(int num)
{
  int digit=0;
  int temp=num;
  while(temp!=0)
    {
      temp=temp/10;
      digit+=1;
    }
  digit-=1;
  return digit;
}

int reversenum(int num)
{
  int base,newnum=0,i=0;
  int power=powerof10(num);
  int temp=num;
  while(temp!=0)
    {
      base=temp%10;
      temp=temp/10;
      newnum+=base*(int)pow(10,power-i);
     i++;
    }
  return newnum;
}

int main()
{
  int num;
  printf("Enter the number : ");
  scanf("%d",&num);
  int result=reversenum(num);
  printf("The reversed number is %d",result);
  return 0;
}
*/