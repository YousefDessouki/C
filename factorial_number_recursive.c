#include <stdio.h>

int factorial_recursive(int n);

int main() 
{
  int input;
  printf("please enter the input\n");
  scanf("%d",&input);
int y=factorial_recursive(input);
printf("%d\n",y);
  
}



int factorial_recursive(int n)
{
  if(n!=1)
    return n*factorial_recursive(n-1);
  else
    return 1;
    
}