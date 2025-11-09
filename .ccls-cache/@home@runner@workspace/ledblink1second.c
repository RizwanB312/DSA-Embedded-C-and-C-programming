#include<stdio.h>
#include<unistd.h>

void displaybin5(unsigned char *portb)
{
  for(int i=7;i>=0;i++)
    {
      printf("%d",(*portb>>i)&1);
      if(i==0)
      {
        printf(" ");
      }
    }
  printf("\n");
}

void onled(unsigned char *portb)
{
  *portb=*portb | (1<<0);
}

void offled(unsigned char *portb)
{
  *portb=*portb & ~(1<<0);
}

void delay4()
{
  sleep(5);
}

void blinkled(int value,unsigned char *portb)
{
 for(int i=0;i<value;i++)
   {
     printf("Led ON :");
     onled(portb);
     displaybin5(portb);
     delay4();
     printf("Led Off");
     offled(portb);
     displaybin5(portb);
   }
  
}

int main()
{
  unsigned char portb=0x00; // bit 0 for led
  blinkled(5,&portb);
  return 0;
}