/*
#include<stdio.h>
#include<string.h>

void uart_sendchar(char data)
{
  printf("Sending %c....\n",data);
}

void uart_receivechar(char data)
{
  printf("Receiving %c....\n",data);
}

void uart_sendstring(char *data,int length)
{
  for(int i=0;i<length;i++)
    {
      uart_sendchar(data[i]);
      uart_receivechar(data[i]);
    }
  
}

int main()
{
  int length;
  char data[20];
  printf("Enter the data : ");
  scanf("%s",data);
  length=strlen(data);
  uart_sendstring(data,length);

  return 0;
}
*/