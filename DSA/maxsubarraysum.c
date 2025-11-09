#include<stdio.h>
#include<string.h>
#include<limits.h>

 int ans_start=-1,ans_end=-1;

int max_subarray(int array[],int length)
{
 int max=INT_MIN;
 int sum=0;
  int start=-1;

 for(int i=0;i<length;i++)
   {
     if(sum==0)
     {
      start=i;
     }
     sum+=array[i];
     if(sum>max)
     {
     max=sum;
     ans_start=start;ans_end=i;
     } 

      if(sum<0)
     {
       sum=0;
     }

   }
  if(max<0)
  {
    return 0;
  }
  else
  return max;
}

int kadane1d()
{
  int array1[]={-2,-3,4,-1,-2,1,5,-3};
  int length=sizeof(array1)/sizeof(array1[0]);
  int max_sum=max_subarray(array1,length);
  printf("%d",max_sum);
  printf("\nstarting index is %d and ending index id %d",ans_start,ans_end);
  printf("\nThe max subarray is ");
  for(int i=ans_start;i<=ans_end;i++)
    printf("%d ",array1[i]);
  return 0;
}