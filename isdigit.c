#include<stdio.h>
#include<ctype.h>
#include<string.h>
void main()
{
  char c[100],b[100];
  int a,i,j;
  printf("\nEnter string");
  scanf("%s",&c);
  a=strlen(c);
  for(i=0;i<a;i++)
  {
    if(isdigit(c[i]))
    {
      b[j]=c[i];
      j++;
    }
  }
    printf("%s",b);
  
}
  
