/*
#include<stdio.h>

int writetoregisterdecimal()
{
  unsigned char reg=0x00; // char is 1 byte=8bits
  printf("Enter the decimal value to the register : ");
  scanf("%hhu",&reg);
  printf("The decimal value is : %d\n",reg);
  printf("The hexadecimal value is : 0x%02X\n",reg);
  printf("The binary value is ");
 for(int i=7;i>=0;i--)
   {
     printf("%d",(reg>>i)&1);
   }
 return 0;
}
*/