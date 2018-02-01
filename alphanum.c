#include<stdio.h>
void main()
{
char ch;
printf("\nEnter character");
scanf("%s",&ch);
if(isalnum(ch))
{
printf("\nAlphanumeric");
}
else
{
printf("\nNot Alphanumeric");
}
}
