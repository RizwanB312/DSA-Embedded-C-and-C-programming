/*
#include<stdio.h>
#include<string.h>
#include<stdlib.h>


int set(int num, int position)
{
  
  return num | (1<<position); 
  
}

int clear(int num,int position)
{
 
  return num & ~(1<<position);
  
}

int toggle(int num,int position)
{
 
  return num ^ (1<<position);
 
}
int main()
{
  int num,position,op,result;
  printf("Enter the number : ");
  scanf("%d",&num);
  printf("\nSelect bit position : ");
  scanf("%d",&position);
  printf("Select the operation to perform\n1.Set 2.Clear 3.Toggle : ");
  scanf("%d",&op);
  if(op>3 || op<1)
   {
     printf("Invalid operation");
     
   }
  switch(op)
    {
      case 1:
      result=set(num,position);
      printf("\nresult=%d",result);
      break;

      case 2:
      result=clear(num,position);
      printf("\nresult=%d",result);
      break;

      case 3:
      result=toggle(num,position);
      printf("\nresult=%d",result);
      break;
    }
  return 0;
}
*/