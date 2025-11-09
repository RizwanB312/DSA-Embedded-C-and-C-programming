#include<stdio.h>

void displaybin7(unsigned char *portb)
{
  for(int i=7;i>=0;i--)
    {
      printf("%d",(*portb>>i)&1);
      if(i==4)
        printf(" ");
    }
  printf("\n");
}

int main()
{
  unsigned char portb=0x00;
  return 0;
  
}