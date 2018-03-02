#include<stdio.h>
#include<string.h>
void main()
{
  char c[100];
  int a,i;
  printf("\nEnter string");
  scanf("%s",&c);
  a=strlen(c);
  printf("\nOdd position");
  for(i=1;i<=a;i++)
  {
    if(i%2!=0)
    {
      printf("%c",c[i]);
    }
  }
   printf("\nEven position");
  for(i=0;i<=a;i++)
  {
    if(i%2==0)
    {
      printf("%c",c[i]);
    }
  }
}
  
