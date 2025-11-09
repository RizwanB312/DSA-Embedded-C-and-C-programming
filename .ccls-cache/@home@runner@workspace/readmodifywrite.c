/*
#include <stdio.h>

void hextobinary(unsigned char reg)
{
  for (int i = 7; i >= 0; i--) {
    printf("%d", (reg >> i) & 1);
    if(i==4)
      printf(" ");
  }
  printf("\n");
}

int set(unsigned char reg, unsigned int bit)
{ return reg = reg | (1 << bit); 
}

int clear(unsigned char reg, unsigned int bit)
{
  return reg = reg & (~(1 << bit));
}

int main() {
  unsigned char result = 0x00;
  unsigned int bit, op;
  unsigned char reg = 0x00;
  printf("Enter an initial hex value to the register : ");
  scanf("%hhx", &reg);
  printf("Enter the bit position to be modified : ");
  scanf("%u", &bit);
  printf("Enter the Action to be Performed : 1. SET 2. CLEAR :");
  scanf("%u", &op);
  printf("\nInitial Value\n");
  printf("The initial hex value : 0x%02X\n", reg);
  printf("The initial binary value :");
  hextobinary(reg);
  
  printf("\n\nModified Value\n");
  if (op == 1) {
    result = set(reg, bit);
    printf("The hex value after SET operation : 0x%02X \n", result);
    printf("The binary value after SET operation :");
    hextobinary(result);

  } else if (op == 2) {
    result = clear(reg, bit);
    printf("\nThe hex value after Clear operation : 0x%02X \n", result);
    printf("The binary value after CLEAR operation :");
    hextobinary(result);

  } else {
    printf("Enter Either 1 or 2");
  }
  return 0;
}
*/