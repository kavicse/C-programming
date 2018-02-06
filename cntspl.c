#include<stdio.h>
#include<string.h>
void main()
{
	int i,count=0,b,count1=0,spl=0;
	char ch[200];
	printf("\nEnter character");
	scanf("%s",&ch);
	b=strlen(ch);
for(i=0;i<b;i++)
{
	if(ch[i]>='0'&&ch[i]<='9')
	{
	
	 count++;
    }   
    else if((ch[i]>='a'&&ch[i]<='z')||(ch[i]>='A'&&ch[i]<='Z'))
    {
    	count1++;
	}
	else
	{
		spl++;
	}
}
printf("\nNumeric:%d",spl);
}
