#include<stdio.h>

/*
int palindrome(char str1[], int l, int r)
{
    if (l >= r)
        return 1;  // Base case: string is empty or has one letter

    if (str1[l] != str1[r])
        return 0;  // Not a palindrome

    return palindrome(str1, l + 1, r - 1);  // Check inner characters
}

int main()
{
    char str1[] = "racecar";
    int n = sizeof(str1) / sizeof(str1[0]); // Includes null character
    int l = 0;
    int r = n - 2; // Exclude null character

    if (palindrome(str1, l, r))
        printf("yes\n");
    else
        printf("no\n");

    return 0;
}

}*/