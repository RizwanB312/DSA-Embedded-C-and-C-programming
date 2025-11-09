/*
#include<stdio.h>

void (*vectortable[2])(unsigned char *porta); 

void displaybin9(unsigned char *porta)
{
  for(int i=7;i>=0;i--)
    {
      printf("%d",(*porta>>i)&1);
      if(i==4)
        printf(" ");
    }
  printf("\n");
}


void isr1(char unsigned *porta)
{
  
    *porta|=(1<<0);
    printf("Led has been turned on\n");
    displaybin9(porta);
    *porta&=~(1<<0);
    printf("Led has been turned off\n");
    displaybin9(porta);
}

void isr2(char unsigned *porta)
{ 
    *porta|=(1<<1);
    printf("Led has been turned on\n");
    displaybin9(porta);
    *porta&=~(1<<1);
    printf("Led has been turned off\n");
    displaybin9(porta);
  
}



int main()
{
  int inter;
  unsigned char porta=0x00;
  vectortable[0]=isr1;
  vectortable[1]=isr2;
  printf("Enter the interrupt number (0 or 1) \n");
  scanf("%d",&inter);
  if(inter>=0 && inter<2)
  {
    vectortable[inter](&porta);
  }
  else{
    printf("Invalid interrupt number");
  }
  return 0;
}
*/