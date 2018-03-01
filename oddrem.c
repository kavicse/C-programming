#include <stdio.h>
void main()
{
	int n,t,rem=0,i;
	printf("Enter the number:");
    scanf("%d",&n);
	while(n!=0)
	{
		t=n%10;
		rem=(rem*10)+t;
		n=n/10;
	}
	printf("The odd numbers are:");
	while(rem!=0)
	{
		i=rem%10;
		rem=rem/10;
		if(i%2!=0)
		{
		  printf("%d  ",i);
		}

	}
}
