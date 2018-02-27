#include <stdio.h>
#define MAX 100

int main()
{
	char s[MAX]={0};	
	int i;
	printf("Enter a string: ");
	scanf("%[^\n]s",s);
	for(i=0; s[i]!='\0'; i++)
	{
	
		if(i==0)
		{
			if((s[i]>='a' && s[i]<='z'))
				s[i]=s[i]-32; 
			continue; 
		}
		if(s[i]==' ')
		{
			
			++i;
			
			if(s[i]>='a' && s[i]<='z')
			{
				s[i]=s[i]-32;
				continue;
		  }
		else
		  {
			
			if(s[i]>='A' && s[i]<='Z')
				s[i]=s[i]+32; 
		   }
  	}
	}
	
	printf("Capitalize string is: %s\n",s);
	
	return 0;
}
