/*
#include <stdio.h>

void displaybin2(unsigned char PORTB) {
  for (int i = 7; i >= 0; i--) {
    printf("%d", (PORTB >> i) & 1);
    if (i == 4)
      printf(" ");
  }
  printf("\n");
}

void delay1(int value) {
  for (int i = value; i >= 0; i--) {
    // delaying
  }
}

void redlight(unsigned char *portc) {
  *portc =(1 << 0);
}

void yellowlight(unsigned char *portc) {
  *portc = (1 << 1) ;
  
}

void greenlight(unsigned char *portc) {
  *portc = (1 << 2) ;
  
}

int main() {
  unsigned char portc = 0x00;
  redlight(&portc);
  displaybin2(portc);
  delay1(1000);
  yellowlight(&portc);
  displaybin2(portc);
  delay1(1000);
  greenlight(&portc);
  displaybin2(portc);
  ;
  return 0;
}
*/