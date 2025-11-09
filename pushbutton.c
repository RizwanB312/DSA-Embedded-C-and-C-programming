/*
#include <stdio.h>


void displaybin3(unsigned char PORTB)
{
  for(int i=7;i>=0;i--)
    {
      printf("%d",(PORTB>>i)&1);
      if(i==4)
        printf(" ");
    }
  printf("\n");
} 

void ledon(unsigned char *portb)
{
  *portb=*portb|(1<<1);
}

void ledoff(unsigned char *portb)
{
  *portb=*portb&~(1<<1);
}
void buttonpress(unsigned char *portd,unsigned char *portb)
{
  *portd=*portd | (1<<4);
   ledon(portb);
}

void buttonrelease(unsigned char *portd,unsigned char *portb)
{
  *portd=*portd & ~(1<<4);
  ledoff(portb);
}



int main()
{
  unsigned char portb = 0x00; // led connected to port=b bit=1
  unsigned char portd = 0x00; //button connected to port=d bit=4
  buttonpress(&portd,&portb);
  printf("BUTTON PRESSED :\n");
  printf("PORT D :");
  displaybin3(portd);
  printf("\nLED ON :");
  printf("PORT B :");
  displaybin3(portb);
  buttonrelease(&portd,&portb);
  printf("\nBUTTON RELEASED :\n");
  printf("PORT D :");
  displaybin3(portd);
  printf("\nLED OFF :");
  printf("PORT B :");
  displaybin3(portb);
  return 0;
}
*/