#include<stdio.h>
int main()
{
    char str[100];
    int n,i,c=0,s;
    printf("enter string");
    scanf("%s",str);
    printf("\nEnter number to be removed:");
    scanf("%d",&n);
    for(i=0;str[i]!='\0';i++)
    {
        c++;
}
s=c-n;
for(i=s;i<=c;i++)
{
    printf("%c",str[i]);
}
return 0;
}
