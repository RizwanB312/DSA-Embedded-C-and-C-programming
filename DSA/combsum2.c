#include<stdio.h>
#include<stdlib.h>
/*
int a[]={10, 1, 2, 7, 6, 1, 5};
int target=8;
int path[10];
int n=7;

int cmpint(const void* a, const void* b)
{
  return (*(int*)a)-(*(int *)b);
}

void combsum2(int index,int t,int path[],int psize)
{

 if(t==0)
 {
   for(int i=0;i<psize;i++)












   
     printf("%d ",path[i]);
   printf("\n");
   return;
 }
 if(index>=n || t<0)
   return;
for(int i=index;i<n;i++)
  { 
    if(i>index && a[i]==a[i-1])
      continue;
    path[psize]=a[i];
    combsum2(i+1,t-a[i],path,psize+1);
  }    
}

int main()
{
  qsort(a,n,sizeof(int),cmpint);
  combsum2(0,target,path,0);
  return 0;
}
*/