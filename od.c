#include<stdio.h>
void main()
{
    int n1,n2,i;
    printf("\n Enter the number1");
    scanf("\n %d",&n1);
     printf("\n Enter the number2");
    scanf("\n %d",&n2);
    for(i=n1;i<=n2;i++)
    {
        if(i%2!=0)
        {
              printf("%d",i);
        }
    }   
}
