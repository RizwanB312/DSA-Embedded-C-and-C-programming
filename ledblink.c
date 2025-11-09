/*
#include <stdio.h>

void displaybin(unsigned char PORTA)
{
  for (int i = 7; i >= 0; i--)
  {
    printf("%d", (PORTA >> i) & 1);
    if (i == 4)
      printf(" ");
  }
  printf("\n");
}

void turnonled(unsigned char *PORTA, int bit)
{
  printf("LED IS BEING TURNED ON.......\n");
  *PORTA |= 1 << bit;
  displaybin(*PORTA);
  printf("The LED has been turned on\n\n");
}

void turnoffled(unsigned char *PORTA, int bit)
{
  printf("LED IS BEING TURNED OFF.......\n");
  *PORTA &= ~(1 << bit);
  displaybin(*PORTA);
  printf("The LED has been turned off\n");
}

int main()
{
  unsigned char PORTA = 0x00;
  int bit = 3; // Assume LED is connected to bit 3

  turnonled(&PORTA, bit);
  turnoffled(&PORTA, bit);

  return 0;
}
*/