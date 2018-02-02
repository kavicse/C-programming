#include<stdio.h>
#include<string.h>
int main()
{
	int i,count=1,a;
	char ch[50]="Hello world welcome";

	a=strlen(ch);
for(i=0;i<a;i++)
{

		if(ch[i]==' ')
		{
			count++;
		}
}
	
	printf("%d",count);
	return 0;
}
