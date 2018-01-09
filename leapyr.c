#include<stdio.h>
void main()
{
int yr;
printf("\nEnter the year");
scanf("%d",&yr);
if(((yr%4==0)&&(yr%100==0))||(yr%400==0))
{
printf("%d is Leap Year",yr);
}
else
{
printf("%d is NOT Leap Year",yr);
}
}
