#include <stdio.h>

int main(void)
{
	int num;
	printf("\nEnter the number : ");
	scanf("%d",&num);
	if(num%2==0)
	{
		printf("\n%d is the nearest even number.",num);
	}
	else
	{
		printf("\n%d is the nearest even number.",num-1);
	}
	return 0;
}
