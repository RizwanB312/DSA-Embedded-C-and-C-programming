/*
#include<stdio.h>
#include<unistd.h>


void displaybin8(unsigned char *porta)
{
  for(int i=7;i>=0;i--)
    {
      printf("%d",(*porta>>i)&1);
      if(i==4)
        printf(" ");
    }
  printf("\n");
}

void ISR(unsigned char *porta)
{
  *porta|=(1<<0);
  printf("Led has been turned on\n");
  displaybin8(porta);
  sleep(1);
  *porta&=~(1<<0);
  printf("Led has been turned off\n");
  displaybin8(porta);
}

void simulate_interrupt(int *interruptflag,char unsigned *porta)
{
   *interruptflag=1;
  if(*interruptflag==1)
  {
    ISR(porta);
  }
 printf("The Interrupt has been successfully handled\n");
}

int main()
{
  int interruptflag=0;
  unsigned char porta=0x00;
  printf("Incoming Interrupt................\n");
  simulate_interrupt(&interruptflag,&porta);
  printf("Control has returned back \n");
  
}
*/