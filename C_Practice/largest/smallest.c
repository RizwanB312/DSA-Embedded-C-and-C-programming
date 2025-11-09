/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int smallest(int a[],int n) {
  int small=a[0];
  for (int i = 1; i < n; i++) {
    if (a[i] < small) {
      small = a[i];
    }
  }
  return small;
}

int largest(int a[],int n) {
  int large=a[0];
  for (int i = 1; i < n; i++) {
    if (a[i] > large) {
      large = a[i];
    }
  }
  return large;
}
int main() {
  int a[20];
  int n;
  printf("Enter the count of numbers : ");
  scanf("%d", &n);
  printf("Enter the numbers : ");
  for (int i = 0; i < n; i++)
    scanf("%d", &a[i]);
  int small= smallest(a,n);
  int large=largest(a,n);
  printf("The smallest = %d and the largest = %d",small,large);
}
*/