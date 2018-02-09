#include<stdio.h>
void main()
{
  int n,a[30],i,count,k;
  printf("\nEnter number");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  printf("\nEnter k value");
  scanf("%d",&k);
  for(i=0;i<n;i++)
  {
    if(a[i]==k)
    {
      count++;
    }
  }
  if(count>0)
  {
    printf("\nYes");
  }
  else
  {
    printf("\nNo");
  }
  
}
