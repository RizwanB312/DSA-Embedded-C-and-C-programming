/*
#include <stdio.h>

void displaybin0(unsigned char PORTA)
{
  for(int i=7;i>=0;i--)
    {
      printf("%d",(PORTA>>i)&1);
      if(i==4)
        printf(" ");
    }
  printf("\n");
}

void turnonled0(unsigned char *PORTA,int bit)
{
  printf("LED IS BEING TURNED ON.......\n");
  *PORTA|=1<<bit;
  displaybin0(*PORTA);
  printf("\nThe LED has been turned on\n");
}

void turnoffled0(unsigned char *PORTA,int bit)
{
  printf("LED IS BEING TURNED OFF.......\n");
  *PORTA&=~(1<<bit);
  displaybin0(*PORTA);
  printf("\nThe LED has been turned off");
}

int main()
{
  unsigned char PORTA=0x00;
  
  int bit=3; // assume that led is connected to bit 3
  turnonled0(&PORTA,bit);
  turnoffled0(&PORTA,bit);
  return 0;
}
*/