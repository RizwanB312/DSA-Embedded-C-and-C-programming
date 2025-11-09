#include<stdio.h>
int dupli(int nums[],int n)
{
  if(n==0)
    return 0;
  int i=0;
      for(int j=1;j<n;j++)
        {
          if(nums[j]!=nums[i])
          {
            i++;
            nums[i]=nums[j];
          }
        }
    
  return i+1;
}
int duclii()
{
  int nums[] = {0,0,1,1,1,2,2,3,3,4};
  int n=sizeof(nums)/sizeof(nums[0]);
  int k=dupli(nums,n);
  printf("%d",k);
  for(int i=0;i<k;i++)
    {
      printf("%d ",nums[i]);
    }
  return 0;
}