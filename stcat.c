#include<stdio.h>

int main() {
   char str1[30], str2[30];
   int i,j=0;

   printf("\nEnter two strings :");
   scanf("%s",&str1);
   scanf("%s",&str2);

   i = 0;
   while(str1[i]!='\0')
      i++;
   while(str2[j]!='\0')
   {
   	str1[i]=str2[j];
   	j++;
   	i++;
   }
   str1[i]='\0';	
   printf("\n Combined string is %s",str1);
    


   return (0);
}
