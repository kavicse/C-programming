#include<stdio.h>
#include<string.h>
int main()
{
    char str[50];
    int cnt,i,j,temp;
    printf("enter number");
    scanf("%[^\n]s",str);
    cnt=strlen(str);
    for(i=0;str[i]!='\0';i++)
    {
    for(j=i+1;j<cnt;j++)
    {
        if(str[i]>str[j])
        {
            temp=str[i];
            str[i]=str[j];
            str[j]=temp;
        }
    }   
    }
printf("%s",str);
return 0;
}
