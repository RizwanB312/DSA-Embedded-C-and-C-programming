/*
#include<stdio.h>
#include<string.h>

void wrongpassword(int *attempts)
{
  if(*attempts>0)
  {
  printf("The password entered is wrong\n");
  (*attempts)--;
  printf("Attempts left = %d \n",*attempts);
 
  }
  if(*attempts==0)
  {
    printf("Account blocked\n");
    printf("Attemps have expired\n");
  }  
  
}

int checkpassword(char ori_password[],char enteredpass[],int length)
{
  printf("Please input the password : ");
  scanf("%s",enteredpass);
 for(int i=0;i<length;i++)
    {
      if(enteredpass[i]!=ori_password[i])
      {
        return 0;
      }
    }  
   return 1;
  
}

int main()
{
  int attempts=3;
  char ori_password[]="1234";
  char enteredpass[20];
  int length=strlen(ori_password);
 
  while(attempts>0)
    {
      int password=checkpassword(ori_password,enteredpass,length);
  if(password==1)
  {
    printf("Password has been successfully entered ");
    break;
  }
  else{
    wrongpassword(&attempts);
  }
    }
  return 0;
}
*/