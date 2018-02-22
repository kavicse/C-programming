#include<stdio.h>
void main()
{
	int temp,kelvin;
	printf("\nEnter the temperature in celsius");
	scanf("%d",&temp);
		printf("\nThe temperature is %d celsius",temp);
		kelvin=temp+273.15;
		printf("\nThe temperature is %d K",kelvin);
}
