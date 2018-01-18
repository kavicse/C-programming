#include<stdio.h>
void  main()
{
    int number,res=0,i;
    printf("Enter the number ");
    scanf("%d", &number);
for(i=1;i<=5;i++)
{
    res=i*number;
    printf("\n %d",res);
}
}
