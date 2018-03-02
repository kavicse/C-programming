#include<stdio.h>
void main()
{
  char c;
  int a,b,d;
  printf("\nEnter a ,opertaion,b:");
  scanf("%d%s%d",&a,&c,&b);
  if(c=='%')
  {
    d=a%b;
    printf("\nAnswer:%d",d);
  }
  if(c=='/')
  {
     d=a/b;
    printf("\nAnswer:%d",d);
  }
}
