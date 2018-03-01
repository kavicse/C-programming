#include <stdio.h>
#include<string.h>
int main(void) 
{
	char a[100];
	int i,m;
	printf("\nEnter the string: ");
	scanf("%s",&a);
	m=strlen(a);
	if(m%2==0)
	{
		i=m/2;
		a[i]='*';
		a[i-1]='*';
	}
	else
	{
		i=m/2;
		a[i]='*';
	}
	printf("\nThe modulated string is %s.",a);
	return 0;
}
