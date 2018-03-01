#include <stdio.h>

int main(void) 
{
	
	float a,b;
	float area;
	printf("\nEnter the length: ");
	scanf("%f",&a);
	printf("\nEnter the breadth: ");
	scanf("%f",&b);
	area=a*b;
	printf("\nArea of farm is %.5f:",area);
	return 0;
}
