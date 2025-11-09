/*
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int poweroftwo()
{
  int num,count=0;
  printf("Enter the number : ");
  scanf("%d",&num);
  int temp=num;
  while(num>0)
    {
      if(num & 1)
      {
        count+=1;
      }
      num=num>>1;
    }
  if(count==1)
  {
    printf("\n %d is a power of two",temp);
  }
  else{
    printf("\n %d is not a power of two",temp);
  }
}

int main()
{
  int num,count=0;
  printf("Enter the number : ");
  scanf("%d",&num);
  int temp=num;
  temp=temp & (temp-1);
      if(temp==0)
        printf("%d is power of two",num);
      else
        printf("%d is not a power of two",num);
  
  return 0;
}
*/