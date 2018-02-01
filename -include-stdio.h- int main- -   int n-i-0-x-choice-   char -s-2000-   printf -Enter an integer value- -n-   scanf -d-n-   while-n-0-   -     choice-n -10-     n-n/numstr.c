
#include<stdio.h>
int main()
{
  int n,i=0,x,choice;
  char *s[2000];
  printf ("Enter an integer value: \n");
  scanf ("%d",&n);
  while(n!=0)
  {
    choice=n %10;
    n=n /10;

    switch(choice)
    {
      case 0:s[i++] = "zero";
      break;
      case 1:s[i++] = "one"; 
      break;
      case 2:s[i++] = "two"; 
      break;
      case 3:s[i++] = "three"; 
      break;
      case 4:s[i++] = "four"; 
      break;
      case 5:s[i++] = "five"; 
      break;
      case 6:s[i++] = "six"; 
      break;
      case 7:s[i++] = "seven"; 
      break;
      case 8:s[i++] = "eight"; 
      break;
      case 9:s[i++] = "nine"; 
      break;    
  }
}
  for(x=i-1; x>=0; x--)
{
  printf ("%s ",s[x]);
  }
  return 0;
}
