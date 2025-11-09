/*
#include<stdio.h>

void displaybin6(unsigned char *portb)
{
  for(int i=7;i>=0;i--)
    {
      printf("%d",(*portb>>i)&1);
      if(i==4)
        printf(" ");
    }
  printf("\n");
}

void ledknight(unsigned char *portb)
{
  for(int i=7;i>=0;i--)
    {
      printf("LED %d IS ON ",i);
      *portb=(1<<i);
      displaybin6(portb);
    } 
  for(int i=1;i<=7;i++)
    {
      printf("LED %d IS ON ",i);
      *portb=(1<<i);
      displaybin6(portb);
    } 
}

int main()
{
  unsigned char portb=0x00;
  ledknight(&portb);
  return 0;
}
*/