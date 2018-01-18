#include <stdio.h>

int main(void) {
    int i,n1,n2,k,r,ans=0,j;
	printf("enter the limits");
	scanf("\n%d\n%d",&n1,&n2);
	for(j=n1;j<=n2;j++)
	{
		ans=0;
	k=j;
	while(k>0)
	{
		r=k%10;
		ans=ans+(r*r*r);
		k=k/10;
	}
	if(ans==j)
	printf("%d\t",j);
	}
	return 0;
}
