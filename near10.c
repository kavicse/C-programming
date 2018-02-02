#include<stdio.h>
void main()
{
    int num;
    printf("\nEnter the number");
    scanf("%d",&num);
    
    while(num%10!=0)
    {
        num++;
    }
    printf("%d",num);
    

}
