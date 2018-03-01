#include<stdio.h>
int main()
{
  int n,i;
  printf("\nEnter the number");
  scanf("%d",&n);
  printf("\nFactors:");
  for(i=1;i<=n;i++)
  {
    if((n%i)==0)
    {
      printf("\n%d",i);
    }
    
  }
}
