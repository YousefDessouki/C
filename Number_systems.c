#include <stdio.h>
#include<math.h>
int convert_binary_to_decimal(int input);
int convert_decimal_to_binary(int input);
int number_of_digits(int input);

int convert_decimal_to_octal(int input);
int convert_octal_to_decimal(int input);

int main() 
{
  //to get binary to octal
convert_decimal_to_octal(convert_binary_to_decimal(101001));
  
}


int convert_binary_to_decimal(int input)
{
  int nod = number_of_digits(input);
  int finalans = 0;
  int x = input;
  int temp = 0;

  for (int i = 0; i < nod; i++)
  {
    
    temp = (x & (1 << 0));
    printf("%d\n",temp);
   finalans+=temp*((int)pow(2,i));
    x/=10;
  }

  printf("The conversion gives %d\n", finalans);
  return finalans;
}
int convert_decimal_to_binary(int input)
{
  int finalanswer=0;
  int x=input;
  for(int i=0;i<=7;i++)
  {
    if((x%2)==1)
    {
      finalanswer=finalanswer+((1)*(int)pow(10,i));
      x/=2;
    }
    else
    {
      finalanswer=finalanswer+((0)*(int)pow(10,i));
      x/=2;
    }
  }
  printf("%d\n",finalanswer);
  return finalanswer;

}
int number_of_digits(int x)
{
    int checker=0;
    int flag=1;
    int nod=0;

    while(flag==1)
    { 
        nod++;
        checker=x/pow(10,nod);
        if(checker==0)
        {flag=0;}
 
    }
    // printf("the number contains %d digits\n",nod);
    return nod;
}

int convert_decimal_to_octal(int input)
{
  int x=input;
  int finalanswer=0;
  int insert;
  int i=0;
  while(x!=0)
  {
    insert=x%8;
    x/=8;
    finalanswer=finalanswer+(insert*pow(10,i));
    i++;
  }
  printf("%d\n",finalanswer);
  return finalanswer;

}
int convert_octal_to_decimal(int input)
{
  //take a copy of the input
  int x=input;
  int finalanswer=0;
  int nod=number_of_digits(x);
  for(int i=0;i<nod;i++)
  {
    int digit=(x%(int)pow(10,i+1))/(int)pow(10,i);
    finalanswer+=digit*(int)pow(8,i);

  }
  printf("the conversion produces %d\n",finalanswer);
  return finalanswer;

}


