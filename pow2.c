
#include <stdio.h>
int isPowerOf2(int n)
{
    while(n!=1)
    {
        if(n%2!=0)
            return 0;
        n=n/2;
    }
    return 1;
}
 0int main()
{
    int num;
    printf("Enter an integer number: ");
    scanf("%d",&num);
 
    if(isPowerOf2(num))
        printf("%d is a number that is the power of 2.",num);
    else
        printf("%d is not the power of 2.",num);
     
    return 0;
}
