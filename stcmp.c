#include<stdio.h>

int main() {
   char str1[30], str2[30];
   int i;

   printf("\nEnter two strings :");
   scanf("%s",&str1);
   scanf("%s",&str2);

   i = 0;
   while (str1[i] == str2[i] && str1[i] != '\0')
      i++;
   if (str1[i] > str2[i])
      printf("%s is greatest string",str1);
   else if (str1[i] < str2[i])
      printf("greatest string %s ",str2);
   else
      printf("str1 = str2");

   return (0);
}
