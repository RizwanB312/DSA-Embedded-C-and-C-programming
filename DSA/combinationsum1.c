#include<stdio.h>
/*
int a[]={2,3,6,7};
int tar=7;
int path[100];
int n=4;
void combsum1(int index,int tar,int path[],int plen)
{
  if(tar==0)
  {
    for(int i=0;i<plen;i++)
      {
      printf("%d ",path[i]);
      }
    printf("\n");
    return;
  }
 if(index>=n || tar<0)
   return;

  path[plen]=a[index];
  combsum1(index,tar-a[index],path,plen+1);
  combsum1(index+1,tar,path,plen);
}

int main()
{
  combsum1(0,tar,path,0);
  return 0;
}
*/