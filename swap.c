#include<stdio.h>
void main()
{
	int n1,n2,temp=0;
	scanf("\n%d\t%d",&n1,&n2);
	temp=n1;
	n1=n2;
	n2=temp;
	printf("\n%d\t%d",n1,n2);
}
