#include<stdio.h>
#include<string.h>
void main()
{
  char a[34],b[45];
  printf("\nEnter string");
  scanf("%s%s",&a,&b);
  strcat(a,b);
  printf("%s",a);
}
