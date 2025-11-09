/*
#include<stdio.h>

int main()
{
  unsigned char bcd;
  printf("Enter The HEX : ");
  scanf("%hhx",&bcd); // entering hex value not bcd but will still print bcd as long as values are between 0-9
  if((bcd>>4)>9 || (bcd&0x0F)>9)
  {
    printf("decimal=%u",bcd);
    printf("\nInvalid for BCD");
  }
  else{
  printf("\nBCD :");
  for (int i = 7; i >= 0; i--) {
      printf("%d", (bcd>> i) & 1);
  }
  int decimal=((bcd>>4)*10)+(bcd & 0x0F);
  printf("\nThe decimal value : %d\n",decimal);
  for (int i = 7; i >= 0; i--) {
      printf("%d", (decimal>> i) & 1);
  }
  }
  return 0;
}
*/