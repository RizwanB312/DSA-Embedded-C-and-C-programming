/*
#include<stdio.h>

int count=0; 
void displaybin10(unsigned char *porta)
{
  for(int i=7;i>=0;i--)
    {
      printf("%d",(*porta>>i)&1);
      if(i==4)
        printf(" ");
    }
  printf("\n");
}

int ISRbutton(unsigned char *porta)
{
  *porta^=(1<<0);
  if((*porta&1)==1)
  {
  count+=1;
  printf("LED TOGGLED ON : ");
  displaybin10(porta);
  }
  else if((*porta&1)==0)
      {
      printf("LED TOGGLED OFF : ");
      displaybin10(porta);
      }
  return count;
}
void pressed(unsigned char *porta,int * flag)
{
   *flag=1;
    if(*flag==1)
    {
      ISRbutton(porta);
    }
}

int main()
{
  int flag=0;
  unsigned char porta=0x00;
  printf("BUTTON PRESSED ONCE \n");
  pressed(&porta,&flag);
   printf("BUTTON PRESSED TWICE \n");
  pressed(&porta,&flag);
  printf("BUTTON PRESSED THRICE \n");
  pressed(&porta,&flag);
   printf("BUTTON PRESSED FOUR_TIMES \n");
  pressed(&porta,&flag);
  printf("The number of times LED is switched on is %d",count);
  return 0;
}
*/