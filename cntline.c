#include <stdio.h>
void main()
{
    char ch[125];
int j=0;
printf("\nEnter string");
scanf("\n%s",&ch);   
if (ch[j]=='\n')
{

  j++;
}
 printf("no of lines is  %d ",j);

}
