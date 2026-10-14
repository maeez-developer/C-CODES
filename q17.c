// loop que no 25
#include<stdio.h>
int main()
{
  int n,a,b,reverse=0;
  printf("enter a number:");
  scanf("%d",&n);
  b=n;
  for(;n>0;n=n/10)
  {
    a=n%10;
    reverse=a+(reverse*10);
  } 
  if (reverse==b)
    printf("%d is palindrome number",b);
  else
    printf("%d is not palindrome number",b);  
  return 0;
}