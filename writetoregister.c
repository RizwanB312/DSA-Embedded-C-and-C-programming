/*
#include<stdio.h>

int main()
{
  unsigned char reg=0x00; // char is 1 byte=8bits
  printf("Enter the hex value to the register : ");
  scanf("%hhx",&reg);
  printf("The hexadecimal value is : 0x%02X\n",reg);
  printf("The binary value is ");
 for(int i=7;i>=0;i--)
   {
     printf("%d",(reg>>i)&1);
   }
 return 0;
}
*/