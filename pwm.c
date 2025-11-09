/*
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

void ledonoff(unsigned char *portb, int on_time,int off_time)
{
  printf("STAGE 1: ON CYCLE = %d OFF CYLE =%d\n",on_time,off_time);
  for(int i=0;i<on_time;i++)
    {
      printf("LED ON ");
      *portb=(1<<0);
      displaybin7(portb);
    }
  for(int i=0;i<off_time;i++)
    {
      printf("LED OFF ");
      *portb=*portb&~(1<<0);
      displaybin7(portb);
    }
}

void simulate_pwm(unsigned char *portb)
{
  int duty_cycles[]={25,50,75};
  int total_cycle=4;
  for(int i=0;i<3;i++)
    {
      int duty_value=duty_cycles[i];
      int on_time=(duty_value*total_cycle)/100;
      int off_time=total_cycle-on_time;
      ledonoff(portb,on_time,off_time);
      printf("\n");
    }
}

int main()
{
  unsigned char portb=0x00;
  simulate_pwm(&portb);
  return 0;

}
*/