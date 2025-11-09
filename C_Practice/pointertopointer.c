/*
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int pointertopointer(int **pp)
{
  **pp=45;
}

int pointer(int *p)
{
  *p=35;
  pointertopointer(&p);
}

int main()
{
 int a=25;
 pointer(&a);
 printf("The value of a is %d",a);
 return 0;
}
*/