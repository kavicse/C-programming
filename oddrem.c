#include<stdio.h>
int main()
{
  int n,rem,r;
  printf("\nEnter the number");
  scanf("%d",&n);
  while(n!=0)
  {
    rem=n%10;
    n=n/10;
    {
      if((rem%2)!=0)
      {
        printf("\n%d",rem);
      }
    }
  }
  
}
