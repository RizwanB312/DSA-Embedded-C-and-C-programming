/*
#include<stdio.h>

void displaybin4(unsigned char *PORTB)
{
  for(int i=7;i>=0;i--)
    {
      printf("%d",(*PORTB>>i)&1);
      if(i==4)
        printf(" ");
    }
  printf("\n");
}  

void toggle(unsigned char *portb)
{
  *portb=*portb ^(1<<2);
   displaybin4(portb);
}

void press(unsigned char *portb,unsigned char *portd)
{
  *portd=*portd | (1<<3);
  displaybin4(portd);
  toggle(portb);
}

int main()
{
  unsigned char portb=0x00;// bit 2 led
  unsigned char portd=0x00;// bit 3 button
  press(&portb,&portd);
  press(&portb,&portd);
  return 0;
}
*/