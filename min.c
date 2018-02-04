#include<stdio.h>
void main()
{
    int minutes,hr,min;
    printf("\nEnter minutes");
    scanf("%d",&minutes);
    hr=minutes/60;
    min=minutes%60;
    printf("%dhr %dmin",hr,min);
}
    
