
#include <stdio.h>
#include<string.h>
int main(void)
{
	char ch[100];
	int i,j,count=0;
	printf("\nEnter the string : ");
	scanf("%s",&ch);
	i=0;
	j=strlen(ch);
	while(ch[i]!='\0')
	{
		if(ch[i]==ch[j-1]&&ch[i]!='\0')
		{
		i++;
		j--;
		count++;
		}
		else
		{
			printf("\n%s is not a palindrome",ch);
			break;
		}
	}
	if(count==strlen(ch))
	{
		printf("\n%s is the palindrome",ch);
	}
	return 0;
}
