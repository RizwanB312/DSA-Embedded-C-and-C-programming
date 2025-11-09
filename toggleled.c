/*
#include<stdio.h>

void displaybin1(unsigned char PORTB)
{
  for(int i=7;i>=0;i--)
    {
      printf("%d",(PORTB>>i)&1);
      if(i==4)
        printf(" ");
    }
  printf("\n");
}
void togglebit(unsigned char *PORTB, int bit)
{
  *PORTB^=1<<bit;
}
void delay(int value)
{
  for(int i=value;i>=0;i--)
    {
      //delaying 
    }
  
}

int main()
{
  unsigned char PORTB=0x00;
  int bit=2; // assume that led is connected to bit 2
  printf("The binary value before toggling : ");
  displaybin1(PORTB);
  printf("\nThe binary value after toggling once : ");
  togglebit(&PORTB,bit);
  displaybin1(PORTB);
  delay(1000000);
  printf("\nThe binary value after toggling twice : ");
  togglebit(&PORTB,bit);
  displaybin1(PORTB);
  delay(1000000);
  
  
  return 0;
}
*/