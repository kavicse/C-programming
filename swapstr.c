#include<stdio.h>
#include<string.h>
void main()
{
  char str[80],temp;
	int i,j,d;
	printf("\nEnter string");
	scanf("%s",str);
	d=strlen(str);
    for(i=0;i<d;i=i+2)
    {
      if(d%2==0)
      {
  	temp=str[i];
    	str[i]=str[i+1];
    	str[i+1]=temp;
      }
      else
	 }
 printf("\nAfter Swap String      : %s",str);
}
