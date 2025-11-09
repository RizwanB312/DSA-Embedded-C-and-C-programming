/*
#include<stdio.h>

int main()
{
  FILE *fp;
  fp=fopen("output.txt","w");
  if(fp==NULL)
  {
    printf("No such file exists");
    return 1;
  }
 fprintf(fp,"My name is Rizwan");            //fprintf
 fprintf("\nMy nickname is Richu",fp);

  fclose(fp);
  return 0;
}*/

/*int main()
{
  FILE *fp;
  char buffer[200];
  fp=fopen("output.txt","r");
  if(fp==NULL)
  {
    printf("Error in reading the file");
    return 1;
  }
  while(fgets(buffer,sizeof(buffer),fp))  /// fgets
    {
      printf("%s",buffer);
    }
  fclose(fp);

  return 0;
}*/

/*
int main()
{
  FILE *fp;
  fp=fopen("output.txt","w");
  if(fp==NULL)
  {
    printf("No such file exists");
    return 1;
  }
  fputs("Rizwan 8.78\n",fp);
  fputs("Richu 8.87",fp);

  fclose(fp);
  
  char name[20];
  float cgpa;
  FILE *fp1;
  fp1=fopen("output.txt","r");
    if(fp1==NULL)
  {
   printf("Error in Reading");
    return 1;
  }
  while(fscanf(fp1,"%s %f",name,&cgpa)!=EOF)
    printf("Name = %s and CGPA = %f\n",name,cgpa);
  fclose(fp1);
  return 0;
}
*/