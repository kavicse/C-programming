#include<stdio.h>
void main()
{
  int n1,n2,d,n,r,gcd,denominator,numerator,lcm;
  printf("\nEnter n1:");
  scanf("%d",&n1);
  printf("\nEnter n2:");
  scanf("%d",&n2);
  d=denominator;
  n=numerator;
  if(n1>n2)
  {
    n=n1;
    d=n2;
  }
  else
  {
    n=n2;
    d=n1;
  }
  r=n%d;
  while(r!=0)
  {
    n=d;
    d=r;
    r=n%d;
  }
  gcd=d;
  lcm=n1n2/gcd;
  printf("\nLCM:%d",lcm);
}
