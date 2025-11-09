/*
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main() {
  char str1[100], str2[100];
  int count1[26] = {0}, count2[26] = {0};
  int isanagram = 1;
  printf("Enter the first string : ");
  scanf("%s", str1);
  printf("Enter the second string : ");
  scanf("%s", str2);
  int length1 = strlen(str1);
  int length2 = strlen(str2);
  if (length1 != length2) {
    printf("Not an anagram");
    return 0;
  }
    for (int i = 0; i < length1; i++) {
      str1[i] = tolower(str1[i]);
      count1[str1[i] - 'a']++;
    }
    for (int i = 0; i < length1; i++) {
      str2[i] = tolower(str2[i]);
      count2[str2[i] - 'a']++;
    }
    for (int i = 0; i < 26; i++) {
      if (count1[i] != count2[i]) {
        isanagram=0;
        break;
        
      } 
    }
  
  if(isanagram)
  {
    printf("The strings %s and %s are anagrams",str1,str2);
  }
  else{
    printf("The strings %s and %s are not anagrams",str1,str2);
  }
  return 0;
}
*/