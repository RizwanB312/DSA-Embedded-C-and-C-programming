/*
#include <stdio.h>
#include <unistd.h>

void displaybin5(unsigned char *portb)
{
  for (int i = 7; i >= 0; i--)
  {
    printf("%d", (*portb >> i) & 1);
  }
  printf("\n");
}

void onled(unsigned char *portb)
{
  *portb = *portb | (1 << 0);
}

void offled(unsigned char *portb)
{
  *portb = *portb & ~(1 << 0);
}

void delay4()
{
  sleep(1); // Delay 1 second
}

void blinkled(int value, unsigned char *portb)
{
  for (int i = 0; i < value; i++)
  {
    printf("Led ON  : ");
    onled(portb);
    displaybin5(portb);
    delay4();

    printf("Led OFF : ");
    offled(portb);
    displaybin5(portb);
    delay4();
  }
}

int main()
{
  unsigned char portb = 0x00; // All LEDs OFF
  blinkled(5, &portb);        // Blink 5 times
  return 0;
}
*/
