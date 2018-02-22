#include<stdio.h>
#include<math.h>
void main()
{
	float p,n,r,si;
	int si1;
	printf("\nPrinciple:");
	scanf("%f",&p);
	printf("\nRate:");
	scanf("%f",&r);
	printf("\nTime:");
	scanf("%f",&n);
	si=(p*n*r)/100;
	si1=floor(si);
	printf("Floor value : %d",si1);
}
