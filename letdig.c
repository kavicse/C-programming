#include<stdio.h>
void main()
{
	char ch[70];
	int k;
	printf("\nGet string");
	scanf("%s",&ch);
	printf("\nGet k value");
	scanf("%d",&k);
	int i;
	for(i=0;i<k;i++)
	{
		printf("%c",ch[i]);
	}
}
