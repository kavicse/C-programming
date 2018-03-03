#include<stdio.h>
#include<string.h>
int main()
{
  char a[100];
  int n,i,j,count=0;
  printf("\nEnter string");
  scanf("%s",&a);
  n=strlen(a);
  for(i=0;i<n;i++)
  {
    for(j=i+1;j<=n;j++)
    {
      if(a[i]==a[j])
      {
        count++;
        break;
      }
    }
  }
  if(count!=0)
  {
    printf("\nNot isogram");
  }
  else
  {
    printf("\nIsogram");
  }
  return 0;
}
