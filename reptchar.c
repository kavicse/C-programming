#include<stdio.h>
void main()
{
	char name[50];
	int i,n;
	printf("Enter word");
	scanf("%s",&name);
	printf("\nNumber of times to repeat");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\n%s",name);
	}
	
}
