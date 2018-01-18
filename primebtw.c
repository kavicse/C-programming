#include <stdio.h>
int main(void)
{
    int n1,n2,i,j;
    printf("\nEnter N1:");
    scanf("%d",&n1);
     printf("\nEnter N2:");
    scanf("%d",&n2);
    for(int i=n1;i<n2;i++)
    {
        for(int j=2;j<i;j++)
        {
            if(i%j==0)
                break;
            else if(i==j+1)
                printf("%d\n",i);
        }
    }
}
