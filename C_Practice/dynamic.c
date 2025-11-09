/*
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
  int i,n,sum=0;
  int *ptr;
  printf("Enter the number of elements : ");
  scanf("%d",&n);
  ptr=(int*)malloc(n*sizeof(int));
  if(ptr==NULL)
  {
    printf("Mmemory is not allocated");
    return 0;
  }
  for(i=0;i<n;i++)
    {
      scanf("%d",ptr+i);
      sum+=ptr[i];
    }
  printf("Sum is %d",sum);
  printf("\nAvg is %d",sum/n);
  free(ptr);
  return 0;
}
*/