#include<stdio.h>
#include<string.h>
void main()
{
  char str[80],temp;
	int i,j,d;
	printf("\nEnter string");
	scanf("%s",str);
	d=strlen(str);
	if(d%2==0)
	{
    for(i=0;i<d;i=i+2)
    {

      
  	temp=str[i];
    	str[i]=str[i+1];
    	str[i+1]=temp;
      
	 }
	}
	else
	{
	  for(i=0;i<d-1;i=i+2)
    {

      
  	temp=str[i];
    	str[i]=str[i+1];
    	str[i+1]=temp;
      
	 }
	}
	for(i=0;i<d;i++)
	{
	  printf("%c",str[i]);
	}
 
}
