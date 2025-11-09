/*
#include<stdio.h>

int main()
{
  int num;
  int gray;
  printf("Enter the decimal : ");
  scanf("%d",&num);
  printf("\nBinary : ");
  for (int i = 7; i >= 0; i--) {
      printf("%d", (num >> i) & 1);
  }
  gray=num^(num>>1);
  printf("\nGray code : ");
  for (int i = 7; i >= 0; i--) {
      printf("%d", (gray >> i) & 1);
  }
  return 0;
}
*/