#include<stdio.h>
/*

void printsubset(int arr[],int n,int index,int subset[],int subsize)
  {
  if(index==n)
  {
  printf("{")
  for(int i=0;i<subsize;i++)
   printf("%d",subset[i]);
  printf("}");
  }
  // include current element
  subset[subsize]=arr[index];
  printsubset(arr,n,index+1,subset,subsize+1);
  // exclude current element
  printsubset(arr,n,index+1,subset,subsize);
  }
  
int main()
  {
  int arr[]={1,2,3};
  int n=sizeof(arr)/sizeof(arr[0]);
  int subset[100];

  printsubset(arr,n,0,subset,0);
  
  return 0;
  }
  */